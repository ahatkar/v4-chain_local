package flags

import (
	"fmt"
	"math"

	servertypes "github.com/cosmos/cosmos-sdk/server/types"
	"github.com/spf13/cobra"
)

// A struct containing the values of all flags.
type ClobFlags struct {
	MaxLiquidationOrdersPerBlock    uint32
	MaxDeleveragingAttemptsPerBlock uint32

	MevTelemetryEnabled    bool
	MevTelemetryHost       string
	MevTelemetryIdentifier string
}

// List of CLI flags.
const (
	// Liquidations and deleveraging.
	MaxLiquidationOrdersPerBlock    = "max-liquidation-orders-per-block"
	MaxDeleveragingAttemptsPerBlock = "max-deleveraging-attempts-per-block"

	// Mev.
	MevTelemetryEnabled    = "mev-telemetry-enabled"
	MevTelemetryHost       = "mev-telemetry-host"
	MevTelemetryIdentifier = "mev-telemetry-identifier"
)

// Default values.
const (
	DefaultMaxLiquidationOrdersPerBlock    = math.MaxUint32
	DefaultMaxDeleveragingAttemptsPerBlock = 35

	DefaultMevTelemetryEnabled    = false
	DefaultMevTelemetryHost       = ""
	DefaultMevTelemetryIdentifier = ""
)

// AddFlagsToCmd adds flags to app initialization.
// These flags should be applied to the `start` command of the V4 Cosmos application.
// E.g. `dydxprotocold start --non-validating-full-node true`.
func AddClobFlagsToCmd(cmd *cobra.Command) {
	cmd.Flags().Uint32(
		MaxLiquidationOrdersPerBlock,
		DefaultMaxLiquidationOrdersPerBlock,
		fmt.Sprintf(
			"Sets the maximum number of liquidation orders to process per block. Default = %d",
			DefaultMaxLiquidationOrdersPerBlock,
		),
	)
	cmd.Flags().Uint32(
		MaxDeleveragingAttemptsPerBlock,
		DefaultMaxDeleveragingAttemptsPerBlock,
		fmt.Sprintf(
			"Sets the maximum number of attempted deleveraging events per block. Default = %d",
			DefaultMaxDeleveragingAttemptsPerBlock,
		),
	)
	cmd.Flags().Bool(
		MevTelemetryEnabled,
		DefaultMevTelemetryEnabled,
		"Runs the MEV Telemetry collection agent if true.",
	)
	cmd.Flags().String(
		MevTelemetryHost,
		DefaultMevTelemetryHost,
		"Sets the address to connect to for the MEV Telemetry collection agent.",
	)
	cmd.Flags().String(
		MevTelemetryIdentifier,
		DefaultMevTelemetryIdentifier,
		"Sets the identifier to use for MEV Telemetry collection agent.",
	)
}

func GetDefaultClobFlags() ClobFlags {
	return ClobFlags{
		MaxLiquidationOrdersPerBlock:    DefaultMaxLiquidationOrdersPerBlock,
		MaxDeleveragingAttemptsPerBlock: DefaultMaxDeleveragingAttemptsPerBlock,
		MevTelemetryEnabled:             DefaultMevTelemetryEnabled,
		MevTelemetryHost:                DefaultMevTelemetryHost,
		MevTelemetryIdentifier:          DefaultMevTelemetryIdentifier,
	}
}

// GetFlagValuesFromOptions gets values from the `AppOptions` struct which contains values
// from the command-line flags.
func GetClobFlagValuesFromOptions(
	appOpts servertypes.AppOptions,
) ClobFlags {
	// Create default result.
	result := GetDefaultClobFlags()

	// Populate the flags if they exist.
	if v, ok := appOpts.Get(MevTelemetryEnabled).(bool); ok {
		result.MevTelemetryEnabled = v
	}

	if v, ok := appOpts.Get(MevTelemetryHost).(string); ok {
		result.MevTelemetryHost = v
	}

	if v, ok := appOpts.Get(MevTelemetryIdentifier).(string); ok {
		result.MevTelemetryIdentifier = v
	}

	if v, ok := appOpts.Get(MaxLiquidationOrdersPerBlock).(uint32); ok {
		result.MaxLiquidationOrdersPerBlock = v
	}

	if v, ok := appOpts.Get(MaxDeleveragingAttemptsPerBlock).(uint32); ok {
		result.MaxDeleveragingAttemptsPerBlock = v
	}

	return result
}
