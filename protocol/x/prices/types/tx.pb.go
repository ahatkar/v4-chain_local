// Code generated by protoc-gen-gogo. DO NOT EDIT.
// source: dydxprotocol/prices/tx.proto

package types

import (
	context "context"
	fmt "fmt"
	grpc1 "github.com/cosmos/gogoproto/grpc"
	proto "github.com/cosmos/gogoproto/proto"
	grpc "google.golang.org/grpc"
	codes "google.golang.org/grpc/codes"
	status "google.golang.org/grpc/status"
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

// MsgUpdateMarketPrices is a request type for the UpdateMarketPrices method.
type MsgUpdateMarketPrices struct {
	MarketPriceUpdates []*MsgUpdateMarketPrices_MarketPrice `protobuf:"bytes,1,rep,name=market_price_updates,json=marketPriceUpdates,proto3" json:"market_price_updates,omitempty"`
}

func (m *MsgUpdateMarketPrices) Reset()         { *m = MsgUpdateMarketPrices{} }
func (m *MsgUpdateMarketPrices) String() string { return proto.CompactTextString(m) }
func (*MsgUpdateMarketPrices) ProtoMessage()    {}
func (*MsgUpdateMarketPrices) Descriptor() ([]byte, []int) {
	return fileDescriptor_70ca248e15be37c4, []int{0}
}
func (m *MsgUpdateMarketPrices) XXX_Unmarshal(b []byte) error {
	return m.Unmarshal(b)
}
func (m *MsgUpdateMarketPrices) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	if deterministic {
		return xxx_messageInfo_MsgUpdateMarketPrices.Marshal(b, m, deterministic)
	} else {
		b = b[:cap(b)]
		n, err := m.MarshalToSizedBuffer(b)
		if err != nil {
			return nil, err
		}
		return b[:n], nil
	}
}
func (m *MsgUpdateMarketPrices) XXX_Merge(src proto.Message) {
	xxx_messageInfo_MsgUpdateMarketPrices.Merge(m, src)
}
func (m *MsgUpdateMarketPrices) XXX_Size() int {
	return m.Size()
}
func (m *MsgUpdateMarketPrices) XXX_DiscardUnknown() {
	xxx_messageInfo_MsgUpdateMarketPrices.DiscardUnknown(m)
}

var xxx_messageInfo_MsgUpdateMarketPrices proto.InternalMessageInfo

func (m *MsgUpdateMarketPrices) GetMarketPriceUpdates() []*MsgUpdateMarketPrices_MarketPrice {
	if m != nil {
		return m.MarketPriceUpdates
	}
	return nil
}

// MarketPrice represents a price update for a single market
type MsgUpdateMarketPrices_MarketPrice struct {
	// The id of market to update
	MarketId uint32 `protobuf:"varint,1,opt,name=market_id,json=marketId,proto3" json:"market_id,omitempty"`
	// The updated price
	Price uint64 `protobuf:"varint,2,opt,name=price,proto3" json:"price,omitempty"`
}

func (m *MsgUpdateMarketPrices_MarketPrice) Reset()         { *m = MsgUpdateMarketPrices_MarketPrice{} }
func (m *MsgUpdateMarketPrices_MarketPrice) String() string { return proto.CompactTextString(m) }
func (*MsgUpdateMarketPrices_MarketPrice) ProtoMessage()    {}
func (*MsgUpdateMarketPrices_MarketPrice) Descriptor() ([]byte, []int) {
	return fileDescriptor_70ca248e15be37c4, []int{0, 0}
}
func (m *MsgUpdateMarketPrices_MarketPrice) XXX_Unmarshal(b []byte) error {
	return m.Unmarshal(b)
}
func (m *MsgUpdateMarketPrices_MarketPrice) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	if deterministic {
		return xxx_messageInfo_MsgUpdateMarketPrices_MarketPrice.Marshal(b, m, deterministic)
	} else {
		b = b[:cap(b)]
		n, err := m.MarshalToSizedBuffer(b)
		if err != nil {
			return nil, err
		}
		return b[:n], nil
	}
}
func (m *MsgUpdateMarketPrices_MarketPrice) XXX_Merge(src proto.Message) {
	xxx_messageInfo_MsgUpdateMarketPrices_MarketPrice.Merge(m, src)
}
func (m *MsgUpdateMarketPrices_MarketPrice) XXX_Size() int {
	return m.Size()
}
func (m *MsgUpdateMarketPrices_MarketPrice) XXX_DiscardUnknown() {
	xxx_messageInfo_MsgUpdateMarketPrices_MarketPrice.DiscardUnknown(m)
}

var xxx_messageInfo_MsgUpdateMarketPrices_MarketPrice proto.InternalMessageInfo

func (m *MsgUpdateMarketPrices_MarketPrice) GetMarketId() uint32 {
	if m != nil {
		return m.MarketId
	}
	return 0
}

func (m *MsgUpdateMarketPrices_MarketPrice) GetPrice() uint64 {
	if m != nil {
		return m.Price
	}
	return 0
}

// MsgUpdateMarketPricesResponse defines the MsgUpdateMarketPrices response
// type.
type MsgUpdateMarketPricesResponse struct {
}

func (m *MsgUpdateMarketPricesResponse) Reset()         { *m = MsgUpdateMarketPricesResponse{} }
func (m *MsgUpdateMarketPricesResponse) String() string { return proto.CompactTextString(m) }
func (*MsgUpdateMarketPricesResponse) ProtoMessage()    {}
func (*MsgUpdateMarketPricesResponse) Descriptor() ([]byte, []int) {
	return fileDescriptor_70ca248e15be37c4, []int{1}
}
func (m *MsgUpdateMarketPricesResponse) XXX_Unmarshal(b []byte) error {
	return m.Unmarshal(b)
}
func (m *MsgUpdateMarketPricesResponse) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	if deterministic {
		return xxx_messageInfo_MsgUpdateMarketPricesResponse.Marshal(b, m, deterministic)
	} else {
		b = b[:cap(b)]
		n, err := m.MarshalToSizedBuffer(b)
		if err != nil {
			return nil, err
		}
		return b[:n], nil
	}
}
func (m *MsgUpdateMarketPricesResponse) XXX_Merge(src proto.Message) {
	xxx_messageInfo_MsgUpdateMarketPricesResponse.Merge(m, src)
}
func (m *MsgUpdateMarketPricesResponse) XXX_Size() int {
	return m.Size()
}
func (m *MsgUpdateMarketPricesResponse) XXX_DiscardUnknown() {
	xxx_messageInfo_MsgUpdateMarketPricesResponse.DiscardUnknown(m)
}

var xxx_messageInfo_MsgUpdateMarketPricesResponse proto.InternalMessageInfo

func init() {
	proto.RegisterType((*MsgUpdateMarketPrices)(nil), "dydxprotocol.prices.MsgUpdateMarketPrices")
	proto.RegisterType((*MsgUpdateMarketPrices_MarketPrice)(nil), "dydxprotocol.prices.MsgUpdateMarketPrices.MarketPrice")
	proto.RegisterType((*MsgUpdateMarketPricesResponse)(nil), "dydxprotocol.prices.MsgUpdateMarketPricesResponse")
}

func init() { proto.RegisterFile("dydxprotocol/prices/tx.proto", fileDescriptor_70ca248e15be37c4) }

var fileDescriptor_70ca248e15be37c4 = []byte{
	// 258 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xe2, 0x92, 0x49, 0xa9, 0x4c, 0xa9,
	0x28, 0x28, 0xca, 0x2f, 0xc9, 0x4f, 0xce, 0xcf, 0xd1, 0x2f, 0x28, 0xca, 0x4c, 0x4e, 0x2d, 0xd6,
	0x2f, 0xa9, 0xd0, 0x03, 0x0b, 0x09, 0x09, 0x23, 0xcb, 0xea, 0x41, 0x64, 0x95, 0x0e, 0x33, 0x72,
	0x89, 0xfa, 0x16, 0xa7, 0x87, 0x16, 0xa4, 0x24, 0x96, 0xa4, 0xfa, 0x26, 0x16, 0x65, 0xa7, 0x96,
	0x04, 0x80, 0x65, 0x84, 0x32, 0xb8, 0x44, 0x72, 0xc1, 0xfc, 0x78, 0xb0, 0xd2, 0xf8, 0x52, 0xb0,
	0x92, 0x62, 0x09, 0x46, 0x05, 0x66, 0x0d, 0x6e, 0x23, 0x33, 0x3d, 0x2c, 0xa6, 0xe9, 0x61, 0x35,
	0x49, 0x0f, 0x89, 0x13, 0x24, 0x94, 0x8b, 0xe0, 0x40, 0x94, 0x16, 0x4b, 0x39, 0x70, 0x71, 0x23,
	0x29, 0x11, 0x92, 0xe6, 0xe2, 0x84, 0x5a, 0x9c, 0x99, 0x22, 0xc1, 0xa8, 0xc0, 0xa8, 0xc1, 0x1b,
	0xc4, 0x01, 0x11, 0xf0, 0x4c, 0x11, 0x12, 0xe1, 0x62, 0x05, 0xdb, 0x25, 0xc1, 0xa4, 0xc0, 0xa8,
	0xc1, 0x12, 0x04, 0xe1, 0x28, 0xc9, 0x73, 0xc9, 0x62, 0xb5, 0x3a, 0x28, 0xb5, 0xb8, 0x20, 0x3f,
	0xaf, 0x38, 0xd5, 0xa8, 0x9a, 0x8b, 0xd9, 0xb7, 0x38, 0x5d, 0xa8, 0x84, 0x4b, 0x08, 0x8b, 0x4f,
	0xb5, 0x88, 0xf7, 0x8b, 0x94, 0x11, 0xf1, 0x6a, 0x61, 0x96, 0x3b, 0x39, 0x9f, 0x78, 0x24, 0xc7,
	0x78, 0xe1, 0x91, 0x1c, 0xe3, 0x83, 0x47, 0x72, 0x8c, 0x13, 0x1e, 0xcb, 0x31, 0x5c, 0x78, 0x2c,
	0xc7, 0x70, 0xe3, 0xb1, 0x1c, 0x43, 0x94, 0x66, 0x7a, 0x66, 0x49, 0x46, 0x69, 0x92, 0x5e, 0x72,
	0x7e, 0xae, 0x3e, 0x4a, 0xdc, 0x95, 0x99, 0xe8, 0x57, 0xc0, 0x23, 0xb0, 0xb2, 0x20, 0xb5, 0x38,
	0x89, 0x0d, 0x2c, 0x67, 0x0c, 0x08, 0x00, 0x00, 0xff, 0xff, 0xdd, 0x8d, 0x69, 0x34, 0xe4, 0x01,
	0x00, 0x00,
}

// Reference imports to suppress errors if they are not otherwise used.
var _ context.Context
var _ grpc.ClientConn

// This is a compile-time assertion to ensure that this generated file
// is compatible with the grpc package it is being compiled against.
const _ = grpc.SupportPackageIsVersion4

// MsgClient is the client API for Msg service.
//
// For semantics around ctx use and closing/ending streaming RPCs, please refer to https://godoc.org/google.golang.org/grpc#ClientConn.NewStream.
type MsgClient interface {
	// UpdateMarketPrices updates the oracle price of a market relative to
	// quoteCurrency.
	UpdateMarketPrices(ctx context.Context, in *MsgUpdateMarketPrices, opts ...grpc.CallOption) (*MsgUpdateMarketPricesResponse, error)
}

type msgClient struct {
	cc grpc1.ClientConn
}

func NewMsgClient(cc grpc1.ClientConn) MsgClient {
	return &msgClient{cc}
}

func (c *msgClient) UpdateMarketPrices(ctx context.Context, in *MsgUpdateMarketPrices, opts ...grpc.CallOption) (*MsgUpdateMarketPricesResponse, error) {
	out := new(MsgUpdateMarketPricesResponse)
	err := c.cc.Invoke(ctx, "/dydxprotocol.prices.Msg/UpdateMarketPrices", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

// MsgServer is the server API for Msg service.
type MsgServer interface {
	// UpdateMarketPrices updates the oracle price of a market relative to
	// quoteCurrency.
	UpdateMarketPrices(context.Context, *MsgUpdateMarketPrices) (*MsgUpdateMarketPricesResponse, error)
}

// UnimplementedMsgServer can be embedded to have forward compatible implementations.
type UnimplementedMsgServer struct {
}

func (*UnimplementedMsgServer) UpdateMarketPrices(ctx context.Context, req *MsgUpdateMarketPrices) (*MsgUpdateMarketPricesResponse, error) {
	return nil, status.Errorf(codes.Unimplemented, "method UpdateMarketPrices not implemented")
}

func RegisterMsgServer(s grpc1.Server, srv MsgServer) {
	s.RegisterService(&_Msg_serviceDesc, srv)
}

func _Msg_UpdateMarketPrices_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(MsgUpdateMarketPrices)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(MsgServer).UpdateMarketPrices(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/dydxprotocol.prices.Msg/UpdateMarketPrices",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(MsgServer).UpdateMarketPrices(ctx, req.(*MsgUpdateMarketPrices))
	}
	return interceptor(ctx, in, info, handler)
}

var _Msg_serviceDesc = grpc.ServiceDesc{
	ServiceName: "dydxprotocol.prices.Msg",
	HandlerType: (*MsgServer)(nil),
	Methods: []grpc.MethodDesc{
		{
			MethodName: "UpdateMarketPrices",
			Handler:    _Msg_UpdateMarketPrices_Handler,
		},
	},
	Streams:  []grpc.StreamDesc{},
	Metadata: "dydxprotocol/prices/tx.proto",
}

func (m *MsgUpdateMarketPrices) Marshal() (dAtA []byte, err error) {
	size := m.Size()
	dAtA = make([]byte, size)
	n, err := m.MarshalToSizedBuffer(dAtA[:size])
	if err != nil {
		return nil, err
	}
	return dAtA[:n], nil
}

func (m *MsgUpdateMarketPrices) MarshalTo(dAtA []byte) (int, error) {
	size := m.Size()
	return m.MarshalToSizedBuffer(dAtA[:size])
}

func (m *MsgUpdateMarketPrices) MarshalToSizedBuffer(dAtA []byte) (int, error) {
	i := len(dAtA)
	_ = i
	var l int
	_ = l
	if len(m.MarketPriceUpdates) > 0 {
		for iNdEx := len(m.MarketPriceUpdates) - 1; iNdEx >= 0; iNdEx-- {
			{
				size, err := m.MarketPriceUpdates[iNdEx].MarshalToSizedBuffer(dAtA[:i])
				if err != nil {
					return 0, err
				}
				i -= size
				i = encodeVarintTx(dAtA, i, uint64(size))
			}
			i--
			dAtA[i] = 0xa
		}
	}
	return len(dAtA) - i, nil
}

func (m *MsgUpdateMarketPrices_MarketPrice) Marshal() (dAtA []byte, err error) {
	size := m.Size()
	dAtA = make([]byte, size)
	n, err := m.MarshalToSizedBuffer(dAtA[:size])
	if err != nil {
		return nil, err
	}
	return dAtA[:n], nil
}

func (m *MsgUpdateMarketPrices_MarketPrice) MarshalTo(dAtA []byte) (int, error) {
	size := m.Size()
	return m.MarshalToSizedBuffer(dAtA[:size])
}

func (m *MsgUpdateMarketPrices_MarketPrice) MarshalToSizedBuffer(dAtA []byte) (int, error) {
	i := len(dAtA)
	_ = i
	var l int
	_ = l
	if m.Price != 0 {
		i = encodeVarintTx(dAtA, i, uint64(m.Price))
		i--
		dAtA[i] = 0x10
	}
	if m.MarketId != 0 {
		i = encodeVarintTx(dAtA, i, uint64(m.MarketId))
		i--
		dAtA[i] = 0x8
	}
	return len(dAtA) - i, nil
}

func (m *MsgUpdateMarketPricesResponse) Marshal() (dAtA []byte, err error) {
	size := m.Size()
	dAtA = make([]byte, size)
	n, err := m.MarshalToSizedBuffer(dAtA[:size])
	if err != nil {
		return nil, err
	}
	return dAtA[:n], nil
}

func (m *MsgUpdateMarketPricesResponse) MarshalTo(dAtA []byte) (int, error) {
	size := m.Size()
	return m.MarshalToSizedBuffer(dAtA[:size])
}

func (m *MsgUpdateMarketPricesResponse) MarshalToSizedBuffer(dAtA []byte) (int, error) {
	i := len(dAtA)
	_ = i
	var l int
	_ = l
	return len(dAtA) - i, nil
}

func encodeVarintTx(dAtA []byte, offset int, v uint64) int {
	offset -= sovTx(v)
	base := offset
	for v >= 1<<7 {
		dAtA[offset] = uint8(v&0x7f | 0x80)
		v >>= 7
		offset++
	}
	dAtA[offset] = uint8(v)
	return base
}
func (m *MsgUpdateMarketPrices) Size() (n int) {
	if m == nil {
		return 0
	}
	var l int
	_ = l
	if len(m.MarketPriceUpdates) > 0 {
		for _, e := range m.MarketPriceUpdates {
			l = e.Size()
			n += 1 + l + sovTx(uint64(l))
		}
	}
	return n
}

func (m *MsgUpdateMarketPrices_MarketPrice) Size() (n int) {
	if m == nil {
		return 0
	}
	var l int
	_ = l
	if m.MarketId != 0 {
		n += 1 + sovTx(uint64(m.MarketId))
	}
	if m.Price != 0 {
		n += 1 + sovTx(uint64(m.Price))
	}
	return n
}

func (m *MsgUpdateMarketPricesResponse) Size() (n int) {
	if m == nil {
		return 0
	}
	var l int
	_ = l
	return n
}

func sovTx(x uint64) (n int) {
	return (math_bits.Len64(x|1) + 6) / 7
}
func sozTx(x uint64) (n int) {
	return sovTx(uint64((x << 1) ^ uint64((int64(x) >> 63))))
}
func (m *MsgUpdateMarketPrices) Unmarshal(dAtA []byte) error {
	l := len(dAtA)
	iNdEx := 0
	for iNdEx < l {
		preIndex := iNdEx
		var wire uint64
		for shift := uint(0); ; shift += 7 {
			if shift >= 64 {
				return ErrIntOverflowTx
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
			return fmt.Errorf("proto: MsgUpdateMarketPrices: wiretype end group for non-group")
		}
		if fieldNum <= 0 {
			return fmt.Errorf("proto: MsgUpdateMarketPrices: illegal tag %d (wire type %d)", fieldNum, wire)
		}
		switch fieldNum {
		case 1:
			if wireType != 2 {
				return fmt.Errorf("proto: wrong wireType = %d for field MarketPriceUpdates", wireType)
			}
			var msglen int
			for shift := uint(0); ; shift += 7 {
				if shift >= 64 {
					return ErrIntOverflowTx
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
				return ErrInvalidLengthTx
			}
			postIndex := iNdEx + msglen
			if postIndex < 0 {
				return ErrInvalidLengthTx
			}
			if postIndex > l {
				return io.ErrUnexpectedEOF
			}
			m.MarketPriceUpdates = append(m.MarketPriceUpdates, &MsgUpdateMarketPrices_MarketPrice{})
			if err := m.MarketPriceUpdates[len(m.MarketPriceUpdates)-1].Unmarshal(dAtA[iNdEx:postIndex]); err != nil {
				return err
			}
			iNdEx = postIndex
		default:
			iNdEx = preIndex
			skippy, err := skipTx(dAtA[iNdEx:])
			if err != nil {
				return err
			}
			if (skippy < 0) || (iNdEx+skippy) < 0 {
				return ErrInvalidLengthTx
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
func (m *MsgUpdateMarketPrices_MarketPrice) Unmarshal(dAtA []byte) error {
	l := len(dAtA)
	iNdEx := 0
	for iNdEx < l {
		preIndex := iNdEx
		var wire uint64
		for shift := uint(0); ; shift += 7 {
			if shift >= 64 {
				return ErrIntOverflowTx
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
			return fmt.Errorf("proto: MarketPrice: wiretype end group for non-group")
		}
		if fieldNum <= 0 {
			return fmt.Errorf("proto: MarketPrice: illegal tag %d (wire type %d)", fieldNum, wire)
		}
		switch fieldNum {
		case 1:
			if wireType != 0 {
				return fmt.Errorf("proto: wrong wireType = %d for field MarketId", wireType)
			}
			m.MarketId = 0
			for shift := uint(0); ; shift += 7 {
				if shift >= 64 {
					return ErrIntOverflowTx
				}
				if iNdEx >= l {
					return io.ErrUnexpectedEOF
				}
				b := dAtA[iNdEx]
				iNdEx++
				m.MarketId |= uint32(b&0x7F) << shift
				if b < 0x80 {
					break
				}
			}
		case 2:
			if wireType != 0 {
				return fmt.Errorf("proto: wrong wireType = %d for field Price", wireType)
			}
			m.Price = 0
			for shift := uint(0); ; shift += 7 {
				if shift >= 64 {
					return ErrIntOverflowTx
				}
				if iNdEx >= l {
					return io.ErrUnexpectedEOF
				}
				b := dAtA[iNdEx]
				iNdEx++
				m.Price |= uint64(b&0x7F) << shift
				if b < 0x80 {
					break
				}
			}
		default:
			iNdEx = preIndex
			skippy, err := skipTx(dAtA[iNdEx:])
			if err != nil {
				return err
			}
			if (skippy < 0) || (iNdEx+skippy) < 0 {
				return ErrInvalidLengthTx
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
func (m *MsgUpdateMarketPricesResponse) Unmarshal(dAtA []byte) error {
	l := len(dAtA)
	iNdEx := 0
	for iNdEx < l {
		preIndex := iNdEx
		var wire uint64
		for shift := uint(0); ; shift += 7 {
			if shift >= 64 {
				return ErrIntOverflowTx
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
			return fmt.Errorf("proto: MsgUpdateMarketPricesResponse: wiretype end group for non-group")
		}
		if fieldNum <= 0 {
			return fmt.Errorf("proto: MsgUpdateMarketPricesResponse: illegal tag %d (wire type %d)", fieldNum, wire)
		}
		switch fieldNum {
		default:
			iNdEx = preIndex
			skippy, err := skipTx(dAtA[iNdEx:])
			if err != nil {
				return err
			}
			if (skippy < 0) || (iNdEx+skippy) < 0 {
				return ErrInvalidLengthTx
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
func skipTx(dAtA []byte) (n int, err error) {
	l := len(dAtA)
	iNdEx := 0
	depth := 0
	for iNdEx < l {
		var wire uint64
		for shift := uint(0); ; shift += 7 {
			if shift >= 64 {
				return 0, ErrIntOverflowTx
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
					return 0, ErrIntOverflowTx
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
					return 0, ErrIntOverflowTx
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
				return 0, ErrInvalidLengthTx
			}
			iNdEx += length
		case 3:
			depth++
		case 4:
			if depth == 0 {
				return 0, ErrUnexpectedEndOfGroupTx
			}
			depth--
		case 5:
			iNdEx += 4
		default:
			return 0, fmt.Errorf("proto: illegal wireType %d", wireType)
		}
		if iNdEx < 0 {
			return 0, ErrInvalidLengthTx
		}
		if depth == 0 {
			return iNdEx, nil
		}
	}
	return 0, io.ErrUnexpectedEOF
}

var (
	ErrInvalidLengthTx        = fmt.Errorf("proto: negative length found during unmarshaling")
	ErrIntOverflowTx          = fmt.Errorf("proto: integer overflow")
	ErrUnexpectedEndOfGroupTx = fmt.Errorf("proto: unexpected end of group")
)