// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dydxprotocol/perpetuals/genesis.proto

#include "dydxprotocol/perpetuals/genesis.pb.h"

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
namespace perpetuals {
template <typename>
PROTOBUF_CONSTEXPR GenesisState::GenesisState(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.perpetuals_)*/{}
  , /*decltype(_impl_.liquidity_tiers_)*/{}
  , /*decltype(_impl_.params_)*/nullptr} {}
struct GenesisStateDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GenesisStateDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~GenesisStateDefaultTypeInternal() {}
  union {
    GenesisState _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GenesisStateDefaultTypeInternal _GenesisState_default_instance_;
}  // namespace perpetuals
}  // namespace dydxprotocol
static ::_pb::Metadata file_level_metadata_dydxprotocol_2fperpetuals_2fgenesis_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_dydxprotocol_2fperpetuals_2fgenesis_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_dydxprotocol_2fperpetuals_2fgenesis_2eproto = nullptr;
const ::uint32_t TableStruct_dydxprotocol_2fperpetuals_2fgenesis_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::perpetuals::GenesisState, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::perpetuals::GenesisState, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::perpetuals::GenesisState, _impl_.perpetuals_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::perpetuals::GenesisState, _impl_.liquidity_tiers_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::perpetuals::GenesisState, _impl_.params_),
    ~0u,
    ~0u,
    0,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, 11, -1, sizeof(::dydxprotocol::perpetuals::GenesisState)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::dydxprotocol::perpetuals::_GenesisState_default_instance_._instance,
};
const char descriptor_table_protodef_dydxprotocol_2fperpetuals_2fgenesis_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n%dydxprotocol/perpetuals/genesis.proto\022"
    "\027dydxprotocol.perpetuals\032\024gogoproto/gogo"
    ".proto\032\'dydxprotocol/perpetuals/perpetua"
    "l.proto\032$dydxprotocol/perpetuals/params."
    "proto\"\312\001\n\014GenesisState\022<\n\nperpetuals\030\001 \003"
    "(\0132\".dydxprotocol.perpetuals.PerpetualB\004"
    "\310\336\037\000\022E\n\017liquidity_tiers\030\002 \003(\0132&.dydxprot"
    "ocol.perpetuals.LiquidityTierB\004\310\336\037\000\0225\n\006p"
    "arams\030\003 \001(\0132\037.dydxprotocol.perpetuals.Pa"
    "ramsB\004\310\336\037\000B>Z<github.com/dydxprotocol/v4"
    "-chain/protocol/x/perpetuals/typesb\006prot"
    "o3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_dydxprotocol_2fperpetuals_2fgenesis_2eproto_deps[3] =
    {
        &::descriptor_table_dydxprotocol_2fperpetuals_2fparams_2eproto,
        &::descriptor_table_dydxprotocol_2fperpetuals_2fperpetual_2eproto,
        &::descriptor_table_gogoproto_2fgogo_2eproto,
};
static ::absl::once_flag descriptor_table_dydxprotocol_2fperpetuals_2fgenesis_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_dydxprotocol_2fperpetuals_2fgenesis_2eproto = {
    false,
    false,
    442,
    descriptor_table_protodef_dydxprotocol_2fperpetuals_2fgenesis_2eproto,
    "dydxprotocol/perpetuals/genesis.proto",
    &descriptor_table_dydxprotocol_2fperpetuals_2fgenesis_2eproto_once,
    descriptor_table_dydxprotocol_2fperpetuals_2fgenesis_2eproto_deps,
    3,
    1,
    schemas,
    file_default_instances,
    TableStruct_dydxprotocol_2fperpetuals_2fgenesis_2eproto::offsets,
    file_level_metadata_dydxprotocol_2fperpetuals_2fgenesis_2eproto,
    file_level_enum_descriptors_dydxprotocol_2fperpetuals_2fgenesis_2eproto,
    file_level_service_descriptors_dydxprotocol_2fperpetuals_2fgenesis_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_dydxprotocol_2fperpetuals_2fgenesis_2eproto_getter() {
  return &descriptor_table_dydxprotocol_2fperpetuals_2fgenesis_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_dydxprotocol_2fperpetuals_2fgenesis_2eproto(&descriptor_table_dydxprotocol_2fperpetuals_2fgenesis_2eproto);
namespace dydxprotocol {
namespace perpetuals {
// ===================================================================

class GenesisState::_Internal {
 public:
  using HasBits = decltype(std::declval<GenesisState>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(GenesisState, _impl_._has_bits_);
  static const ::dydxprotocol::perpetuals::Params& params(const GenesisState* msg);
  static void set_has_params(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::dydxprotocol::perpetuals::Params&
GenesisState::_Internal::params(const GenesisState* msg) {
  return *msg->_impl_.params_;
}
void GenesisState::clear_perpetuals() {
  _internal_mutable_perpetuals()->Clear();
}
void GenesisState::clear_liquidity_tiers() {
  _internal_mutable_liquidity_tiers()->Clear();
}
void GenesisState::clear_params() {
  if (_impl_.params_ != nullptr) _impl_.params_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
GenesisState::GenesisState(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:dydxprotocol.perpetuals.GenesisState)
}
GenesisState::GenesisState(const GenesisState& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  GenesisState* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.perpetuals_){from._impl_.perpetuals_}
    , decltype(_impl_.liquidity_tiers_){from._impl_.liquidity_tiers_}
    , decltype(_impl_.params_){nullptr}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.params_ = new ::dydxprotocol::perpetuals::Params(*from._impl_.params_);
  }
  // @@protoc_insertion_point(copy_constructor:dydxprotocol.perpetuals.GenesisState)
}

inline void GenesisState::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.perpetuals_){arena}
    , decltype(_impl_.liquidity_tiers_){arena}
    , decltype(_impl_.params_){nullptr}
  };
}

GenesisState::~GenesisState() {
  // @@protoc_insertion_point(destructor:dydxprotocol.perpetuals.GenesisState)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void GenesisState::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _internal_mutable_perpetuals()->~RepeatedPtrField();
  _internal_mutable_liquidity_tiers()->~RepeatedPtrField();
  if (this != internal_default_instance()) delete _impl_.params_;
}

void GenesisState::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void GenesisState::Clear() {
// @@protoc_insertion_point(message_clear_start:dydxprotocol.perpetuals.GenesisState)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_mutable_perpetuals()->Clear();
  _internal_mutable_liquidity_tiers()->Clear();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ABSL_DCHECK(_impl_.params_ != nullptr);
    _impl_.params_->Clear();
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
      // repeated .dydxprotocol.perpetuals.Perpetual perpetuals = 1 [(.gogoproto.nullable) = false];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_perpetuals(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else {
          goto handle_unusual;
        }
        continue;
      // repeated .dydxprotocol.perpetuals.LiquidityTier liquidity_tiers = 2 [(.gogoproto.nullable) = false];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_liquidity_tiers(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else {
          goto handle_unusual;
        }
        continue;
      // .dydxprotocol.perpetuals.Params params = 3 [(.gogoproto.nullable) = false];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 26)) {
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

::uint8_t* GenesisState::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:dydxprotocol.perpetuals.GenesisState)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .dydxprotocol.perpetuals.Perpetual perpetuals = 1 [(.gogoproto.nullable) = false];
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_perpetuals_size()); i < n; i++) {
    const auto& repfield = this->_internal_perpetuals(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  // repeated .dydxprotocol.perpetuals.LiquidityTier liquidity_tiers = 2 [(.gogoproto.nullable) = false];
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_liquidity_tiers_size()); i < n; i++) {
    const auto& repfield = this->_internal_liquidity_tiers(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(2, repfield, repfield.GetCachedSize(), target, stream);
  }

  cached_has_bits = _impl_._has_bits_[0];
  // .dydxprotocol.perpetuals.Params params = 3 [(.gogoproto.nullable) = false];
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, _Internal::params(this),
        _Internal::params(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:dydxprotocol.perpetuals.GenesisState)
  return target;
}

::size_t GenesisState::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:dydxprotocol.perpetuals.GenesisState)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .dydxprotocol.perpetuals.Perpetual perpetuals = 1 [(.gogoproto.nullable) = false];
  total_size += 1UL * this->_internal_perpetuals_size();
  for (const auto& msg : this->_internal_perpetuals()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .dydxprotocol.perpetuals.LiquidityTier liquidity_tiers = 2 [(.gogoproto.nullable) = false];
  total_size += 1UL * this->_internal_liquidity_tiers_size();
  for (const auto& msg : this->_internal_liquidity_tiers()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // .dydxprotocol.perpetuals.Params params = 3 [(.gogoproto.nullable) = false];
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.params_);
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
  // @@protoc_insertion_point(class_specific_merge_from_start:dydxprotocol.perpetuals.GenesisState)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_perpetuals()->MergeFrom(from._internal_perpetuals());
  _this->_internal_mutable_liquidity_tiers()->MergeFrom(from._internal_liquidity_tiers());
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_internal_mutable_params()->::dydxprotocol::perpetuals::Params::MergeFrom(
        from._internal_params());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GenesisState::CopyFrom(const GenesisState& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dydxprotocol.perpetuals.GenesisState)
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
  _internal_mutable_perpetuals()->InternalSwap(other->_internal_mutable_perpetuals());
  _internal_mutable_liquidity_tiers()->InternalSwap(other->_internal_mutable_liquidity_tiers());
  swap(_impl_.params_, other->_impl_.params_);
}

::PROTOBUF_NAMESPACE_ID::Metadata GenesisState::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_dydxprotocol_2fperpetuals_2fgenesis_2eproto_getter, &descriptor_table_dydxprotocol_2fperpetuals_2fgenesis_2eproto_once,
      file_level_metadata_dydxprotocol_2fperpetuals_2fgenesis_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace perpetuals
}  // namespace dydxprotocol
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::dydxprotocol::perpetuals::GenesisState*
Arena::CreateMaybeMessage< ::dydxprotocol::perpetuals::GenesisState >(Arena* arena) {
  return Arena::CreateMessageInternal< ::dydxprotocol::perpetuals::GenesisState >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"