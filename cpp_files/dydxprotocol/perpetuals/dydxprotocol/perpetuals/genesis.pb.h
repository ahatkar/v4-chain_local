// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dydxprotocol/perpetuals/genesis.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2fperpetuals_2fgenesis_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2fperpetuals_2fgenesis_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4023000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4023004 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
#include "gogoproto/gogo.pb.h"
#include "dydxprotocol/perpetuals/perpetual.pb.h"
#include "dydxprotocol/perpetuals/params.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_dydxprotocol_2fperpetuals_2fgenesis_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_dydxprotocol_2fperpetuals_2fgenesis_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_dydxprotocol_2fperpetuals_2fgenesis_2eproto;
namespace dydxprotocol {
namespace perpetuals {
class GenesisState;
struct GenesisStateDefaultTypeInternal;
extern GenesisStateDefaultTypeInternal _GenesisState_default_instance_;
}  // namespace perpetuals
}  // namespace dydxprotocol
PROTOBUF_NAMESPACE_OPEN
template <>
::dydxprotocol::perpetuals::GenesisState* Arena::CreateMaybeMessage<::dydxprotocol::perpetuals::GenesisState>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace dydxprotocol {
namespace perpetuals {

// ===================================================================


// -------------------------------------------------------------------

class GenesisState final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:dydxprotocol.perpetuals.GenesisState) */ {
 public:
  inline GenesisState() : GenesisState(nullptr) {}
  ~GenesisState() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR GenesisState(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GenesisState(const GenesisState& from);
  GenesisState(GenesisState&& from) noexcept
    : GenesisState() {
    *this = ::std::move(from);
  }

  inline GenesisState& operator=(const GenesisState& from) {
    CopyFrom(from);
    return *this;
  }
  inline GenesisState& operator=(GenesisState&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const GenesisState& default_instance() {
    return *internal_default_instance();
  }
  static inline const GenesisState* internal_default_instance() {
    return reinterpret_cast<const GenesisState*>(
               &_GenesisState_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GenesisState& a, GenesisState& b) {
    a.Swap(&b);
  }
  inline void Swap(GenesisState* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(GenesisState* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GenesisState* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GenesisState>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const GenesisState& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const GenesisState& from) {
    GenesisState::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GenesisState* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "dydxprotocol.perpetuals.GenesisState";
  }
  protected:
  explicit GenesisState(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPerpetualsFieldNumber = 1,
    kLiquidityTiersFieldNumber = 2,
    kParamsFieldNumber = 3,
  };
  // repeated .dydxprotocol.perpetuals.Perpetual perpetuals = 1 [(.gogoproto.nullable) = false];
  int perpetuals_size() const;
  private:
  int _internal_perpetuals_size() const;

  public:
  void clear_perpetuals() ;
  ::dydxprotocol::perpetuals::Perpetual* mutable_perpetuals(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::dydxprotocol::perpetuals::Perpetual >*
      mutable_perpetuals();
  private:
  const ::dydxprotocol::perpetuals::Perpetual& _internal_perpetuals(int index) const;
  ::dydxprotocol::perpetuals::Perpetual* _internal_add_perpetuals();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::dydxprotocol::perpetuals::Perpetual>& _internal_perpetuals() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::dydxprotocol::perpetuals::Perpetual>* _internal_mutable_perpetuals();
  public:
  const ::dydxprotocol::perpetuals::Perpetual& perpetuals(int index) const;
  ::dydxprotocol::perpetuals::Perpetual* add_perpetuals();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::dydxprotocol::perpetuals::Perpetual >&
      perpetuals() const;
  // repeated .dydxprotocol.perpetuals.LiquidityTier liquidity_tiers = 2 [(.gogoproto.nullable) = false];
  int liquidity_tiers_size() const;
  private:
  int _internal_liquidity_tiers_size() const;

  public:
  void clear_liquidity_tiers() ;
  ::dydxprotocol::perpetuals::LiquidityTier* mutable_liquidity_tiers(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::dydxprotocol::perpetuals::LiquidityTier >*
      mutable_liquidity_tiers();
  private:
  const ::dydxprotocol::perpetuals::LiquidityTier& _internal_liquidity_tiers(int index) const;
  ::dydxprotocol::perpetuals::LiquidityTier* _internal_add_liquidity_tiers();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::dydxprotocol::perpetuals::LiquidityTier>& _internal_liquidity_tiers() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::dydxprotocol::perpetuals::LiquidityTier>* _internal_mutable_liquidity_tiers();
  public:
  const ::dydxprotocol::perpetuals::LiquidityTier& liquidity_tiers(int index) const;
  ::dydxprotocol::perpetuals::LiquidityTier* add_liquidity_tiers();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::dydxprotocol::perpetuals::LiquidityTier >&
      liquidity_tiers() const;
  // .dydxprotocol.perpetuals.Params params = 3 [(.gogoproto.nullable) = false];
  bool has_params() const;
  void clear_params() ;
  const ::dydxprotocol::perpetuals::Params& params() const;
  PROTOBUF_NODISCARD ::dydxprotocol::perpetuals::Params* release_params();
  ::dydxprotocol::perpetuals::Params* mutable_params();
  void set_allocated_params(::dydxprotocol::perpetuals::Params* params);
  private:
  const ::dydxprotocol::perpetuals::Params& _internal_params() const;
  ::dydxprotocol::perpetuals::Params* _internal_mutable_params();
  public:
  void unsafe_arena_set_allocated_params(
      ::dydxprotocol::perpetuals::Params* params);
  ::dydxprotocol::perpetuals::Params* unsafe_arena_release_params();
  // @@protoc_insertion_point(class_scope:dydxprotocol.perpetuals.GenesisState)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::dydxprotocol::perpetuals::Perpetual > perpetuals_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::dydxprotocol::perpetuals::LiquidityTier > liquidity_tiers_;
    ::dydxprotocol::perpetuals::Params* params_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_dydxprotocol_2fperpetuals_2fgenesis_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// GenesisState

// repeated .dydxprotocol.perpetuals.Perpetual perpetuals = 1 [(.gogoproto.nullable) = false];
inline int GenesisState::_internal_perpetuals_size() const {
  return _impl_.perpetuals_.size();
}
inline int GenesisState::perpetuals_size() const {
  return _internal_perpetuals_size();
}
inline ::dydxprotocol::perpetuals::Perpetual* GenesisState::mutable_perpetuals(int index) {
  // @@protoc_insertion_point(field_mutable:dydxprotocol.perpetuals.GenesisState.perpetuals)
  return _internal_mutable_perpetuals()->Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::dydxprotocol::perpetuals::Perpetual >*
GenesisState::mutable_perpetuals() {
  // @@protoc_insertion_point(field_mutable_list:dydxprotocol.perpetuals.GenesisState.perpetuals)
  return _internal_mutable_perpetuals();
}
inline const ::dydxprotocol::perpetuals::Perpetual& GenesisState::_internal_perpetuals(int index) const {
  return _internal_perpetuals().Get(index);
}
inline const ::dydxprotocol::perpetuals::Perpetual& GenesisState::perpetuals(int index) const {
  // @@protoc_insertion_point(field_get:dydxprotocol.perpetuals.GenesisState.perpetuals)
  return _internal_perpetuals(index);
}
inline ::dydxprotocol::perpetuals::Perpetual* GenesisState::_internal_add_perpetuals() {
  return _internal_mutable_perpetuals()->Add();
}
inline ::dydxprotocol::perpetuals::Perpetual* GenesisState::add_perpetuals() {
  ::dydxprotocol::perpetuals::Perpetual* _add = _internal_add_perpetuals();
  // @@protoc_insertion_point(field_add:dydxprotocol.perpetuals.GenesisState.perpetuals)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::dydxprotocol::perpetuals::Perpetual >&
GenesisState::perpetuals() const {
  // @@protoc_insertion_point(field_list:dydxprotocol.perpetuals.GenesisState.perpetuals)
  return _internal_perpetuals();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::dydxprotocol::perpetuals::Perpetual>&
GenesisState::_internal_perpetuals() const {
  return _impl_.perpetuals_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::dydxprotocol::perpetuals::Perpetual>*
GenesisState::_internal_mutable_perpetuals() {
  return &_impl_.perpetuals_;
}

// repeated .dydxprotocol.perpetuals.LiquidityTier liquidity_tiers = 2 [(.gogoproto.nullable) = false];
inline int GenesisState::_internal_liquidity_tiers_size() const {
  return _impl_.liquidity_tiers_.size();
}
inline int GenesisState::liquidity_tiers_size() const {
  return _internal_liquidity_tiers_size();
}
inline ::dydxprotocol::perpetuals::LiquidityTier* GenesisState::mutable_liquidity_tiers(int index) {
  // @@protoc_insertion_point(field_mutable:dydxprotocol.perpetuals.GenesisState.liquidity_tiers)
  return _internal_mutable_liquidity_tiers()->Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::dydxprotocol::perpetuals::LiquidityTier >*
GenesisState::mutable_liquidity_tiers() {
  // @@protoc_insertion_point(field_mutable_list:dydxprotocol.perpetuals.GenesisState.liquidity_tiers)
  return _internal_mutable_liquidity_tiers();
}
inline const ::dydxprotocol::perpetuals::LiquidityTier& GenesisState::_internal_liquidity_tiers(int index) const {
  return _internal_liquidity_tiers().Get(index);
}
inline const ::dydxprotocol::perpetuals::LiquidityTier& GenesisState::liquidity_tiers(int index) const {
  // @@protoc_insertion_point(field_get:dydxprotocol.perpetuals.GenesisState.liquidity_tiers)
  return _internal_liquidity_tiers(index);
}
inline ::dydxprotocol::perpetuals::LiquidityTier* GenesisState::_internal_add_liquidity_tiers() {
  return _internal_mutable_liquidity_tiers()->Add();
}
inline ::dydxprotocol::perpetuals::LiquidityTier* GenesisState::add_liquidity_tiers() {
  ::dydxprotocol::perpetuals::LiquidityTier* _add = _internal_add_liquidity_tiers();
  // @@protoc_insertion_point(field_add:dydxprotocol.perpetuals.GenesisState.liquidity_tiers)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::dydxprotocol::perpetuals::LiquidityTier >&
GenesisState::liquidity_tiers() const {
  // @@protoc_insertion_point(field_list:dydxprotocol.perpetuals.GenesisState.liquidity_tiers)
  return _internal_liquidity_tiers();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::dydxprotocol::perpetuals::LiquidityTier>&
GenesisState::_internal_liquidity_tiers() const {
  return _impl_.liquidity_tiers_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::dydxprotocol::perpetuals::LiquidityTier>*
GenesisState::_internal_mutable_liquidity_tiers() {
  return &_impl_.liquidity_tiers_;
}

// .dydxprotocol.perpetuals.Params params = 3 [(.gogoproto.nullable) = false];
inline bool GenesisState::has_params() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.params_ != nullptr);
  return value;
}
inline const ::dydxprotocol::perpetuals::Params& GenesisState::_internal_params() const {
  const ::dydxprotocol::perpetuals::Params* p = _impl_.params_;
  return p != nullptr ? *p : reinterpret_cast<const ::dydxprotocol::perpetuals::Params&>(
      ::dydxprotocol::perpetuals::_Params_default_instance_);
}
inline const ::dydxprotocol::perpetuals::Params& GenesisState::params() const {
  // @@protoc_insertion_point(field_get:dydxprotocol.perpetuals.GenesisState.params)
  return _internal_params();
}
inline void GenesisState::unsafe_arena_set_allocated_params(
    ::dydxprotocol::perpetuals::Params* params) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.params_);
  }
  _impl_.params_ = params;
  if (params) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:dydxprotocol.perpetuals.GenesisState.params)
}
inline ::dydxprotocol::perpetuals::Params* GenesisState::release_params() {
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::dydxprotocol::perpetuals::Params* temp = _impl_.params_;
  _impl_.params_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::dydxprotocol::perpetuals::Params* GenesisState::unsafe_arena_release_params() {
  // @@protoc_insertion_point(field_release:dydxprotocol.perpetuals.GenesisState.params)
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::dydxprotocol::perpetuals::Params* temp = _impl_.params_;
  _impl_.params_ = nullptr;
  return temp;
}
inline ::dydxprotocol::perpetuals::Params* GenesisState::_internal_mutable_params() {
  _impl_._has_bits_[0] |= 0x00000001u;
  if (_impl_.params_ == nullptr) {
    auto* p = CreateMaybeMessage<::dydxprotocol::perpetuals::Params>(GetArenaForAllocation());
    _impl_.params_ = p;
  }
  return _impl_.params_;
}
inline ::dydxprotocol::perpetuals::Params* GenesisState::mutable_params() {
  ::dydxprotocol::perpetuals::Params* _msg = _internal_mutable_params();
  // @@protoc_insertion_point(field_mutable:dydxprotocol.perpetuals.GenesisState.params)
  return _msg;
}
inline void GenesisState::set_allocated_params(::dydxprotocol::perpetuals::Params* params) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.params_);
  }
  if (params) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(params));
    if (message_arena != submessage_arena) {
      params = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, params, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.params_ = params;
  // @@protoc_insertion_point(field_set_allocated:dydxprotocol.perpetuals.GenesisState.params)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace perpetuals
}  // namespace dydxprotocol


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2fperpetuals_2fgenesis_2eproto_2epb_2eh
