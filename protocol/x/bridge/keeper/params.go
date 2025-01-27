package keeper

import (
	sdk "github.com/cosmos/cosmos-sdk/types"
	"github.com/dydxprotocol/v4-chain/protocol/x/bridge/types"
)

const (
	eventParamsKey   = "EventParams"
	proposeParamsKey = "ProposeParams"
	safetyParamsKey  = "SafetyParams"
)

// GetEventParams returns the EventParams in state.
func (k Keeper) GetEventParams(
	ctx sdk.Context,
) (
	params types.EventParams,
) {
	store := ctx.KVStore(k.storeKey)
	b := store.Get([]byte(eventParamsKey))
	k.cdc.MustUnmarshal(b, &params)
	return params
}

// UpdateEventParams updates the EventParams in state.
// Returns an error iff validation fails.
func (k Keeper) UpdateEventParams(
	ctx sdk.Context,
	params types.EventParams,
) error {
	if err := params.Validate(); err != nil {
		return err
	}

	store := ctx.KVStore(k.storeKey)
	b := k.cdc.MustMarshal(&params)
	store.Set([]byte(eventParamsKey), b)

	return nil
}

// GetProposeParams returns the ProposeParams in state.
func (k Keeper) GetProposeParams(
	ctx sdk.Context,
) (
	params types.ProposeParams,
) {
	store := ctx.KVStore(k.storeKey)
	b := store.Get([]byte(proposeParamsKey))
	k.cdc.MustUnmarshal(b, &params)
	return params
}

// UpdateProposeParams updates the ProposeParams in state.
// Returns an error iff validation fails.
func (k Keeper) UpdateProposeParams(
	ctx sdk.Context,
	params types.ProposeParams,
) error {
	if err := params.Validate(); err != nil {
		return err
	}

	store := ctx.KVStore(k.storeKey)
	b := k.cdc.MustMarshal(&params)
	store.Set([]byte(proposeParamsKey), b)

	return nil
}

// GetSafetyParams returns the SafetyParams in state.
func (k Keeper) GetSafetyParams(
	ctx sdk.Context,
) (
	params types.SafetyParams,
) {
	store := ctx.KVStore(k.storeKey)
	b := store.Get([]byte(safetyParamsKey))
	k.cdc.MustUnmarshal(b, &params)
	return params
}

// UpdateSafetyParams updates the SafetyParams in state.
// Returns an error iff validation fails.
func (k Keeper) UpdateSafetyParams(
	ctx sdk.Context,
	params types.SafetyParams,
) error {
	if err := params.Validate(); err != nil {
		return err
	}

	store := ctx.KVStore(k.storeKey)
	b := k.cdc.MustMarshal(&params)
	store.Set([]byte(safetyParamsKey), b)

	return nil
}
