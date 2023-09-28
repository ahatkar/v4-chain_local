// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dydxprotocol/subaccounts/perpetual_position.proto

#include "dydxprotocol/subaccounts/perpetual_position.pb.h"

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
namespace subaccounts {
template <typename>
PROTOBUF_CONSTEXPR PerpetualPosition::PerpetualPosition(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.quantums_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.funding_index_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.perpetual_id_)*/ 0u

  , /*decltype(_impl_._cached_size_)*/{}} {}
struct PerpetualPositionDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PerpetualPositionDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~PerpetualPositionDefaultTypeInternal() {}
  union {
    PerpetualPosition _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PerpetualPositionDefaultTypeInternal _PerpetualPosition_default_instance_;
}  // namespace subaccounts
}  // namespace dydxprotocol
static ::_pb::Metadata file_level_metadata_dydxprotocol_2fsubaccounts_2fperpetual_5fposition_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_dydxprotocol_2fsubaccounts_2fperpetual_5fposition_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_dydxprotocol_2fsubaccounts_2fperpetual_5fposition_2eproto = nullptr;
const ::uint32_t TableStruct_dydxprotocol_2fsubaccounts_2fperpetual_5fposition_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::subaccounts::PerpetualPosition, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::subaccounts::PerpetualPosition, _impl_.perpetual_id_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::subaccounts::PerpetualPosition, _impl_.quantums_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::subaccounts::PerpetualPosition, _impl_.funding_index_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, -1, -1, sizeof(::dydxprotocol::subaccounts::PerpetualPosition)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::dydxprotocol::subaccounts::_PerpetualPosition_default_instance_._instance,
};
const char descriptor_table_protodef_dydxprotocol_2fsubaccounts_2fperpetual_5fposition_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n1dydxprotocol/subaccounts/perpetual_pos"
    "ition.proto\022\030dydxprotocol.subaccounts\032\024g"
    "ogoproto/gogo.proto\"\346\001\n\021PerpetualPositio"
    "n\022\024\n\014perpetual_id\030\001 \001(\r\022Z\n\010quantums\030\002 \001("
    "\014BH\310\336\037\000\332\336\037@github.com/dydxprotocol/v4-ch"
    "ain/protocol/dtypes.SerializableInt\022_\n\rf"
    "unding_index\030\003 \001(\014BH\310\336\037\000\332\336\037@github.com/d"
    "ydxprotocol/v4-chain/protocol/dtypes.Ser"
    "ializableIntB\?Z=github.com/dydxprotocol/"
    "v4-chain/protocol/x/subaccounts/typesb\006p"
    "roto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_dydxprotocol_2fsubaccounts_2fperpetual_5fposition_2eproto_deps[1] =
    {
        &::descriptor_table_gogoproto_2fgogo_2eproto,
};
static ::absl::once_flag descriptor_table_dydxprotocol_2fsubaccounts_2fperpetual_5fposition_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_dydxprotocol_2fsubaccounts_2fperpetual_5fposition_2eproto = {
    false,
    false,
    405,
    descriptor_table_protodef_dydxprotocol_2fsubaccounts_2fperpetual_5fposition_2eproto,
    "dydxprotocol/subaccounts/perpetual_position.proto",
    &descriptor_table_dydxprotocol_2fsubaccounts_2fperpetual_5fposition_2eproto_once,
    descriptor_table_dydxprotocol_2fsubaccounts_2fperpetual_5fposition_2eproto_deps,
    1,
    1,
    schemas,
    file_default_instances,
    TableStruct_dydxprotocol_2fsubaccounts_2fperpetual_5fposition_2eproto::offsets,
    file_level_metadata_dydxprotocol_2fsubaccounts_2fperpetual_5fposition_2eproto,
    file_level_enum_descriptors_dydxprotocol_2fsubaccounts_2fperpetual_5fposition_2eproto,
    file_level_service_descriptors_dydxprotocol_2fsubaccounts_2fperpetual_5fposition_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_dydxprotocol_2fsubaccounts_2fperpetual_5fposition_2eproto_getter() {
  return &descriptor_table_dydxprotocol_2fsubaccounts_2fperpetual_5fposition_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_dydxprotocol_2fsubaccounts_2fperpetual_5fposition_2eproto(&descriptor_table_dydxprotocol_2fsubaccounts_2fperpetual_5fposition_2eproto);
namespace dydxprotocol {
namespace subaccounts {
// ===================================================================

class PerpetualPosition::_Internal {
 public:
};

PerpetualPosition::PerpetualPosition(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:dydxprotocol.subaccounts.PerpetualPosition)
}
PerpetualPosition::PerpetualPosition(const PerpetualPosition& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  PerpetualPosition* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.quantums_) {}

    , decltype(_impl_.funding_index_) {}

    , decltype(_impl_.perpetual_id_) {}

    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.quantums_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.quantums_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_quantums().empty()) {
    _this->_impl_.quantums_.Set(from._internal_quantums(), _this->GetArenaForAllocation());
  }
  _impl_.funding_index_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.funding_index_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_funding_index().empty()) {
    _this->_impl_.funding_index_.Set(from._internal_funding_index(), _this->GetArenaForAllocation());
  }
  _this->_impl_.perpetual_id_ = from._impl_.perpetual_id_;
  // @@protoc_insertion_point(copy_constructor:dydxprotocol.subaccounts.PerpetualPosition)
}

inline void PerpetualPosition::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.quantums_) {}

    , decltype(_impl_.funding_index_) {}

    , decltype(_impl_.perpetual_id_) { 0u }

    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.quantums_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.quantums_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.funding_index_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.funding_index_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

PerpetualPosition::~PerpetualPosition() {
  // @@protoc_insertion_point(destructor:dydxprotocol.subaccounts.PerpetualPosition)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void PerpetualPosition::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.quantums_.Destroy();
  _impl_.funding_index_.Destroy();
}

void PerpetualPosition::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void PerpetualPosition::Clear() {
// @@protoc_insertion_point(message_clear_start:dydxprotocol.subaccounts.PerpetualPosition)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.quantums_.ClearToEmpty();
  _impl_.funding_index_.ClearToEmpty();
  _impl_.perpetual_id_ = 0u;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PerpetualPosition::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // uint32 perpetual_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          _impl_.perpetual_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // bytes quantums = 2 [(.gogoproto.nullable) = false, (.gogoproto.customtype) = "github.com/dydxprotocol/v4-chain/protocol/dtypes.SerializableInt"];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_quantums();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // bytes funding_index = 3 [(.gogoproto.nullable) = false, (.gogoproto.customtype) = "github.com/dydxprotocol/v4-chain/protocol/dtypes.SerializableInt"];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_funding_index();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
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

::uint8_t* PerpetualPosition::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:dydxprotocol.subaccounts.PerpetualPosition)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 perpetual_id = 1;
  if (this->_internal_perpetual_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        1, this->_internal_perpetual_id(), target);
  }

  // bytes quantums = 2 [(.gogoproto.nullable) = false, (.gogoproto.customtype) = "github.com/dydxprotocol/v4-chain/protocol/dtypes.SerializableInt"];
  if (!this->_internal_quantums().empty()) {
    const std::string& _s = this->_internal_quantums();
    target = stream->WriteBytesMaybeAliased(2, _s, target);
  }

  // bytes funding_index = 3 [(.gogoproto.nullable) = false, (.gogoproto.customtype) = "github.com/dydxprotocol/v4-chain/protocol/dtypes.SerializableInt"];
  if (!this->_internal_funding_index().empty()) {
    const std::string& _s = this->_internal_funding_index();
    target = stream->WriteBytesMaybeAliased(3, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:dydxprotocol.subaccounts.PerpetualPosition)
  return target;
}

::size_t PerpetualPosition::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:dydxprotocol.subaccounts.PerpetualPosition)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes quantums = 2 [(.gogoproto.nullable) = false, (.gogoproto.customtype) = "github.com/dydxprotocol/v4-chain/protocol/dtypes.SerializableInt"];
  if (!this->_internal_quantums().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
                                    this->_internal_quantums());
  }

  // bytes funding_index = 3 [(.gogoproto.nullable) = false, (.gogoproto.customtype) = "github.com/dydxprotocol/v4-chain/protocol/dtypes.SerializableInt"];
  if (!this->_internal_funding_index().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
                                    this->_internal_funding_index());
  }

  // uint32 perpetual_id = 1;
  if (this->_internal_perpetual_id() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
        this->_internal_perpetual_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData PerpetualPosition::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    PerpetualPosition::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*PerpetualPosition::GetClassData() const { return &_class_data_; }


void PerpetualPosition::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<PerpetualPosition*>(&to_msg);
  auto& from = static_cast<const PerpetualPosition&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:dydxprotocol.subaccounts.PerpetualPosition)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_quantums().empty()) {
    _this->_internal_set_quantums(from._internal_quantums());
  }
  if (!from._internal_funding_index().empty()) {
    _this->_internal_set_funding_index(from._internal_funding_index());
  }
  if (from._internal_perpetual_id() != 0) {
    _this->_internal_set_perpetual_id(from._internal_perpetual_id());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void PerpetualPosition::CopyFrom(const PerpetualPosition& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dydxprotocol.subaccounts.PerpetualPosition)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PerpetualPosition::IsInitialized() const {
  return true;
}

void PerpetualPosition::InternalSwap(PerpetualPosition* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.quantums_, lhs_arena,
                                       &other->_impl_.quantums_, rhs_arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.funding_index_, lhs_arena,
                                       &other->_impl_.funding_index_, rhs_arena);

  swap(_impl_.perpetual_id_, other->_impl_.perpetual_id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata PerpetualPosition::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_dydxprotocol_2fsubaccounts_2fperpetual_5fposition_2eproto_getter, &descriptor_table_dydxprotocol_2fsubaccounts_2fperpetual_5fposition_2eproto_once,
      file_level_metadata_dydxprotocol_2fsubaccounts_2fperpetual_5fposition_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace subaccounts
}  // namespace dydxprotocol
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::dydxprotocol::subaccounts::PerpetualPosition*
Arena::CreateMaybeMessage< ::dydxprotocol::subaccounts::PerpetualPosition >(Arena* arena) {
  return Arena::CreateMessageInternal< ::dydxprotocol::subaccounts::PerpetualPosition >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
