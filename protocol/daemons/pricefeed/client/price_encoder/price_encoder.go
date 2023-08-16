package price_encoder

import (
	"context"
	"errors"
	"fmt"
	gometrics "github.com/armon/go-metrics"
	"github.com/cometbft/cometbft/libs/log"
	"github.com/cosmos/cosmos-sdk/telemetry"
	"github.com/dydxprotocol/v4/daemons/pricefeed/client/constants"
	"github.com/dydxprotocol/v4/daemons/pricefeed/client/price_fetcher"
	"github.com/dydxprotocol/v4/daemons/pricefeed/client/price_function"
	"github.com/dydxprotocol/v4/daemons/pricefeed/client/types"
	pricefeedmetrics "github.com/dydxprotocol/v4/daemons/pricefeed/metrics"
	pricefeedtypes "github.com/dydxprotocol/v4/daemons/pricefeed/types"
	"github.com/dydxprotocol/v4/lib"
	"github.com/dydxprotocol/v4/lib/metrics"
	"github.com/dydxprotocol/v4/lib/prices"
	"syscall"
	"time"
)

type PriceEncoder interface {
	types.ExchangeConfigUpdater
	ProcessPriceFetcherResponse(response *price_fetcher.PriceFetcherSubtaskResponse)
}

// Enforce compile-time conformity of PriceEncoderImpl to the PriceEncoder interface.
var _ PriceEncoder = &PriceEncoderImpl{}

type PriceEncoderImpl struct {
	// isPastGracePeriod indicates the price encoder has passed the daemon startup grace period. Conversion failures
	// are escalated to log errors after the grace period has passed.
	isPastGracePeriod      bool
	exchangeId             types.ExchangeId
	exchangeToMarketPrices types.ExchangeToMarketPrices
	logger                 log.Logger
	bCh                    <-chan *price_fetcher.PriceFetcherSubtaskResponse
	mutableState           *mutableState
}

// NewPriceEncoder creates a new, initialized PriceEncoderImpl struct. It manages decoding and converting
// of raw prices returned from the price fetcher into the shared exchangeToMarketPrices cache. All prices stored
// in the cache are converted to the market price in a quote currency of USD, even if the API request was made
// for a different market and/or used a different quote currency.
func NewPriceEncoder(
	mutableExchangeConfig *types.MutableExchangeMarketConfig,
	mutableMarketConfigs []*types.MutableMarketConfig,
	exchangeToMarketPrices types.ExchangeToMarketPrices,
	logger log.Logger,
	bCh <-chan *price_fetcher.PriceFetcherSubtaskResponse,
) (*PriceEncoderImpl, error) {
	pe := &PriceEncoderImpl{
		isPastGracePeriod:      false,
		exchangeId:             mutableExchangeConfig.Id,
		exchangeToMarketPrices: exchangeToMarketPrices,
		logger: logger.With(
			constants.SubmoduleLogKey,
			constants.PriceEncoderSubmoduleName,
			constants.ExchangeIdLogKey,
			mutableExchangeConfig.Id,
		),
		bCh:          bCh,
		mutableState: &mutableState{},
	}

	// Update mutable state.
	err := pe.UpdateMutableExchangeConfig(mutableExchangeConfig, mutableMarketConfigs)
	if err != nil {
		return nil, err
	}

	// Start background goroutine to toggle grace period after a delay.
	go func() {
		time.Sleep(constants.PriceDaemonStartupErrorGracePeriod)
		pe.isPastGracePeriod = true
	}()

	return pe, nil
}

// UpdateMutableExchangeConfig updates the price encoder with the most current copy of the exchange config, as
// well as all markets supported by the exchange.
// This method is added to support the ExchangeConfigUpdater interface.
func (p *PriceEncoderImpl) UpdateMutableExchangeConfig(
	newConfig *types.MutableExchangeMarketConfig,
	newMarketConfigs []*types.MutableMarketConfig,
) error {
	// 1. Validate new config.
	if newConfig.Id != p.GetExchangeId() {
		return fmt.Errorf(
			"PriceEncoder.UpdateMutableExchangeConfig: exchange id mismatch, expected '%v', got '%v'",
			p.GetExchangeId(),
			newConfig.Id,
		)
	}

	if err := newConfig.Validate(newMarketConfigs); err != nil {
		return fmt.Errorf("PriceEncoder.UpdateMutableExchangeConfig: invalid exchange config update: %w", err)
	}

	// 2. Derive price encoder mutable state.
	newMarketsToMutableConfigs := make(map[types.MarketId]*types.MutableMarketConfig)
	for _, newMarketConfig := range newMarketConfigs {
		newMarketsToMutableConfigs[newMarketConfig.Id] = newMarketConfig
	}

	// 3. Perform update.
	p.mutableState.Update(newConfig, newMarketsToMutableConfigs)
	return nil
}

// GetExchangeId returns the exchange id for this PriceEncoder.
func (p *PriceEncoderImpl) GetExchangeId() types.ExchangeId {
	return p.exchangeId
}

// convertPriceUpdate converts a price update from the raw ticker price into a price for the market in the correct
// quote currency, drawing on the exchange config and market config to determine the correct conversion.
func (p PriceEncoderImpl) convertPriceUpdate(marketPriceTimestamp *types.MarketPriceTimestamp) (
	convertedPrice *types.MarketPriceTimestamp,
	err error,
) {
	conversionDetails, err := p.mutableState.GetPriceConversionDetailsForMarket(marketPriceTimestamp.MarketId)
	if err != nil {
		return nil, err
	}

	// Create a logger with conversion details context for this method.
	logger := p.logger.With(
		"marketPriceTimestamp.Price",
		marketPriceTimestamp.Price,
		"marketExponent",
		conversionDetails.Exponent,
		constants.MarketIdLogKey,
		marketPriceTimestamp.MarketId,
	)

	var price uint64
	if conversionDetails.AdjustByMarketDetails == nil {
		if conversionDetails.Invert {
			// price = 1 / marketPriceTimestamp.Price
			price = prices.Invert(marketPriceTimestamp.Price, conversionDetails.Exponent)
			logger.Debug("price_encoder: Inverting price without adjustment", constants.PriceLogKey, price)
		} else {
			// No adjustment or inversion required.
			price = marketPriceTimestamp.Price
			logger.Debug("price_encoder: Using price without adjustment or inversion", constants.PriceLogKey, price)
		}
	} else {
		adjustByIndexPrice, numPricesMedianized := p.exchangeToMarketPrices.GetIndexPrice(
			conversionDetails.AdjustByMarketDetails.MarketId,
			time.Now().Add(-pricefeedtypes.MaxPriceAge),
			&lib.MedianizerImpl{},
		)
		// If the index price is not valid due to insufficient pricing data, return an error.
		if numPricesMedianized < int(conversionDetails.AdjustByMarketDetails.MinExchanges) {
			err = fmt.Errorf(
				"Could not retrieve index price for market %v: "+
					"expected median price from %v exchanges, but got %v exchanges",
				conversionDetails.AdjustByMarketDetails.MarketId,
				conversionDetails.AdjustByMarketDetails.MinExchanges,
				numPricesMedianized,
			)
			return nil, err
		}

		// Add adjustment market metadata to logger.
		logger = logger.With(
			"adjustByIndexPrice",
			adjustByIndexPrice,
			"adjustByExponent",
			conversionDetails.AdjustByMarketDetails.Exponent,
		)

		if conversionDetails.Invert {
			// price = adjustByIndexPrice / marketPriceTimestamp.Price
			price = prices.Divide(
				adjustByIndexPrice,
				conversionDetails.AdjustByMarketDetails.Exponent,
				marketPriceTimestamp.Price,
				conversionDetails.Exponent,
			)
			logger.Debug("price_encoder: Inverting price with adjustment", constants.PriceLogKey, price)
		} else {
			// marketPriceTimestamp.Price * adjustByIndexPrice
			price = prices.Multiply(
				marketPriceTimestamp.Price,
				conversionDetails.Exponent,
				adjustByIndexPrice,
				conversionDetails.AdjustByMarketDetails.Exponent,
			)
			logger.Debug("price_encoder: Multiplying price with adjustment", constants.PriceLogKey, price)
		}
	}

	// Emit market prices here for easy access to the market's exponent so that we can calculate the float32
	// representation of the price for metrics. If a price is available here, it will be put into the daemon prices
	// cache by the encoder, and this is the earliest code location where a market's price is definitively resolved.
	telemetry.SetGaugeWithLabels(
		[]string{metrics.PricefeedDaemon, metrics.PriceEncoderUpdatePrice},
		prices.PriceToFloat32ForLogging(price, conversionDetails.Exponent),
		[]gometrics.Label{
			pricefeedmetrics.GetLabelForMarketId(marketPriceTimestamp.MarketId),
			pricefeedmetrics.GetLabelForExchangeId(p.GetExchangeId()),
		},
	)

	return &types.MarketPriceTimestamp{
		MarketId:      marketPriceTimestamp.MarketId,
		Price:         price,
		LastUpdatedAt: marketPriceTimestamp.LastUpdatedAt,
	}, nil
}

// UpdatePrice updates the price cache shared by the price updater with the converted market price.
func (p *PriceEncoderImpl) UpdatePrice(marketPriceTimestamp *types.MarketPriceTimestamp) {
	// Convert price.
	price, err := p.convertPriceUpdate(marketPriceTimestamp)

	if err != nil {
		var logMethod = p.logger.Info
		// When the price encoder starts, we expect that some conversions will fail as we are filling the cache with
		// enough valid prices to generate a valid index price for our adjustment markets. In order to avoid spurious
		// alerts, only emit error logs if the grace period has passed.
		// There's a race condition here, and another one down below where we emit isPastGracePeriod as a log value, but
		// that's ok. We don't need this to be perfect, we just need to avoid spurious alerts and have informative
		// logs.
		if p.isPastGracePeriod {
			logMethod = p.logger.Error
		}
		logMethod(
			"Failed to get price conversion details for market",
			"error",
			err,
			constants.MarketIdLogKey,
			marketPriceTimestamp.MarketId,
			constants.ExchangeIdLogKey,
			p.GetExchangeId(),
		)
		// Record failure.
		telemetry.IncrCounterWithLabels(
			[]string{metrics.PricefeedDaemon, metrics.PriceEncoderPriceConversion, metrics.Error},
			1.0,
			[]gometrics.Label{
				pricefeedmetrics.GetLabelForMarketId(marketPriceTimestamp.MarketId),
				pricefeedmetrics.GetLabelForExchangeId(p.GetExchangeId()),
			},
		)
		return
	}

	// Update exchangeToMarketPrices cache.
	p.exchangeToMarketPrices.UpdatePrice(p.GetExchangeId(), price)

	// Record success.
	telemetry.IncrCounterWithLabels(
		[]string{metrics.PricefeedDaemon, metrics.PriceEncoderPriceConversion, metrics.Success},
		1.0,
		[]gometrics.Label{
			pricefeedmetrics.GetLabelForMarketId(marketPriceTimestamp.MarketId),
			pricefeedmetrics.GetLabelForExchangeId(p.GetExchangeId()),
		},
	)
}

// ProcessPriceFetcherResponse consumes the (price, error) response from the price fetcher and either updates the
// exchangeToMarketPrices cache with a valid price, or appropriately logs and reports metrics for errors.
func (p *PriceEncoderImpl) ProcessPriceFetcherResponse(response *price_fetcher.PriceFetcherSubtaskResponse) {
	// Capture nil response on channel close.
	if response == nil {
		panic("nil response received from price fetcher")
	}

	if response.Err == nil {
		p.UpdatePrice(response.Price)
	} else {
		if errors.Is(response.Err, context.DeadlineExceeded) {
			// Log info if there are timeout errors in the ingested buffered channel prices.
			// This is only an info so that there aren't noisy errors when undesirable but
			// expected behavior occurs.
			p.logger.Info(
				"Failed to update exchange price in price daemon priceEncoder due to timeout",
				"error",
				response.Err,
				"exchangeId",
				p.GetExchangeId(),
			)

			// Measure timeout failures.
			telemetry.IncrCounterWithLabels(
				[]string{
					metrics.PricefeedDaemon,
					metrics.PriceEncoderUpdatePrice,
					metrics.HttpGetTimeout,
					metrics.Error,
				},
				1,
				[]gometrics.Label{
					pricefeedmetrics.GetLabelForExchangeId(p.GetExchangeId()),
				},
			)
		} else if price_function.IsExchangeError(response.Err) {
			// Log info if there are 5xx errors in the ingested buffered channel prices.
			// This is only an info so that there aren't noisy errors when undesirable but
			// expected behavior occurs.
			p.logger.Info(
				"Failed to update exchange price in price daemon priceEncoder due to exchange-side error",
				"error",
				response.Err,
				"exchangeId",
				p.GetExchangeId(),
			)

			// Measure 5xx failures.
			telemetry.IncrCounterWithLabels(
				[]string{
					metrics.PricefeedDaemon,
					metrics.PriceEncoderUpdatePrice,
					metrics.HttpGet5xxx,
					metrics.Error,
				},
				1,
				[]gometrics.Label{
					pricefeedmetrics.GetLabelForExchangeId(p.GetExchangeId()),
				},
			)
		} else if errors.Is(response.Err, syscall.ECONNRESET) {
			// Log info if there are connections reset by the exchange.
			// This is only an info so that there aren't noisy errors when undesirable but
			// expected behavior occurs.
			p.logger.Info(
				"Failed to update exchange price in price daemon priceEncoder due to exchange-side hang-up",
				"error",
				response.Err,
				"exchangeId",
				p.GetExchangeId(),
			)

			// Measure HTTP GET hangups.
			telemetry.IncrCounterWithLabels(
				[]string{
					metrics.PricefeedDaemon,
					metrics.PriceEncoderUpdatePrice,
					metrics.HttpGetHangup,
					metrics.Error,
				},
				1,
				[]gometrics.Label{
					pricefeedmetrics.GetLabelForExchangeId(p.GetExchangeId()),
				},
			)
		} else {
			// Log error if there are errors in the ingested buffered channel prices.
			p.logger.Error(
				"Failed to update exchange price in price daemon priceEncoder",
				"error",
				response.Err,
				"exchangeId",
				p.GetExchangeId(),
			)

			// Measure all failures in querying other than timeout.
			telemetry.IncrCounterWithLabels(
				[]string{
					metrics.PricefeedDaemon,
					metrics.PriceEncoderUpdatePrice,
					metrics.Error,
				},
				1,
				[]gometrics.Label{
					pricefeedmetrics.GetLabelForExchangeId(p.GetExchangeId()),
				},
			)
		}
	}
}