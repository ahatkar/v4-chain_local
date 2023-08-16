package clob

import (
	"fmt"
	"sort"

	"github.com/cosmos/cosmos-sdk/telemetry"
	sdk "github.com/cosmos/cosmos-sdk/types"
	liquidationtypes "github.com/dydxprotocol/v4/daemons/server/types/liquidations"
	indexerevents "github.com/dydxprotocol/v4/indexer/events"
	"github.com/dydxprotocol/v4/indexer/indexer_manager"
	indexershared "github.com/dydxprotocol/v4/indexer/shared"
	"github.com/dydxprotocol/v4/lib"
	"github.com/dydxprotocol/v4/lib/metrics"
	"github.com/dydxprotocol/v4/x/clob/keeper"
	"github.com/dydxprotocol/v4/x/clob/types"
)

// BeginBlocker executes all ABCI BeginBlock logic respective to the clob module.
func BeginBlocker(
	ctx sdk.Context,
	keeper types.ClobKeeper,
) {
	// Initialize the set of process proposer match events for the next block effectively
	// removing any events that occurred in the last block.
	keeper.MustSetProcessProposerMatchesEvents(
		ctx,
		types.ProcessProposerMatchesEvents{
			BlockHeight: lib.MustConvertIntegerToUint32(ctx.BlockHeight()),
		},
	)
}

// EndBlocker executes all ABCI EndBlock logic respective to the clob module.
func EndBlocker(
	ctx sdk.Context,
	keeper keeper.Keeper,
) {
	processProposerMatchesEvents := keeper.GetProcessProposerMatchesEvents(ctx)

	// Prune any fill amounts from state which are now past their `pruneableBlockHeight`.
	keeper.PruneStateFillAmountsForShortTermOrders(ctx)

	// Update the block time of the previously committed block.
	keeper.SetBlockTimeForLastCommittedBlock(ctx)

	// Prune expired stateful orders completely from state.
	expiredStatefulOrderIds := keeper.RemoveExpiredStatefulOrdersTimeSlices(ctx, ctx.BlockTime())
	for _, orderId := range expiredStatefulOrderIds {
		// Remove the order fill amount from state.
		keeper.RemoveOrderFillAmount(ctx, orderId)

		// Delete the stateful order placement from state.
		keeper.DeleteLongTermOrderPlacement(ctx, orderId)

		// Emit an on-chain indexer event for Stateful Order Expiration.
		keeper.GetIndexerEventManager().AddTxnEvent(
			ctx,
			indexerevents.SubtypeStatefulOrder,
			indexer_manager.GetB64EncodedEventMessage(
				indexerevents.NewStatefulOrderRemovalEvent(
					orderId,
					indexershared.OrderRemovalReason_ORDER_REMOVAL_REASON_EXPIRED,
				),
			),
		)
		telemetry.IncrCounterWithLabels(
			[]string{types.ModuleName, metrics.Expired, metrics.StatefulOrderRemoved, metrics.Count},
			1,
			orderId.GetOrderIdLabels(),
		)
	}

	// Prune expired untriggered conditional orders from the in-memory UntriggeredConditionalOrders struct.
	keeper.PruneUntriggeredConditionalOrders(
		expiredStatefulOrderIds,
		processProposerMatchesEvents.PlacedStatefulCancellationOrderIds,
	)

	// Update the memstore with expired order ids.
	// These expired stateful order ids will be purged from the memclob in `Commit`.
	processProposerMatchesEvents.ExpiredStatefulOrderIds = expiredStatefulOrderIds

	// Before triggering conditional orders, add newly-placed conditional orders to the clob keeper's
	// in-memory UntriggeredConditionalOrders data structure to allow conditional orders to
	// trigger in the same block they are placed. Skip triggering orders which have been cancelled
	// or expired.
	// TODO(CLOB-773) Support conditional order replacements. Ensure replacements are de-duplicated.
	keeper.AddUntriggeredConditionalOrders(
		ctx,
		processProposerMatchesEvents.PlacedConditionalOrderIds,
		lib.SliceToSet(processProposerMatchesEvents.GetPlacedStatefulCancellationOrderIds()),
		lib.SliceToSet(expiredStatefulOrderIds),
	)

	// Poll out all triggered conditional orders from `UntriggeredConditionalOrders` and update state.
	triggeredConditionalOrderIds := keeper.MaybeTriggerConditionalOrders(ctx)
	// Update the memstore with conditional order ids triggered in the last block.
	// These triggered conditional orders will be placed in the `PrepareCheckState``.
	processProposerMatchesEvents.ConditionalOrderIdsTriggeredInLastBlock = triggeredConditionalOrderIds

	// Write the ProcessProposerMatchcesEvents with all the EndBlocker updates to state.
	keeper.MustSetProcessProposerMatchesEvents(
		ctx,
		processProposerMatchesEvents,
	)

	// Prune any rate limiting information that is no longer relevant.
	keeper.PruneRateLimits(ctx)
}

// PrepareCheckState executes all ABCI PrepareCheckState logic respective to the clob module.
func PrepareCheckState(
	ctx sdk.Context,
	keeper keeper.Keeper,
	memClob types.MemClob,
	liquidatableSubaccountIds *liquidationtypes.LiquidatableSubaccountIds,
) {
	// Get the events generated from processing the matches in the latest block.
	processProposerMatchesEvents := keeper.GetProcessProposerMatchesEvents(ctx)
	if ctx.BlockHeight() != int64(processProposerMatchesEvents.BlockHeight) {
		panic(
			fmt.Errorf(
				"block height %d for ProcessProposerMatchesEvents does not equal current block height %d",
				processProposerMatchesEvents.BlockHeight,
				ctx.BlockHeight(),
			),
		)
	}

	// 1. Remove all operations in the local validators operations queue from the memclob.
	localValidatorOperationsQueue, shortTermOrderTxBytes := memClob.GetOperationsToReplay(ctx)
	ctx.Logger().Debug(
		"Clearing local operations queue",
		"localValidatorOperationsQueue",
		types.GetInternalOperationsQueueTextString(localValidatorOperationsQueue),
		"block",
		ctx.BlockHeight(),
	)

	memClob.RemoveAndClearOperationsQueue(ctx, localValidatorOperationsQueue)

	// 2. Purge invalid state from the memclob.
	offchainUpdates := types.NewOffchainUpdates()
	offchainUpdates = memClob.PurgeInvalidMemclobState(
		ctx,
		processProposerMatchesEvents.OrderIdsFilledInLastBlock,
		processProposerMatchesEvents.ExpiredStatefulOrderIds,
		processProposerMatchesEvents.PlacedStatefulCancellationOrderIds,
		processProposerMatchesEvents.RemovedStatefulOrderIds,
		offchainUpdates,
	)

	// 3. Place all stateful order placements included in the last block on the memclob.
	offchainUpdates = keeper.PlaceStatefulOrdersFromLastBlock(
		ctx,
		processProposerMatchesEvents.PlacedLongTermOrderIds,
		offchainUpdates,
	)

	// 4. Place all conditional orders triggered in EndBlocker of last block on the memclob.
	offchainUpdates = keeper.PlaceConditionalOrdersTriggeredInLastBlock(
		ctx,
		processProposerMatchesEvents.ConditionalOrderIdsTriggeredInLastBlock,
		offchainUpdates,
	)

	// 5. Replay the local validator’s operations onto the book.
	replayUpdates := memClob.ReplayOperations(
		ctx,
		localValidatorOperationsQueue,
		shortTermOrderTxBytes,
		offchainUpdates,
	)

	// TODO(CLOB-275): Do not gracefully handle panics in `PrepareCheckState`.
	if replayUpdates != nil {
		offchainUpdates = replayUpdates
	}

	// 6. Get all potentially liquidatable subaccount IDs and attempt to liquidate them.
	subaccountIds := liquidatableSubaccountIds.GetSubaccountIds()

	telemetry.ModuleSetGauge(
		types.ModuleName,
		float32(len(subaccountIds)),
		metrics.Liquidations,
		metrics.LiquidatableSubaccountIds,
		metrics.Count,
	)

	// Get the liquidation order for each subaccount.
	liquidationOrders := make([]types.LiquidationOrder, 0)
	for _, subaccountId := range subaccountIds {
		// If attempting to liquidate a subaccount returns an error, panic.
		liquidationOrder, err := keeper.MaybeGetLiquidationOrder(ctx, subaccountId)
		if err != nil {
			panic(err)
		}

		if liquidationOrder != nil {
			liquidationOrders = append(liquidationOrders, *liquidationOrder)
		}
	}

	// Sort liquidation orders by clob pair id, then by fillable price, then by order hash.
	sort.Sort(types.SortedLiquidationOrders(liquidationOrders))

	// Attempt to place each liquidation order and perform deleveraging if necessary.
	for _, liquidationOrder := range liquidationOrders {
		if _, _, err := keeper.PlacePerpetualLiquidation(ctx, liquidationOrder); err != nil {
			ctx.Logger().Error(
				fmt.Sprintf(
					"Failed to liquidate subaccount. Liquidation Order: (%+v). Err: %v",
					liquidationOrder,
					err,
				),
			)
			panic(err)
		}
	}

	// Send all off-chain Indexer events
	keeper.SendOffchainMessages(offchainUpdates, nil, metrics.SendPrepareCheckStateOffchainUpdates)

	newLocalValidatorOperationsQueue, _ := memClob.GetOperationsToReplay(ctx)
	ctx.Logger().Debug(
		"Local operations queue after PrepareCheckState",
		"newLocalValidatorOperationsQueue",
		types.GetInternalOperationsQueueTextString(newLocalValidatorOperationsQueue),
		"block",
		ctx.BlockHeight(),
	)

	// Set per-orderbook gauges.
	memClob.SetMemclobGauges(ctx)
}