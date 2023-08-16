package metrics

import (
	gometrics "github.com/armon/go-metrics"
	"github.com/dydxprotocol/v4/daemons/pricefeed/client/types"
	"github.com/dydxprotocol/v4/lib/metrics"
)

const (
	INVALID = "INVALID"
)

// GetLabelForMarketId converts a marketId uint32 into a human-readable market pair and then returns the
// label with the market pair.
func GetLabelForMarketId(marketId types.MarketId) gometrics.Label {
	marketPair, exists := StaticMarketPairs[marketId]
	if !exists {
		return metrics.GetLabelForStringValue(metrics.MarketId, INVALID)
	}

	return metrics.GetLabelForStringValue(metrics.MarketId, marketPair)
}

// GetLabelForExchangeId converts an exchangeId uint32 into a name and then
// returns the label with the name.
func GetLabelForExchangeId(exchangeId types.ExchangeId) gometrics.Label {
	return metrics.GetLabelForStringValue(metrics.ExchangeId, exchangeId)
}