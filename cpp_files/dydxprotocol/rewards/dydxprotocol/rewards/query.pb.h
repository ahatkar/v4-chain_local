// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dydxprotocol/rewards/query.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2frewards_2fquery_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2frewards_2fquery_2eproto_2epb_2eh

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
#include "gogoproto/gogo.pb.h"
#include "google/api/annotations.pb.h"
#include "dydxprotocol/rewards/params.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_dydxprotocol_2frewards_2fquery_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_dydxprotocol_2frewards_2fquery_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_dydxprotocol_2frewards_2fquery_2eproto;
namespace dydxprotocol {
namespace rewards {
class QueryParamsRequest;
struct QueryParamsRequestDefaultTypeInternal;
extern QueryParamsRequestDefaultTypeInternal _QueryParamsRequest_default_instance_;
class QueryParamsResponse;
struct QueryParamsResponseDefaultTypeInternal;
extern QueryParamsResponseDefaultTypeInternal _QueryParamsResponse_default_instance_;
}  // namespace rewards
}  // namespace dydxprotocol
PROTOBUF_NAMESPACE_OPEN
template <>
::dydxprotocol::rewards::QueryParamsRequest* Arena::CreateMaybeMessage<::dydxprotocol::rewards::QueryParamsRequest>(Arena*);
template <>
::dydxprotocol::rewards::QueryParamsResponse* Arena::CreateMaybeMessage<::dydxprotocol::rewards::QueryParamsResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace dydxprotocol {
namespace rewards {

// ===================================================================


// -------------------------------------------------------------------

class QueryParamsRequest final :
    public ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase /* @@protoc_insertion_point(class_definition:dydxprotocol.rewards.QueryParamsRequest) */ {
 public:
  inline QueryParamsRequest() : QueryParamsRequest(nullptr) {}
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR QueryParamsRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  QueryParamsRequest(const QueryParamsRequest& from);
  QueryParamsRequest(QueryParamsRequest&& from) noexcept
    : QueryParamsRequest() {
    *this = ::std::move(from);
  }

  inline QueryParamsRequest& operator=(const QueryParamsRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline QueryParamsRequest& operator=(QueryParamsRequest&& from) noexcept {
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
  static const QueryParamsRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const QueryParamsRequest* internal_default_instance() {
    return reinterpret_cast<const QueryParamsRequest*>(
               &_QueryParamsRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(QueryParamsRequest& a, QueryParamsRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(QueryParamsRequest* other) {
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
  void UnsafeArenaSwap(QueryParamsRequest* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  QueryParamsRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<QueryParamsRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyFrom;
  inline void CopyFrom(const QueryParamsRequest& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl(*this, from);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeFrom;
  void MergeFrom(const QueryParamsRequest& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl(*this, from);
  }
  public:

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "dydxprotocol.rewards.QueryParamsRequest";
  }
  protected:
  explicit QueryParamsRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:dydxprotocol.rewards.QueryParamsRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
  };
  friend struct ::TableStruct_dydxprotocol_2frewards_2fquery_2eproto;
};// -------------------------------------------------------------------

class QueryParamsResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:dydxprotocol.rewards.QueryParamsResponse) */ {
 public:
  inline QueryParamsResponse() : QueryParamsResponse(nullptr) {}
  ~QueryParamsResponse() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR QueryParamsResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  QueryParamsResponse(const QueryParamsResponse& from);
  QueryParamsResponse(QueryParamsResponse&& from) noexcept
    : QueryParamsResponse() {
    *this = ::std::move(from);
  }

  inline QueryParamsResponse& operator=(const QueryParamsResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline QueryParamsResponse& operator=(QueryParamsResponse&& from) noexcept {
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
  static const QueryParamsResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const QueryParamsResponse* internal_default_instance() {
    return reinterpret_cast<const QueryParamsResponse*>(
               &_QueryParamsResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(QueryParamsResponse& a, QueryParamsResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(QueryParamsResponse* other) {
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
  void UnsafeArenaSwap(QueryParamsResponse* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  QueryParamsResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<QueryParamsResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const QueryParamsResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const QueryParamsResponse& from) {
    QueryParamsResponse::MergeImpl(*this, from);
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
  void InternalSwap(QueryParamsResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "dydxprotocol.rewards.QueryParamsResponse";
  }
  protected:
  explicit QueryParamsResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kParamsFieldNumber = 1,
  };
  // .dydxprotocol.rewards.Params params = 1 [(.gogoproto.nullable) = false];
  bool has_params() const;
  void clear_params() ;
  const ::dydxprotocol::rewards::Params& params() const;
  PROTOBUF_NODISCARD ::dydxprotocol::rewards::Params* release_params();
  ::dydxprotocol::rewards::Params* mutable_params();
  void set_allocated_params(::dydxprotocol::rewards::Params* params);
  private:
  const ::dydxprotocol::rewards::Params& _internal_params() const;
  ::dydxprotocol::rewards::Params* _internal_mutable_params();
  public:
  void unsafe_arena_set_allocated_params(
      ::dydxprotocol::rewards::Params* params);
  ::dydxprotocol::rewards::Params* unsafe_arena_release_params();
  // @@protoc_insertion_point(class_scope:dydxprotocol.rewards.QueryParamsResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::dydxprotocol::rewards::Params* params_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_dydxprotocol_2frewards_2fquery_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// QueryParamsRequest

// -------------------------------------------------------------------

// QueryParamsResponse

// .dydxprotocol.rewards.Params params = 1 [(.gogoproto.nullable) = false];
inline bool QueryParamsResponse::has_params() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.params_ != nullptr);
  return value;
}
inline const ::dydxprotocol::rewards::Params& QueryParamsResponse::_internal_params() const {
  const ::dydxprotocol::rewards::Params* p = _impl_.params_;
  return p != nullptr ? *p : reinterpret_cast<const ::dydxprotocol::rewards::Params&>(
      ::dydxprotocol::rewards::_Params_default_instance_);
}
inline const ::dydxprotocol::rewards::Params& QueryParamsResponse::params() const {
  // @@protoc_insertion_point(field_get:dydxprotocol.rewards.QueryParamsResponse.params)
  return _internal_params();
}
inline void QueryParamsResponse::unsafe_arena_set_allocated_params(
    ::dydxprotocol::rewards::Params* params) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.params_);
  }
  _impl_.params_ = params;
  if (params) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:dydxprotocol.rewards.QueryParamsResponse.params)
}
inline ::dydxprotocol::rewards::Params* QueryParamsResponse::release_params() {
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::dydxprotocol::rewards::Params* temp = _impl_.params_;
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
inline ::dydxprotocol::rewards::Params* QueryParamsResponse::unsafe_arena_release_params() {
  // @@protoc_insertion_point(field_release:dydxprotocol.rewards.QueryParamsResponse.params)
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::dydxprotocol::rewards::Params* temp = _impl_.params_;
  _impl_.params_ = nullptr;
  return temp;
}
inline ::dydxprotocol::rewards::Params* QueryParamsResponse::_internal_mutable_params() {
  _impl_._has_bits_[0] |= 0x00000001u;
  if (_impl_.params_ == nullptr) {
    auto* p = CreateMaybeMessage<::dydxprotocol::rewards::Params>(GetArenaForAllocation());
    _impl_.params_ = p;
  }
  return _impl_.params_;
}
inline ::dydxprotocol::rewards::Params* QueryParamsResponse::mutable_params() {
  ::dydxprotocol::rewards::Params* _msg = _internal_mutable_params();
  // @@protoc_insertion_point(field_mutable:dydxprotocol.rewards.QueryParamsResponse.params)
  return _msg;
}
inline void QueryParamsResponse::set_allocated_params(::dydxprotocol::rewards::Params* params) {
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
  // @@protoc_insertion_point(field_set_allocated:dydxprotocol.rewards.QueryParamsResponse.params)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace rewards
}  // namespace dydxprotocol


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2frewards_2fquery_2eproto_2epb_2eh