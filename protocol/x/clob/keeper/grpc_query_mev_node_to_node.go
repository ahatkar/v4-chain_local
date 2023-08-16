package keeper

import (
	"context"
	"fmt"
	"math/big"

	sdk "github.com/cosmos/cosmos-sdk/types"
	"github.com/dydxprotocol/v4/x/clob/types"
	"google.golang.org/grpc/codes"
	"google.golang.org/grpc/status"
)

func (k Keeper) MevNodeToNodeCalculation(
	c context.Context,
	req *types.MevNodeToNodeCalculationRequest,
) (
	*types.MevNodeToNodeCalculationResponse,
	error,
) {
	ctx := sdk.UnwrapSDKContext(c)

	// Validate that the request is valid.
	if err := validateMevNodeToNodeRequest(req); err != nil {
		k.Logger(ctx).Error(
			fmt.Sprintf(
				"Failed to validate MEV node to node calculation request: Error: %+v, request: %+v",
				err.Error(),
				req,
			),
		)
		return nil, err
	}

	blockProposerPnL, validatorPnL := k.InitializeCumulativePnLsFromRequest(ctx, req)

	if err := k.CalculateSubaccountPnLForMevMatches(
		ctx,
		blockProposerPnL,
		req.BlockProposerMatches,
	); err != nil {
		k.Logger(ctx).Error(
			fmt.Sprintf(
				"Failed to calculate match PnL for block proposer: Error: %+v, MEV matches: %+v",
				err.Error(),
				req.BlockProposerMatches,
			),
		)
		return nil, err
	}

	if err := k.CalculateSubaccountPnLForMevMatches(
		ctx,
		validatorPnL,
		req.ValidatorMevMetrics.ValidatorMevMatches,
	); err != nil {
		k.Logger(ctx).Error(
			fmt.Sprintf(
				"Failed to calculate match PnL for validator: Error: %+v, MEV matches: %+v",
				err.Error(),
				req.ValidatorMevMetrics.ValidatorMevMatches,
			),
		)
		return nil, err
	}

	mevAndVolumePerClob := make(
		[]types.MevNodeToNodeCalculationResponse_MevAndVolumePerClob,
		0,
		len(blockProposerPnL),
	)
	for clobPairId, blockProposerSubaccountPnL := range blockProposerPnL {
		// Calculate MEV for the given market.
		mev, _ := blockProposerSubaccountPnL.CalculateMev(validatorPnL[clobPairId]).Float32()
		validatorVolumeQuoteQuantums := new(big.Int).Div(
			validatorPnL[clobPairId].VolumeQuoteQuantums,
			big.NewInt(2),
		)

		mevAndVolumePerClob = append(
			mevAndVolumePerClob,
			types.MevNodeToNodeCalculationResponse_MevAndVolumePerClob{
				ClobPairId: clobPairId.ToUint32(),
				Mev:        mev,
				Volume:     validatorVolumeQuoteQuantums.Uint64(),
			},
		)
	}

	return &types.MevNodeToNodeCalculationResponse{
		Results: mevAndVolumePerClob,
	}, nil
}

func (k Keeper) InitializeCumulativePnLsFromRequest(
	ctx sdk.Context,
	req *types.MevNodeToNodeCalculationRequest,
) (
	blockProposerPnL map[types.ClobPairId]*CumulativePnL,
	validatorPnL map[types.ClobPairId]*CumulativePnL,
) {
	clobPairs := make(map[types.ClobPairId]types.ClobPair, len(req.ValidatorMevMetrics.ClobMidPrices))
	clobMidPrices := make(map[types.ClobPairId]types.Subticks, len(req.ValidatorMevMetrics.ClobMidPrices))
	for _, clobMidPrice := range req.ValidatorMevMetrics.ClobMidPrices {
		clobPairId := types.ClobPairId(clobMidPrice.ClobPair.Id)
		clobPairs[clobPairId] = clobMidPrice.ClobPair
		clobMidPrices[clobPairId] = types.Subticks(clobMidPrice.Subticks)
	}

	blockProposerPnL, validatorPnL = k.InitializeCumulativePnLs(
		ctx,
		k.perpetualsKeeper,
		clobMidPrices,
		clobPairs,
	)

	return blockProposerPnL, validatorPnL
}

// ValidateMevNodeToNodeRequest validates a MEV node to node calculation request. It returns
// an error if the request is invalid.
func validateMevNodeToNodeRequest(
	req *types.MevNodeToNodeCalculationRequest,
) error {
	if req == nil {
		return status.Error(codes.InvalidArgument, "invalid request")
	}

	if req.ValidatorMevMetrics == nil {
		return status.Error(codes.InvalidArgument, "missing validator MEV metrics")
	}

	seenClobPairIds := make(map[types.ClobPairId]bool)
	for _, clobMidPrice := range req.ValidatorMevMetrics.ClobMidPrices {
		clobPairId := types.ClobPairId(clobMidPrice.ClobPair.Id)
		if _, exists := seenClobPairIds[clobPairId]; exists {
			return status.Error(codes.InvalidArgument, "duplicate CLOB pair")
		}
		seenClobPairIds[clobPairId] = true
	}

	// Validate that all validator matches reference a valid CLOB pair.
	for _, validatorMevMatch := range req.ValidatorMevMetrics.ValidatorMevMatches.Matches {
		if _, exists := seenClobPairIds[types.ClobPairId(validatorMevMatch.ClobPairId)]; !exists {
			return status.Error(codes.InvalidArgument, "validator MEV match references invalid CLOB pair")
		}
	}

	// Validate that all validator liquidation matches reference a valid CLOB pair.
	for _, validatorMevMatch := range req.ValidatorMevMetrics.ValidatorMevMatches.Matches {
		if _, exists := seenClobPairIds[types.ClobPairId(validatorMevMatch.ClobPairId)]; !exists {
			return status.Error(codes.InvalidArgument, "validator MEV match references invalid CLOB pair")
		}
	}

	// Validate that all validator matches reference a valid CLOB pair.
	if err := validateMevMatchesHaveValidClob(
		req.ValidatorMevMetrics.ValidatorMevMatches,
		seenClobPairIds,
	); err != nil {
		return err
	}

	// Validate that all block proposer matches reference a valid CLOB pair.
	if err := validateMevMatchesHaveValidClob(
		req.BlockProposerMatches,
		seenClobPairIds,
	); err != nil {
		return err
	}

	return nil
}

// validateMevMatchesHaveValidClob validates that all matches reference a valid CLOB pair. It returns
// an error if any MEV matches do not reference a valid CLOB pair.
func validateMevMatchesHaveValidClob(
	mevMatches *types.ValidatorMevMatches,
	seenClobPairIds map[types.ClobPairId]bool,
) error {
	// Validate that all validator matches reference a valid CLOB pair.
	for _, validatorMevMatch := range mevMatches.Matches {
		if _, exists := seenClobPairIds[types.ClobPairId(validatorMevMatch.ClobPairId)]; !exists {
			return status.Error(codes.InvalidArgument, "validator MEV match references invalid CLOB pair")
		}
	}

	// Validate that all validator liquidation matches reference a valid CLOB pair.
	for _, validatorMevMatch := range mevMatches.Matches {
		if _, exists := seenClobPairIds[types.ClobPairId(validatorMevMatch.ClobPairId)]; !exists {
			return status.Error(codes.InvalidArgument, "validator MEV match references invalid CLOB pair")
		}
	}

	return nil
}