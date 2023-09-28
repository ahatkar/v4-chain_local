// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dydxprotocol/sending/tx.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2fsending_2ftx_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2fsending_2ftx_2eproto_2epb_2eh

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
#include "dydxprotocol/sending/transfer.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_dydxprotocol_2fsending_2ftx_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_dydxprotocol_2fsending_2ftx_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_dydxprotocol_2fsending_2ftx_2eproto;
namespace dydxprotocol {
namespace sending {
class MsgCreateTransfer;
struct MsgCreateTransferDefaultTypeInternal;
extern MsgCreateTransferDefaultTypeInternal _MsgCreateTransfer_default_instance_;
class MsgCreateTransferResponse;
struct MsgCreateTransferResponseDefaultTypeInternal;
extern MsgCreateTransferResponseDefaultTypeInternal _MsgCreateTransferResponse_default_instance_;
class MsgDepositToSubaccountResponse;
struct MsgDepositToSubaccountResponseDefaultTypeInternal;
extern MsgDepositToSubaccountResponseDefaultTypeInternal _MsgDepositToSubaccountResponse_default_instance_;
class MsgSendFromModuleToAccountResponse;
struct MsgSendFromModuleToAccountResponseDefaultTypeInternal;
extern MsgSendFromModuleToAccountResponseDefaultTypeInternal _MsgSendFromModuleToAccountResponse_default_instance_;
class MsgWithdrawFromSubaccountResponse;
struct MsgWithdrawFromSubaccountResponseDefaultTypeInternal;
extern MsgWithdrawFromSubaccountResponseDefaultTypeInternal _MsgWithdrawFromSubaccountResponse_default_instance_;
}  // namespace sending
}  // namespace dydxprotocol
PROTOBUF_NAMESPACE_OPEN
template <>
::dydxprotocol::sending::MsgCreateTransfer* Arena::CreateMaybeMessage<::dydxprotocol::sending::MsgCreateTransfer>(Arena*);
template <>
::dydxprotocol::sending::MsgCreateTransferResponse* Arena::CreateMaybeMessage<::dydxprotocol::sending::MsgCreateTransferResponse>(Arena*);
template <>
::dydxprotocol::sending::MsgDepositToSubaccountResponse* Arena::CreateMaybeMessage<::dydxprotocol::sending::MsgDepositToSubaccountResponse>(Arena*);
template <>
::dydxprotocol::sending::MsgSendFromModuleToAccountResponse* Arena::CreateMaybeMessage<::dydxprotocol::sending::MsgSendFromModuleToAccountResponse>(Arena*);
template <>
::dydxprotocol::sending::MsgWithdrawFromSubaccountResponse* Arena::CreateMaybeMessage<::dydxprotocol::sending::MsgWithdrawFromSubaccountResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace dydxprotocol {
namespace sending {

// ===================================================================


// -------------------------------------------------------------------

class MsgCreateTransfer final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:dydxprotocol.sending.MsgCreateTransfer) */ {
 public:
  inline MsgCreateTransfer() : MsgCreateTransfer(nullptr) {}
  ~MsgCreateTransfer() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR MsgCreateTransfer(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  MsgCreateTransfer(const MsgCreateTransfer& from);
  MsgCreateTransfer(MsgCreateTransfer&& from) noexcept
    : MsgCreateTransfer() {
    *this = ::std::move(from);
  }

  inline MsgCreateTransfer& operator=(const MsgCreateTransfer& from) {
    CopyFrom(from);
    return *this;
  }
  inline MsgCreateTransfer& operator=(MsgCreateTransfer&& from) noexcept {
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
  static const MsgCreateTransfer& default_instance() {
    return *internal_default_instance();
  }
  static inline const MsgCreateTransfer* internal_default_instance() {
    return reinterpret_cast<const MsgCreateTransfer*>(
               &_MsgCreateTransfer_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(MsgCreateTransfer& a, MsgCreateTransfer& b) {
    a.Swap(&b);
  }
  inline void Swap(MsgCreateTransfer* other) {
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
  void UnsafeArenaSwap(MsgCreateTransfer* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MsgCreateTransfer* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<MsgCreateTransfer>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const MsgCreateTransfer& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const MsgCreateTransfer& from) {
    MsgCreateTransfer::MergeImpl(*this, from);
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
  void InternalSwap(MsgCreateTransfer* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "dydxprotocol.sending.MsgCreateTransfer";
  }
  protected:
  explicit MsgCreateTransfer(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTransferFieldNumber = 1,
  };
  // .dydxprotocol.sending.Transfer transfer = 1;
  bool has_transfer() const;
  void clear_transfer() ;
  const ::dydxprotocol::sending::Transfer& transfer() const;
  PROTOBUF_NODISCARD ::dydxprotocol::sending::Transfer* release_transfer();
  ::dydxprotocol::sending::Transfer* mutable_transfer();
  void set_allocated_transfer(::dydxprotocol::sending::Transfer* transfer);
  private:
  const ::dydxprotocol::sending::Transfer& _internal_transfer() const;
  ::dydxprotocol::sending::Transfer* _internal_mutable_transfer();
  public:
  void unsafe_arena_set_allocated_transfer(
      ::dydxprotocol::sending::Transfer* transfer);
  ::dydxprotocol::sending::Transfer* unsafe_arena_release_transfer();
  // @@protoc_insertion_point(class_scope:dydxprotocol.sending.MsgCreateTransfer)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::dydxprotocol::sending::Transfer* transfer_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_dydxprotocol_2fsending_2ftx_2eproto;
};// -------------------------------------------------------------------

class MsgCreateTransferResponse final :
    public ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase /* @@protoc_insertion_point(class_definition:dydxprotocol.sending.MsgCreateTransferResponse) */ {
 public:
  inline MsgCreateTransferResponse() : MsgCreateTransferResponse(nullptr) {}
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR MsgCreateTransferResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  MsgCreateTransferResponse(const MsgCreateTransferResponse& from);
  MsgCreateTransferResponse(MsgCreateTransferResponse&& from) noexcept
    : MsgCreateTransferResponse() {
    *this = ::std::move(from);
  }

  inline MsgCreateTransferResponse& operator=(const MsgCreateTransferResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline MsgCreateTransferResponse& operator=(MsgCreateTransferResponse&& from) noexcept {
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
  static const MsgCreateTransferResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const MsgCreateTransferResponse* internal_default_instance() {
    return reinterpret_cast<const MsgCreateTransferResponse*>(
               &_MsgCreateTransferResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(MsgCreateTransferResponse& a, MsgCreateTransferResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(MsgCreateTransferResponse* other) {
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
  void UnsafeArenaSwap(MsgCreateTransferResponse* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MsgCreateTransferResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<MsgCreateTransferResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyFrom;
  inline void CopyFrom(const MsgCreateTransferResponse& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl(*this, from);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeFrom;
  void MergeFrom(const MsgCreateTransferResponse& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl(*this, from);
  }
  public:

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "dydxprotocol.sending.MsgCreateTransferResponse";
  }
  protected:
  explicit MsgCreateTransferResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:dydxprotocol.sending.MsgCreateTransferResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
  };
  friend struct ::TableStruct_dydxprotocol_2fsending_2ftx_2eproto;
};// -------------------------------------------------------------------

class MsgDepositToSubaccountResponse final :
    public ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase /* @@protoc_insertion_point(class_definition:dydxprotocol.sending.MsgDepositToSubaccountResponse) */ {
 public:
  inline MsgDepositToSubaccountResponse() : MsgDepositToSubaccountResponse(nullptr) {}
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR MsgDepositToSubaccountResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  MsgDepositToSubaccountResponse(const MsgDepositToSubaccountResponse& from);
  MsgDepositToSubaccountResponse(MsgDepositToSubaccountResponse&& from) noexcept
    : MsgDepositToSubaccountResponse() {
    *this = ::std::move(from);
  }

  inline MsgDepositToSubaccountResponse& operator=(const MsgDepositToSubaccountResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline MsgDepositToSubaccountResponse& operator=(MsgDepositToSubaccountResponse&& from) noexcept {
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
  static const MsgDepositToSubaccountResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const MsgDepositToSubaccountResponse* internal_default_instance() {
    return reinterpret_cast<const MsgDepositToSubaccountResponse*>(
               &_MsgDepositToSubaccountResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(MsgDepositToSubaccountResponse& a, MsgDepositToSubaccountResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(MsgDepositToSubaccountResponse* other) {
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
  void UnsafeArenaSwap(MsgDepositToSubaccountResponse* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MsgDepositToSubaccountResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<MsgDepositToSubaccountResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyFrom;
  inline void CopyFrom(const MsgDepositToSubaccountResponse& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl(*this, from);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeFrom;
  void MergeFrom(const MsgDepositToSubaccountResponse& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl(*this, from);
  }
  public:

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "dydxprotocol.sending.MsgDepositToSubaccountResponse";
  }
  protected:
  explicit MsgDepositToSubaccountResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:dydxprotocol.sending.MsgDepositToSubaccountResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
  };
  friend struct ::TableStruct_dydxprotocol_2fsending_2ftx_2eproto;
};// -------------------------------------------------------------------

class MsgWithdrawFromSubaccountResponse final :
    public ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase /* @@protoc_insertion_point(class_definition:dydxprotocol.sending.MsgWithdrawFromSubaccountResponse) */ {
 public:
  inline MsgWithdrawFromSubaccountResponse() : MsgWithdrawFromSubaccountResponse(nullptr) {}
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR MsgWithdrawFromSubaccountResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  MsgWithdrawFromSubaccountResponse(const MsgWithdrawFromSubaccountResponse& from);
  MsgWithdrawFromSubaccountResponse(MsgWithdrawFromSubaccountResponse&& from) noexcept
    : MsgWithdrawFromSubaccountResponse() {
    *this = ::std::move(from);
  }

  inline MsgWithdrawFromSubaccountResponse& operator=(const MsgWithdrawFromSubaccountResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline MsgWithdrawFromSubaccountResponse& operator=(MsgWithdrawFromSubaccountResponse&& from) noexcept {
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
  static const MsgWithdrawFromSubaccountResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const MsgWithdrawFromSubaccountResponse* internal_default_instance() {
    return reinterpret_cast<const MsgWithdrawFromSubaccountResponse*>(
               &_MsgWithdrawFromSubaccountResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(MsgWithdrawFromSubaccountResponse& a, MsgWithdrawFromSubaccountResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(MsgWithdrawFromSubaccountResponse* other) {
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
  void UnsafeArenaSwap(MsgWithdrawFromSubaccountResponse* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MsgWithdrawFromSubaccountResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<MsgWithdrawFromSubaccountResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyFrom;
  inline void CopyFrom(const MsgWithdrawFromSubaccountResponse& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl(*this, from);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeFrom;
  void MergeFrom(const MsgWithdrawFromSubaccountResponse& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl(*this, from);
  }
  public:

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "dydxprotocol.sending.MsgWithdrawFromSubaccountResponse";
  }
  protected:
  explicit MsgWithdrawFromSubaccountResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:dydxprotocol.sending.MsgWithdrawFromSubaccountResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
  };
  friend struct ::TableStruct_dydxprotocol_2fsending_2ftx_2eproto;
};// -------------------------------------------------------------------

class MsgSendFromModuleToAccountResponse final :
    public ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase /* @@protoc_insertion_point(class_definition:dydxprotocol.sending.MsgSendFromModuleToAccountResponse) */ {
 public:
  inline MsgSendFromModuleToAccountResponse() : MsgSendFromModuleToAccountResponse(nullptr) {}
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR MsgSendFromModuleToAccountResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  MsgSendFromModuleToAccountResponse(const MsgSendFromModuleToAccountResponse& from);
  MsgSendFromModuleToAccountResponse(MsgSendFromModuleToAccountResponse&& from) noexcept
    : MsgSendFromModuleToAccountResponse() {
    *this = ::std::move(from);
  }

  inline MsgSendFromModuleToAccountResponse& operator=(const MsgSendFromModuleToAccountResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline MsgSendFromModuleToAccountResponse& operator=(MsgSendFromModuleToAccountResponse&& from) noexcept {
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
  static const MsgSendFromModuleToAccountResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const MsgSendFromModuleToAccountResponse* internal_default_instance() {
    return reinterpret_cast<const MsgSendFromModuleToAccountResponse*>(
               &_MsgSendFromModuleToAccountResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    4;

  friend void swap(MsgSendFromModuleToAccountResponse& a, MsgSendFromModuleToAccountResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(MsgSendFromModuleToAccountResponse* other) {
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
  void UnsafeArenaSwap(MsgSendFromModuleToAccountResponse* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MsgSendFromModuleToAccountResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<MsgSendFromModuleToAccountResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyFrom;
  inline void CopyFrom(const MsgSendFromModuleToAccountResponse& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl(*this, from);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeFrom;
  void MergeFrom(const MsgSendFromModuleToAccountResponse& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl(*this, from);
  }
  public:

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "dydxprotocol.sending.MsgSendFromModuleToAccountResponse";
  }
  protected:
  explicit MsgSendFromModuleToAccountResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:dydxprotocol.sending.MsgSendFromModuleToAccountResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
  };
  friend struct ::TableStruct_dydxprotocol_2fsending_2ftx_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// MsgCreateTransfer

// .dydxprotocol.sending.Transfer transfer = 1;
inline bool MsgCreateTransfer::has_transfer() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.transfer_ != nullptr);
  return value;
}
inline const ::dydxprotocol::sending::Transfer& MsgCreateTransfer::_internal_transfer() const {
  const ::dydxprotocol::sending::Transfer* p = _impl_.transfer_;
  return p != nullptr ? *p : reinterpret_cast<const ::dydxprotocol::sending::Transfer&>(
      ::dydxprotocol::sending::_Transfer_default_instance_);
}
inline const ::dydxprotocol::sending::Transfer& MsgCreateTransfer::transfer() const {
  // @@protoc_insertion_point(field_get:dydxprotocol.sending.MsgCreateTransfer.transfer)
  return _internal_transfer();
}
inline void MsgCreateTransfer::unsafe_arena_set_allocated_transfer(
    ::dydxprotocol::sending::Transfer* transfer) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.transfer_);
  }
  _impl_.transfer_ = transfer;
  if (transfer) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:dydxprotocol.sending.MsgCreateTransfer.transfer)
}
inline ::dydxprotocol::sending::Transfer* MsgCreateTransfer::release_transfer() {
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::dydxprotocol::sending::Transfer* temp = _impl_.transfer_;
  _impl_.transfer_ = nullptr;
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
inline ::dydxprotocol::sending::Transfer* MsgCreateTransfer::unsafe_arena_release_transfer() {
  // @@protoc_insertion_point(field_release:dydxprotocol.sending.MsgCreateTransfer.transfer)
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::dydxprotocol::sending::Transfer* temp = _impl_.transfer_;
  _impl_.transfer_ = nullptr;
  return temp;
}
inline ::dydxprotocol::sending::Transfer* MsgCreateTransfer::_internal_mutable_transfer() {
  _impl_._has_bits_[0] |= 0x00000001u;
  if (_impl_.transfer_ == nullptr) {
    auto* p = CreateMaybeMessage<::dydxprotocol::sending::Transfer>(GetArenaForAllocation());
    _impl_.transfer_ = p;
  }
  return _impl_.transfer_;
}
inline ::dydxprotocol::sending::Transfer* MsgCreateTransfer::mutable_transfer() {
  ::dydxprotocol::sending::Transfer* _msg = _internal_mutable_transfer();
  // @@protoc_insertion_point(field_mutable:dydxprotocol.sending.MsgCreateTransfer.transfer)
  return _msg;
}
inline void MsgCreateTransfer::set_allocated_transfer(::dydxprotocol::sending::Transfer* transfer) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.transfer_);
  }
  if (transfer) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(transfer));
    if (message_arena != submessage_arena) {
      transfer = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, transfer, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.transfer_ = transfer;
  // @@protoc_insertion_point(field_set_allocated:dydxprotocol.sending.MsgCreateTransfer.transfer)
}

// -------------------------------------------------------------------

// MsgCreateTransferResponse

// -------------------------------------------------------------------

// MsgDepositToSubaccountResponse

// -------------------------------------------------------------------

// MsgWithdrawFromSubaccountResponse

// -------------------------------------------------------------------

// MsgSendFromModuleToAccountResponse

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace sending
}  // namespace dydxprotocol


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2fsending_2ftx_2eproto_2epb_2eh