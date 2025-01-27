package keeper

import (
	"fmt"

	sdklog "cosmossdk.io/log"
	"github.com/cometbft/cometbft/libs/log"
	"github.com/cosmos/cosmos-sdk/baseapp"
	"github.com/cosmos/cosmos-sdk/codec"
	storetypes "github.com/cosmos/cosmos-sdk/store/types"
	sdk "github.com/cosmos/cosmos-sdk/types"
	"github.com/dydxprotocol/v4-chain/protocol/lib"
	"github.com/dydxprotocol/v4-chain/protocol/x/delaymsg/types"
)

type (
	Keeper struct {
		cdc      codec.BinaryCodec
		storeKey storetypes.StoreKey
		// authorities stores addresses capable of submitting a delayed message.
		authorities map[string]struct{}
		router      *baseapp.MsgServiceRouter
	}
)

// NewKeeper creates a new x/delaymsg keeper.
func NewKeeper(
	cdc codec.BinaryCodec,
	storeKey storetypes.StoreKey,
	router *baseapp.MsgServiceRouter,
	authorities []string,
) *Keeper {
	return &Keeper{
		cdc:         cdc,
		storeKey:    storeKey,
		authorities: lib.SliceToSet(authorities),
		router:      router,
	}
}

func (k Keeper) HasAuthority(authority string) bool {
	_, ok := k.authorities[authority]
	return ok
}

// Router returns the x/delaymsg router.
func (k Keeper) Router() lib.MsgRouter {
	return k.router
}

// InitializeForGenesis initializes the x/delaymsg keeper for genesis.
func (k Keeper) InitializeForGenesis(ctx sdk.Context) {
	k.SetNumMessages(ctx, 0)
}

// Logger returns a module-specific logger for x/delaymsg.
func (k Keeper) Logger(ctx sdk.Context) log.Logger {
	return ctx.Logger().With(sdklog.ModuleKey, fmt.Sprintf("x/%s", types.ModuleName))
}
