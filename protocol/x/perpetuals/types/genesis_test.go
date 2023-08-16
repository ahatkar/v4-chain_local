package types_test

import (
	"errors"
	"testing"

	"github.com/dydxprotocol/v4/dtypes"
	"github.com/dydxprotocol/v4/x/perpetuals/types"
	"github.com/stretchr/testify/require"
)

func TestGenesisState_Validate(t *testing.T) {
	tests := map[string]struct {
		genState      *types.GenesisState
		expectedError error
	}{
		"valid: default": {
			genState:      types.DefaultGenesis(),
			expectedError: nil,
		},
		"valid": {
			genState: &types.GenesisState{
				Perpetuals: []types.Perpetual{
					{
						Id:            0,
						Ticker:        "EXAM-USD",
						FundingIndex:  dtypes.ZeroInt(),
						LiquidityTier: 0,
					},
				},
				LiquidityTiers: []types.LiquidityTier{
					{
						Id:                     0,
						Name:                   "Large-Cap",
						InitialMarginPpm:       500_000,
						MaintenanceFractionPpm: 750_000,
						BasePositionNotional:   100,
						ImpactNotional:         1_000_000_000,
					},
				},
				Params: types.Params{
					FundingRateClampFactorPpm: 3_000_000,
					PremiumVoteClampFactorPpm: 30_000_000,
					MinNumVotesPerSample:      0,
				},
			},
			expectedError: nil,
		},
		"invalid: duplicate perpetual ids": {
			genState: &types.GenesisState{
				Perpetuals: []types.Perpetual{
					{
						Id:            0,
						Ticker:        "EXAM-USD",
						FundingIndex:  dtypes.ZeroInt(),
						LiquidityTier: 0,
					},
					{
						Id:            0, // duplicate
						Ticker:        "PERP-USD",
						FundingIndex:  dtypes.ZeroInt(),
						LiquidityTier: 0,
					},
				},
				LiquidityTiers: []types.LiquidityTier{
					{
						Id:                     0,
						Name:                   "Large-Cap",
						InitialMarginPpm:       500_000,
						MaintenanceFractionPpm: 750_000,
						BasePositionNotional:   100,
						ImpactNotional:         1_000_000_000,
					},
				},
				Params: types.Params{
					FundingRateClampFactorPpm: 6_000_000,
					PremiumVoteClampFactorPpm: 60_000_000,
					MinNumVotesPerSample:      15,
				},
			},
			expectedError: errors.New("duplicated perpetual id"),
		},
		"invalid: found a gap in perpetual id": {
			genState: &types.GenesisState{
				Perpetuals: []types.Perpetual{
					{
						Id:            0,
						Ticker:        "EXAM-USD",
						FundingIndex:  dtypes.ZeroInt(),
						LiquidityTier: 0,
					},
					{
						Id:            2, // duplicate
						Ticker:        "PERP-USD",
						FundingIndex:  dtypes.ZeroInt(),
						LiquidityTier: 0,
					},
				},
				LiquidityTiers: []types.LiquidityTier{
					{
						Id:                     0,
						Name:                   "Large-Cap",
						InitialMarginPpm:       500_000,
						MaintenanceFractionPpm: 750_000,
						BasePositionNotional:   100,
						ImpactNotional:         1_000_000_000,
					},
				},
				Params: types.Params{
					FundingRateClampFactorPpm: 6_000_000,
					PremiumVoteClampFactorPpm: 60_000_000,
					MinNumVotesPerSample:      15,
				},
			},
			expectedError: errors.New("found a gap in perpetual id"),
		},
		"invalid: empty ticker": {
			genState: &types.GenesisState{
				Perpetuals: []types.Perpetual{
					{
						Id:            0,
						Ticker:        "",
						FundingIndex:  dtypes.ZeroInt(),
						LiquidityTier: 0,
					},
				},
				LiquidityTiers: []types.LiquidityTier{
					{
						Id:                     0,
						Name:                   "Large-Cap",
						InitialMarginPpm:       500_000,
						MaintenanceFractionPpm: 750_000,
						BasePositionNotional:   100,
						ImpactNotional:         1_000_000_000,
					},
				},
				Params: types.Params{
					FundingRateClampFactorPpm: 6_000_000,
					PremiumVoteClampFactorPpm: 60_000_000,
					MinNumVotesPerSample:      15,
				},
			},
			expectedError: errors.New("Ticker must be non-empty string"),
		},
		"invalid: initial margin ppm > max": {
			genState: &types.GenesisState{
				Perpetuals: []types.Perpetual{
					{
						Id:            0,
						Ticker:        "EXAM-USD",
						FundingIndex:  dtypes.ZeroInt(),
						LiquidityTier: 0,
					},
				},
				LiquidityTiers: []types.LiquidityTier{
					{
						Id:                     0,
						Name:                   "Large-Cap",
						InitialMarginPpm:       1_000_001,
						MaintenanceFractionPpm: 750_000,
						BasePositionNotional:   100,
						ImpactNotional:         1_000_000_000,
					},
				},
				Params: types.Params{
					FundingRateClampFactorPpm: 6_000_000,
					PremiumVoteClampFactorPpm: 60_000_000,
					MinNumVotesPerSample:      15,
				},
			},
			expectedError: errors.New("InitialMarginPpm exceeds maximum value of 1e6"),
		},
		"invalid: maintenance fraction ppm > max": {
			genState: &types.GenesisState{
				Perpetuals: []types.Perpetual{
					{
						Id:            0,
						Ticker:        "EXAM-USD",
						FundingIndex:  dtypes.ZeroInt(),
						LiquidityTier: 0,
					},
				},
				LiquidityTiers: []types.LiquidityTier{
					{
						Id:                     0,
						Name:                   "Large-Cap",
						InitialMarginPpm:       1_000,
						MaintenanceFractionPpm: 1_000_001,
						BasePositionNotional:   100,
						ImpactNotional:         1_000_000_000,
					},
				},
				Params: types.Params{
					FundingRateClampFactorPpm: 6_000_000,
					PremiumVoteClampFactorPpm: 60_000_000,
					MinNumVotesPerSample:      15,
				},
			},
			expectedError: errors.New("MaintenanceFractionPpm exceeds maximum value of 1e6"),
		},
		"invalid: funding rate clamp factor ppm is zero": {
			genState: &types.GenesisState{
				Perpetuals: []types.Perpetual{
					{
						Id:            0,
						Ticker:        "EXAM-USD",
						FundingIndex:  dtypes.ZeroInt(),
						LiquidityTier: 0,
					},
				},
				LiquidityTiers: []types.LiquidityTier{
					{
						Id:                     0,
						Name:                   "Large-Cap",
						InitialMarginPpm:       200_000,
						MaintenanceFractionPpm: 1_000_000,
						BasePositionNotional:   100,
						ImpactNotional:         2_500_000_000,
					},
				},
				Params: types.Params{
					FundingRateClampFactorPpm: 0,
					PremiumVoteClampFactorPpm: 60_000_000,
					MinNumVotesPerSample:      15,
				},
			},
			expectedError: errors.New("Funding rate clamp factor ppm is zero"),
		},
		"invalid: premium vote clamp factor ppm is zero": {
			genState: &types.GenesisState{
				Perpetuals: []types.Perpetual{
					{
						Id:            0,
						Ticker:        "EXAM-USD",
						FundingIndex:  dtypes.ZeroInt(),
						LiquidityTier: 0,
					},
				},
				LiquidityTiers: []types.LiquidityTier{
					{
						Id:                     0,
						Name:                   "Large-Cap",
						InitialMarginPpm:       200_000,
						MaintenanceFractionPpm: 1_000_000,
						BasePositionNotional:   100,
						ImpactNotional:         2_500_000_000,
					},
				},
				Params: types.Params{
					FundingRateClampFactorPpm: 6_000_000,
					PremiumVoteClampFactorPpm: 0,
					MinNumVotesPerSample:      15,
				},
			},
			expectedError: errors.New("Premium vote clamp factor ppm is zero"),
		},
		"invalid: impact notional is zero": {
			genState: &types.GenesisState{
				Perpetuals: []types.Perpetual{
					{
						Id:            0,
						Ticker:        "EXAM-USD",
						FundingIndex:  dtypes.ZeroInt(),
						LiquidityTier: 0,
					},
				},
				LiquidityTiers: []types.LiquidityTier{
					{
						Id:                     0,
						Name:                   "Large-Cap",
						InitialMarginPpm:       200_000,
						MaintenanceFractionPpm: 1_000_000,
						BasePositionNotional:   100,
						ImpactNotional:         0,
					},
				},
				Params: types.Params{
					FundingRateClampFactorPpm: 6_000_000,
					PremiumVoteClampFactorPpm: 60_000_000,
				},
			},
			expectedError: errors.New("Impact notional is zero"),
		},
	}

	for name, tc := range tests {
		t.Run(name, func(t *testing.T) {
			err := tc.genState.Validate()
			if tc.expectedError == nil {
				require.NoError(t, err)
			} else {
				require.ErrorContains(t, err, tc.expectedError.Error())
			}
		})
	}
}