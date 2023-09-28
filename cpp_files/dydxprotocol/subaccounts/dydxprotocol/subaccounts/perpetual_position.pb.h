// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dydxprotocol/subaccounts/perpetual_position.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2fsubaccounts_2fperpetual_5fposition_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2fsubaccounts_2fperpetual_5fposition_2eproto_2epb_2eh

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
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_dydxprotocol_2fsubaccounts_2fperpetual_5fposition_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_dydxprotocol_2fsubaccounts_2fperpetual_5fposition_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_dydxprotocol_2fsubaccounts_2fperpetual_5fposition_2eproto;
namespace dydxprotocol {
namespace subaccounts {
class PerpetualPosition;
struct PerpetualPositionDefaultTypeInternal;
extern PerpetualPositionDefaultTypeInternal _PerpetualPosition_default_instance_;
}  // namespace subaccounts
}  // namespace dydxprotocol
PROTOBUF_NAMESPACE_OPEN
template <>
::dydxprotocol::subaccounts::PerpetualPosition* Arena::CreateMaybeMessage<::dydxprotocol::subaccounts::PerpetualPosition>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace dydxprotocol {
namespace subaccounts {

// ===================================================================


// -------------------------------------------------------------------

class PerpetualPosition final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:dydxprotocol.subaccounts.PerpetualPosition) */ {
 public:
  inline PerpetualPosition() : PerpetualPosition(nullptr) {}
  ~PerpetualPosition() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR PerpetualPosition(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  PerpetualPosition(const PerpetualPosition& from);
  PerpetualPosition(PerpetualPosition&& from) noexcept
    : PerpetualPosition() {
    *this = ::std::move(from);
  }

  inline PerpetualPosition& operator=(const PerpetualPosition& from) {
    CopyFrom(from);
    return *this;
  }
  inline PerpetualPosition& operator=(PerpetualPosition&& from) noexcept {
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
  static const PerpetualPosition& default_instance() {
    return *internal_default_instance();
  }
  static inline const PerpetualPosition* internal_default_instance() {
    return reinterpret_cast<const PerpetualPosition*>(
               &_PerpetualPosition_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PerpetualPosition& a, PerpetualPosition& b) {
    a.Swap(&b);
  }
  inline void Swap(PerpetualPosition* other) {
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
  void UnsafeArenaSwap(PerpetualPosition* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  PerpetualPosition* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<PerpetualPosition>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const PerpetualPosition& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const PerpetualPosition& from) {
    PerpetualPosition::MergeImpl(*this, from);
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
  void InternalSwap(PerpetualPosition* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "dydxprotocol.subaccounts.PerpetualPosition";
  }
  protected:
  explicit PerpetualPosition(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kQuantumsFieldNumber = 2,
    kFundingIndexFieldNumber = 3,
    kPerpetualIdFieldNumber = 1,
  };
  // bytes quantums = 2 [(.gogoproto.nullable) = false, (.gogoproto.customtype) = "github.com/dydxprotocol/v4-chain/protocol/dtypes.SerializableInt"];
  void clear_quantums() ;
  const std::string& quantums() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_quantums(Arg_&& arg, Args_... args);
  std::string* mutable_quantums();
  PROTOBUF_NODISCARD std::string* release_quantums();
  void set_allocated_quantums(std::string* ptr);

  private:
  const std::string& _internal_quantums() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_quantums(
      const std::string& value);
  std::string* _internal_mutable_quantums();

  public:
  // bytes funding_index = 3 [(.gogoproto.nullable) = false, (.gogoproto.customtype) = "github.com/dydxprotocol/v4-chain/protocol/dtypes.SerializableInt"];
  void clear_funding_index() ;
  const std::string& funding_index() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_funding_index(Arg_&& arg, Args_... args);
  std::string* mutable_funding_index();
  PROTOBUF_NODISCARD std::string* release_funding_index();
  void set_allocated_funding_index(std::string* ptr);

  private:
  const std::string& _internal_funding_index() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_funding_index(
      const std::string& value);
  std::string* _internal_mutable_funding_index();

  public:
  // uint32 perpetual_id = 1;
  void clear_perpetual_id() ;
  ::uint32_t perpetual_id() const;
  void set_perpetual_id(::uint32_t value);

  private:
  ::uint32_t _internal_perpetual_id() const;
  void _internal_set_perpetual_id(::uint32_t value);

  public:
  // @@protoc_insertion_point(class_scope:dydxprotocol.subaccounts.PerpetualPosition)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr quantums_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr funding_index_;
    ::uint32_t perpetual_id_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_dydxprotocol_2fsubaccounts_2fperpetual_5fposition_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// PerpetualPosition

// uint32 perpetual_id = 1;
inline void PerpetualPosition::clear_perpetual_id() {
  _impl_.perpetual_id_ = 0u;
}
inline ::uint32_t PerpetualPosition::perpetual_id() const {
  // @@protoc_insertion_point(field_get:dydxprotocol.subaccounts.PerpetualPosition.perpetual_id)
  return _internal_perpetual_id();
}
inline void PerpetualPosition::set_perpetual_id(::uint32_t value) {
  _internal_set_perpetual_id(value);
  // @@protoc_insertion_point(field_set:dydxprotocol.subaccounts.PerpetualPosition.perpetual_id)
}
inline ::uint32_t PerpetualPosition::_internal_perpetual_id() const {
  return _impl_.perpetual_id_;
}
inline void PerpetualPosition::_internal_set_perpetual_id(::uint32_t value) {
  ;
  _impl_.perpetual_id_ = value;
}

// bytes quantums = 2 [(.gogoproto.nullable) = false, (.gogoproto.customtype) = "github.com/dydxprotocol/v4-chain/protocol/dtypes.SerializableInt"];
inline void PerpetualPosition::clear_quantums() {
  _impl_.quantums_.ClearToEmpty();
}
inline const std::string& PerpetualPosition::quantums() const {
  // @@protoc_insertion_point(field_get:dydxprotocol.subaccounts.PerpetualPosition.quantums)
  return _internal_quantums();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void PerpetualPosition::set_quantums(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.quantums_.SetBytes(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:dydxprotocol.subaccounts.PerpetualPosition.quantums)
}
inline std::string* PerpetualPosition::mutable_quantums() {
  std::string* _s = _internal_mutable_quantums();
  // @@protoc_insertion_point(field_mutable:dydxprotocol.subaccounts.PerpetualPosition.quantums)
  return _s;
}
inline const std::string& PerpetualPosition::_internal_quantums() const {
  return _impl_.quantums_.Get();
}
inline void PerpetualPosition::_internal_set_quantums(const std::string& value) {
  ;


  _impl_.quantums_.Set(value, GetArenaForAllocation());
}
inline std::string* PerpetualPosition::_internal_mutable_quantums() {
  ;
  return _impl_.quantums_.Mutable( GetArenaForAllocation());
}
inline std::string* PerpetualPosition::release_quantums() {
  // @@protoc_insertion_point(field_release:dydxprotocol.subaccounts.PerpetualPosition.quantums)
  return _impl_.quantums_.Release();
}
inline void PerpetualPosition::set_allocated_quantums(std::string* value) {
  _impl_.quantums_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.quantums_.IsDefault()) {
          _impl_.quantums_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:dydxprotocol.subaccounts.PerpetualPosition.quantums)
}

// bytes funding_index = 3 [(.gogoproto.nullable) = false, (.gogoproto.customtype) = "github.com/dydxprotocol/v4-chain/protocol/dtypes.SerializableInt"];
inline void PerpetualPosition::clear_funding_index() {
  _impl_.funding_index_.ClearToEmpty();
}
inline const std::string& PerpetualPosition::funding_index() const {
  // @@protoc_insertion_point(field_get:dydxprotocol.subaccounts.PerpetualPosition.funding_index)
  return _internal_funding_index();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void PerpetualPosition::set_funding_index(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.funding_index_.SetBytes(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:dydxprotocol.subaccounts.PerpetualPosition.funding_index)
}
inline std::string* PerpetualPosition::mutable_funding_index() {
  std::string* _s = _internal_mutable_funding_index();
  // @@protoc_insertion_point(field_mutable:dydxprotocol.subaccounts.PerpetualPosition.funding_index)
  return _s;
}
inline const std::string& PerpetualPosition::_internal_funding_index() const {
  return _impl_.funding_index_.Get();
}
inline void PerpetualPosition::_internal_set_funding_index(const std::string& value) {
  ;


  _impl_.funding_index_.Set(value, GetArenaForAllocation());
}
inline std::string* PerpetualPosition::_internal_mutable_funding_index() {
  ;
  return _impl_.funding_index_.Mutable( GetArenaForAllocation());
}
inline std::string* PerpetualPosition::release_funding_index() {
  // @@protoc_insertion_point(field_release:dydxprotocol.subaccounts.PerpetualPosition.funding_index)
  return _impl_.funding_index_.Release();
}
inline void PerpetualPosition::set_allocated_funding_index(std::string* value) {
  _impl_.funding_index_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.funding_index_.IsDefault()) {
          _impl_.funding_index_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:dydxprotocol.subaccounts.PerpetualPosition.funding_index)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace subaccounts
}  // namespace dydxprotocol


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2fsubaccounts_2fperpetual_5fposition_2eproto_2epb_2eh