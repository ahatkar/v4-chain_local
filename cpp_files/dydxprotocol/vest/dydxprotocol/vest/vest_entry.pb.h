// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dydxprotocol/vest/vest_entry.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2fvest_2fvest_5fentry_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2fvest_2fvest_5fentry_2eproto_2epb_2eh

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
#include "google/protobuf/timestamp.pb.h"
#include "gogoproto/gogo.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_dydxprotocol_2fvest_2fvest_5fentry_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_dydxprotocol_2fvest_2fvest_5fentry_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_dydxprotocol_2fvest_2fvest_5fentry_2eproto;
namespace dydxprotocol {
namespace vest {
class VestEntry;
struct VestEntryDefaultTypeInternal;
extern VestEntryDefaultTypeInternal _VestEntry_default_instance_;
}  // namespace vest
}  // namespace dydxprotocol
PROTOBUF_NAMESPACE_OPEN
template <>
::dydxprotocol::vest::VestEntry* Arena::CreateMaybeMessage<::dydxprotocol::vest::VestEntry>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace dydxprotocol {
namespace vest {

// ===================================================================


// -------------------------------------------------------------------

class VestEntry final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:dydxprotocol.vest.VestEntry) */ {
 public:
  inline VestEntry() : VestEntry(nullptr) {}
  ~VestEntry() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR VestEntry(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  VestEntry(const VestEntry& from);
  VestEntry(VestEntry&& from) noexcept
    : VestEntry() {
    *this = ::std::move(from);
  }

  inline VestEntry& operator=(const VestEntry& from) {
    CopyFrom(from);
    return *this;
  }
  inline VestEntry& operator=(VestEntry&& from) noexcept {
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
  static const VestEntry& default_instance() {
    return *internal_default_instance();
  }
  static inline const VestEntry* internal_default_instance() {
    return reinterpret_cast<const VestEntry*>(
               &_VestEntry_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(VestEntry& a, VestEntry& b) {
    a.Swap(&b);
  }
  inline void Swap(VestEntry* other) {
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
  void UnsafeArenaSwap(VestEntry* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  VestEntry* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<VestEntry>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const VestEntry& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const VestEntry& from) {
    VestEntry::MergeImpl(*this, from);
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
  void InternalSwap(VestEntry* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "dydxprotocol.vest.VestEntry";
  }
  protected:
  explicit VestEntry(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kVesterAccountFieldNumber = 1,
    kTreasuryAccountFieldNumber = 2,
    kDenomFieldNumber = 3,
    kStartTimeFieldNumber = 4,
    kEndTimeFieldNumber = 5,
  };
  // string vester_account = 1;
  void clear_vester_account() ;
  const std::string& vester_account() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_vester_account(Arg_&& arg, Args_... args);
  std::string* mutable_vester_account();
  PROTOBUF_NODISCARD std::string* release_vester_account();
  void set_allocated_vester_account(std::string* ptr);

  private:
  const std::string& _internal_vester_account() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_vester_account(
      const std::string& value);
  std::string* _internal_mutable_vester_account();

  public:
  // string treasury_account = 2;
  void clear_treasury_account() ;
  const std::string& treasury_account() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_treasury_account(Arg_&& arg, Args_... args);
  std::string* mutable_treasury_account();
  PROTOBUF_NODISCARD std::string* release_treasury_account();
  void set_allocated_treasury_account(std::string* ptr);

  private:
  const std::string& _internal_treasury_account() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_treasury_account(
      const std::string& value);
  std::string* _internal_mutable_treasury_account();

  public:
  // string denom = 3;
  void clear_denom() ;
  const std::string& denom() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_denom(Arg_&& arg, Args_... args);
  std::string* mutable_denom();
  PROTOBUF_NODISCARD std::string* release_denom();
  void set_allocated_denom(std::string* ptr);

  private:
  const std::string& _internal_denom() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_denom(
      const std::string& value);
  std::string* _internal_mutable_denom();

  public:
  // .google.protobuf.Timestamp start_time = 4 [(.gogoproto.nullable) = false, (.gogoproto.stdtime) = true];
  bool has_start_time() const;
  void clear_start_time() ;
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& start_time() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::Timestamp* release_start_time();
  ::PROTOBUF_NAMESPACE_ID::Timestamp* mutable_start_time();
  void set_allocated_start_time(::PROTOBUF_NAMESPACE_ID::Timestamp* start_time);
  private:
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& _internal_start_time() const;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_start_time();
  public:
  void unsafe_arena_set_allocated_start_time(
      ::PROTOBUF_NAMESPACE_ID::Timestamp* start_time);
  ::PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_start_time();
  // .google.protobuf.Timestamp end_time = 5 [(.gogoproto.nullable) = false, (.gogoproto.stdtime) = true];
  bool has_end_time() const;
  void clear_end_time() ;
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& end_time() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::Timestamp* release_end_time();
  ::PROTOBUF_NAMESPACE_ID::Timestamp* mutable_end_time();
  void set_allocated_end_time(::PROTOBUF_NAMESPACE_ID::Timestamp* end_time);
  private:
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& _internal_end_time() const;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_end_time();
  public:
  void unsafe_arena_set_allocated_end_time(
      ::PROTOBUF_NAMESPACE_ID::Timestamp* end_time);
  ::PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_end_time();
  // @@protoc_insertion_point(class_scope:dydxprotocol.vest.VestEntry)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr vester_account_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr treasury_account_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr denom_;
    ::PROTOBUF_NAMESPACE_ID::Timestamp* start_time_;
    ::PROTOBUF_NAMESPACE_ID::Timestamp* end_time_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_dydxprotocol_2fvest_2fvest_5fentry_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// VestEntry

// string vester_account = 1;
inline void VestEntry::clear_vester_account() {
  _impl_.vester_account_.ClearToEmpty();
}
inline const std::string& VestEntry::vester_account() const {
  // @@protoc_insertion_point(field_get:dydxprotocol.vest.VestEntry.vester_account)
  return _internal_vester_account();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void VestEntry::set_vester_account(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.vester_account_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:dydxprotocol.vest.VestEntry.vester_account)
}
inline std::string* VestEntry::mutable_vester_account() {
  std::string* _s = _internal_mutable_vester_account();
  // @@protoc_insertion_point(field_mutable:dydxprotocol.vest.VestEntry.vester_account)
  return _s;
}
inline const std::string& VestEntry::_internal_vester_account() const {
  return _impl_.vester_account_.Get();
}
inline void VestEntry::_internal_set_vester_account(const std::string& value) {
  ;


  _impl_.vester_account_.Set(value, GetArenaForAllocation());
}
inline std::string* VestEntry::_internal_mutable_vester_account() {
  ;
  return _impl_.vester_account_.Mutable( GetArenaForAllocation());
}
inline std::string* VestEntry::release_vester_account() {
  // @@protoc_insertion_point(field_release:dydxprotocol.vest.VestEntry.vester_account)
  return _impl_.vester_account_.Release();
}
inline void VestEntry::set_allocated_vester_account(std::string* value) {
  _impl_.vester_account_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.vester_account_.IsDefault()) {
          _impl_.vester_account_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:dydxprotocol.vest.VestEntry.vester_account)
}

// string treasury_account = 2;
inline void VestEntry::clear_treasury_account() {
  _impl_.treasury_account_.ClearToEmpty();
}
inline const std::string& VestEntry::treasury_account() const {
  // @@protoc_insertion_point(field_get:dydxprotocol.vest.VestEntry.treasury_account)
  return _internal_treasury_account();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void VestEntry::set_treasury_account(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.treasury_account_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:dydxprotocol.vest.VestEntry.treasury_account)
}
inline std::string* VestEntry::mutable_treasury_account() {
  std::string* _s = _internal_mutable_treasury_account();
  // @@protoc_insertion_point(field_mutable:dydxprotocol.vest.VestEntry.treasury_account)
  return _s;
}
inline const std::string& VestEntry::_internal_treasury_account() const {
  return _impl_.treasury_account_.Get();
}
inline void VestEntry::_internal_set_treasury_account(const std::string& value) {
  ;


  _impl_.treasury_account_.Set(value, GetArenaForAllocation());
}
inline std::string* VestEntry::_internal_mutable_treasury_account() {
  ;
  return _impl_.treasury_account_.Mutable( GetArenaForAllocation());
}
inline std::string* VestEntry::release_treasury_account() {
  // @@protoc_insertion_point(field_release:dydxprotocol.vest.VestEntry.treasury_account)
  return _impl_.treasury_account_.Release();
}
inline void VestEntry::set_allocated_treasury_account(std::string* value) {
  _impl_.treasury_account_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.treasury_account_.IsDefault()) {
          _impl_.treasury_account_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:dydxprotocol.vest.VestEntry.treasury_account)
}

// string denom = 3;
inline void VestEntry::clear_denom() {
  _impl_.denom_.ClearToEmpty();
}
inline const std::string& VestEntry::denom() const {
  // @@protoc_insertion_point(field_get:dydxprotocol.vest.VestEntry.denom)
  return _internal_denom();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void VestEntry::set_denom(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.denom_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:dydxprotocol.vest.VestEntry.denom)
}
inline std::string* VestEntry::mutable_denom() {
  std::string* _s = _internal_mutable_denom();
  // @@protoc_insertion_point(field_mutable:dydxprotocol.vest.VestEntry.denom)
  return _s;
}
inline const std::string& VestEntry::_internal_denom() const {
  return _impl_.denom_.Get();
}
inline void VestEntry::_internal_set_denom(const std::string& value) {
  ;


  _impl_.denom_.Set(value, GetArenaForAllocation());
}
inline std::string* VestEntry::_internal_mutable_denom() {
  ;
  return _impl_.denom_.Mutable( GetArenaForAllocation());
}
inline std::string* VestEntry::release_denom() {
  // @@protoc_insertion_point(field_release:dydxprotocol.vest.VestEntry.denom)
  return _impl_.denom_.Release();
}
inline void VestEntry::set_allocated_denom(std::string* value) {
  _impl_.denom_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.denom_.IsDefault()) {
          _impl_.denom_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:dydxprotocol.vest.VestEntry.denom)
}

// .google.protobuf.Timestamp start_time = 4 [(.gogoproto.nullable) = false, (.gogoproto.stdtime) = true];
inline bool VestEntry::has_start_time() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.start_time_ != nullptr);
  return value;
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& VestEntry::_internal_start_time() const {
  const ::PROTOBUF_NAMESPACE_ID::Timestamp* p = _impl_.start_time_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Timestamp&>(
      ::PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& VestEntry::start_time() const {
  // @@protoc_insertion_point(field_get:dydxprotocol.vest.VestEntry.start_time)
  return _internal_start_time();
}
inline void VestEntry::unsafe_arena_set_allocated_start_time(
    ::PROTOBUF_NAMESPACE_ID::Timestamp* start_time) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.start_time_);
  }
  _impl_.start_time_ = start_time;
  if (start_time) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:dydxprotocol.vest.VestEntry.start_time)
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* VestEntry::release_start_time() {
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.start_time_;
  _impl_.start_time_ = nullptr;
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
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* VestEntry::unsafe_arena_release_start_time() {
  // @@protoc_insertion_point(field_release:dydxprotocol.vest.VestEntry.start_time)
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.start_time_;
  _impl_.start_time_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* VestEntry::_internal_mutable_start_time() {
  _impl_._has_bits_[0] |= 0x00000001u;
  if (_impl_.start_time_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    _impl_.start_time_ = p;
  }
  return _impl_.start_time_;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* VestEntry::mutable_start_time() {
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _msg = _internal_mutable_start_time();
  // @@protoc_insertion_point(field_mutable:dydxprotocol.vest.VestEntry.start_time)
  return _msg;
}
inline void VestEntry::set_allocated_start_time(::PROTOBUF_NAMESPACE_ID::Timestamp* start_time) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.start_time_);
  }
  if (start_time) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(start_time));
    if (message_arena != submessage_arena) {
      start_time = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, start_time, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.start_time_ = start_time;
  // @@protoc_insertion_point(field_set_allocated:dydxprotocol.vest.VestEntry.start_time)
}

// .google.protobuf.Timestamp end_time = 5 [(.gogoproto.nullable) = false, (.gogoproto.stdtime) = true];
inline bool VestEntry::has_end_time() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.end_time_ != nullptr);
  return value;
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& VestEntry::_internal_end_time() const {
  const ::PROTOBUF_NAMESPACE_ID::Timestamp* p = _impl_.end_time_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Timestamp&>(
      ::PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& VestEntry::end_time() const {
  // @@protoc_insertion_point(field_get:dydxprotocol.vest.VestEntry.end_time)
  return _internal_end_time();
}
inline void VestEntry::unsafe_arena_set_allocated_end_time(
    ::PROTOBUF_NAMESPACE_ID::Timestamp* end_time) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.end_time_);
  }
  _impl_.end_time_ = end_time;
  if (end_time) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:dydxprotocol.vest.VestEntry.end_time)
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* VestEntry::release_end_time() {
  _impl_._has_bits_[0] &= ~0x00000002u;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.end_time_;
  _impl_.end_time_ = nullptr;
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
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* VestEntry::unsafe_arena_release_end_time() {
  // @@protoc_insertion_point(field_release:dydxprotocol.vest.VestEntry.end_time)
  _impl_._has_bits_[0] &= ~0x00000002u;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.end_time_;
  _impl_.end_time_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* VestEntry::_internal_mutable_end_time() {
  _impl_._has_bits_[0] |= 0x00000002u;
  if (_impl_.end_time_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    _impl_.end_time_ = p;
  }
  return _impl_.end_time_;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* VestEntry::mutable_end_time() {
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _msg = _internal_mutable_end_time();
  // @@protoc_insertion_point(field_mutable:dydxprotocol.vest.VestEntry.end_time)
  return _msg;
}
inline void VestEntry::set_allocated_end_time(::PROTOBUF_NAMESPACE_ID::Timestamp* end_time) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.end_time_);
  }
  if (end_time) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(end_time));
    if (message_arena != submessage_arena) {
      end_time = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, end_time, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.end_time_ = end_time;
  // @@protoc_insertion_point(field_set_allocated:dydxprotocol.vest.VestEntry.end_time)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace vest
}  // namespace dydxprotocol


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2fvest_2fvest_5fentry_2eproto_2epb_2eh