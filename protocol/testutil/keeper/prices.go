package keeper

import (
	"fmt"
	pricefeed_types "github.com/dydxprotocol/v4/daemons/pricefeed/types"
	"github.com/dydxprotocol/v4/indexer/common"
	indexerevents "github.com/dydxprotocol/v4/indexer/events"
	"github.com/dydxprotocol/v4/indexer/indexer_manager"
	"testing"

	tmdb "github.com/cometbft/cometbft-db"
	"github.com/cosmos/cosmos-sdk/codec"
	codectypes "github.com/cosmos/cosmos-sdk/codec/types"
	storetypes "github.com/cosmos/cosmos-sdk/store/types"
	sdk "github.com/cosmos/cosmos-sdk/types"
	pricefeedserver_types "github.com/dydxprotocol/v4/daemons/server/types/pricefeed"
	"github.com/dydxprotocol/v4/mocks"
	"github.com/dydxprotocol/v4/testutil/constants"
	"github.com/dydxprotocol/v4/x/prices/keeper"
	"github.com/dydxprotocol/v4/x/prices/types"
	"github.com/stretchr/testify/require"
)

func PricesKeepers(
	t testing.TB,
) (
	ctx sdk.Context,
	keeper *keeper.Keeper,
	storeKey storetypes.StoreKey,
	indexPriceCache *pricefeedserver_types.MarketToExchangePrices,
	marketToSmoothedPrices types.MarketToSmoothedPrices,
	mockTimeProvider *mocks.TimeProvider,
) {
	ctx = initKeepers(t, func(
		db *tmdb.MemDB,
		registry codectypes.InterfaceRegistry,
		cdc *codec.ProtoCodec,
		stateStore storetypes.CommitMultiStore,
		transientStoreKey storetypes.StoreKey,
	) []GenesisInitializer {
		// Define necessary keepers here for unit tests
		keeper, storeKey, indexPriceCache, marketToSmoothedPrices, mockTimeProvider =
			createPricesKeeper(stateStore, db, cdc, transientStoreKey)

		return []GenesisInitializer{keeper}
	})

	return ctx, keeper, storeKey, indexPriceCache, marketToSmoothedPrices, mockTimeProvider
}

func createPricesKeeper(
	stateStore storetypes.CommitMultiStore,
	db *tmdb.MemDB,
	cdc *codec.ProtoCodec,
	transientStoreKey storetypes.StoreKey,
) (
	*keeper.Keeper,
	storetypes.StoreKey,
	*pricefeedserver_types.MarketToExchangePrices,
	types.MarketToSmoothedPrices,
	*mocks.TimeProvider,
) {
	storeKey := sdk.NewKVStoreKey(types.StoreKey)

	stateStore.MountStoreWithDB(storeKey, storetypes.StoreTypeIAVL, db)

	indexPriceCache := pricefeedserver_types.NewMarketToExchangePrices(pricefeed_types.MaxPriceAge)

	marketToSmoothedPrices := types.NewMarketToSmoothedPrices(types.SmoothedPriceTrackingBlockHistoryLength)

	mockTimeProvider := &mocks.TimeProvider{}

	mockMsgSender := &mocks.IndexerMessageSender{}
	mockMsgSender.On("Enabled").Return(true)
	mockIndexerEventsManager := indexer_manager.NewIndexerEventManager(mockMsgSender, transientStoreKey, true)

	k := keeper.NewKeeper(
		cdc,
		storeKey,
		indexPriceCache,
		marketToSmoothedPrices,
		mockTimeProvider,
		mockIndexerEventsManager,
	)

	return k, storeKey, indexPriceCache, marketToSmoothedPrices, mockTimeProvider
}

// CreateTestMarkets creates a standard set of test markets for testing.
// This function assumes no markets exist and will create markets as id `0`, `1`, and `2`, ... using markets
// defined in constants.TestMarkets.
func CreateTestMarkets(t *testing.T, ctx sdk.Context, k *keeper.Keeper) {
	for i, marketParam := range constants.TestMarketParams {
		_, err := k.CreateMarket(
			ctx,
			marketParam,
			constants.TestMarketPrices[i],
		)
		require.NoError(t, err)
		err = k.UpdateMarketPrices(ctx, []*types.MsgUpdateMarketPrices_MarketPrice{
			{
				MarketId: uint32(i),
				Price:    constants.TestMarketPrices[i].Price,
			},
		})
		require.NoError(t, err)
	}
}

// CreateNMarkets creates N MarketParam, MarketPrice pairs for testing.
func CreateNMarkets(t *testing.T, ctx sdk.Context, keeper *keeper.Keeper, n int) []types.MarketParamPrice {
	items := make([]types.MarketParamPrice, n)
	numExistingMarkets := keeper.GetNumMarkets(ctx)
	for i := range items {
		items[i].Param.Id = uint32(i) + numExistingMarkets
		items[i].Param.Pair = fmt.Sprintf("%v", i)
		items[i].Param.Exponent = int32(i)
		items[i].Param.ExchangeConfigJson = ""
		items[i].Param.MinExchanges = uint32(1)
		items[i].Param.MinPriceChangePpm = uint32(i + 1)
		items[i].Price.Id = uint32(i) + numExistingMarkets
		items[i].Price.Exponent = int32(i)
		items[i].Price.Price = uint64(1_000 + i)

		_, err := keeper.CreateMarket(
			ctx,
			items[i].Param,
			items[i].Price,
		)
		require.NoError(t, err)
		items[i].Price, err = keeper.GetMarketPrice(ctx, items[i].Param.Id)
		require.NoError(t, err)
	}

	return items
}

// AssertPriceUpdateEventsInIndexerBlock verifies that the market update has a corresponding price update
// event included in the Indexer block message.
func AssertPriceUpdateEventsInIndexerBlock(
	t *testing.T,
	k *keeper.Keeper,
	ctx sdk.Context,
	updatedMarketPrices []types.MarketPrice,
) {
	marketEvents := getMarketEventsFromIndexerBlock(ctx, k)
	expectedEvents := keeper.GenerateMarketPriceUpdateEvents(updatedMarketPrices)
	for _, expectedEvent := range expectedEvents {
		require.Contains(t, marketEvents, expectedEvent)
	}
}

// AssertMarketEventsNotInIndexerBlock verifies that no market events were included in the Indexer block message.
func AssertMarketEventsNotInIndexerBlock(
	t *testing.T,
	k *keeper.Keeper,
	ctx sdk.Context,
) {
	indexerMarketEvents := getMarketEventsFromIndexerBlock(ctx, k)
	require.Equal(t, 0, len(indexerMarketEvents))
}

// getMarketEventsFromIndexerBlock returns the market events from the Indexer Block event Kafka message.
func getMarketEventsFromIndexerBlock(
	ctx sdk.Context,
	k *keeper.Keeper,
) []*indexerevents.MarketEventV1 {
	block := k.GetIndexerEventManager().ProduceBlock(ctx)
	var marketEvents []*indexerevents.MarketEventV1
	for _, event := range block.Events {
		if event.Subtype != indexerevents.SubtypeMarket {
			continue
		}
		bytes := indexer_manager.GetBytesFromEventData(event.Data)
		unmarshaler := common.UnmarshalerImpl{}
		var marketEvent indexerevents.MarketEventV1
		err := unmarshaler.Unmarshal(bytes, &marketEvent)
		if err != nil {
			panic(err)
		}
		marketEvents = append(marketEvents, &marketEvent)
	}
	return marketEvents
}

// AssertMarketModifyEventInIndexerBlock verifies that the market update has a corresponding market modify
// event included in the Indexer block message.
func AssertMarketModifyEventInIndexerBlock(
	t *testing.T,
	k *keeper.Keeper,
	ctx sdk.Context,
	updatedMarketParam types.MarketParam,
) {
	marketEvents := getMarketEventsFromIndexerBlock(ctx, k)
	expectedEvent := indexerevents.NewMarketModifyEvent(
		updatedMarketParam.Id,
		updatedMarketParam.Pair,
		updatedMarketParam.MinPriceChangePpm,
	)
	require.Contains(t, marketEvents, expectedEvent)
}

// AssertMarketCreateEventInIndexerBlock verifies that the market create has a corresponding market create
// event included in the Indexer block message.
func AssertMarketCreateEventInIndexerBlock(
	t *testing.T,
	k *keeper.Keeper,
	ctx sdk.Context,
	createdMarketParam types.MarketParam,
) {
	marketEvents := getMarketEventsFromIndexerBlock(ctx, k)
	expectedEvent := indexerevents.NewMarketCreateEvent(
		createdMarketParam.Id,
		createdMarketParam.Pair,
		createdMarketParam.MinPriceChangePpm,
		createdMarketParam.Exponent,
	)
	require.Contains(t, marketEvents, expectedEvent)
}