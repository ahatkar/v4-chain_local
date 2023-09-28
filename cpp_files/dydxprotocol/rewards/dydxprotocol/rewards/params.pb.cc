// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dydxprotocol/rewards/params.proto

#include "dydxprotocol/rewards/params.pb.h"

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
PROTOBUF_CONSTEXPR Params::Params(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.treasury_account_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.denom_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.denom_exponent_)*/ 0

  , /*decltype(_impl_.market_id_)*/ 0u

  , /*decltype(_impl_.fee_multiplier_ppm_)*/ 0u

  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ParamsDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ParamsDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ParamsDefaultTypeInternal() {}
  union {
    Params _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ParamsDefaultTypeInternal _Params_default_instance_;
}  // namespace rewards
}  // namespace dydxprotocol
static ::_pb::Metadata file_level_metadata_dydxprotocol_2frewards_2fparams_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_dydxprotocol_2frewards_2fparams_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_dydxprotocol_2frewards_2fparams_2eproto = nullptr;
const ::uint32_t TableStruct_dydxprotocol_2frewards_2fparams_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::rewards::Params, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::rewards::Params, _impl_.treasury_account_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::rewards::Params, _impl_.denom_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::rewards::Params, _impl_.denom_exponent_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::rewards::Params, _impl_.market_id_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::rewards::Params, _impl_.fee_multiplier_ppm_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, -1, -1, sizeof(::dydxprotocol::rewards::Params)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::dydxprotocol::rewards::_Params_default_instance_._instance,
};
const char descriptor_table_protodef_dydxprotocol_2frewards_2fparams_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n!dydxprotocol/rewards/params.proto\022\024dyd"
    "xprotocol.rewards\"x\n\006Params\022\030\n\020treasury_"
    "account\030\001 \001(\t\022\r\n\005denom\030\002 \001(\t\022\026\n\016denom_ex"
    "ponent\030\003 \001(\021\022\021\n\tmarket_id\030\004 \001(\r\022\032\n\022fee_m"
    "ultiplier_ppm\030\005 \001(\rB;Z9github.com/dydxpr"
    "otocol/v4-chain/protocol/x/rewards/types"
    "b\006proto3"
};
static ::absl::once_flag descriptor_table_dydxprotocol_2frewards_2fparams_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_dydxprotocol_2frewards_2fparams_2eproto = {
    false,
    false,
    248,
    descriptor_table_protodef_dydxprotocol_2frewards_2fparams_2eproto,
    "dydxprotocol/rewards/params.proto",
    &descriptor_table_dydxprotocol_2frewards_2fparams_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_dydxprotocol_2frewards_2fparams_2eproto::offsets,
    file_level_metadata_dydxprotocol_2frewards_2fparams_2eproto,
    file_level_enum_descriptors_dydxprotocol_2frewards_2fparams_2eproto,
    file_level_service_descriptors_dydxprotocol_2frewards_2fparams_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_dydxprotocol_2frewards_2fparams_2eproto_getter() {
  return &descriptor_table_dydxprotocol_2frewards_2fparams_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_dydxprotocol_2frewards_2fparams_2eproto(&descriptor_table_dydxprotocol_2frewards_2fparams_2eproto);
namespace dydxprotocol {
namespace rewards {
// ===================================================================

class Params::_Internal {
 public:
};

Params::Params(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:dydxprotocol.rewards.Params)
}
Params::Params(const Params& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Params* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.treasury_account_) {}

    , decltype(_impl_.denom_) {}

    , decltype(_impl_.denom_exponent_) {}

    , decltype(_impl_.market_id_) {}

    , decltype(_impl_.fee_multiplier_ppm_) {}

    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.treasury_account_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.treasury_account_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_treasury_account().empty()) {
    _this->_impl_.treasury_account_.Set(from._internal_treasury_account(), _this->GetArenaForAllocation());
  }
  _impl_.denom_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.denom_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_denom().empty()) {
    _this->_impl_.denom_.Set(from._internal_denom(), _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.denom_exponent_, &from._impl_.denom_exponent_,
    static_cast<::size_t>(reinterpret_cast<char*>(&_impl_.fee_multiplier_ppm_) -
    reinterpret_cast<char*>(&_impl_.denom_exponent_)) + sizeof(_impl_.fee_multiplier_ppm_));
  // @@protoc_insertion_point(copy_constructor:dydxprotocol.rewards.Params)
}

inline void Params::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.treasury_account_) {}

    , decltype(_impl_.denom_) {}

    , decltype(_impl_.denom_exponent_) { 0 }

    , decltype(_impl_.market_id_) { 0u }

    , decltype(_impl_.fee_multiplier_ppm_) { 0u }

    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.treasury_account_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.treasury_account_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.denom_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.denom_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Params::~Params() {
  // @@protoc_insertion_point(destructor:dydxprotocol.rewards.Params)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Params::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.treasury_account_.Destroy();
  _impl_.denom_.Destroy();
}

void Params::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Params::Clear() {
// @@protoc_insertion_point(message_clear_start:dydxprotocol.rewards.Params)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.treasury_account_.ClearToEmpty();
  _impl_.denom_.ClearToEmpty();
  ::memset(&_impl_.denom_exponent_, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.fee_multiplier_ppm_) -
      reinterpret_cast<char*>(&_impl_.denom_exponent_)) + sizeof(_impl_.fee_multiplier_ppm_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Params::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string treasury_account = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_treasury_account();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "dydxprotocol.rewards.Params.treasury_account"));
        } else {
          goto handle_unusual;
        }
        continue;
      // string denom = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_denom();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "dydxprotocol.rewards.Params.denom"));
        } else {
          goto handle_unusual;
        }
        continue;
      // sint32 denom_exponent = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 24)) {
          _impl_.denom_exponent_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarintZigZag32(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // uint32 market_id = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 32)) {
          _impl_.market_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // uint32 fee_multiplier_ppm = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 40)) {
          _impl_.fee_multiplier_ppm_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

::uint8_t* Params::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:dydxprotocol.rewards.Params)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string treasury_account = 1;
  if (!this->_internal_treasury_account().empty()) {
    const std::string& _s = this->_internal_treasury_account();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "dydxprotocol.rewards.Params.treasury_account");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // string denom = 2;
  if (!this->_internal_denom().empty()) {
    const std::string& _s = this->_internal_denom();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "dydxprotocol.rewards.Params.denom");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  // sint32 denom_exponent = 3;
  if (this->_internal_denom_exponent() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteSInt32ToArray(
        3, this->_internal_denom_exponent(), target);
  }

  // uint32 market_id = 4;
  if (this->_internal_market_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        4, this->_internal_market_id(), target);
  }

  // uint32 fee_multiplier_ppm = 5;
  if (this->_internal_fee_multiplier_ppm() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        5, this->_internal_fee_multiplier_ppm(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:dydxprotocol.rewards.Params)
  return target;
}

::size_t Params::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:dydxprotocol.rewards.Params)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string treasury_account = 1;
  if (!this->_internal_treasury_account().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_treasury_account());
  }

  // string denom = 2;
  if (!this->_internal_denom().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_denom());
  }

  // sint32 denom_exponent = 3;
  if (this->_internal_denom_exponent() != 0) {
    total_size += ::_pbi::WireFormatLite::SInt32SizePlusOne(
        this->_internal_denom_exponent());
  }

  // uint32 market_id = 4;
  if (this->_internal_market_id() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
        this->_internal_market_id());
  }

  // uint32 fee_multiplier_ppm = 5;
  if (this->_internal_fee_multiplier_ppm() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
        this->_internal_fee_multiplier_ppm());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Params::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Params::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Params::GetClassData() const { return &_class_data_; }


void Params::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Params*>(&to_msg);
  auto& from = static_cast<const Params&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:dydxprotocol.rewards.Params)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_treasury_account().empty()) {
    _this->_internal_set_treasury_account(from._internal_treasury_account());
  }
  if (!from._internal_denom().empty()) {
    _this->_internal_set_denom(from._internal_denom());
  }
  if (from._internal_denom_exponent() != 0) {
    _this->_internal_set_denom_exponent(from._internal_denom_exponent());
  }
  if (from._internal_market_id() != 0) {
    _this->_internal_set_market_id(from._internal_market_id());
  }
  if (from._internal_fee_multiplier_ppm() != 0) {
    _this->_internal_set_fee_multiplier_ppm(from._internal_fee_multiplier_ppm());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Params::CopyFrom(const Params& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dydxprotocol.rewards.Params)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Params::IsInitialized() const {
  return true;
}

void Params::InternalSwap(Params* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.treasury_account_, lhs_arena,
                                       &other->_impl_.treasury_account_, rhs_arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.denom_, lhs_arena,
                                       &other->_impl_.denom_, rhs_arena);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Params, _impl_.fee_multiplier_ppm_)
      + sizeof(Params::_impl_.fee_multiplier_ppm_)
      - PROTOBUF_FIELD_OFFSET(Params, _impl_.denom_exponent_)>(
          reinterpret_cast<char*>(&_impl_.denom_exponent_),
          reinterpret_cast<char*>(&other->_impl_.denom_exponent_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Params::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_dydxprotocol_2frewards_2fparams_2eproto_getter, &descriptor_table_dydxprotocol_2frewards_2fparams_2eproto_once,
      file_level_metadata_dydxprotocol_2frewards_2fparams_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace rewards
}  // namespace dydxprotocol
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::dydxprotocol::rewards::Params*
Arena::CreateMaybeMessage< ::dydxprotocol::rewards::Params >(Arena* arena) {
  return Arena::CreateMessageInternal< ::dydxprotocol::rewards::Params >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"