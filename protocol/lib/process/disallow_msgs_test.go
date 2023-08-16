package process_test

import (
	"testing"

	"github.com/dydxprotocol/v4/app/msgs"
	"github.com/dydxprotocol/v4/lib/maps"
	"github.com/dydxprotocol/v4/lib/process"
	clobtypes "github.com/dydxprotocol/v4/x/clob/types"
	"github.com/stretchr/testify/require"
)

func TestIsDisallowTopLevelMsgInOtherTxs_Empty(t *testing.T) {
	require.False(t, process.IsDisallowTopLevelMsgInOtherTxs(nil))
}

func TestIsDisallowTopLevelMsgInOtherTxs(t *testing.T) {
	allMsgSamples := maps.MergeAllMapsMustHaveDistinctKeys(
		msgs.AllowMsgs,
		msgs.DisallowMsgs,
	)

	for _, msg := range allMsgSamples {
		result := process.IsDisallowTopLevelMsgInOtherTxs(msg)
		switch msg.(type) {
		case *clobtypes.MsgCancelOrder, *clobtypes.MsgPlaceOrder:
			require.True(t, result)
		default:
			require.False(t, result)
		}
	}
}