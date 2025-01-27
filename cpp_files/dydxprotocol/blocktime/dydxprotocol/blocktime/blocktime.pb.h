// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dydxprotocol/blocktime/blocktime.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2fblocktime_2fblocktime_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2fblocktime_2fblocktime_2eproto_2epb_2eh

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
#include "google/protobuf/timestamp.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_dydxprotocol_2fblocktime_2fblocktime_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_dydxprotocol_2fblocktime_2fblocktime_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_dydxprotocol_2fblocktime_2fblocktime_2eproto;
namespace dydxprotocol {
namespace blocktime {
class AllDowntimeInfo;
struct AllDowntimeInfoDefaultTypeInternal;
extern AllDowntimeInfoDefaultTypeInternal _AllDowntimeInfo_default_instance_;
class AllDowntimeInfo_DowntimeInfo;
struct AllDowntimeInfo_DowntimeInfoDefaultTypeInternal;
extern AllDowntimeInfo_DowntimeInfoDefaultTypeInternal _AllDowntimeInfo_DowntimeInfo_default_instance_;
class BlockInfo;
struct BlockInfoDefaultTypeInternal;
extern BlockInfoDefaultTypeInternal _BlockInfo_default_instance_;
}  // namespace blocktime
}  // namespace dydxprotocol
PROTOBUF_NAMESPACE_OPEN
template <>
::dydxprotocol::blocktime::AllDowntimeInfo* Arena::CreateMaybeMessage<::dydxprotocol::blocktime::AllDowntimeInfo>(Arena*);
template <>
::dydxprotocol::blocktime::AllDowntimeInfo_DowntimeInfo* Arena::CreateMaybeMessage<::dydxprotocol::blocktime::AllDowntimeInfo_DowntimeInfo>(Arena*);
template <>
::dydxprotocol::blocktime::BlockInfo* Arena::CreateMaybeMessage<::dydxprotocol::blocktime::BlockInfo>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace dydxprotocol {
namespace blocktime {

// ===================================================================


// -------------------------------------------------------------------

class BlockInfo final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:dydxprotocol.blocktime.BlockInfo) */ {
 public:
  inline BlockInfo() : BlockInfo(nullptr) {}
  ~BlockInfo() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR BlockInfo(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  BlockInfo(const BlockInfo& from);
  BlockInfo(BlockInfo&& from) noexcept
    : BlockInfo() {
    *this = ::std::move(from);
  }

  inline BlockInfo& operator=(const BlockInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline BlockInfo& operator=(BlockInfo&& from) noexcept {
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
  static const BlockInfo& default_instance() {
    return *internal_default_instance();
  }
  static inline const BlockInfo* internal_default_instance() {
    return reinterpret_cast<const BlockInfo*>(
               &_BlockInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(BlockInfo& a, BlockInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(BlockInfo* other) {
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
  void UnsafeArenaSwap(BlockInfo* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  BlockInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<BlockInfo>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const BlockInfo& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const BlockInfo& from) {
    BlockInfo::MergeImpl(*this, from);
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
  void InternalSwap(BlockInfo* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "dydxprotocol.blocktime.BlockInfo";
  }
  protected:
  explicit BlockInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTimestampFieldNumber = 2,
    kHeightFieldNumber = 1,
  };
  // .google.protobuf.Timestamp timestamp = 2 [(.gogoproto.nullable) = false, (.gogoproto.stdtime) = true];
  bool has_timestamp() const;
  void clear_timestamp() ;
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& timestamp() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::Timestamp* release_timestamp();
  ::PROTOBUF_NAMESPACE_ID::Timestamp* mutable_timestamp();
  void set_allocated_timestamp(::PROTOBUF_NAMESPACE_ID::Timestamp* timestamp);
  private:
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& _internal_timestamp() const;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_timestamp();
  public:
  void unsafe_arena_set_allocated_timestamp(
      ::PROTOBUF_NAMESPACE_ID::Timestamp* timestamp);
  ::PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_timestamp();
  // uint32 height = 1;
  void clear_height() ;
  ::uint32_t height() const;
  void set_height(::uint32_t value);

  private:
  ::uint32_t _internal_height() const;
  void _internal_set_height(::uint32_t value);

  public:
  // @@protoc_insertion_point(class_scope:dydxprotocol.blocktime.BlockInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::Timestamp* timestamp_;
    ::uint32_t height_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_dydxprotocol_2fblocktime_2fblocktime_2eproto;
};// -------------------------------------------------------------------

class AllDowntimeInfo_DowntimeInfo final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:dydxprotocol.blocktime.AllDowntimeInfo.DowntimeInfo) */ {
 public:
  inline AllDowntimeInfo_DowntimeInfo() : AllDowntimeInfo_DowntimeInfo(nullptr) {}
  ~AllDowntimeInfo_DowntimeInfo() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR AllDowntimeInfo_DowntimeInfo(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  AllDowntimeInfo_DowntimeInfo(const AllDowntimeInfo_DowntimeInfo& from);
  AllDowntimeInfo_DowntimeInfo(AllDowntimeInfo_DowntimeInfo&& from) noexcept
    : AllDowntimeInfo_DowntimeInfo() {
    *this = ::std::move(from);
  }

  inline AllDowntimeInfo_DowntimeInfo& operator=(const AllDowntimeInfo_DowntimeInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline AllDowntimeInfo_DowntimeInfo& operator=(AllDowntimeInfo_DowntimeInfo&& from) noexcept {
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
  static const AllDowntimeInfo_DowntimeInfo& default_instance() {
    return *internal_default_instance();
  }
  static inline const AllDowntimeInfo_DowntimeInfo* internal_default_instance() {
    return reinterpret_cast<const AllDowntimeInfo_DowntimeInfo*>(
               &_AllDowntimeInfo_DowntimeInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(AllDowntimeInfo_DowntimeInfo& a, AllDowntimeInfo_DowntimeInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(AllDowntimeInfo_DowntimeInfo* other) {
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
  void UnsafeArenaSwap(AllDowntimeInfo_DowntimeInfo* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  AllDowntimeInfo_DowntimeInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<AllDowntimeInfo_DowntimeInfo>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const AllDowntimeInfo_DowntimeInfo& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const AllDowntimeInfo_DowntimeInfo& from) {
    AllDowntimeInfo_DowntimeInfo::MergeImpl(*this, from);
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
  void InternalSwap(AllDowntimeInfo_DowntimeInfo* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "dydxprotocol.blocktime.AllDowntimeInfo.DowntimeInfo";
  }
  protected:
  explicit AllDowntimeInfo_DowntimeInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDurationFieldNumber = 1,
    kBlockInfoFieldNumber = 2,
  };
  // .google.protobuf.Duration duration = 1 [(.gogoproto.nullable) = false, (.gogoproto.stdduration) = true];
  bool has_duration() const;
  void clear_duration() ;
  const ::PROTOBUF_NAMESPACE_ID::Duration& duration() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::Duration* release_duration();
  ::PROTOBUF_NAMESPACE_ID::Duration* mutable_duration();
  void set_allocated_duration(::PROTOBUF_NAMESPACE_ID::Duration* duration);
  private:
  const ::PROTOBUF_NAMESPACE_ID::Duration& _internal_duration() const;
  ::PROTOBUF_NAMESPACE_ID::Duration* _internal_mutable_duration();
  public:
  void unsafe_arena_set_allocated_duration(
      ::PROTOBUF_NAMESPACE_ID::Duration* duration);
  ::PROTOBUF_NAMESPACE_ID::Duration* unsafe_arena_release_duration();
  // .dydxprotocol.blocktime.BlockInfo block_info = 2 [(.gogoproto.nullable) = false];
  bool has_block_info() const;
  void clear_block_info() ;
  const ::dydxprotocol::blocktime::BlockInfo& block_info() const;
  PROTOBUF_NODISCARD ::dydxprotocol::blocktime::BlockInfo* release_block_info();
  ::dydxprotocol::blocktime::BlockInfo* mutable_block_info();
  void set_allocated_block_info(::dydxprotocol::blocktime::BlockInfo* block_info);
  private:
  const ::dydxprotocol::blocktime::BlockInfo& _internal_block_info() const;
  ::dydxprotocol::blocktime::BlockInfo* _internal_mutable_block_info();
  public:
  void unsafe_arena_set_allocated_block_info(
      ::dydxprotocol::blocktime::BlockInfo* block_info);
  ::dydxprotocol::blocktime::BlockInfo* unsafe_arena_release_block_info();
  // @@protoc_insertion_point(class_scope:dydxprotocol.blocktime.AllDowntimeInfo.DowntimeInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::Duration* duration_;
    ::dydxprotocol::blocktime::BlockInfo* block_info_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_dydxprotocol_2fblocktime_2fblocktime_2eproto;
};// -------------------------------------------------------------------

class AllDowntimeInfo final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:dydxprotocol.blocktime.AllDowntimeInfo) */ {
 public:
  inline AllDowntimeInfo() : AllDowntimeInfo(nullptr) {}
  ~AllDowntimeInfo() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR AllDowntimeInfo(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  AllDowntimeInfo(const AllDowntimeInfo& from);
  AllDowntimeInfo(AllDowntimeInfo&& from) noexcept
    : AllDowntimeInfo() {
    *this = ::std::move(from);
  }

  inline AllDowntimeInfo& operator=(const AllDowntimeInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline AllDowntimeInfo& operator=(AllDowntimeInfo&& from) noexcept {
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
  static const AllDowntimeInfo& default_instance() {
    return *internal_default_instance();
  }
  static inline const AllDowntimeInfo* internal_default_instance() {
    return reinterpret_cast<const AllDowntimeInfo*>(
               &_AllDowntimeInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(AllDowntimeInfo& a, AllDowntimeInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(AllDowntimeInfo* other) {
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
  void UnsafeArenaSwap(AllDowntimeInfo* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  AllDowntimeInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<AllDowntimeInfo>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const AllDowntimeInfo& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const AllDowntimeInfo& from) {
    AllDowntimeInfo::MergeImpl(*this, from);
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
  void InternalSwap(AllDowntimeInfo* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "dydxprotocol.blocktime.AllDowntimeInfo";
  }
  protected:
  explicit AllDowntimeInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef AllDowntimeInfo_DowntimeInfo DowntimeInfo;

  // accessors -------------------------------------------------------

  enum : int {
    kInfosFieldNumber = 1,
  };
  // repeated .dydxprotocol.blocktime.AllDowntimeInfo.DowntimeInfo infos = 1;
  int infos_size() const;
  private:
  int _internal_infos_size() const;

  public:
  void clear_infos() ;
  ::dydxprotocol::blocktime::AllDowntimeInfo_DowntimeInfo* mutable_infos(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::dydxprotocol::blocktime::AllDowntimeInfo_DowntimeInfo >*
      mutable_infos();
  private:
  const ::dydxprotocol::blocktime::AllDowntimeInfo_DowntimeInfo& _internal_infos(int index) const;
  ::dydxprotocol::blocktime::AllDowntimeInfo_DowntimeInfo* _internal_add_infos();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::dydxprotocol::blocktime::AllDowntimeInfo_DowntimeInfo>& _internal_infos() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::dydxprotocol::blocktime::AllDowntimeInfo_DowntimeInfo>* _internal_mutable_infos();
  public:
  const ::dydxprotocol::blocktime::AllDowntimeInfo_DowntimeInfo& infos(int index) const;
  ::dydxprotocol::blocktime::AllDowntimeInfo_DowntimeInfo* add_infos();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::dydxprotocol::blocktime::AllDowntimeInfo_DowntimeInfo >&
      infos() const;
  // @@protoc_insertion_point(class_scope:dydxprotocol.blocktime.AllDowntimeInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::dydxprotocol::blocktime::AllDowntimeInfo_DowntimeInfo > infos_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_dydxprotocol_2fblocktime_2fblocktime_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// BlockInfo

// uint32 height = 1;
inline void BlockInfo::clear_height() {
  _impl_.height_ = 0u;
}
inline ::uint32_t BlockInfo::height() const {
  // @@protoc_insertion_point(field_get:dydxprotocol.blocktime.BlockInfo.height)
  return _internal_height();
}
inline void BlockInfo::set_height(::uint32_t value) {
  _internal_set_height(value);
  // @@protoc_insertion_point(field_set:dydxprotocol.blocktime.BlockInfo.height)
}
inline ::uint32_t BlockInfo::_internal_height() const {
  return _impl_.height_;
}
inline void BlockInfo::_internal_set_height(::uint32_t value) {
  ;
  _impl_.height_ = value;
}

// .google.protobuf.Timestamp timestamp = 2 [(.gogoproto.nullable) = false, (.gogoproto.stdtime) = true];
inline bool BlockInfo::has_timestamp() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.timestamp_ != nullptr);
  return value;
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& BlockInfo::_internal_timestamp() const {
  const ::PROTOBUF_NAMESPACE_ID::Timestamp* p = _impl_.timestamp_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Timestamp&>(
      ::PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& BlockInfo::timestamp() const {
  // @@protoc_insertion_point(field_get:dydxprotocol.blocktime.BlockInfo.timestamp)
  return _internal_timestamp();
}
inline void BlockInfo::unsafe_arena_set_allocated_timestamp(
    ::PROTOBUF_NAMESPACE_ID::Timestamp* timestamp) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.timestamp_);
  }
  _impl_.timestamp_ = timestamp;
  if (timestamp) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:dydxprotocol.blocktime.BlockInfo.timestamp)
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* BlockInfo::release_timestamp() {
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.timestamp_;
  _impl_.timestamp_ = nullptr;
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
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* BlockInfo::unsafe_arena_release_timestamp() {
  // @@protoc_insertion_point(field_release:dydxprotocol.blocktime.BlockInfo.timestamp)
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.timestamp_;
  _impl_.timestamp_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* BlockInfo::_internal_mutable_timestamp() {
  _impl_._has_bits_[0] |= 0x00000001u;
  if (_impl_.timestamp_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    _impl_.timestamp_ = p;
  }
  return _impl_.timestamp_;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* BlockInfo::mutable_timestamp() {
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _msg = _internal_mutable_timestamp();
  // @@protoc_insertion_point(field_mutable:dydxprotocol.blocktime.BlockInfo.timestamp)
  return _msg;
}
inline void BlockInfo::set_allocated_timestamp(::PROTOBUF_NAMESPACE_ID::Timestamp* timestamp) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.timestamp_);
  }
  if (timestamp) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(timestamp));
    if (message_arena != submessage_arena) {
      timestamp = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, timestamp, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.timestamp_ = timestamp;
  // @@protoc_insertion_point(field_set_allocated:dydxprotocol.blocktime.BlockInfo.timestamp)
}

// -------------------------------------------------------------------

// AllDowntimeInfo_DowntimeInfo

// .google.protobuf.Duration duration = 1 [(.gogoproto.nullable) = false, (.gogoproto.stdduration) = true];
inline bool AllDowntimeInfo_DowntimeInfo::has_duration() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.duration_ != nullptr);
  return value;
}
inline const ::PROTOBUF_NAMESPACE_ID::Duration& AllDowntimeInfo_DowntimeInfo::_internal_duration() const {
  const ::PROTOBUF_NAMESPACE_ID::Duration* p = _impl_.duration_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Duration&>(
      ::PROTOBUF_NAMESPACE_ID::_Duration_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Duration& AllDowntimeInfo_DowntimeInfo::duration() const {
  // @@protoc_insertion_point(field_get:dydxprotocol.blocktime.AllDowntimeInfo.DowntimeInfo.duration)
  return _internal_duration();
}
inline void AllDowntimeInfo_DowntimeInfo::unsafe_arena_set_allocated_duration(
    ::PROTOBUF_NAMESPACE_ID::Duration* duration) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.duration_);
  }
  _impl_.duration_ = duration;
  if (duration) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:dydxprotocol.blocktime.AllDowntimeInfo.DowntimeInfo.duration)
}
inline ::PROTOBUF_NAMESPACE_ID::Duration* AllDowntimeInfo_DowntimeInfo::release_duration() {
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::PROTOBUF_NAMESPACE_ID::Duration* temp = _impl_.duration_;
  _impl_.duration_ = nullptr;
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
inline ::PROTOBUF_NAMESPACE_ID::Duration* AllDowntimeInfo_DowntimeInfo::unsafe_arena_release_duration() {
  // @@protoc_insertion_point(field_release:dydxprotocol.blocktime.AllDowntimeInfo.DowntimeInfo.duration)
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::PROTOBUF_NAMESPACE_ID::Duration* temp = _impl_.duration_;
  _impl_.duration_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Duration* AllDowntimeInfo_DowntimeInfo::_internal_mutable_duration() {
  _impl_._has_bits_[0] |= 0x00000001u;
  if (_impl_.duration_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Duration>(GetArenaForAllocation());
    _impl_.duration_ = p;
  }
  return _impl_.duration_;
}
inline ::PROTOBUF_NAMESPACE_ID::Duration* AllDowntimeInfo_DowntimeInfo::mutable_duration() {
  ::PROTOBUF_NAMESPACE_ID::Duration* _msg = _internal_mutable_duration();
  // @@protoc_insertion_point(field_mutable:dydxprotocol.blocktime.AllDowntimeInfo.DowntimeInfo.duration)
  return _msg;
}
inline void AllDowntimeInfo_DowntimeInfo::set_allocated_duration(::PROTOBUF_NAMESPACE_ID::Duration* duration) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.duration_);
  }
  if (duration) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(duration));
    if (message_arena != submessage_arena) {
      duration = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, duration, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.duration_ = duration;
  // @@protoc_insertion_point(field_set_allocated:dydxprotocol.blocktime.AllDowntimeInfo.DowntimeInfo.duration)
}

// .dydxprotocol.blocktime.BlockInfo block_info = 2 [(.gogoproto.nullable) = false];
inline bool AllDowntimeInfo_DowntimeInfo::has_block_info() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.block_info_ != nullptr);
  return value;
}
inline void AllDowntimeInfo_DowntimeInfo::clear_block_info() {
  if (_impl_.block_info_ != nullptr) _impl_.block_info_->Clear();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const ::dydxprotocol::blocktime::BlockInfo& AllDowntimeInfo_DowntimeInfo::_internal_block_info() const {
  const ::dydxprotocol::blocktime::BlockInfo* p = _impl_.block_info_;
  return p != nullptr ? *p : reinterpret_cast<const ::dydxprotocol::blocktime::BlockInfo&>(
      ::dydxprotocol::blocktime::_BlockInfo_default_instance_);
}
inline const ::dydxprotocol::blocktime::BlockInfo& AllDowntimeInfo_DowntimeInfo::block_info() const {
  // @@protoc_insertion_point(field_get:dydxprotocol.blocktime.AllDowntimeInfo.DowntimeInfo.block_info)
  return _internal_block_info();
}
inline void AllDowntimeInfo_DowntimeInfo::unsafe_arena_set_allocated_block_info(
    ::dydxprotocol::blocktime::BlockInfo* block_info) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.block_info_);
  }
  _impl_.block_info_ = block_info;
  if (block_info) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:dydxprotocol.blocktime.AllDowntimeInfo.DowntimeInfo.block_info)
}
inline ::dydxprotocol::blocktime::BlockInfo* AllDowntimeInfo_DowntimeInfo::release_block_info() {
  _impl_._has_bits_[0] &= ~0x00000002u;
  ::dydxprotocol::blocktime::BlockInfo* temp = _impl_.block_info_;
  _impl_.block_info_ = nullptr;
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
inline ::dydxprotocol::blocktime::BlockInfo* AllDowntimeInfo_DowntimeInfo::unsafe_arena_release_block_info() {
  // @@protoc_insertion_point(field_release:dydxprotocol.blocktime.AllDowntimeInfo.DowntimeInfo.block_info)
  _impl_._has_bits_[0] &= ~0x00000002u;
  ::dydxprotocol::blocktime::BlockInfo* temp = _impl_.block_info_;
  _impl_.block_info_ = nullptr;
  return temp;
}
inline ::dydxprotocol::blocktime::BlockInfo* AllDowntimeInfo_DowntimeInfo::_internal_mutable_block_info() {
  _impl_._has_bits_[0] |= 0x00000002u;
  if (_impl_.block_info_ == nullptr) {
    auto* p = CreateMaybeMessage<::dydxprotocol::blocktime::BlockInfo>(GetArenaForAllocation());
    _impl_.block_info_ = p;
  }
  return _impl_.block_info_;
}
inline ::dydxprotocol::blocktime::BlockInfo* AllDowntimeInfo_DowntimeInfo::mutable_block_info() {
  ::dydxprotocol::blocktime::BlockInfo* _msg = _internal_mutable_block_info();
  // @@protoc_insertion_point(field_mutable:dydxprotocol.blocktime.AllDowntimeInfo.DowntimeInfo.block_info)
  return _msg;
}
inline void AllDowntimeInfo_DowntimeInfo::set_allocated_block_info(::dydxprotocol::blocktime::BlockInfo* block_info) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete _impl_.block_info_;
  }
  if (block_info) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(block_info);
    if (message_arena != submessage_arena) {
      block_info = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, block_info, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.block_info_ = block_info;
  // @@protoc_insertion_point(field_set_allocated:dydxprotocol.blocktime.AllDowntimeInfo.DowntimeInfo.block_info)
}

// -------------------------------------------------------------------

// AllDowntimeInfo

// repeated .dydxprotocol.blocktime.AllDowntimeInfo.DowntimeInfo infos = 1;
inline int AllDowntimeInfo::_internal_infos_size() const {
  return _impl_.infos_.size();
}
inline int AllDowntimeInfo::infos_size() const {
  return _internal_infos_size();
}
inline void AllDowntimeInfo::clear_infos() {
  _internal_mutable_infos()->Clear();
}
inline ::dydxprotocol::blocktime::AllDowntimeInfo_DowntimeInfo* AllDowntimeInfo::mutable_infos(int index) {
  // @@protoc_insertion_point(field_mutable:dydxprotocol.blocktime.AllDowntimeInfo.infos)
  return _internal_mutable_infos()->Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::dydxprotocol::blocktime::AllDowntimeInfo_DowntimeInfo >*
AllDowntimeInfo::mutable_infos() {
  // @@protoc_insertion_point(field_mutable_list:dydxprotocol.blocktime.AllDowntimeInfo.infos)
  return _internal_mutable_infos();
}
inline const ::dydxprotocol::blocktime::AllDowntimeInfo_DowntimeInfo& AllDowntimeInfo::_internal_infos(int index) const {
  return _internal_infos().Get(index);
}
inline const ::dydxprotocol::blocktime::AllDowntimeInfo_DowntimeInfo& AllDowntimeInfo::infos(int index) const {
  // @@protoc_insertion_point(field_get:dydxprotocol.blocktime.AllDowntimeInfo.infos)
  return _internal_infos(index);
}
inline ::dydxprotocol::blocktime::AllDowntimeInfo_DowntimeInfo* AllDowntimeInfo::_internal_add_infos() {
  return _internal_mutable_infos()->Add();
}
inline ::dydxprotocol::blocktime::AllDowntimeInfo_DowntimeInfo* AllDowntimeInfo::add_infos() {
  ::dydxprotocol::blocktime::AllDowntimeInfo_DowntimeInfo* _add = _internal_add_infos();
  // @@protoc_insertion_point(field_add:dydxprotocol.blocktime.AllDowntimeInfo.infos)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::dydxprotocol::blocktime::AllDowntimeInfo_DowntimeInfo >&
AllDowntimeInfo::infos() const {
  // @@protoc_insertion_point(field_list:dydxprotocol.blocktime.AllDowntimeInfo.infos)
  return _internal_infos();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::dydxprotocol::blocktime::AllDowntimeInfo_DowntimeInfo>&
AllDowntimeInfo::_internal_infos() const {
  return _impl_.infos_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::dydxprotocol::blocktime::AllDowntimeInfo_DowntimeInfo>*
AllDowntimeInfo::_internal_mutable_infos() {
  return &_impl_.infos_;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace blocktime
}  // namespace dydxprotocol


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2fblocktime_2fblocktime_2eproto_2epb_2eh
