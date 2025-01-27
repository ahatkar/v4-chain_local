// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dydxprotocol/blocktime/params.proto

#include "dydxprotocol/blocktime/params.pb.h"

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
namespace blocktime {
template <typename>
PROTOBUF_CONSTEXPR DowntimeParams::DowntimeParams(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.durations_)*/{}
  , /*decltype(_impl_.clock_drift_grace_period_duration_)*/nullptr} {}
struct DowntimeParamsDefaultTypeInternal {
  PROTOBUF_CONSTEXPR DowntimeParamsDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~DowntimeParamsDefaultTypeInternal() {}
  union {
    DowntimeParams _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 DowntimeParamsDefaultTypeInternal _DowntimeParams_default_instance_;
}  // namespace blocktime
}  // namespace dydxprotocol
static ::_pb::Metadata file_level_metadata_dydxprotocol_2fblocktime_2fparams_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_dydxprotocol_2fblocktime_2fparams_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_dydxprotocol_2fblocktime_2fparams_2eproto = nullptr;
const ::uint32_t TableStruct_dydxprotocol_2fblocktime_2fparams_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::blocktime::DowntimeParams, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::blocktime::DowntimeParams, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::blocktime::DowntimeParams, _impl_.durations_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::blocktime::DowntimeParams, _impl_.clock_drift_grace_period_duration_),
    ~0u,
    0,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, 10, -1, sizeof(::dydxprotocol::blocktime::DowntimeParams)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::dydxprotocol::blocktime::_DowntimeParams_default_instance_._instance,
};
const char descriptor_table_protodef_dydxprotocol_2fblocktime_2fparams_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n#dydxprotocol/blocktime/params.proto\022\026d"
    "ydxprotocol.blocktime\032\024gogoproto/gogo.pr"
    "oto\032\036google/protobuf/duration.proto\"\230\001\n\016"
    "DowntimeParams\0226\n\tdurations\030\001 \003(\0132\031.goog"
    "le.protobuf.DurationB\010\310\336\037\000\230\337\037\001\022N\n!clock_"
    "drift_grace_period_duration\030\002 \001(\0132\031.goog"
    "le.protobuf.DurationB\010\310\336\037\000\230\337\037\001B=Z;github"
    ".com/dydxprotocol/v4-chain/protocol/x/bl"
    "ocktime/typesb\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_dydxprotocol_2fblocktime_2fparams_2eproto_deps[2] =
    {
        &::descriptor_table_gogoproto_2fgogo_2eproto,
        &::descriptor_table_google_2fprotobuf_2fduration_2eproto,
};
static ::absl::once_flag descriptor_table_dydxprotocol_2fblocktime_2fparams_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_dydxprotocol_2fblocktime_2fparams_2eproto = {
    false,
    false,
    341,
    descriptor_table_protodef_dydxprotocol_2fblocktime_2fparams_2eproto,
    "dydxprotocol/blocktime/params.proto",
    &descriptor_table_dydxprotocol_2fblocktime_2fparams_2eproto_once,
    descriptor_table_dydxprotocol_2fblocktime_2fparams_2eproto_deps,
    2,
    1,
    schemas,
    file_default_instances,
    TableStruct_dydxprotocol_2fblocktime_2fparams_2eproto::offsets,
    file_level_metadata_dydxprotocol_2fblocktime_2fparams_2eproto,
    file_level_enum_descriptors_dydxprotocol_2fblocktime_2fparams_2eproto,
    file_level_service_descriptors_dydxprotocol_2fblocktime_2fparams_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_dydxprotocol_2fblocktime_2fparams_2eproto_getter() {
  return &descriptor_table_dydxprotocol_2fblocktime_2fparams_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_dydxprotocol_2fblocktime_2fparams_2eproto(&descriptor_table_dydxprotocol_2fblocktime_2fparams_2eproto);
namespace dydxprotocol {
namespace blocktime {
// ===================================================================

class DowntimeParams::_Internal {
 public:
  using HasBits = decltype(std::declval<DowntimeParams>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(DowntimeParams, _impl_._has_bits_);
  static const ::PROTOBUF_NAMESPACE_ID::Duration& clock_drift_grace_period_duration(const DowntimeParams* msg);
  static void set_has_clock_drift_grace_period_duration(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::PROTOBUF_NAMESPACE_ID::Duration&
DowntimeParams::_Internal::clock_drift_grace_period_duration(const DowntimeParams* msg) {
  return *msg->_impl_.clock_drift_grace_period_duration_;
}
void DowntimeParams::clear_durations() {
  _internal_mutable_durations()->Clear();
}
void DowntimeParams::clear_clock_drift_grace_period_duration() {
  if (_impl_.clock_drift_grace_period_duration_ != nullptr) _impl_.clock_drift_grace_period_duration_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
DowntimeParams::DowntimeParams(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:dydxprotocol.blocktime.DowntimeParams)
}
DowntimeParams::DowntimeParams(const DowntimeParams& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  DowntimeParams* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.durations_){from._impl_.durations_}
    , decltype(_impl_.clock_drift_grace_period_duration_){nullptr}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.clock_drift_grace_period_duration_ = new ::PROTOBUF_NAMESPACE_ID::Duration(*from._impl_.clock_drift_grace_period_duration_);
  }
  // @@protoc_insertion_point(copy_constructor:dydxprotocol.blocktime.DowntimeParams)
}

inline void DowntimeParams::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.durations_){arena}
    , decltype(_impl_.clock_drift_grace_period_duration_){nullptr}
  };
}

DowntimeParams::~DowntimeParams() {
  // @@protoc_insertion_point(destructor:dydxprotocol.blocktime.DowntimeParams)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void DowntimeParams::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _internal_mutable_durations()->~RepeatedPtrField();
  if (this != internal_default_instance()) delete _impl_.clock_drift_grace_period_duration_;
}

void DowntimeParams::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void DowntimeParams::Clear() {
// @@protoc_insertion_point(message_clear_start:dydxprotocol.blocktime.DowntimeParams)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_mutable_durations()->Clear();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ABSL_DCHECK(_impl_.clock_drift_grace_period_duration_ != nullptr);
    _impl_.clock_drift_grace_period_duration_->Clear();
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* DowntimeParams::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .google.protobuf.Duration durations = 1 [(.gogoproto.nullable) = false, (.gogoproto.stdduration) = true];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_durations(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else {
          goto handle_unusual;
        }
        continue;
      // .google.protobuf.Duration clock_drift_grace_period_duration = 2 [(.gogoproto.nullable) = false, (.gogoproto.stdduration) = true];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_clock_drift_grace_period_duration(), ptr);
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

::uint8_t* DowntimeParams::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:dydxprotocol.blocktime.DowntimeParams)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .google.protobuf.Duration durations = 1 [(.gogoproto.nullable) = false, (.gogoproto.stdduration) = true];
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_durations_size()); i < n; i++) {
    const auto& repfield = this->_internal_durations(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  cached_has_bits = _impl_._has_bits_[0];
  // .google.protobuf.Duration clock_drift_grace_period_duration = 2 [(.gogoproto.nullable) = false, (.gogoproto.stdduration) = true];
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::clock_drift_grace_period_duration(this),
        _Internal::clock_drift_grace_period_duration(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:dydxprotocol.blocktime.DowntimeParams)
  return target;
}

::size_t DowntimeParams::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:dydxprotocol.blocktime.DowntimeParams)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .google.protobuf.Duration durations = 1 [(.gogoproto.nullable) = false, (.gogoproto.stdduration) = true];
  total_size += 1UL * this->_internal_durations_size();
  for (const auto& msg : this->_internal_durations()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // .google.protobuf.Duration clock_drift_grace_period_duration = 2 [(.gogoproto.nullable) = false, (.gogoproto.stdduration) = true];
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.clock_drift_grace_period_duration_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData DowntimeParams::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    DowntimeParams::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*DowntimeParams::GetClassData() const { return &_class_data_; }


void DowntimeParams::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<DowntimeParams*>(&to_msg);
  auto& from = static_cast<const DowntimeParams&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:dydxprotocol.blocktime.DowntimeParams)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_durations()->MergeFrom(from._internal_durations());
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_internal_mutable_clock_drift_grace_period_duration()->::PROTOBUF_NAMESPACE_ID::Duration::MergeFrom(
        from._internal_clock_drift_grace_period_duration());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void DowntimeParams::CopyFrom(const DowntimeParams& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dydxprotocol.blocktime.DowntimeParams)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DowntimeParams::IsInitialized() const {
  return true;
}

void DowntimeParams::InternalSwap(DowntimeParams* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _internal_mutable_durations()->InternalSwap(other->_internal_mutable_durations());
  swap(_impl_.clock_drift_grace_period_duration_, other->_impl_.clock_drift_grace_period_duration_);
}

::PROTOBUF_NAMESPACE_ID::Metadata DowntimeParams::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_dydxprotocol_2fblocktime_2fparams_2eproto_getter, &descriptor_table_dydxprotocol_2fblocktime_2fparams_2eproto_once,
      file_level_metadata_dydxprotocol_2fblocktime_2fparams_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace blocktime
}  // namespace dydxprotocol
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::dydxprotocol::blocktime::DowntimeParams*
Arena::CreateMaybeMessage< ::dydxprotocol::blocktime::DowntimeParams >(Arena* arena) {
  return Arena::CreateMessageInternal< ::dydxprotocol::blocktime::DowntimeParams >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
