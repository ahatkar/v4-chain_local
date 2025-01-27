// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dydxprotocol/prices/market_price.proto

#include "dydxprotocol/prices/market_price.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = ::PROTOBUF_NAMESPACE_ID::internal;
namespace dydxprotocol {
namespace prices {
template <typename>
PROTOBUF_CONSTEXPR MarketPrice::MarketPrice(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.id_)*/ 0u

  , /*decltype(_impl_.exponent_)*/ 0

  , /*decltype(_impl_.price_)*/ ::uint64_t{0u}

  , /*decltype(_impl_._cached_size_)*/{}} {}
struct MarketPriceDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MarketPriceDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~MarketPriceDefaultTypeInternal() {}
  union {
    MarketPrice _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MarketPriceDefaultTypeInternal _MarketPrice_default_instance_;
}  // namespace prices
}  // namespace dydxprotocol
static ::_pb::Metadata file_level_metadata_dydxprotocol_2fprices_2fmarket_5fprice_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_dydxprotocol_2fprices_2fmarket_5fprice_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_dydxprotocol_2fprices_2fmarket_5fprice_2eproto = nullptr;
const ::uint32_t TableStruct_dydxprotocol_2fprices_2fmarket_5fprice_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::prices::MarketPrice, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::prices::MarketPrice, _impl_.id_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::prices::MarketPrice, _impl_.exponent_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::prices::MarketPrice, _impl_.price_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, -1, -1, sizeof(::dydxprotocol::prices::MarketPrice)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::dydxprotocol::prices::_MarketPrice_default_instance_._instance,
};
const char descriptor_table_protodef_dydxprotocol_2fprices_2fmarket_5fprice_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n&dydxprotocol/prices/market_price.proto"
    "\022\023dydxprotocol.prices\":\n\013MarketPrice\022\n\n\002"
    "id\030\001 \001(\r\022\020\n\010exponent\030\002 \001(\021\022\r\n\005price\030\003 \001("
    "\004B:Z8github.com/dydxprotocol/v4-chain/pr"
    "otocol/x/prices/typesb\006proto3"
};
static ::absl::once_flag descriptor_table_dydxprotocol_2fprices_2fmarket_5fprice_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_dydxprotocol_2fprices_2fmarket_5fprice_2eproto = {
    false,
    false,
    189,
    descriptor_table_protodef_dydxprotocol_2fprices_2fmarket_5fprice_2eproto,
    "dydxprotocol/prices/market_price.proto",
    &descriptor_table_dydxprotocol_2fprices_2fmarket_5fprice_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_dydxprotocol_2fprices_2fmarket_5fprice_2eproto::offsets,
    file_level_metadata_dydxprotocol_2fprices_2fmarket_5fprice_2eproto,
    file_level_enum_descriptors_dydxprotocol_2fprices_2fmarket_5fprice_2eproto,
    file_level_service_descriptors_dydxprotocol_2fprices_2fmarket_5fprice_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_dydxprotocol_2fprices_2fmarket_5fprice_2eproto_getter() {
  return &descriptor_table_dydxprotocol_2fprices_2fmarket_5fprice_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_dydxprotocol_2fprices_2fmarket_5fprice_2eproto(&descriptor_table_dydxprotocol_2fprices_2fmarket_5fprice_2eproto);
namespace dydxprotocol {
namespace prices {
// ===================================================================

class MarketPrice::_Internal {
 public:
};

MarketPrice::MarketPrice(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:dydxprotocol.prices.MarketPrice)
}
MarketPrice::MarketPrice(const MarketPrice& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(), _impl_(from._impl_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:dydxprotocol.prices.MarketPrice)
}

inline void MarketPrice::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.id_) { 0u }

    , decltype(_impl_.exponent_) { 0 }

    , decltype(_impl_.price_) { ::uint64_t{0u} }

    , /*decltype(_impl_._cached_size_)*/{}
  };
}

MarketPrice::~MarketPrice() {
  // @@protoc_insertion_point(destructor:dydxprotocol.prices.MarketPrice)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void MarketPrice::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
}

void MarketPrice::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void MarketPrice::Clear() {
// @@protoc_insertion_point(message_clear_start:dydxprotocol.prices.MarketPrice)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.id_, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.price_) -
      reinterpret_cast<char*>(&_impl_.id_)) + sizeof(_impl_.price_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MarketPrice::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // uint32 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          _impl_.id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // sint32 exponent = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 16)) {
          _impl_.exponent_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarintZigZag32(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // uint64 price = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 24)) {
          _impl_.price_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* MarketPrice::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:dydxprotocol.prices.MarketPrice)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 id = 1;
  if (this->_internal_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        1, this->_internal_id(), target);
  }

  // sint32 exponent = 2;
  if (this->_internal_exponent() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteSInt32ToArray(
        2, this->_internal_exponent(), target);
  }

  // uint64 price = 3;
  if (this->_internal_price() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        3, this->_internal_price(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:dydxprotocol.prices.MarketPrice)
  return target;
}

::size_t MarketPrice::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:dydxprotocol.prices.MarketPrice)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // uint32 id = 1;
  if (this->_internal_id() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
        this->_internal_id());
  }

  // sint32 exponent = 2;
  if (this->_internal_exponent() != 0) {
    total_size += ::_pbi::WireFormatLite::SInt32SizePlusOne(
        this->_internal_exponent());
  }

  // uint64 price = 3;
  if (this->_internal_price() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
        this->_internal_price());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MarketPrice::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    MarketPrice::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MarketPrice::GetClassData() const { return &_class_data_; }


void MarketPrice::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<MarketPrice*>(&to_msg);
  auto& from = static_cast<const MarketPrice&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:dydxprotocol.prices.MarketPrice)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_id() != 0) {
    _this->_internal_set_id(from._internal_id());
  }
  if (from._internal_exponent() != 0) {
    _this->_internal_set_exponent(from._internal_exponent());
  }
  if (from._internal_price() != 0) {
    _this->_internal_set_price(from._internal_price());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MarketPrice::CopyFrom(const MarketPrice& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dydxprotocol.prices.MarketPrice)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MarketPrice::IsInitialized() const {
  return true;
}

void MarketPrice::InternalSwap(MarketPrice* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(MarketPrice, _impl_.price_)
      + sizeof(MarketPrice::_impl_.price_)
      - PROTOBUF_FIELD_OFFSET(MarketPrice, _impl_.id_)>(
          reinterpret_cast<char*>(&_impl_.id_),
          reinterpret_cast<char*>(&other->_impl_.id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata MarketPrice::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_dydxprotocol_2fprices_2fmarket_5fprice_2eproto_getter, &descriptor_table_dydxprotocol_2fprices_2fmarket_5fprice_2eproto_once,
      file_level_metadata_dydxprotocol_2fprices_2fmarket_5fprice_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace prices
}  // namespace dydxprotocol
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::dydxprotocol::prices::MarketPrice*
Arena::CreateMaybeMessage< ::dydxprotocol::prices::MarketPrice >(Arena* arena) {
  return Arena::CreateMessageInternal< ::dydxprotocol::prices::MarketPrice >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
