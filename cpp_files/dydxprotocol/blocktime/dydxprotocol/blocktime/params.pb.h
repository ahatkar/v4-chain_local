// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dydxprotocol/blocktime/params.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2fblocktime_2fparams_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2fblocktime_2fparams_2eproto_2epb_2eh

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
#include "google/protobuf/duration.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_dydxprotocol_2fblocktime_2fparams_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_dydxprotocol_2fblocktime_2fparams_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_dydxprotocol_2fblocktime_2fparams_2eproto;
namespace dydxprotocol {
namespace blocktime {
class DowntimeParams;
struct DowntimeParamsDefaultTypeInternal;
extern DowntimeParamsDefaultTypeInternal _DowntimeParams_default_instance_;
}  // namespace blocktime
}  // namespace dydxprotocol
PROTOBUF_NAMESPACE_OPEN
template <>
::dydxprotocol::blocktime::DowntimeParams* Arena::CreateMaybeMessage<::dydxprotocol::blocktime::DowntimeParams>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace dydxprotocol {
namespace blocktime {

// ===================================================================


// -------------------------------------------------------------------

class DowntimeParams final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:dydxprotocol.blocktime.DowntimeParams) */ {
 public:
  inline DowntimeParams() : DowntimeParams(nullptr) {}
  ~DowntimeParams() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR DowntimeParams(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  DowntimeParams(const DowntimeParams& from);
  DowntimeParams(DowntimeParams&& from) noexcept
    : DowntimeParams() {
    *this = ::std::move(from);
  }

  inline DowntimeParams& operator=(const DowntimeParams& from) {
    CopyFrom(from);
    return *this;
  }
  inline DowntimeParams& operator=(DowntimeParams&& from) noexcept {
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
  static const DowntimeParams& default_instance() {
    return *internal_default_instance();
  }
  static inline const DowntimeParams* internal_default_instance() {
    return reinterpret_cast<const DowntimeParams*>(
               &_DowntimeParams_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(DowntimeParams& a, DowntimeParams& b) {
    a.Swap(&b);
  }
  inline void Swap(DowntimeParams* other) {
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
  void UnsafeArenaSwap(DowntimeParams* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  DowntimeParams* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<DowntimeParams>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const DowntimeParams& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const DowntimeParams& from) {
    DowntimeParams::MergeImpl(*this, from);
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
  void InternalSwap(DowntimeParams* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "dydxprotocol.blocktime.DowntimeParams";
  }
  protected:
  explicit DowntimeParams(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDurationsFieldNumber = 1,
    kClockDriftGracePeriodDurationFieldNumber = 2,
  };
  // repeated .google.protobuf.Duration durations = 1 [(.gogoproto.nullable) = false, (.gogoproto.stdduration) = true];
  int durations_size() const;
  private:
  int _internal_durations_size() const;

  public:
  void clear_durations() ;
  ::PROTOBUF_NAMESPACE_ID::Duration* mutable_durations(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::PROTOBUF_NAMESPACE_ID::Duration >*
      mutable_durations();
  private:
  const ::PROTOBUF_NAMESPACE_ID::Duration& _internal_durations(int index) const;
  ::PROTOBUF_NAMESPACE_ID::Duration* _internal_add_durations();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::PROTOBUF_NAMESPACE_ID::Duration>& _internal_durations() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::PROTOBUF_NAMESPACE_ID::Duration>* _internal_mutable_durations();
  public:
  const ::PROTOBUF_NAMESPACE_ID::Duration& durations(int index) const;
  ::PROTOBUF_NAMESPACE_ID::Duration* add_durations();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::PROTOBUF_NAMESPACE_ID::Duration >&
      durations() const;
  // .google.protobuf.Duration clock_drift_grace_period_duration = 2 [(.gogoproto.nullable) = false, (.gogoproto.stdduration) = true];
  bool has_clock_drift_grace_period_duration() const;
  void clear_clock_drift_grace_period_duration() ;
  const ::PROTOBUF_NAMESPACE_ID::Duration& clock_drift_grace_period_duration() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::Duration* release_clock_drift_grace_period_duration();
  ::PROTOBUF_NAMESPACE_ID::Duration* mutable_clock_drift_grace_period_duration();
  void set_allocated_clock_drift_grace_period_duration(::PROTOBUF_NAMESPACE_ID::Duration* clock_drift_grace_period_duration);
  private:
  const ::PROTOBUF_NAMESPACE_ID::Duration& _internal_clock_drift_grace_period_duration() const;
  ::PROTOBUF_NAMESPACE_ID::Duration* _internal_mutable_clock_drift_grace_period_duration();
  public:
  void unsafe_arena_set_allocated_clock_drift_grace_period_duration(
      ::PROTOBUF_NAMESPACE_ID::Duration* clock_drift_grace_period_duration);
  ::PROTOBUF_NAMESPACE_ID::Duration* unsafe_arena_release_clock_drift_grace_period_duration();
  // @@protoc_insertion_point(class_scope:dydxprotocol.blocktime.DowntimeParams)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::PROTOBUF_NAMESPACE_ID::Duration > durations_;
    ::PROTOBUF_NAMESPACE_ID::Duration* clock_drift_grace_period_duration_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_dydxprotocol_2fblocktime_2fparams_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// DowntimeParams

// repeated .google.protobuf.Duration durations = 1 [(.gogoproto.nullable) = false, (.gogoproto.stdduration) = true];
inline int DowntimeParams::_internal_durations_size() const {
  return _impl_.durations_.size();
}
inline int DowntimeParams::durations_size() const {
  return _internal_durations_size();
}
inline ::PROTOBUF_NAMESPACE_ID::Duration* DowntimeParams::mutable_durations(int index) {
  // @@protoc_insertion_point(field_mutable:dydxprotocol.blocktime.DowntimeParams.durations)
  return _internal_mutable_durations()->Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::PROTOBUF_NAMESPACE_ID::Duration >*
DowntimeParams::mutable_durations() {
  // @@protoc_insertion_point(field_mutable_list:dydxprotocol.blocktime.DowntimeParams.durations)
  return _internal_mutable_durations();
}
inline const ::PROTOBUF_NAMESPACE_ID::Duration& DowntimeParams::_internal_durations(int index) const {
  return _internal_durations().Get(index);
}
inline const ::PROTOBUF_NAMESPACE_ID::Duration& DowntimeParams::durations(int index) const {
  // @@protoc_insertion_point(field_get:dydxprotocol.blocktime.DowntimeParams.durations)
  return _internal_durations(index);
}
inline ::PROTOBUF_NAMESPACE_ID::Duration* DowntimeParams::_internal_add_durations() {
  return _internal_mutable_durations()->Add();
}
inline ::PROTOBUF_NAMESPACE_ID::Duration* DowntimeParams::add_durations() {
  ::PROTOBUF_NAMESPACE_ID::Duration* _add = _internal_add_durations();
  // @@protoc_insertion_point(field_add:dydxprotocol.blocktime.DowntimeParams.durations)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::PROTOBUF_NAMESPACE_ID::Duration >&
DowntimeParams::durations() const {
  // @@protoc_insertion_point(field_list:dydxprotocol.blocktime.DowntimeParams.durations)
  return _internal_durations();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::PROTOBUF_NAMESPACE_ID::Duration>&
DowntimeParams::_internal_durations() const {
  return _impl_.durations_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::PROTOBUF_NAMESPACE_ID::Duration>*
DowntimeParams::_internal_mutable_durations() {
  return &_impl_.durations_;
}

// .google.protobuf.Duration clock_drift_grace_period_duration = 2 [(.gogoproto.nullable) = false, (.gogoproto.stdduration) = true];
inline bool DowntimeParams::has_clock_drift_grace_period_duration() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.clock_drift_grace_period_duration_ != nullptr);
  return value;
}
inline const ::PROTOBUF_NAMESPACE_ID::Duration& DowntimeParams::_internal_clock_drift_grace_period_duration() const {
  const ::PROTOBUF_NAMESPACE_ID::Duration* p = _impl_.clock_drift_grace_period_duration_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Duration&>(
      ::PROTOBUF_NAMESPACE_ID::_Duration_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Duration& DowntimeParams::clock_drift_grace_period_duration() const {
  // @@protoc_insertion_point(field_get:dydxprotocol.blocktime.DowntimeParams.clock_drift_grace_period_duration)
  return _internal_clock_drift_grace_period_duration();
}
inline void DowntimeParams::unsafe_arena_set_allocated_clock_drift_grace_period_duration(
    ::PROTOBUF_NAMESPACE_ID::Duration* clock_drift_grace_period_duration) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.clock_drift_grace_period_duration_);
  }
  _impl_.clock_drift_grace_period_duration_ = clock_drift_grace_period_duration;
  if (clock_drift_grace_period_duration) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:dydxprotocol.blocktime.DowntimeParams.clock_drift_grace_period_duration)
}
inline ::PROTOBUF_NAMESPACE_ID::Duration* DowntimeParams::release_clock_drift_grace_period_duration() {
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::PROTOBUF_NAMESPACE_ID::Duration* temp = _impl_.clock_drift_grace_period_duration_;
  _impl_.clock_drift_grace_period_duration_ = nullptr;
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
inline ::PROTOBUF_NAMESPACE_ID::Duration* DowntimeParams::unsafe_arena_release_clock_drift_grace_period_duration() {
  // @@protoc_insertion_point(field_release:dydxprotocol.blocktime.DowntimeParams.clock_drift_grace_period_duration)
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::PROTOBUF_NAMESPACE_ID::Duration* temp = _impl_.clock_drift_grace_period_duration_;
  _impl_.clock_drift_grace_period_duration_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Duration* DowntimeParams::_internal_mutable_clock_drift_grace_period_duration() {
  _impl_._has_bits_[0] |= 0x00000001u;
  if (_impl_.clock_drift_grace_period_duration_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Duration>(GetArenaForAllocation());
    _impl_.clock_drift_grace_period_duration_ = p;
  }
  return _impl_.clock_drift_grace_period_duration_;
}
inline ::PROTOBUF_NAMESPACE_ID::Duration* DowntimeParams::mutable_clock_drift_grace_period_duration() {
  ::PROTOBUF_NAMESPACE_ID::Duration* _msg = _internal_mutable_clock_drift_grace_period_duration();
  // @@protoc_insertion_point(field_mutable:dydxprotocol.blocktime.DowntimeParams.clock_drift_grace_period_duration)
  return _msg;
}
inline void DowntimeParams::set_allocated_clock_drift_grace_period_duration(::PROTOBUF_NAMESPACE_ID::Duration* clock_drift_grace_period_duration) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.clock_drift_grace_period_duration_);
  }
  if (clock_drift_grace_period_duration) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(clock_drift_grace_period_duration));
    if (message_arena != submessage_arena) {
      clock_drift_grace_period_duration = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, clock_drift_grace_period_duration, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.clock_drift_grace_period_duration_ = clock_drift_grace_period_duration;
  // @@protoc_insertion_point(field_set_allocated:dydxprotocol.blocktime.DowntimeParams.clock_drift_grace_period_duration)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace blocktime
}  // namespace dydxprotocol


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2fblocktime_2fparams_2eproto_2epb_2eh
