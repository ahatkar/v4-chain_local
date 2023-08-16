package memclob

import (
	"testing"

	"github.com/dydxprotocol/v4/testutil/constants"
	sdktest "github.com/dydxprotocol/v4/testutil/sdk"
	"github.com/dydxprotocol/v4/x/clob/types"
	"github.com/stretchr/testify/require"
)

func TestCreateOrderbook_PerpetualClobPairSucceeds(t *testing.T) {
	ctx, _, _ := sdktest.NewSdkContextWithMultistore()

	memclob := NewMemClobPriceTimePriority(false)

	clobPair := constants.ClobPair_Btc
	require.NotPanics(t, func() {
		memclob.CreateOrderbook(ctx, clobPair)
	})

	require.Contains(t, memclob.openOrders.orderbooksMap, clobPair.GetClobPairId())
	require.Len(t, memclob.perpetualIdToClobPairId, 1)
	require.Equal(
		t,
		[]types.ClobPairId{clobPair.GetClobPairId()},
		memclob.perpetualIdToClobPairId[clobPair.GetPerpetualClobMetadata().PerpetualId],
	)
}

func TestCreateOrderbook_MultiplePerpetualClobPairSucceeds(t *testing.T) {
	ctx, _, _ := sdktest.NewSdkContextWithMultistore()

	memclob := NewMemClobPriceTimePriority(false)
	clobPair_Btc2 := types.ClobPair{
		Id:                   100,
		SubticksPerTick:      120,
		MinOrderBaseQuantums: 1,
		Metadata: &types.ClobPair_PerpetualClobMetadata{
			PerpetualClobMetadata: &types.PerpetualClobMetadata{
				PerpetualId: 0,
			},
		},
	}

	clobPairs := []types.ClobPair{
		constants.ClobPair_Btc,
		clobPair_Btc2,
		constants.ClobPair_Eth,
	}
	expectedPerpetualIdToClobPairIds := make(map[uint32][]types.ClobPairId)
	for _, clobPair := range clobPairs {
		require.NotPanics(t, func() {
			memclob.CreateOrderbook(ctx, clobPair)
		})
		perpetualId := clobPair.GetPerpetualClobMetadata().PerpetualId
		if _, exists := expectedPerpetualIdToClobPairIds[perpetualId]; !exists {
			expectedPerpetualIdToClobPairIds[perpetualId] = make([]types.ClobPairId, 0)
		}
		expectedPerpetualIdToClobPairIds[perpetualId] = append(
			expectedPerpetualIdToClobPairIds[perpetualId],
			clobPair.GetClobPairId(),
		)

		require.Contains(t, memclob.openOrders.orderbooksMap, clobPair.GetClobPairId())
		require.Equal(
			t,
			expectedPerpetualIdToClobPairIds,
			memclob.perpetualIdToClobPairId,
		)
	}
}

func TestCreateOrderbook_AssetClobPairSucceeds(t *testing.T) {
	ctx, _, _ := sdktest.NewSdkContextWithMultistore()

	memclob := NewMemClobPriceTimePriority(false)

	clobPair := constants.ClobPair_Asset
	require.NotPanics(t, func() {
		memclob.CreateOrderbook(ctx, clobPair)
	})

	require.Contains(t, memclob.openOrders.orderbooksMap, clobPair.GetClobPairId())
	require.Empty(t, memclob.perpetualIdToClobPairId)
}

func TestCreateOrderbook_PanicsWhenCreatingDuplicateOrderbook(t *testing.T) {
	ctx, _, _ := sdktest.NewSdkContextWithMultistore()

	memclob := NewMemClobPriceTimePriority(false)

	memclob.CreateOrderbook(ctx, constants.ClobPair_Btc)
	require.Panics(t, func() {
		memclob.CreateOrderbook(ctx, constants.ClobPair_Btc)
	})
}

func TestCreateOrderbook_PanicsWhenSubticksPerTickIsZero(t *testing.T) {
	ctx, _, _ := sdktest.NewSdkContextWithMultistore()

	memclob := NewMemClobPriceTimePriority(false)

	clobPair := types.ClobPair{
		Id:                   0,
		SubticksPerTick:      0,
		MinOrderBaseQuantums: 10,
		Metadata: &types.ClobPair_PerpetualClobMetadata{
			PerpetualClobMetadata: &types.PerpetualClobMetadata{
				PerpetualId: 0,
			},
		},
	}
	require.Panics(t, func() {
		memclob.CreateOrderbook(ctx, clobPair)
	})
}

func TestCreateOrderbook_PanicsWhenMinOrderBaseQuantumsIsZero(t *testing.T) {
	ctx, _, _ := sdktest.NewSdkContextWithMultistore()

	memclob := NewMemClobPriceTimePriority(false)

	clobPair := types.ClobPair{
		Id:                   0,
		SubticksPerTick:      10,
		MinOrderBaseQuantums: 0,
		Metadata: &types.ClobPair_PerpetualClobMetadata{
			PerpetualClobMetadata: &types.PerpetualClobMetadata{
				PerpetualId: 0,
			},
		},
	}
	require.Panics(t, func() {
		memclob.CreateOrderbook(ctx, clobPair)
	})
}