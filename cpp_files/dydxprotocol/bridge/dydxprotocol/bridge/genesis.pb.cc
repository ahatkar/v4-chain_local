// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dydxprotocol/bridge/genesis.proto

#include "dydxprotocol/bridge/genesis.pb.h"

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
namespace bridge {
template <typename>
PROTOBUF_CONSTEXPR GenesisState::GenesisState(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.event_params_)*/nullptr
  , /*decltype(_impl_.propose_params_)*/nullptr
  , /*decltype(_impl_.safety_params_)*/nullptr
  , /*decltype(_impl_.acknowledged_event_info_)*/nullptr} {}
struct GenesisStateDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GenesisStateDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~GenesisStateDefaultTypeInternal() {}
  union {
    GenesisState _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GenesisStateDefaultTypeInternal _GenesisState_default_instance_;
}  // namespace bridge
}  // namespace dydxprotocol
static ::_pb::Metadata file_level_metadata_dydxprotocol_2fbridge_2fgenesis_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_dydxprotocol_2fbridge_2fgenesis_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_dydxprotocol_2fbridge_2fgenesis_2eproto = nullptr;
const ::uint32_t TableStruct_dydxprotocol_2fbridge_2fgenesis_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::bridge::GenesisState, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::bridge::GenesisState, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::bridge::GenesisState, _impl_.event_params_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::bridge::GenesisState, _impl_.propose_params_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::bridge::GenesisState, _impl_.safety_params_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::bridge::GenesisState, _impl_.acknowledged_event_info_),
    0,
    1,
    2,
    3,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, 12, -1, sizeof(::dydxprotocol::bridge::GenesisState)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::dydxprotocol::bridge::_GenesisState_default_instance_._instance,
};
const char descriptor_table_protodef_dydxprotocol_2fbridge_2fgenesis_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n!dydxprotocol/bridge/genesis.proto\022\023dyd"
    "xprotocol.bridge\032\024gogoproto/gogo.proto\032+"
    "dydxprotocol/bridge/bridge_event_info.pr"
    "oto\032 dydxprotocol/bridge/params.proto\"\233\002"
    "\n\014GenesisState\022<\n\014event_params\030\001 \001(\0132 .d"
    "ydxprotocol.bridge.EventParamsB\004\310\336\037\000\022@\n\016"
    "propose_params\030\002 \001(\0132\".dydxprotocol.brid"
    "ge.ProposeParamsB\004\310\336\037\000\022>\n\rsafety_params\030"
    "\003 \001(\0132!.dydxprotocol.bridge.SafetyParams"
    "B\004\310\336\037\000\022K\n\027acknowledged_event_info\030\004 \001(\0132"
    "$.dydxprotocol.bridge.BridgeEventInfoB\004\310"
    "\336\037\000B:Z8github.com/dydxprotocol/v4-chain/"
    "protocol/x/bridge/typesb\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_dydxprotocol_2fbridge_2fgenesis_2eproto_deps[3] =
    {
        &::descriptor_table_dydxprotocol_2fbridge_2fbridge_5fevent_5finfo_2eproto,
        &::descriptor_table_dydxprotocol_2fbridge_2fparams_2eproto,
        &::descriptor_table_gogoproto_2fgogo_2eproto,
};
static ::absl::once_flag descriptor_table_dydxprotocol_2fbridge_2fgenesis_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_dydxprotocol_2fbridge_2fgenesis_2eproto = {
    false,
    false,
    511,
    descriptor_table_protodef_dydxprotocol_2fbridge_2fgenesis_2eproto,
    "dydxprotocol/bridge/genesis.proto",
    &descriptor_table_dydxprotocol_2fbridge_2fgenesis_2eproto_once,
    descriptor_table_dydxprotocol_2fbridge_2fgenesis_2eproto_deps,
    3,
    1,
    schemas,
    file_default_instances,
    TableStruct_dydxprotocol_2fbridge_2fgenesis_2eproto::offsets,
    file_level_metadata_dydxprotocol_2fbridge_2fgenesis_2eproto,
    file_level_enum_descriptors_dydxprotocol_2fbridge_2fgenesis_2eproto,
    file_level_service_descriptors_dydxprotocol_2fbridge_2fgenesis_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_dydxprotocol_2fbridge_2fgenesis_2eproto_getter() {
  return &descriptor_table_dydxprotocol_2fbridge_2fgenesis_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_dydxprotocol_2fbridge_2fgenesis_2eproto(&descriptor_table_dydxprotocol_2fbridge_2fgenesis_2eproto);
namespace dydxprotocol {
namespace bridge {
// ===================================================================

class GenesisState::_Internal {
 public:
  using HasBits = decltype(std::declval<GenesisState>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(GenesisState, _impl_._has_bits_);
  static const ::dydxprotocol::bridge::EventParams& event_params(const GenesisState* msg);
  static void set_has_event_params(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::dydxprotocol::bridge::ProposeParams& propose_params(const GenesisState* msg);
  static void set_has_propose_params(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static const ::dydxprotocol::bridge::SafetyParams& safety_params(const GenesisState* msg);
  static void set_has_safety_params(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static const ::dydxprotocol::bridge::BridgeEventInfo& acknowledged_event_info(const GenesisState* msg);
  static void set_has_acknowledged_event_info(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

const ::dydxprotocol::bridge::EventParams&
GenesisState::_Internal::event_params(const GenesisState* msg) {
  return *msg->_impl_.event_params_;
}
const ::dydxprotocol::bridge::ProposeParams&
GenesisState::_Internal::propose_params(const GenesisState* msg) {
  return *msg->_impl_.propose_params_;
}
const ::dydxprotocol::bridge::SafetyParams&
GenesisState::_Internal::safety_params(const GenesisState* msg) {
  return *msg->_impl_.safety_params_;
}
const ::dydxprotocol::bridge::BridgeEventInfo&
GenesisState::_Internal::acknowledged_event_info(const GenesisState* msg) {
  return *msg->_impl_.acknowledged_event_info_;
}
void GenesisState::clear_event_params() {
  if (_impl_.event_params_ != nullptr) _impl_.event_params_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
void GenesisState::clear_propose_params() {
  if (_impl_.propose_params_ != nullptr) _impl_.propose_params_->Clear();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
void GenesisState::clear_safety_params() {
  if (_impl_.safety_params_ != nullptr) _impl_.safety_params_->Clear();
  _impl_._has_bits_[0] &= ~0x00000004u;
}
void GenesisState::clear_acknowledged_event_info() {
  if (_impl_.acknowledged_event_info_ != nullptr) _impl_.acknowledged_event_info_->Clear();
  _impl_._has_bits_[0] &= ~0x00000008u;
}
GenesisState::GenesisState(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:dydxprotocol.bridge.GenesisState)
}
GenesisState::GenesisState(const GenesisState& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  GenesisState* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.event_params_){nullptr}
    , decltype(_impl_.propose_params_){nullptr}
    , decltype(_impl_.safety_params_){nullptr}
    , decltype(_impl_.acknowledged_event_info_){nullptr}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.event_params_ = new ::dydxprotocol::bridge::EventParams(*from._impl_.event_params_);
  }
  if ((from._impl_._has_bits_[0] & 0x00000002u) != 0) {
    _this->_impl_.propose_params_ = new ::dydxprotocol::bridge::ProposeParams(*from._impl_.propose_params_);
  }
  if ((from._impl_._has_bits_[0] & 0x00000004u) != 0) {
    _this->_impl_.safety_params_ = new ::dydxprotocol::bridge::SafetyParams(*from._impl_.safety_params_);
  }
  if ((from._impl_._has_bits_[0] & 0x00000008u) != 0) {
    _this->_impl_.acknowledged_event_info_ = new ::dydxprotocol::bridge::BridgeEventInfo(*from._impl_.acknowledged_event_info_);
  }
  // @@protoc_insertion_point(copy_constructor:dydxprotocol.bridge.GenesisState)
}

inline void GenesisState::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.event_params_){nullptr}
    , decltype(_impl_.propose_params_){nullptr}
    , decltype(_impl_.safety_params_){nullptr}
    , decltype(_impl_.acknowledged_event_info_){nullptr}
  };
}

GenesisState::~GenesisState() {
  // @@protoc_insertion_point(destructor:dydxprotocol.bridge.GenesisState)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void GenesisState::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.event_params_;
  if (this != internal_default_instance()) delete _impl_.propose_params_;
  if (this != internal_default_instance()) delete _impl_.safety_params_;
  if (this != internal_default_instance()) delete _impl_.acknowledged_event_info_;
}

void GenesisState::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void GenesisState::Clear() {
// @@protoc_insertion_point(message_clear_start:dydxprotocol.bridge.GenesisState)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      ABSL_DCHECK(_impl_.event_params_ != nullptr);
      _impl_.event_params_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      ABSL_DCHECK(_impl_.propose_params_ != nullptr);
      _impl_.propose_params_->Clear();
    }
    if (cached_has_bits & 0x00000004u) {
      ABSL_DCHECK(_impl_.safety_params_ != nullptr);
      _impl_.safety_params_->Clear();
    }
    if (cached_has_bits & 0x00000008u) {
      ABSL_DCHECK(_impl_.acknowledged_event_info_ != nullptr);
      _impl_.acknowledged_event_info_->Clear();
    }
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GenesisState::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .dydxprotocol.bridge.EventParams event_params = 1 [(.gogoproto.nullable) = false];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_event_params(), ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // .dydxprotocol.bridge.ProposeParams propose_params = 2 [(.gogoproto.nullable) = false];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_propose_params(), ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // .dydxprotocol.bridge.SafetyParams safety_params = 3 [(.gogoproto.nullable) = false];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_safety_params(), ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // .dydxprotocol.bridge.BridgeEventInfo acknowledged_event_info = 4 [(.gogoproto.nullable) = false];
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_acknowledged_event_info(), ptr);
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

::uint8_t* GenesisState::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:dydxprotocol.bridge.GenesisState)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // .dydxprotocol.bridge.EventParams event_params = 1 [(.gogoproto.nullable) = false];
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::event_params(this),
        _Internal::event_params(this).GetCachedSize(), target, stream);
  }

  // .dydxprotocol.bridge.ProposeParams propose_params = 2 [(.gogoproto.nullable) = false];
  if (cached_has_bits & 0x00000002u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::propose_params(this),
        _Internal::propose_params(this).GetCachedSize(), target, stream);
  }

  // .dydxprotocol.bridge.SafetyParams safety_params = 3 [(.gogoproto.nullable) = false];
  if (cached_has_bits & 0x00000004u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, _Internal::safety_params(this),
        _Internal::safety_params(this).GetCachedSize(), target, stream);
  }

  // .dydxprotocol.bridge.BridgeEventInfo acknowledged_event_info = 4 [(.gogoproto.nullable) = false];
  if (cached_has_bits & 0x00000008u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, _Internal::acknowledged_event_info(this),
        _Internal::acknowledged_event_info(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:dydxprotocol.bridge.GenesisState)
  return target;
}

::size_t GenesisState::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:dydxprotocol.bridge.GenesisState)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // .dydxprotocol.bridge.EventParams event_params = 1 [(.gogoproto.nullable) = false];
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.event_params_);
    }

    // .dydxprotocol.bridge.ProposeParams propose_params = 2 [(.gogoproto.nullable) = false];
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.propose_params_);
    }

    // .dydxprotocol.bridge.SafetyParams safety_params = 3 [(.gogoproto.nullable) = false];
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.safety_params_);
    }

    // .dydxprotocol.bridge.BridgeEventInfo acknowledged_event_info = 4 [(.gogoproto.nullable) = false];
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.acknowledged_event_info_);
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GenesisState::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    GenesisState::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GenesisState::GetClassData() const { return &_class_data_; }


void GenesisState::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<GenesisState*>(&to_msg);
  auto& from = static_cast<const GenesisState&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:dydxprotocol.bridge.GenesisState)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_mutable_event_params()->::dydxprotocol::bridge::EventParams::MergeFrom(
          from._internal_event_params());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_mutable_propose_params()->::dydxprotocol::bridge::ProposeParams::MergeFrom(
          from._internal_propose_params());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_internal_mutable_safety_params()->::dydxprotocol::bridge::SafetyParams::MergeFrom(
          from._internal_safety_params());
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_internal_mutable_acknowledged_event_info()->::dydxprotocol::bridge::BridgeEventInfo::MergeFrom(
          from._internal_acknowledged_event_info());
    }
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GenesisState::CopyFrom(const GenesisState& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dydxprotocol.bridge.GenesisState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GenesisState::IsInitialized() const {
  return true;
}

void GenesisState::InternalSwap(GenesisState* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(GenesisState, _impl_.acknowledged_event_info_)
      + sizeof(GenesisState::_impl_.acknowledged_event_info_)
      - PROTOBUF_FIELD_OFFSET(GenesisState, _impl_.event_params_)>(
          reinterpret_cast<char*>(&_impl_.event_params_),
          reinterpret_cast<char*>(&other->_impl_.event_params_));
}

::PROTOBUF_NAMESPACE_ID::Metadata GenesisState::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_dydxprotocol_2fbridge_2fgenesis_2eproto_getter, &descriptor_table_dydxprotocol_2fbridge_2fgenesis_2eproto_once,
      file_level_metadata_dydxprotocol_2fbridge_2fgenesis_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace bridge
}  // namespace dydxprotocol
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::dydxprotocol::bridge::GenesisState*
Arena::CreateMaybeMessage< ::dydxprotocol::bridge::GenesisState >(Arena* arena) {
  return Arena::CreateMessageInternal< ::dydxprotocol::bridge::GenesisState >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
