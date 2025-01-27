// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dydxprotocol/vest/tx.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2fvest_2ftx_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2fvest_2ftx_2eproto_2epb_2eh

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
#include "google/protobuf/generated_message_bases.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
#include "cosmos_proto/cosmos.pb.h"
#include "cosmos/msg/v1/msg.pb.h"
#include "dydxprotocol/vest/vest_entry.pb.h"
#include "gogoproto/gogo.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_dydxprotocol_2fvest_2ftx_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_dydxprotocol_2fvest_2ftx_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_dydxprotocol_2fvest_2ftx_2eproto;
namespace dydxprotocol {
namespace vest {
class MsgDeleteVestEntry;
struct MsgDeleteVestEntryDefaultTypeInternal;
extern MsgDeleteVestEntryDefaultTypeInternal _MsgDeleteVestEntry_default_instance_;
class MsgDeleteVestEntryResponse;
struct MsgDeleteVestEntryResponseDefaultTypeInternal;
extern MsgDeleteVestEntryResponseDefaultTypeInternal _MsgDeleteVestEntryResponse_default_instance_;
class MsgSetVestEntry;
struct MsgSetVestEntryDefaultTypeInternal;
extern MsgSetVestEntryDefaultTypeInternal _MsgSetVestEntry_default_instance_;
class MsgSetVestEntryResponse;
struct MsgSetVestEntryResponseDefaultTypeInternal;
extern MsgSetVestEntryResponseDefaultTypeInternal _MsgSetVestEntryResponse_default_instance_;
}  // namespace vest
}  // namespace dydxprotocol
PROTOBUF_NAMESPACE_OPEN
template <>
::dydxprotocol::vest::MsgDeleteVestEntry* Arena::CreateMaybeMessage<::dydxprotocol::vest::MsgDeleteVestEntry>(Arena*);
template <>
::dydxprotocol::vest::MsgDeleteVestEntryResponse* Arena::CreateMaybeMessage<::dydxprotocol::vest::MsgDeleteVestEntryResponse>(Arena*);
template <>
::dydxprotocol::vest::MsgSetVestEntry* Arena::CreateMaybeMessage<::dydxprotocol::vest::MsgSetVestEntry>(Arena*);
template <>
::dydxprotocol::vest::MsgSetVestEntryResponse* Arena::CreateMaybeMessage<::dydxprotocol::vest::MsgSetVestEntryResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace dydxprotocol {
namespace vest {

// ===================================================================


// -------------------------------------------------------------------

class MsgDeleteVestEntry final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:dydxprotocol.vest.MsgDeleteVestEntry) */ {
 public:
  inline MsgDeleteVestEntry() : MsgDeleteVestEntry(nullptr) {}
  ~MsgDeleteVestEntry() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR MsgDeleteVestEntry(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  MsgDeleteVestEntry(const MsgDeleteVestEntry& from);
  MsgDeleteVestEntry(MsgDeleteVestEntry&& from) noexcept
    : MsgDeleteVestEntry() {
    *this = ::std::move(from);
  }

  inline MsgDeleteVestEntry& operator=(const MsgDeleteVestEntry& from) {
    CopyFrom(from);
    return *this;
  }
  inline MsgDeleteVestEntry& operator=(MsgDeleteVestEntry&& from) noexcept {
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
  static const MsgDeleteVestEntry& default_instance() {
    return *internal_default_instance();
  }
  static inline const MsgDeleteVestEntry* internal_default_instance() {
    return reinterpret_cast<const MsgDeleteVestEntry*>(
               &_MsgDeleteVestEntry_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(MsgDeleteVestEntry& a, MsgDeleteVestEntry& b) {
    a.Swap(&b);
  }
  inline void Swap(MsgDeleteVestEntry* other) {
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
  void UnsafeArenaSwap(MsgDeleteVestEntry* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MsgDeleteVestEntry* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<MsgDeleteVestEntry>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const MsgDeleteVestEntry& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const MsgDeleteVestEntry& from) {
    MsgDeleteVestEntry::MergeImpl(*this, from);
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
  void InternalSwap(MsgDeleteVestEntry* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "dydxprotocol.vest.MsgDeleteVestEntry";
  }
  protected:
  explicit MsgDeleteVestEntry(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAuthorityFieldNumber = 1,
    kVesterAccountFieldNumber = 2,
  };
  // string authority = 1 [(.cosmos_proto.scalar) = "cosmos.AddressString"];
  void clear_authority() ;
  const std::string& authority() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_authority(Arg_&& arg, Args_... args);
  std::string* mutable_authority();
  PROTOBUF_NODISCARD std::string* release_authority();
  void set_allocated_authority(std::string* ptr);

  private:
  const std::string& _internal_authority() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_authority(
      const std::string& value);
  std::string* _internal_mutable_authority();

  public:
  // string vester_account = 2;
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
  // @@protoc_insertion_point(class_scope:dydxprotocol.vest.MsgDeleteVestEntry)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr authority_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr vester_account_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_dydxprotocol_2fvest_2ftx_2eproto;
};// -------------------------------------------------------------------

class MsgDeleteVestEntryResponse final :
    public ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase /* @@protoc_insertion_point(class_definition:dydxprotocol.vest.MsgDeleteVestEntryResponse) */ {
 public:
  inline MsgDeleteVestEntryResponse() : MsgDeleteVestEntryResponse(nullptr) {}
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR MsgDeleteVestEntryResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  MsgDeleteVestEntryResponse(const MsgDeleteVestEntryResponse& from);
  MsgDeleteVestEntryResponse(MsgDeleteVestEntryResponse&& from) noexcept
    : MsgDeleteVestEntryResponse() {
    *this = ::std::move(from);
  }

  inline MsgDeleteVestEntryResponse& operator=(const MsgDeleteVestEntryResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline MsgDeleteVestEntryResponse& operator=(MsgDeleteVestEntryResponse&& from) noexcept {
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
  static const MsgDeleteVestEntryResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const MsgDeleteVestEntryResponse* internal_default_instance() {
    return reinterpret_cast<const MsgDeleteVestEntryResponse*>(
               &_MsgDeleteVestEntryResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(MsgDeleteVestEntryResponse& a, MsgDeleteVestEntryResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(MsgDeleteVestEntryResponse* other) {
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
  void UnsafeArenaSwap(MsgDeleteVestEntryResponse* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MsgDeleteVestEntryResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<MsgDeleteVestEntryResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyFrom;
  inline void CopyFrom(const MsgDeleteVestEntryResponse& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl(*this, from);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeFrom;
  void MergeFrom(const MsgDeleteVestEntryResponse& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl(*this, from);
  }
  public:

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "dydxprotocol.vest.MsgDeleteVestEntryResponse";
  }
  protected:
  explicit MsgDeleteVestEntryResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:dydxprotocol.vest.MsgDeleteVestEntryResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
  };
  friend struct ::TableStruct_dydxprotocol_2fvest_2ftx_2eproto;
};// -------------------------------------------------------------------

class MsgSetVestEntry final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:dydxprotocol.vest.MsgSetVestEntry) */ {
 public:
  inline MsgSetVestEntry() : MsgSetVestEntry(nullptr) {}
  ~MsgSetVestEntry() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR MsgSetVestEntry(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  MsgSetVestEntry(const MsgSetVestEntry& from);
  MsgSetVestEntry(MsgSetVestEntry&& from) noexcept
    : MsgSetVestEntry() {
    *this = ::std::move(from);
  }

  inline MsgSetVestEntry& operator=(const MsgSetVestEntry& from) {
    CopyFrom(from);
    return *this;
  }
  inline MsgSetVestEntry& operator=(MsgSetVestEntry&& from) noexcept {
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
  static const MsgSetVestEntry& default_instance() {
    return *internal_default_instance();
  }
  static inline const MsgSetVestEntry* internal_default_instance() {
    return reinterpret_cast<const MsgSetVestEntry*>(
               &_MsgSetVestEntry_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(MsgSetVestEntry& a, MsgSetVestEntry& b) {
    a.Swap(&b);
  }
  inline void Swap(MsgSetVestEntry* other) {
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
  void UnsafeArenaSwap(MsgSetVestEntry* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MsgSetVestEntry* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<MsgSetVestEntry>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const MsgSetVestEntry& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const MsgSetVestEntry& from) {
    MsgSetVestEntry::MergeImpl(*this, from);
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
  void InternalSwap(MsgSetVestEntry* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "dydxprotocol.vest.MsgSetVestEntry";
  }
  protected:
  explicit MsgSetVestEntry(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAuthorityFieldNumber = 1,
    kEntryFieldNumber = 2,
  };
  // string authority = 1 [(.cosmos_proto.scalar) = "cosmos.AddressString"];
  void clear_authority() ;
  const std::string& authority() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_authority(Arg_&& arg, Args_... args);
  std::string* mutable_authority();
  PROTOBUF_NODISCARD std::string* release_authority();
  void set_allocated_authority(std::string* ptr);

  private:
  const std::string& _internal_authority() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_authority(
      const std::string& value);
  std::string* _internal_mutable_authority();

  public:
  // .dydxprotocol.vest.VestEntry entry = 2 [(.gogoproto.nullable) = false];
  bool has_entry() const;
  void clear_entry() ;
  const ::dydxprotocol::vest::VestEntry& entry() const;
  PROTOBUF_NODISCARD ::dydxprotocol::vest::VestEntry* release_entry();
  ::dydxprotocol::vest::VestEntry* mutable_entry();
  void set_allocated_entry(::dydxprotocol::vest::VestEntry* entry);
  private:
  const ::dydxprotocol::vest::VestEntry& _internal_entry() const;
  ::dydxprotocol::vest::VestEntry* _internal_mutable_entry();
  public:
  void unsafe_arena_set_allocated_entry(
      ::dydxprotocol::vest::VestEntry* entry);
  ::dydxprotocol::vest::VestEntry* unsafe_arena_release_entry();
  // @@protoc_insertion_point(class_scope:dydxprotocol.vest.MsgSetVestEntry)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr authority_;
    ::dydxprotocol::vest::VestEntry* entry_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_dydxprotocol_2fvest_2ftx_2eproto;
};// -------------------------------------------------------------------

class MsgSetVestEntryResponse final :
    public ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase /* @@protoc_insertion_point(class_definition:dydxprotocol.vest.MsgSetVestEntryResponse) */ {
 public:
  inline MsgSetVestEntryResponse() : MsgSetVestEntryResponse(nullptr) {}
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR MsgSetVestEntryResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  MsgSetVestEntryResponse(const MsgSetVestEntryResponse& from);
  MsgSetVestEntryResponse(MsgSetVestEntryResponse&& from) noexcept
    : MsgSetVestEntryResponse() {
    *this = ::std::move(from);
  }

  inline MsgSetVestEntryResponse& operator=(const MsgSetVestEntryResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline MsgSetVestEntryResponse& operator=(MsgSetVestEntryResponse&& from) noexcept {
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
  static const MsgSetVestEntryResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const MsgSetVestEntryResponse* internal_default_instance() {
    return reinterpret_cast<const MsgSetVestEntryResponse*>(
               &_MsgSetVestEntryResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(MsgSetVestEntryResponse& a, MsgSetVestEntryResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(MsgSetVestEntryResponse* other) {
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
  void UnsafeArenaSwap(MsgSetVestEntryResponse* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MsgSetVestEntryResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<MsgSetVestEntryResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyFrom;
  inline void CopyFrom(const MsgSetVestEntryResponse& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl(*this, from);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeFrom;
  void MergeFrom(const MsgSetVestEntryResponse& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl(*this, from);
  }
  public:

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "dydxprotocol.vest.MsgSetVestEntryResponse";
  }
  protected:
  explicit MsgSetVestEntryResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:dydxprotocol.vest.MsgSetVestEntryResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
  };
  friend struct ::TableStruct_dydxprotocol_2fvest_2ftx_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// MsgDeleteVestEntry

// string authority = 1 [(.cosmos_proto.scalar) = "cosmos.AddressString"];
inline void MsgDeleteVestEntry::clear_authority() {
  _impl_.authority_.ClearToEmpty();
}
inline const std::string& MsgDeleteVestEntry::authority() const {
  // @@protoc_insertion_point(field_get:dydxprotocol.vest.MsgDeleteVestEntry.authority)
  return _internal_authority();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void MsgDeleteVestEntry::set_authority(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.authority_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:dydxprotocol.vest.MsgDeleteVestEntry.authority)
}
inline std::string* MsgDeleteVestEntry::mutable_authority() {
  std::string* _s = _internal_mutable_authority();
  // @@protoc_insertion_point(field_mutable:dydxprotocol.vest.MsgDeleteVestEntry.authority)
  return _s;
}
inline const std::string& MsgDeleteVestEntry::_internal_authority() const {
  return _impl_.authority_.Get();
}
inline void MsgDeleteVestEntry::_internal_set_authority(const std::string& value) {
  ;


  _impl_.authority_.Set(value, GetArenaForAllocation());
}
inline std::string* MsgDeleteVestEntry::_internal_mutable_authority() {
  ;
  return _impl_.authority_.Mutable( GetArenaForAllocation());
}
inline std::string* MsgDeleteVestEntry::release_authority() {
  // @@protoc_insertion_point(field_release:dydxprotocol.vest.MsgDeleteVestEntry.authority)
  return _impl_.authority_.Release();
}
inline void MsgDeleteVestEntry::set_allocated_authority(std::string* value) {
  _impl_.authority_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.authority_.IsDefault()) {
          _impl_.authority_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:dydxprotocol.vest.MsgDeleteVestEntry.authority)
}

// string vester_account = 2;
inline void MsgDeleteVestEntry::clear_vester_account() {
  _impl_.vester_account_.ClearToEmpty();
}
inline const std::string& MsgDeleteVestEntry::vester_account() const {
  // @@protoc_insertion_point(field_get:dydxprotocol.vest.MsgDeleteVestEntry.vester_account)
  return _internal_vester_account();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void MsgDeleteVestEntry::set_vester_account(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.vester_account_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:dydxprotocol.vest.MsgDeleteVestEntry.vester_account)
}
inline std::string* MsgDeleteVestEntry::mutable_vester_account() {
  std::string* _s = _internal_mutable_vester_account();
  // @@protoc_insertion_point(field_mutable:dydxprotocol.vest.MsgDeleteVestEntry.vester_account)
  return _s;
}
inline const std::string& MsgDeleteVestEntry::_internal_vester_account() const {
  return _impl_.vester_account_.Get();
}
inline void MsgDeleteVestEntry::_internal_set_vester_account(const std::string& value) {
  ;


  _impl_.vester_account_.Set(value, GetArenaForAllocation());
}
inline std::string* MsgDeleteVestEntry::_internal_mutable_vester_account() {
  ;
  return _impl_.vester_account_.Mutable( GetArenaForAllocation());
}
inline std::string* MsgDeleteVestEntry::release_vester_account() {
  // @@protoc_insertion_point(field_release:dydxprotocol.vest.MsgDeleteVestEntry.vester_account)
  return _impl_.vester_account_.Release();
}
inline void MsgDeleteVestEntry::set_allocated_vester_account(std::string* value) {
  _impl_.vester_account_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.vester_account_.IsDefault()) {
          _impl_.vester_account_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:dydxprotocol.vest.MsgDeleteVestEntry.vester_account)
}

// -------------------------------------------------------------------

// MsgDeleteVestEntryResponse

// -------------------------------------------------------------------

// MsgSetVestEntry

// string authority = 1 [(.cosmos_proto.scalar) = "cosmos.AddressString"];
inline void MsgSetVestEntry::clear_authority() {
  _impl_.authority_.ClearToEmpty();
}
inline const std::string& MsgSetVestEntry::authority() const {
  // @@protoc_insertion_point(field_get:dydxprotocol.vest.MsgSetVestEntry.authority)
  return _internal_authority();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void MsgSetVestEntry::set_authority(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.authority_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:dydxprotocol.vest.MsgSetVestEntry.authority)
}
inline std::string* MsgSetVestEntry::mutable_authority() {
  std::string* _s = _internal_mutable_authority();
  // @@protoc_insertion_point(field_mutable:dydxprotocol.vest.MsgSetVestEntry.authority)
  return _s;
}
inline const std::string& MsgSetVestEntry::_internal_authority() const {
  return _impl_.authority_.Get();
}
inline void MsgSetVestEntry::_internal_set_authority(const std::string& value) {
  ;


  _impl_.authority_.Set(value, GetArenaForAllocation());
}
inline std::string* MsgSetVestEntry::_internal_mutable_authority() {
  ;
  return _impl_.authority_.Mutable( GetArenaForAllocation());
}
inline std::string* MsgSetVestEntry::release_authority() {
  // @@protoc_insertion_point(field_release:dydxprotocol.vest.MsgSetVestEntry.authority)
  return _impl_.authority_.Release();
}
inline void MsgSetVestEntry::set_allocated_authority(std::string* value) {
  _impl_.authority_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.authority_.IsDefault()) {
          _impl_.authority_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:dydxprotocol.vest.MsgSetVestEntry.authority)
}

// .dydxprotocol.vest.VestEntry entry = 2 [(.gogoproto.nullable) = false];
inline bool MsgSetVestEntry::has_entry() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.entry_ != nullptr);
  return value;
}
inline const ::dydxprotocol::vest::VestEntry& MsgSetVestEntry::_internal_entry() const {
  const ::dydxprotocol::vest::VestEntry* p = _impl_.entry_;
  return p != nullptr ? *p : reinterpret_cast<const ::dydxprotocol::vest::VestEntry&>(
      ::dydxprotocol::vest::_VestEntry_default_instance_);
}
inline const ::dydxprotocol::vest::VestEntry& MsgSetVestEntry::entry() const {
  // @@protoc_insertion_point(field_get:dydxprotocol.vest.MsgSetVestEntry.entry)
  return _internal_entry();
}
inline void MsgSetVestEntry::unsafe_arena_set_allocated_entry(
    ::dydxprotocol::vest::VestEntry* entry) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.entry_);
  }
  _impl_.entry_ = entry;
  if (entry) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:dydxprotocol.vest.MsgSetVestEntry.entry)
}
inline ::dydxprotocol::vest::VestEntry* MsgSetVestEntry::release_entry() {
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::dydxprotocol::vest::VestEntry* temp = _impl_.entry_;
  _impl_.entry_ = nullptr;
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
inline ::dydxprotocol::vest::VestEntry* MsgSetVestEntry::unsafe_arena_release_entry() {
  // @@protoc_insertion_point(field_release:dydxprotocol.vest.MsgSetVestEntry.entry)
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::dydxprotocol::vest::VestEntry* temp = _impl_.entry_;
  _impl_.entry_ = nullptr;
  return temp;
}
inline ::dydxprotocol::vest::VestEntry* MsgSetVestEntry::_internal_mutable_entry() {
  _impl_._has_bits_[0] |= 0x00000001u;
  if (_impl_.entry_ == nullptr) {
    auto* p = CreateMaybeMessage<::dydxprotocol::vest::VestEntry>(GetArenaForAllocation());
    _impl_.entry_ = p;
  }
  return _impl_.entry_;
}
inline ::dydxprotocol::vest::VestEntry* MsgSetVestEntry::mutable_entry() {
  ::dydxprotocol::vest::VestEntry* _msg = _internal_mutable_entry();
  // @@protoc_insertion_point(field_mutable:dydxprotocol.vest.MsgSetVestEntry.entry)
  return _msg;
}
inline void MsgSetVestEntry::set_allocated_entry(::dydxprotocol::vest::VestEntry* entry) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.entry_);
  }
  if (entry) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(entry));
    if (message_arena != submessage_arena) {
      entry = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, entry, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.entry_ = entry;
  // @@protoc_insertion_point(field_set_allocated:dydxprotocol.vest.MsgSetVestEntry.entry)
}

// -------------------------------------------------------------------

// MsgSetVestEntryResponse

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace vest
}  // namespace dydxprotocol


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2fvest_2ftx_2eproto_2epb_2eh
