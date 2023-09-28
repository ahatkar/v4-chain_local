// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dydxprotocol/rewards/tx.proto

#include "dydxprotocol/rewards/tx.pb.h"

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
namespace rewards {
template <typename>
PROTOBUF_CONSTEXPR MsgUpdateParams::MsgUpdateParams(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.authority_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.params_)*/nullptr} {}
struct MsgUpdateParamsDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MsgUpdateParamsDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~MsgUpdateParamsDefaultTypeInternal() {}
  union {
    MsgUpdateParams _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MsgUpdateParamsDefaultTypeInternal _MsgUpdateParams_default_instance_;
template <typename>
PROTOBUF_CONSTEXPR MsgUpdateParamsResponse::MsgUpdateParamsResponse(
    ::_pbi::ConstantInitialized) {}
struct MsgUpdateParamsResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MsgUpdateParamsResponseDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~MsgUpdateParamsResponseDefaultTypeInternal() {}
  union {
    MsgUpdateParamsResponse _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MsgUpdateParamsResponseDefaultTypeInternal _MsgUpdateParamsResponse_default_instance_;
}  // namespace rewards
}  // namespace dydxprotocol
static ::_pb::Metadata file_level_metadata_dydxprotocol_2frewards_2ftx_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_dydxprotocol_2frewards_2ftx_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_dydxprotocol_2frewards_2ftx_2eproto = nullptr;
const ::uint32_t TableStruct_dydxprotocol_2frewards_2ftx_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::rewards::MsgUpdateParams, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::rewards::MsgUpdateParams, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::rewards::MsgUpdateParams, _impl_.authority_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::rewards::MsgUpdateParams, _impl_.params_),
    ~0u,
    0,
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::rewards::MsgUpdateParamsResponse, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, 10, -1, sizeof(::dydxprotocol::rewards::MsgUpdateParams)},
        { 12, -1, -1, sizeof(::dydxprotocol::rewards::MsgUpdateParamsResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::dydxprotocol::rewards::_MsgUpdateParams_default_instance_._instance,
    &::dydxprotocol::rewards::_MsgUpdateParamsResponse_default_instance_._instance,
};
const char descriptor_table_protodef_dydxprotocol_2frewards_2ftx_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\035dydxprotocol/rewards/tx.proto\022\024dydxpro"
    "tocol.rewards\032\031cosmos_proto/cosmos.proto"
    "\032\027cosmos/msg/v1/msg.proto\032!dydxprotocol/"
    "rewards/params.proto\032\024gogoproto/gogo.pro"
    "to\"\202\001\n\017MsgUpdateParams\022+\n\tauthority\030\001 \001("
    "\tB\030\322\264-\024cosmos.AddressString\0222\n\006params\030\002 "
    "\001(\0132\034.dydxprotocol.rewards.ParamsB\004\310\336\037\000:"
    "\016\202\347\260*\tauthority\"\031\n\027MsgUpdateParamsRespon"
    "se2k\n\003Msg\022d\n\014UpdateParams\022%.dydxprotocol"
    ".rewards.MsgUpdateParams\032-.dydxprotocol."
    "rewards.MsgUpdateParamsResponseB;Z9githu"
    "b.com/dydxprotocol/v4-chain/protocol/x/r"
    "ewards/typesb\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_dydxprotocol_2frewards_2ftx_2eproto_deps[4] =
    {
        &::descriptor_table_cosmos_2fmsg_2fv1_2fmsg_2eproto,
        &::descriptor_table_cosmos_5fproto_2fcosmos_2eproto,
        &::descriptor_table_dydxprotocol_2frewards_2fparams_2eproto,
        &::descriptor_table_gogoproto_2fgogo_2eproto,
};
static ::absl::once_flag descriptor_table_dydxprotocol_2frewards_2ftx_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_dydxprotocol_2frewards_2ftx_2eproto = {
    false,
    false,
    500,
    descriptor_table_protodef_dydxprotocol_2frewards_2ftx_2eproto,
    "dydxprotocol/rewards/tx.proto",
    &descriptor_table_dydxprotocol_2frewards_2ftx_2eproto_once,
    descriptor_table_dydxprotocol_2frewards_2ftx_2eproto_deps,
    4,
    2,
    schemas,
    file_default_instances,
    TableStruct_dydxprotocol_2frewards_2ftx_2eproto::offsets,
    file_level_metadata_dydxprotocol_2frewards_2ftx_2eproto,
    file_level_enum_descriptors_dydxprotocol_2frewards_2ftx_2eproto,
    file_level_service_descriptors_dydxprotocol_2frewards_2ftx_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_dydxprotocol_2frewards_2ftx_2eproto_getter() {
  return &descriptor_table_dydxprotocol_2frewards_2ftx_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_dydxprotocol_2frewards_2ftx_2eproto(&descriptor_table_dydxprotocol_2frewards_2ftx_2eproto);
namespace dydxprotocol {
namespace rewards {
// ===================================================================

class MsgUpdateParams::_Internal {
 public:
  using HasBits = decltype(std::declval<MsgUpdateParams>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(MsgUpdateParams, _impl_._has_bits_);
  static const ::dydxprotocol::rewards::Params& params(const MsgUpdateParams* msg);
  static void set_has_params(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::dydxprotocol::rewards::Params&
MsgUpdateParams::_Internal::params(const MsgUpdateParams* msg) {
  return *msg->_impl_.params_;
}
void MsgUpdateParams::clear_params() {
  if (_impl_.params_ != nullptr) _impl_.params_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
MsgUpdateParams::MsgUpdateParams(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:dydxprotocol.rewards.MsgUpdateParams)
}
MsgUpdateParams::MsgUpdateParams(const MsgUpdateParams& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  MsgUpdateParams* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.authority_) {}

    , decltype(_impl_.params_){nullptr}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.authority_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.authority_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_authority().empty()) {
    _this->_impl_.authority_.Set(from._internal_authority(), _this->GetArenaForAllocation());
  }
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.params_ = new ::dydxprotocol::rewards::Params(*from._impl_.params_);
  }
  // @@protoc_insertion_point(copy_constructor:dydxprotocol.rewards.MsgUpdateParams)
}

inline void MsgUpdateParams::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.authority_) {}

    , decltype(_impl_.params_){nullptr}
  };
  _impl_.authority_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.authority_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

MsgUpdateParams::~MsgUpdateParams() {
  // @@protoc_insertion_point(destructor:dydxprotocol.rewards.MsgUpdateParams)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void MsgUpdateParams::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.authority_.Destroy();
  if (this != internal_default_instance()) delete _impl_.params_;
}

void MsgUpdateParams::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void MsgUpdateParams::Clear() {
// @@protoc_insertion_point(message_clear_start:dydxprotocol.rewards.MsgUpdateParams)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.authority_.ClearToEmpty();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ABSL_DCHECK(_impl_.params_ != nullptr);
    _impl_.params_->Clear();
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MsgUpdateParams::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string authority = 1 [(.cosmos_proto.scalar) = "cosmos.AddressString"];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_authority();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "dydxprotocol.rewards.MsgUpdateParams.authority"));
        } else {
          goto handle_unusual;
        }
        continue;
      // .dydxprotocol.rewards.Params params = 2 [(.gogoproto.nullable) = false];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_params(), ptr);
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

::uint8_t* MsgUpdateParams::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:dydxprotocol.rewards.MsgUpdateParams)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string authority = 1 [(.cosmos_proto.scalar) = "cosmos.AddressString"];
  if (!this->_internal_authority().empty()) {
    const std::string& _s = this->_internal_authority();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "dydxprotocol.rewards.MsgUpdateParams.authority");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  cached_has_bits = _impl_._has_bits_[0];
  // .dydxprotocol.rewards.Params params = 2 [(.gogoproto.nullable) = false];
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::params(this),
        _Internal::params(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:dydxprotocol.rewards.MsgUpdateParams)
  return target;
}

::size_t MsgUpdateParams::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:dydxprotocol.rewards.MsgUpdateParams)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string authority = 1 [(.cosmos_proto.scalar) = "cosmos.AddressString"];
  if (!this->_internal_authority().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_authority());
  }

  // .dydxprotocol.rewards.Params params = 2 [(.gogoproto.nullable) = false];
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.params_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MsgUpdateParams::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    MsgUpdateParams::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MsgUpdateParams::GetClassData() const { return &_class_data_; }


void MsgUpdateParams::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<MsgUpdateParams*>(&to_msg);
  auto& from = static_cast<const MsgUpdateParams&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:dydxprotocol.rewards.MsgUpdateParams)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_authority().empty()) {
    _this->_internal_set_authority(from._internal_authority());
  }
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_internal_mutable_params()->::dydxprotocol::rewards::Params::MergeFrom(
        from._internal_params());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MsgUpdateParams::CopyFrom(const MsgUpdateParams& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dydxprotocol.rewards.MsgUpdateParams)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgUpdateParams::IsInitialized() const {
  return true;
}

void MsgUpdateParams::InternalSwap(MsgUpdateParams* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.authority_, lhs_arena,
                                       &other->_impl_.authority_, rhs_arena);
  swap(_impl_.params_, other->_impl_.params_);
}

::PROTOBUF_NAMESPACE_ID::Metadata MsgUpdateParams::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_dydxprotocol_2frewards_2ftx_2eproto_getter, &descriptor_table_dydxprotocol_2frewards_2ftx_2eproto_once,
      file_level_metadata_dydxprotocol_2frewards_2ftx_2eproto[0]);
}
// ===================================================================

class MsgUpdateParamsResponse::_Internal {
 public:
};

MsgUpdateParamsResponse::MsgUpdateParamsResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase(arena) {
  // @@protoc_insertion_point(arena_constructor:dydxprotocol.rewards.MsgUpdateParamsResponse)
}
MsgUpdateParamsResponse::MsgUpdateParamsResponse(const MsgUpdateParamsResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase() {
  MsgUpdateParamsResponse* const _this = this; (void)_this;
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:dydxprotocol.rewards.MsgUpdateParamsResponse)
}





const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MsgUpdateParamsResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl,
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl,
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MsgUpdateParamsResponse::GetClassData() const { return &_class_data_; }







::PROTOBUF_NAMESPACE_ID::Metadata MsgUpdateParamsResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_dydxprotocol_2frewards_2ftx_2eproto_getter, &descriptor_table_dydxprotocol_2frewards_2ftx_2eproto_once,
      file_level_metadata_dydxprotocol_2frewards_2ftx_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace rewards
}  // namespace dydxprotocol
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::dydxprotocol::rewards::MsgUpdateParams*
Arena::CreateMaybeMessage< ::dydxprotocol::rewards::MsgUpdateParams >(Arena* arena) {
  return Arena::CreateMessageInternal< ::dydxprotocol::rewards::MsgUpdateParams >(arena);
}
template<> PROTOBUF_NOINLINE ::dydxprotocol::rewards::MsgUpdateParamsResponse*
Arena::CreateMaybeMessage< ::dydxprotocol::rewards::MsgUpdateParamsResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::dydxprotocol::rewards::MsgUpdateParamsResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"