// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dydxprotocol/clob/liquidations.proto

#include "dydxprotocol/clob/liquidations.pb.h"

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
namespace clob {
template <typename>
PROTOBUF_CONSTEXPR PerpetualLiquidationInfo::PerpetualLiquidationInfo(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.subaccount_id_)*/nullptr
  , /*decltype(_impl_.perpetual_id_)*/ 0u
} {}
struct PerpetualLiquidationInfoDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PerpetualLiquidationInfoDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~PerpetualLiquidationInfoDefaultTypeInternal() {}
  union {
    PerpetualLiquidationInfo _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PerpetualLiquidationInfoDefaultTypeInternal _PerpetualLiquidationInfo_default_instance_;
template <typename>
PROTOBUF_CONSTEXPR SubaccountLiquidationInfo::SubaccountLiquidationInfo(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.perpetuals_liquidated_)*/ {}
  ,/* _impl_._perpetuals_liquidated_cached_byte_size_ = */ { 0 }

  , /*decltype(_impl_.notional_liquidated_)*/ ::uint64_t{0u}

  , /*decltype(_impl_.quantums_insurance_lost_)*/ ::uint64_t{0u}

  , /*decltype(_impl_._cached_size_)*/{}} {}
struct SubaccountLiquidationInfoDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SubaccountLiquidationInfoDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~SubaccountLiquidationInfoDefaultTypeInternal() {}
  union {
    SubaccountLiquidationInfo _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SubaccountLiquidationInfoDefaultTypeInternal _SubaccountLiquidationInfo_default_instance_;
}  // namespace clob
}  // namespace dydxprotocol
static ::_pb::Metadata file_level_metadata_dydxprotocol_2fclob_2fliquidations_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_dydxprotocol_2fclob_2fliquidations_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_dydxprotocol_2fclob_2fliquidations_2eproto = nullptr;
const ::uint32_t TableStruct_dydxprotocol_2fclob_2fliquidations_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::clob::PerpetualLiquidationInfo, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::clob::PerpetualLiquidationInfo, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::clob::PerpetualLiquidationInfo, _impl_.subaccount_id_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::clob::PerpetualLiquidationInfo, _impl_.perpetual_id_),
    0,
    ~0u,
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::clob::SubaccountLiquidationInfo, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::clob::SubaccountLiquidationInfo, _impl_.perpetuals_liquidated_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::clob::SubaccountLiquidationInfo, _impl_.notional_liquidated_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::clob::SubaccountLiquidationInfo, _impl_.quantums_insurance_lost_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, 10, -1, sizeof(::dydxprotocol::clob::PerpetualLiquidationInfo)},
        { 12, -1, -1, sizeof(::dydxprotocol::clob::SubaccountLiquidationInfo)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::dydxprotocol::clob::_PerpetualLiquidationInfo_default_instance_._instance,
    &::dydxprotocol::clob::_SubaccountLiquidationInfo_default_instance_._instance,
};
const char descriptor_table_protodef_dydxprotocol_2fclob_2fliquidations_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n$dydxprotocol/clob/liquidations.proto\022\021"
    "dydxprotocol.clob\032\024gogoproto/gogo.proto\032"
    ")dydxprotocol/subaccounts/subaccount.pro"
    "to\"u\n\030PerpetualLiquidationInfo\022C\n\rsubacc"
    "ount_id\030\001 \001(\0132&.dydxprotocol.subaccounts"
    ".SubaccountIdB\004\310\336\037\000\022\024\n\014perpetual_id\030\002 \001("
    "\r\"x\n\031SubaccountLiquidationInfo\022\035\n\025perpet"
    "uals_liquidated\030\001 \003(\r\022\033\n\023notional_liquid"
    "ated\030\002 \001(\004\022\037\n\027quantums_insurance_lost\030\003 "
    "\001(\004B8Z6github.com/dydxprotocol/v4-chain/"
    "protocol/x/clob/typesb\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_dydxprotocol_2fclob_2fliquidations_2eproto_deps[2] =
    {
        &::descriptor_table_dydxprotocol_2fsubaccounts_2fsubaccount_2eproto,
        &::descriptor_table_gogoproto_2fgogo_2eproto,
};
static ::absl::once_flag descriptor_table_dydxprotocol_2fclob_2fliquidations_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_dydxprotocol_2fclob_2fliquidations_2eproto = {
    false,
    false,
    429,
    descriptor_table_protodef_dydxprotocol_2fclob_2fliquidations_2eproto,
    "dydxprotocol/clob/liquidations.proto",
    &descriptor_table_dydxprotocol_2fclob_2fliquidations_2eproto_once,
    descriptor_table_dydxprotocol_2fclob_2fliquidations_2eproto_deps,
    2,
    2,
    schemas,
    file_default_instances,
    TableStruct_dydxprotocol_2fclob_2fliquidations_2eproto::offsets,
    file_level_metadata_dydxprotocol_2fclob_2fliquidations_2eproto,
    file_level_enum_descriptors_dydxprotocol_2fclob_2fliquidations_2eproto,
    file_level_service_descriptors_dydxprotocol_2fclob_2fliquidations_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_dydxprotocol_2fclob_2fliquidations_2eproto_getter() {
  return &descriptor_table_dydxprotocol_2fclob_2fliquidations_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_dydxprotocol_2fclob_2fliquidations_2eproto(&descriptor_table_dydxprotocol_2fclob_2fliquidations_2eproto);
namespace dydxprotocol {
namespace clob {
// ===================================================================

class PerpetualLiquidationInfo::_Internal {
 public:
  using HasBits = decltype(std::declval<PerpetualLiquidationInfo>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(PerpetualLiquidationInfo, _impl_._has_bits_);
  static const ::dydxprotocol::subaccounts::SubaccountId& subaccount_id(const PerpetualLiquidationInfo* msg);
  static void set_has_subaccount_id(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::dydxprotocol::subaccounts::SubaccountId&
PerpetualLiquidationInfo::_Internal::subaccount_id(const PerpetualLiquidationInfo* msg) {
  return *msg->_impl_.subaccount_id_;
}
void PerpetualLiquidationInfo::clear_subaccount_id() {
  if (_impl_.subaccount_id_ != nullptr) _impl_.subaccount_id_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
PerpetualLiquidationInfo::PerpetualLiquidationInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:dydxprotocol.clob.PerpetualLiquidationInfo)
}
PerpetualLiquidationInfo::PerpetualLiquidationInfo(const PerpetualLiquidationInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  PerpetualLiquidationInfo* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.subaccount_id_){nullptr}
    , decltype(_impl_.perpetual_id_) {}
  };

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.subaccount_id_ = new ::dydxprotocol::subaccounts::SubaccountId(*from._impl_.subaccount_id_);
  }
  _this->_impl_.perpetual_id_ = from._impl_.perpetual_id_;
  // @@protoc_insertion_point(copy_constructor:dydxprotocol.clob.PerpetualLiquidationInfo)
}

inline void PerpetualLiquidationInfo::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.subaccount_id_){nullptr}
    , decltype(_impl_.perpetual_id_) { 0u }

  };
}

PerpetualLiquidationInfo::~PerpetualLiquidationInfo() {
  // @@protoc_insertion_point(destructor:dydxprotocol.clob.PerpetualLiquidationInfo)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void PerpetualLiquidationInfo::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.subaccount_id_;
}

void PerpetualLiquidationInfo::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void PerpetualLiquidationInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:dydxprotocol.clob.PerpetualLiquidationInfo)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ABSL_DCHECK(_impl_.subaccount_id_ != nullptr);
    _impl_.subaccount_id_->Clear();
  }
  _impl_.perpetual_id_ = 0u;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PerpetualLiquidationInfo::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .dydxprotocol.subaccounts.SubaccountId subaccount_id = 1 [(.gogoproto.nullable) = false];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_subaccount_id(), ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // uint32 perpetual_id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 16)) {
          _impl_.perpetual_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* PerpetualLiquidationInfo::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:dydxprotocol.clob.PerpetualLiquidationInfo)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // .dydxprotocol.subaccounts.SubaccountId subaccount_id = 1 [(.gogoproto.nullable) = false];
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::subaccount_id(this),
        _Internal::subaccount_id(this).GetCachedSize(), target, stream);
  }

  // uint32 perpetual_id = 2;
  if (this->_internal_perpetual_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        2, this->_internal_perpetual_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:dydxprotocol.clob.PerpetualLiquidationInfo)
  return target;
}

::size_t PerpetualLiquidationInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:dydxprotocol.clob.PerpetualLiquidationInfo)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .dydxprotocol.subaccounts.SubaccountId subaccount_id = 1 [(.gogoproto.nullable) = false];
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.subaccount_id_);
  }

  // uint32 perpetual_id = 2;
  if (this->_internal_perpetual_id() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
        this->_internal_perpetual_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData PerpetualLiquidationInfo::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    PerpetualLiquidationInfo::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*PerpetualLiquidationInfo::GetClassData() const { return &_class_data_; }


void PerpetualLiquidationInfo::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<PerpetualLiquidationInfo*>(&to_msg);
  auto& from = static_cast<const PerpetualLiquidationInfo&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:dydxprotocol.clob.PerpetualLiquidationInfo)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_internal_mutable_subaccount_id()->::dydxprotocol::subaccounts::SubaccountId::MergeFrom(
        from._internal_subaccount_id());
  }
  if (from._internal_perpetual_id() != 0) {
    _this->_internal_set_perpetual_id(from._internal_perpetual_id());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void PerpetualLiquidationInfo::CopyFrom(const PerpetualLiquidationInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dydxprotocol.clob.PerpetualLiquidationInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PerpetualLiquidationInfo::IsInitialized() const {
  return true;
}

void PerpetualLiquidationInfo::InternalSwap(PerpetualLiquidationInfo* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(PerpetualLiquidationInfo, _impl_.perpetual_id_)
      + sizeof(PerpetualLiquidationInfo::_impl_.perpetual_id_)
      - PROTOBUF_FIELD_OFFSET(PerpetualLiquidationInfo, _impl_.subaccount_id_)>(
          reinterpret_cast<char*>(&_impl_.subaccount_id_),
          reinterpret_cast<char*>(&other->_impl_.subaccount_id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata PerpetualLiquidationInfo::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_dydxprotocol_2fclob_2fliquidations_2eproto_getter, &descriptor_table_dydxprotocol_2fclob_2fliquidations_2eproto_once,
      file_level_metadata_dydxprotocol_2fclob_2fliquidations_2eproto[0]);
}
// ===================================================================

class SubaccountLiquidationInfo::_Internal {
 public:
};

SubaccountLiquidationInfo::SubaccountLiquidationInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:dydxprotocol.clob.SubaccountLiquidationInfo)
}
SubaccountLiquidationInfo::SubaccountLiquidationInfo(const SubaccountLiquidationInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SubaccountLiquidationInfo* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.perpetuals_liquidated_) { from._impl_.perpetuals_liquidated_ }
    ,/* _impl_._perpetuals_liquidated_cached_byte_size_ = */ { 0 }

    , decltype(_impl_.notional_liquidated_) {}

    , decltype(_impl_.quantums_insurance_lost_) {}

    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.notional_liquidated_, &from._impl_.notional_liquidated_,
    static_cast<::size_t>(reinterpret_cast<char*>(&_impl_.quantums_insurance_lost_) -
    reinterpret_cast<char*>(&_impl_.notional_liquidated_)) + sizeof(_impl_.quantums_insurance_lost_));
  // @@protoc_insertion_point(copy_constructor:dydxprotocol.clob.SubaccountLiquidationInfo)
}

inline void SubaccountLiquidationInfo::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.perpetuals_liquidated_) { arena }
    ,/* _impl_._perpetuals_liquidated_cached_byte_size_ = */ { 0 }

    , decltype(_impl_.notional_liquidated_) { ::uint64_t{0u} }

    , decltype(_impl_.quantums_insurance_lost_) { ::uint64_t{0u} }

    , /*decltype(_impl_._cached_size_)*/{}
  };
}

SubaccountLiquidationInfo::~SubaccountLiquidationInfo() {
  // @@protoc_insertion_point(destructor:dydxprotocol.clob.SubaccountLiquidationInfo)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SubaccountLiquidationInfo::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.perpetuals_liquidated_.~RepeatedField();
}

void SubaccountLiquidationInfo::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SubaccountLiquidationInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:dydxprotocol.clob.SubaccountLiquidationInfo)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_mutable_perpetuals_liquidated()->Clear();
  ::memset(&_impl_.notional_liquidated_, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.quantums_insurance_lost_) -
      reinterpret_cast<char*>(&_impl_.notional_liquidated_)) + sizeof(_impl_.quantums_insurance_lost_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SubaccountLiquidationInfo::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated uint32 perpetuals_liquidated = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedUInt32Parser(_internal_mutable_perpetuals_liquidated(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::uint8_t>(tag) == 8) {
          _internal_add_perpetuals_liquidated(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr));
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // uint64 notional_liquidated = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 16)) {
          _impl_.notional_liquidated_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // uint64 quantums_insurance_lost = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 24)) {
          _impl_.quantums_insurance_lost_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::uint8_t* SubaccountLiquidationInfo::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:dydxprotocol.clob.SubaccountLiquidationInfo)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 perpetuals_liquidated = 1;
  {
    int byte_size = _impl_._perpetuals_liquidated_cached_byte_size_.Get();
    if (byte_size > 0) {
      target = stream->WriteUInt32Packed(1, _internal_perpetuals_liquidated(),
                                                 byte_size, target);
    }
  }

  // uint64 notional_liquidated = 2;
  if (this->_internal_notional_liquidated() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        2, this->_internal_notional_liquidated(), target);
  }

  // uint64 quantums_insurance_lost = 3;
  if (this->_internal_quantums_insurance_lost() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        3, this->_internal_quantums_insurance_lost(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:dydxprotocol.clob.SubaccountLiquidationInfo)
  return target;
}

::size_t SubaccountLiquidationInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:dydxprotocol.clob.SubaccountLiquidationInfo)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated uint32 perpetuals_liquidated = 1;
  {
    std::size_t data_size = ::_pbi::WireFormatLite::UInt32Size(
        this->_internal_perpetuals_liquidated())
    ;
    _impl_._perpetuals_liquidated_cached_byte_size_.Set(::_pbi::ToCachedSize(data_size));
    std::size_t tag_size = data_size == 0
        ? 0
        : 1 + ::_pbi::WireFormatLite::Int32Size(
                            static_cast<int32_t>(data_size))
    ;
    total_size += tag_size + data_size;
  }

  // uint64 notional_liquidated = 2;
  if (this->_internal_notional_liquidated() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
        this->_internal_notional_liquidated());
  }

  // uint64 quantums_insurance_lost = 3;
  if (this->_internal_quantums_insurance_lost() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
        this->_internal_quantums_insurance_lost());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SubaccountLiquidationInfo::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SubaccountLiquidationInfo::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SubaccountLiquidationInfo::GetClassData() const { return &_class_data_; }


void SubaccountLiquidationInfo::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SubaccountLiquidationInfo*>(&to_msg);
  auto& from = static_cast<const SubaccountLiquidationInfo&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:dydxprotocol.clob.SubaccountLiquidationInfo)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.perpetuals_liquidated_.MergeFrom(from._impl_.perpetuals_liquidated_);
  if (from._internal_notional_liquidated() != 0) {
    _this->_internal_set_notional_liquidated(from._internal_notional_liquidated());
  }
  if (from._internal_quantums_insurance_lost() != 0) {
    _this->_internal_set_quantums_insurance_lost(from._internal_quantums_insurance_lost());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SubaccountLiquidationInfo::CopyFrom(const SubaccountLiquidationInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dydxprotocol.clob.SubaccountLiquidationInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SubaccountLiquidationInfo::IsInitialized() const {
  return true;
}

void SubaccountLiquidationInfo::InternalSwap(SubaccountLiquidationInfo* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.perpetuals_liquidated_.InternalSwap(&other->_impl_.perpetuals_liquidated_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(SubaccountLiquidationInfo, _impl_.quantums_insurance_lost_)
      + sizeof(SubaccountLiquidationInfo::_impl_.quantums_insurance_lost_)
      - PROTOBUF_FIELD_OFFSET(SubaccountLiquidationInfo, _impl_.notional_liquidated_)>(
          reinterpret_cast<char*>(&_impl_.notional_liquidated_),
          reinterpret_cast<char*>(&other->_impl_.notional_liquidated_));
}

::PROTOBUF_NAMESPACE_ID::Metadata SubaccountLiquidationInfo::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_dydxprotocol_2fclob_2fliquidations_2eproto_getter, &descriptor_table_dydxprotocol_2fclob_2fliquidations_2eproto_once,
      file_level_metadata_dydxprotocol_2fclob_2fliquidations_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace clob
}  // namespace dydxprotocol
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::dydxprotocol::clob::PerpetualLiquidationInfo*
Arena::CreateMaybeMessage< ::dydxprotocol::clob::PerpetualLiquidationInfo >(Arena* arena) {
  return Arena::CreateMessageInternal< ::dydxprotocol::clob::PerpetualLiquidationInfo >(arena);
}
template<> PROTOBUF_NOINLINE ::dydxprotocol::clob::SubaccountLiquidationInfo*
Arena::CreateMaybeMessage< ::dydxprotocol::clob::SubaccountLiquidationInfo >(Arena* arena) {
  return Arena::CreateMessageInternal< ::dydxprotocol::clob::SubaccountLiquidationInfo >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
