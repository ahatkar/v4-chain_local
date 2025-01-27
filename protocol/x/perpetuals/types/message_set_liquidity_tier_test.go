package types_test

import (
	"testing"

	sdk "github.com/cosmos/cosmos-sdk/types"
	"github.com/dydxprotocol/v4-chain/protocol/testutil/constants"
	types "github.com/dydxprotocol/v4-chain/protocol/x/perpetuals/types"
	"github.com/stretchr/testify/require"
)

func TestMsgSetLiquidityTier_GetSigners(t *testing.T) {
	msg := types.MsgSetLiquidityTier{
		Authority: constants.BobAccAddress.String(),
	}
	require.Equal(t, []sdk.AccAddress{constants.BobAccAddress}, msg.GetSigners())
}

func TestMsgSetLiquidityTier_ValidateBasic(t *testing.T) {
	tests := map[string]struct {
		msg         types.MsgSetLiquidityTier
		expectedErr string
	}{
		"Success": {
			msg: types.MsgSetLiquidityTier{
				Authority: "test",
				LiquidityTier: types.LiquidityTier{
					Id:                     1,
					Name:                   "test",
					InitialMarginPpm:       217,
					MaintenanceFractionPpm: 217,
					BasePositionNotional:   1_000,
					ImpactNotional:         5_000,
				},
			},
		},
		"Failure: Empty authority": {
			msg:         types.MsgSetLiquidityTier{},
			expectedErr: "authority cannot be empty",
		},
		"Failure: Initial Margin Ppm is greater than 100%": {
			msg: types.MsgSetLiquidityTier{
				Authority: "test",
				LiquidityTier: types.LiquidityTier{
					Id:                     1,
					Name:                   "test",
					InitialMarginPpm:       1_000_001,
					MaintenanceFractionPpm: 217,
					BasePositionNotional:   1_000,
					ImpactNotional:         5_000,
				},
			},
			expectedErr: "InitialMarginPpm exceeds maximum value of 1e6",
		},
		"Failure: Maintenance Fraction Ppm is greater than 100%": {
			msg: types.MsgSetLiquidityTier{
				Authority: "test",
				LiquidityTier: types.LiquidityTier{
					Id:                     1,
					Name:                   "test",
					InitialMarginPpm:       217,
					MaintenanceFractionPpm: 1_000_001,
					BasePositionNotional:   1_000,
					ImpactNotional:         5_000,
				},
			},
			expectedErr: "MaintenanceFractionPpm exceeds maximum value of 1e6",
		},
		"Failure: base position notional is zero": {
			msg: types.MsgSetLiquidityTier{
				Authority: "test",
				LiquidityTier: types.LiquidityTier{
					Id:                     1,
					Name:                   "test",
					InitialMarginPpm:       217,
					MaintenanceFractionPpm: 217,
					BasePositionNotional:   0,
					ImpactNotional:         5_000,
				},
			},
			expectedErr: "Base position notional is zero",
		},
		"Failure: impact notional is zero": {
			msg: types.MsgSetLiquidityTier{
				Authority: "test",
				LiquidityTier: types.LiquidityTier{
					Id:                     1,
					Name:                   "test",
					InitialMarginPpm:       217,
					MaintenanceFractionPpm: 217,
					BasePositionNotional:   1_000,
					ImpactNotional:         0,
				},
			},
			expectedErr: "Impact notional is zero",
		},
	}

	for name, tc := range tests {
		t.Run(name, func(t *testing.T) {
			err := tc.msg.ValidateBasic()
			if tc.expectedErr == "" {
				require.NoError(t, err)
			} else {
				require.ErrorContains(t, err, tc.expectedErr)
			}
		})
	}
}
