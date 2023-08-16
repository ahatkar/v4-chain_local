package types

import (
	sdk "github.com/cosmos/cosmos-sdk/types"
	sdkerrors "github.com/cosmos/cosmos-sdk/types/errors"
	"github.com/dydxprotocol/v4/lib"
)

var _ sdk.Msg = &MsgCreateTransfer{}

func NewMsgCreateTransfer(transfer *Transfer) *MsgCreateTransfer {
	return &MsgCreateTransfer{
		Transfer: transfer,
	}
}

func (msg *MsgCreateTransfer) GetSigners() []sdk.AccAddress {
	sender, err := sdk.AccAddressFromBech32(msg.Transfer.Sender.Owner)
	if err != nil {
		panic(err)
	}
	return []sdk.AccAddress{sender}
}

func (msg *MsgCreateTransfer) ValidateBasic() error {
	err := msg.Transfer.Sender.Validate()
	if err != nil {
		return err
	}

	err = msg.Transfer.Recipient.Validate()
	if err != nil {
		return err
	}

	if msg.Transfer.Sender == msg.Transfer.Recipient {
		return sdkerrors.Wrapf(ErrSenderSameAsRecipient, "Sender is the same as recipient (%s)", &msg.Transfer.Sender)
	}

	if msg.Transfer.AssetId != lib.UsdcAssetId {
		return ErrNonUsdcAssetTransferNotImplemented
	}

	if msg.Transfer.Amount == uint64(0) {
		return ErrInvalidTransferAmount
	}

	return nil
}