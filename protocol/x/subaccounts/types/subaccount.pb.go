// Code generated by protoc-gen-gogo. DO NOT EDIT.
// source: dydxprotocol/subaccounts/subaccount.proto

package types

import (
	fmt "fmt"
	_ "github.com/cosmos/cosmos-proto"
	proto "github.com/cosmos/gogoproto/proto"
	io "io"
	math "math"
	math_bits "math/bits"
)

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.GoGoProtoPackageIsVersion3 // please upgrade the proto package

// SubaccountId defines a unique identifier for a Subaccount.
type SubaccountId struct {
	// The address of the wallet that owns this subaccount.
	Owner string `protobuf:"bytes,1,opt,name=owner,proto3" json:"owner,omitempty"`
	// < 128 Since 128 should be enough to start and it fits within
	// 1 Byte (1 Bit needed to indicate that the first byte is the last).
	Number uint32 `protobuf:"varint,2,opt,name=number,proto3" json:"number,omitempty"`
}

func (m *SubaccountId) Reset()         { *m = SubaccountId{} }
func (m *SubaccountId) String() string { return proto.CompactTextString(m) }
func (*SubaccountId) ProtoMessage()    {}
func (*SubaccountId) Descriptor() ([]byte, []int) {
	return fileDescriptor_5a7b1af2704a634c, []int{0}
}
func (m *SubaccountId) XXX_Unmarshal(b []byte) error {
	return m.Unmarshal(b)
}
func (m *SubaccountId) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	if deterministic {
		return xxx_messageInfo_SubaccountId.Marshal(b, m, deterministic)
	} else {
		b = b[:cap(b)]
		n, err := m.MarshalToSizedBuffer(b)
		if err != nil {
			return nil, err
		}
		return b[:n], nil
	}
}
func (m *SubaccountId) XXX_Merge(src proto.Message) {
	xxx_messageInfo_SubaccountId.Merge(m, src)
}
func (m *SubaccountId) XXX_Size() int {
	return m.Size()
}
func (m *SubaccountId) XXX_DiscardUnknown() {
	xxx_messageInfo_SubaccountId.DiscardUnknown(m)
}

var xxx_messageInfo_SubaccountId proto.InternalMessageInfo

func (m *SubaccountId) GetOwner() string {
	if m != nil {
		return m.Owner
	}
	return ""
}

func (m *SubaccountId) GetNumber() uint32 {
	if m != nil {
		return m.Number
	}
	return 0
}

// Subaccount defines a single sub-account for a given address.
// Subaccounts are uniquely indexed by a subaccountNumber/owner pair.
type Subaccount struct {
	// The Id of the Subaccount
	Id *SubaccountId `protobuf:"bytes,1,opt,name=id,proto3" json:"id,omitempty"`
	// All `AssetPosition`s associated with this subaccount.
	// Always sorted ascending by `asset_id`.
	AssetPositions []*AssetPosition `protobuf:"bytes,2,rep,name=asset_positions,json=assetPositions,proto3" json:"asset_positions,omitempty"`
	// All `PerpetualPosition`s associated with this subaccount.
	// Always sorted ascending by `perpetual_id.
	PerpetualPositions []*PerpetualPosition `protobuf:"bytes,3,rep,name=perpetual_positions,json=perpetualPositions,proto3" json:"perpetual_positions,omitempty"`
	// Set by the owner. If true, then margin trades can be made in this
	// subaccount.
	MarginEnabled bool `protobuf:"varint,4,opt,name=margin_enabled,json=marginEnabled,proto3" json:"margin_enabled,omitempty"`
}

func (m *Subaccount) Reset()         { *m = Subaccount{} }
func (m *Subaccount) String() string { return proto.CompactTextString(m) }
func (*Subaccount) ProtoMessage()    {}
func (*Subaccount) Descriptor() ([]byte, []int) {
	return fileDescriptor_5a7b1af2704a634c, []int{1}
}
func (m *Subaccount) XXX_Unmarshal(b []byte) error {
	return m.Unmarshal(b)
}
func (m *Subaccount) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	if deterministic {
		return xxx_messageInfo_Subaccount.Marshal(b, m, deterministic)
	} else {
		b = b[:cap(b)]
		n, err := m.MarshalToSizedBuffer(b)
		if err != nil {
			return nil, err
		}
		return b[:n], nil
	}
}
func (m *Subaccount) XXX_Merge(src proto.Message) {
	xxx_messageInfo_Subaccount.Merge(m, src)
}
func (m *Subaccount) XXX_Size() int {
	return m.Size()
}
func (m *Subaccount) XXX_DiscardUnknown() {
	xxx_messageInfo_Subaccount.DiscardUnknown(m)
}

var xxx_messageInfo_Subaccount proto.InternalMessageInfo

func (m *Subaccount) GetId() *SubaccountId {
	if m != nil {
		return m.Id
	}
	return nil
}

func (m *Subaccount) GetAssetPositions() []*AssetPosition {
	if m != nil {
		return m.AssetPositions
	}
	return nil
}

func (m *Subaccount) GetPerpetualPositions() []*PerpetualPosition {
	if m != nil {
		return m.PerpetualPositions
	}
	return nil
}

func (m *Subaccount) GetMarginEnabled() bool {
	if m != nil {
		return m.MarginEnabled
	}
	return false
}

func init() {
	proto.RegisterType((*SubaccountId)(nil), "dydxprotocol.subaccounts.SubaccountId")
	proto.RegisterType((*Subaccount)(nil), "dydxprotocol.subaccounts.Subaccount")
}

func init() {
	proto.RegisterFile("dydxprotocol/subaccounts/subaccount.proto", fileDescriptor_5a7b1af2704a634c)
}

var fileDescriptor_5a7b1af2704a634c = []byte{
	// 351 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x74, 0x91, 0xc1, 0x4a, 0xeb, 0x40,
	0x14, 0x86, 0x9b, 0xf4, 0xde, 0x72, 0xef, 0xd4, 0x56, 0x18, 0x45, 0x62, 0x17, 0x21, 0x14, 0xd4,
	0x88, 0x34, 0xc1, 0x2a, 0xee, 0x5b, 0x10, 0x74, 0x57, 0x52, 0x70, 0x21, 0x42, 0x49, 0x32, 0x43,
	0x1d, 0x68, 0x66, 0xc2, 0x9c, 0x89, 0xb6, 0x6f, 0xe1, 0xde, 0xd7, 0xf0, 0x21, 0x5c, 0x16, 0x57,
	0x2e, 0xa5, 0x7d, 0x11, 0x31, 0x89, 0x35, 0xad, 0x64, 0x97, 0x73, 0xe6, 0xfb, 0x3f, 0x4e, 0xce,
	0x41, 0xc7, 0x64, 0x46, 0xa6, 0xb1, 0x14, 0x4a, 0x84, 0x62, 0xe2, 0x42, 0x12, 0xf8, 0x61, 0x28,
	0x12, 0xae, 0xa0, 0xf0, 0xed, 0xa4, 0xef, 0xd8, 0x28, 0xa2, 0x4e, 0x01, 0x6d, 0xed, 0x87, 0x02,
	0x22, 0x01, 0xa3, 0xf4, 0xd1, 0xcd, 0x8a, 0x2c, 0xd4, 0xea, 0x94, 0xfa, 0x7d, 0x00, 0xaa, 0x46,
	0xb1, 0x00, 0xa6, 0x98, 0xe0, 0x39, 0x7e, 0x5a, 0x8a, 0xc7, 0x54, 0xc6, 0x54, 0x25, 0xfe, 0x64,
	0x23, 0xd2, 0xbe, 0x41, 0x5b, 0xc3, 0x15, 0x77, 0x4d, 0xb0, 0x83, 0xfe, 0x8a, 0x47, 0x4e, 0xa5,
	0xa1, 0x59, 0x9a, 0xfd, 0xbf, 0x6f, 0xbc, 0xbd, 0x74, 0x76, 0xf3, 0x91, 0x7a, 0x84, 0x48, 0x0a,
	0x30, 0x54, 0x92, 0xf1, 0xb1, 0x97, 0x61, 0x78, 0x0f, 0xd5, 0x78, 0x12, 0x05, 0x54, 0x1a, 0xba,
	0xa5, 0xd9, 0x0d, 0x2f, 0xaf, 0xda, 0xcf, 0x3a, 0x42, 0x3f, 0x62, 0x7c, 0x81, 0x74, 0x46, 0x52,
	0x67, 0xbd, 0x7b, 0xe8, 0x94, 0xad, 0xc2, 0x29, 0x8e, 0xe2, 0xe9, 0x8c, 0xe0, 0x01, 0xda, 0x5e,
	0xff, 0x53, 0x30, 0x74, 0xab, 0x6a, 0xd7, 0xbb, 0x47, 0xe5, 0x92, 0xde, 0x57, 0x60, 0x90, 0xf3,
	0x5e, 0xd3, 0x2f, 0x96, 0x80, 0xef, 0xd0, 0xce, 0xef, 0x65, 0x80, 0x51, 0x4d, 0xad, 0x27, 0xe5,
	0xd6, 0xc1, 0x77, 0x68, 0x65, 0xc6, 0xf1, 0x66, 0x0b, 0xf0, 0x01, 0x6a, 0x46, 0xbe, 0x1c, 0x33,
	0x3e, 0xa2, 0xdc, 0x0f, 0x26, 0x94, 0x18, 0x7f, 0x2c, 0xcd, 0xfe, 0xe7, 0x35, 0xb2, 0xee, 0x65,
	0xd6, 0xec, 0x5f, 0xbd, 0x2e, 0x4c, 0x6d, 0xbe, 0x30, 0xb5, 0x8f, 0x85, 0xa9, 0x3d, 0x2d, 0xcd,
	0xca, 0x7c, 0x69, 0x56, 0xde, 0x97, 0x66, 0xe5, 0xd6, 0x19, 0x33, 0x75, 0x9f, 0x04, 0x4e, 0x28,
	0x22, 0x77, 0xed, 0x9a, 0x0f, 0xe7, 0xee, 0x74, 0xed, 0xa4, 0x6a, 0x16, 0x53, 0x08, 0x6a, 0x29,
	0x70, 0xf6, 0x19, 0x00, 0x00, 0xff, 0xff, 0x9a, 0x89, 0x3c, 0xf5, 0x8a, 0x02, 0x00, 0x00,
}

func (m *SubaccountId) Marshal() (dAtA []byte, err error) {
	size := m.Size()
	dAtA = make([]byte, size)
	n, err := m.MarshalToSizedBuffer(dAtA[:size])
	if err != nil {
		return nil, err
	}
	return dAtA[:n], nil
}

func (m *SubaccountId) MarshalTo(dAtA []byte) (int, error) {
	size := m.Size()
	return m.MarshalToSizedBuffer(dAtA[:size])
}

func (m *SubaccountId) MarshalToSizedBuffer(dAtA []byte) (int, error) {
	i := len(dAtA)
	_ = i
	var l int
	_ = l
	if m.Number != 0 {
		i = encodeVarintSubaccount(dAtA, i, uint64(m.Number))
		i--
		dAtA[i] = 0x10
	}
	if len(m.Owner) > 0 {
		i -= len(m.Owner)
		copy(dAtA[i:], m.Owner)
		i = encodeVarintSubaccount(dAtA, i, uint64(len(m.Owner)))
		i--
		dAtA[i] = 0xa
	}
	return len(dAtA) - i, nil
}

func (m *Subaccount) Marshal() (dAtA []byte, err error) {
	size := m.Size()
	dAtA = make([]byte, size)
	n, err := m.MarshalToSizedBuffer(dAtA[:size])
	if err != nil {
		return nil, err
	}
	return dAtA[:n], nil
}

func (m *Subaccount) MarshalTo(dAtA []byte) (int, error) {
	size := m.Size()
	return m.MarshalToSizedBuffer(dAtA[:size])
}

func (m *Subaccount) MarshalToSizedBuffer(dAtA []byte) (int, error) {
	i := len(dAtA)
	_ = i
	var l int
	_ = l
	if m.MarginEnabled {
		i--
		if m.MarginEnabled {
			dAtA[i] = 1
		} else {
			dAtA[i] = 0
		}
		i--
		dAtA[i] = 0x20
	}
	if len(m.PerpetualPositions) > 0 {
		for iNdEx := len(m.PerpetualPositions) - 1; iNdEx >= 0; iNdEx-- {
			{
				size, err := m.PerpetualPositions[iNdEx].MarshalToSizedBuffer(dAtA[:i])
				if err != nil {
					return 0, err
				}
				i -= size
				i = encodeVarintSubaccount(dAtA, i, uint64(size))
			}
			i--
			dAtA[i] = 0x1a
		}
	}
	if len(m.AssetPositions) > 0 {
		for iNdEx := len(m.AssetPositions) - 1; iNdEx >= 0; iNdEx-- {
			{
				size, err := m.AssetPositions[iNdEx].MarshalToSizedBuffer(dAtA[:i])
				if err != nil {
					return 0, err
				}
				i -= size
				i = encodeVarintSubaccount(dAtA, i, uint64(size))
			}
			i--
			dAtA[i] = 0x12
		}
	}
	if m.Id != nil {
		{
			size, err := m.Id.MarshalToSizedBuffer(dAtA[:i])
			if err != nil {
				return 0, err
			}
			i -= size
			i = encodeVarintSubaccount(dAtA, i, uint64(size))
		}
		i--
		dAtA[i] = 0xa
	}
	return len(dAtA) - i, nil
}

func encodeVarintSubaccount(dAtA []byte, offset int, v uint64) int {
	offset -= sovSubaccount(v)
	base := offset
	for v >= 1<<7 {
		dAtA[offset] = uint8(v&0x7f | 0x80)
		v >>= 7
		offset++
	}
	dAtA[offset] = uint8(v)
	return base
}
func (m *SubaccountId) Size() (n int) {
	if m == nil {
		return 0
	}
	var l int
	_ = l
	l = len(m.Owner)
	if l > 0 {
		n += 1 + l + sovSubaccount(uint64(l))
	}
	if m.Number != 0 {
		n += 1 + sovSubaccount(uint64(m.Number))
	}
	return n
}

func (m *Subaccount) Size() (n int) {
	if m == nil {
		return 0
	}
	var l int
	_ = l
	if m.Id != nil {
		l = m.Id.Size()
		n += 1 + l + sovSubaccount(uint64(l))
	}
	if len(m.AssetPositions) > 0 {
		for _, e := range m.AssetPositions {
			l = e.Size()
			n += 1 + l + sovSubaccount(uint64(l))
		}
	}
	if len(m.PerpetualPositions) > 0 {
		for _, e := range m.PerpetualPositions {
			l = e.Size()
			n += 1 + l + sovSubaccount(uint64(l))
		}
	}
	if m.MarginEnabled {
		n += 2
	}
	return n
}

func sovSubaccount(x uint64) (n int) {
	return (math_bits.Len64(x|1) + 6) / 7
}
func sozSubaccount(x uint64) (n int) {
	return sovSubaccount(uint64((x << 1) ^ uint64((int64(x) >> 63))))
}
func (m *SubaccountId) Unmarshal(dAtA []byte) error {
	l := len(dAtA)
	iNdEx := 0
	for iNdEx < l {
		preIndex := iNdEx
		var wire uint64
		for shift := uint(0); ; shift += 7 {
			if shift >= 64 {
				return ErrIntOverflowSubaccount
			}
			if iNdEx >= l {
				return io.ErrUnexpectedEOF
			}
			b := dAtA[iNdEx]
			iNdEx++
			wire |= uint64(b&0x7F) << shift
			if b < 0x80 {
				break
			}
		}
		fieldNum := int32(wire >> 3)
		wireType := int(wire & 0x7)
		if wireType == 4 {
			return fmt.Errorf("proto: SubaccountId: wiretype end group for non-group")
		}
		if fieldNum <= 0 {
			return fmt.Errorf("proto: SubaccountId: illegal tag %d (wire type %d)", fieldNum, wire)
		}
		switch fieldNum {
		case 1:
			if wireType != 2 {
				return fmt.Errorf("proto: wrong wireType = %d for field Owner", wireType)
			}
			var stringLen uint64
			for shift := uint(0); ; shift += 7 {
				if shift >= 64 {
					return ErrIntOverflowSubaccount
				}
				if iNdEx >= l {
					return io.ErrUnexpectedEOF
				}
				b := dAtA[iNdEx]
				iNdEx++
				stringLen |= uint64(b&0x7F) << shift
				if b < 0x80 {
					break
				}
			}
			intStringLen := int(stringLen)
			if intStringLen < 0 {
				return ErrInvalidLengthSubaccount
			}
			postIndex := iNdEx + intStringLen
			if postIndex < 0 {
				return ErrInvalidLengthSubaccount
			}
			if postIndex > l {
				return io.ErrUnexpectedEOF
			}
			m.Owner = string(dAtA[iNdEx:postIndex])
			iNdEx = postIndex
		case 2:
			if wireType != 0 {
				return fmt.Errorf("proto: wrong wireType = %d for field Number", wireType)
			}
			m.Number = 0
			for shift := uint(0); ; shift += 7 {
				if shift >= 64 {
					return ErrIntOverflowSubaccount
				}
				if iNdEx >= l {
					return io.ErrUnexpectedEOF
				}
				b := dAtA[iNdEx]
				iNdEx++
				m.Number |= uint32(b&0x7F) << shift
				if b < 0x80 {
					break
				}
			}
		default:
			iNdEx = preIndex
			skippy, err := skipSubaccount(dAtA[iNdEx:])
			if err != nil {
				return err
			}
			if (skippy < 0) || (iNdEx+skippy) < 0 {
				return ErrInvalidLengthSubaccount
			}
			if (iNdEx + skippy) > l {
				return io.ErrUnexpectedEOF
			}
			iNdEx += skippy
		}
	}

	if iNdEx > l {
		return io.ErrUnexpectedEOF
	}
	return nil
}
func (m *Subaccount) Unmarshal(dAtA []byte) error {
	l := len(dAtA)
	iNdEx := 0
	for iNdEx < l {
		preIndex := iNdEx
		var wire uint64
		for shift := uint(0); ; shift += 7 {
			if shift >= 64 {
				return ErrIntOverflowSubaccount
			}
			if iNdEx >= l {
				return io.ErrUnexpectedEOF
			}
			b := dAtA[iNdEx]
			iNdEx++
			wire |= uint64(b&0x7F) << shift
			if b < 0x80 {
				break
			}
		}
		fieldNum := int32(wire >> 3)
		wireType := int(wire & 0x7)
		if wireType == 4 {
			return fmt.Errorf("proto: Subaccount: wiretype end group for non-group")
		}
		if fieldNum <= 0 {
			return fmt.Errorf("proto: Subaccount: illegal tag %d (wire type %d)", fieldNum, wire)
		}
		switch fieldNum {
		case 1:
			if wireType != 2 {
				return fmt.Errorf("proto: wrong wireType = %d for field Id", wireType)
			}
			var msglen int
			for shift := uint(0); ; shift += 7 {
				if shift >= 64 {
					return ErrIntOverflowSubaccount
				}
				if iNdEx >= l {
					return io.ErrUnexpectedEOF
				}
				b := dAtA[iNdEx]
				iNdEx++
				msglen |= int(b&0x7F) << shift
				if b < 0x80 {
					break
				}
			}
			if msglen < 0 {
				return ErrInvalidLengthSubaccount
			}
			postIndex := iNdEx + msglen
			if postIndex < 0 {
				return ErrInvalidLengthSubaccount
			}
			if postIndex > l {
				return io.ErrUnexpectedEOF
			}
			if m.Id == nil {
				m.Id = &SubaccountId{}
			}
			if err := m.Id.Unmarshal(dAtA[iNdEx:postIndex]); err != nil {
				return err
			}
			iNdEx = postIndex
		case 2:
			if wireType != 2 {
				return fmt.Errorf("proto: wrong wireType = %d for field AssetPositions", wireType)
			}
			var msglen int
			for shift := uint(0); ; shift += 7 {
				if shift >= 64 {
					return ErrIntOverflowSubaccount
				}
				if iNdEx >= l {
					return io.ErrUnexpectedEOF
				}
				b := dAtA[iNdEx]
				iNdEx++
				msglen |= int(b&0x7F) << shift
				if b < 0x80 {
					break
				}
			}
			if msglen < 0 {
				return ErrInvalidLengthSubaccount
			}
			postIndex := iNdEx + msglen
			if postIndex < 0 {
				return ErrInvalidLengthSubaccount
			}
			if postIndex > l {
				return io.ErrUnexpectedEOF
			}
			m.AssetPositions = append(m.AssetPositions, &AssetPosition{})
			if err := m.AssetPositions[len(m.AssetPositions)-1].Unmarshal(dAtA[iNdEx:postIndex]); err != nil {
				return err
			}
			iNdEx = postIndex
		case 3:
			if wireType != 2 {
				return fmt.Errorf("proto: wrong wireType = %d for field PerpetualPositions", wireType)
			}
			var msglen int
			for shift := uint(0); ; shift += 7 {
				if shift >= 64 {
					return ErrIntOverflowSubaccount
				}
				if iNdEx >= l {
					return io.ErrUnexpectedEOF
				}
				b := dAtA[iNdEx]
				iNdEx++
				msglen |= int(b&0x7F) << shift
				if b < 0x80 {
					break
				}
			}
			if msglen < 0 {
				return ErrInvalidLengthSubaccount
			}
			postIndex := iNdEx + msglen
			if postIndex < 0 {
				return ErrInvalidLengthSubaccount
			}
			if postIndex > l {
				return io.ErrUnexpectedEOF
			}
			m.PerpetualPositions = append(m.PerpetualPositions, &PerpetualPosition{})
			if err := m.PerpetualPositions[len(m.PerpetualPositions)-1].Unmarshal(dAtA[iNdEx:postIndex]); err != nil {
				return err
			}
			iNdEx = postIndex
		case 4:
			if wireType != 0 {
				return fmt.Errorf("proto: wrong wireType = %d for field MarginEnabled", wireType)
			}
			var v int
			for shift := uint(0); ; shift += 7 {
				if shift >= 64 {
					return ErrIntOverflowSubaccount
				}
				if iNdEx >= l {
					return io.ErrUnexpectedEOF
				}
				b := dAtA[iNdEx]
				iNdEx++
				v |= int(b&0x7F) << shift
				if b < 0x80 {
					break
				}
			}
			m.MarginEnabled = bool(v != 0)
		default:
			iNdEx = preIndex
			skippy, err := skipSubaccount(dAtA[iNdEx:])
			if err != nil {
				return err
			}
			if (skippy < 0) || (iNdEx+skippy) < 0 {
				return ErrInvalidLengthSubaccount
			}
			if (iNdEx + skippy) > l {
				return io.ErrUnexpectedEOF
			}
			iNdEx += skippy
		}
	}

	if iNdEx > l {
		return io.ErrUnexpectedEOF
	}
	return nil
}
func skipSubaccount(dAtA []byte) (n int, err error) {
	l := len(dAtA)
	iNdEx := 0
	depth := 0
	for iNdEx < l {
		var wire uint64
		for shift := uint(0); ; shift += 7 {
			if shift >= 64 {
				return 0, ErrIntOverflowSubaccount
			}
			if iNdEx >= l {
				return 0, io.ErrUnexpectedEOF
			}
			b := dAtA[iNdEx]
			iNdEx++
			wire |= (uint64(b) & 0x7F) << shift
			if b < 0x80 {
				break
			}
		}
		wireType := int(wire & 0x7)
		switch wireType {
		case 0:
			for shift := uint(0); ; shift += 7 {
				if shift >= 64 {
					return 0, ErrIntOverflowSubaccount
				}
				if iNdEx >= l {
					return 0, io.ErrUnexpectedEOF
				}
				iNdEx++
				if dAtA[iNdEx-1] < 0x80 {
					break
				}
			}
		case 1:
			iNdEx += 8
		case 2:
			var length int
			for shift := uint(0); ; shift += 7 {
				if shift >= 64 {
					return 0, ErrIntOverflowSubaccount
				}
				if iNdEx >= l {
					return 0, io.ErrUnexpectedEOF
				}
				b := dAtA[iNdEx]
				iNdEx++
				length |= (int(b) & 0x7F) << shift
				if b < 0x80 {
					break
				}
			}
			if length < 0 {
				return 0, ErrInvalidLengthSubaccount
			}
			iNdEx += length
		case 3:
			depth++
		case 4:
			if depth == 0 {
				return 0, ErrUnexpectedEndOfGroupSubaccount
			}
			depth--
		case 5:
			iNdEx += 4
		default:
			return 0, fmt.Errorf("proto: illegal wireType %d", wireType)
		}
		if iNdEx < 0 {
			return 0, ErrInvalidLengthSubaccount
		}
		if depth == 0 {
			return iNdEx, nil
		}
	}
	return 0, io.ErrUnexpectedEOF
}

var (
	ErrInvalidLengthSubaccount        = fmt.Errorf("proto: negative length found during unmarshaling")
	ErrIntOverflowSubaccount          = fmt.Errorf("proto: integer overflow")
	ErrUnexpectedEndOfGroupSubaccount = fmt.Errorf("proto: unexpected end of group")
)