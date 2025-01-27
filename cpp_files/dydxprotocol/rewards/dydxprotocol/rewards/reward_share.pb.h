// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dydxprotocol/rewards/reward_share.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2frewards_2freward_5fshare_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2frewards_2freward_5fshare_2eproto_2epb_2eh

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
#include "cosmos_proto/cosmos.pb.h"
#include "gogoproto/gogo.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_dydxprotocol_2frewards_2freward_5fshare_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_dydxprotocol_2frewards_2freward_5fshare_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_dydxprotocol_2frewards_2freward_5fshare_2eproto;
namespace dydxprotocol {
namespace rewards {
class RewardShare;
struct RewardShareDefaultTypeInternal;
extern RewardShareDefaultTypeInternal _RewardShare_default_instance_;
}  // namespace rewards
}  // namespace dydxprotocol
PROTOBUF_NAMESPACE_OPEN
template <>
::dydxprotocol::rewards::RewardShare* Arena::CreateMaybeMessage<::dydxprotocol::rewards::RewardShare>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace dydxprotocol {
namespace rewards {

// ===================================================================


// -------------------------------------------------------------------

class RewardShare final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:dydxprotocol.rewards.RewardShare) */ {
 public:
  inline RewardShare() : RewardShare(nullptr) {}
  ~RewardShare() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR RewardShare(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  RewardShare(const RewardShare& from);
  RewardShare(RewardShare&& from) noexcept
    : RewardShare() {
    *this = ::std::move(from);
  }

  inline RewardShare& operator=(const RewardShare& from) {
    CopyFrom(from);
    return *this;
  }
  inline RewardShare& operator=(RewardShare&& from) noexcept {
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
  static const RewardShare& default_instance() {
    return *internal_default_instance();
  }
  static inline const RewardShare* internal_default_instance() {
    return reinterpret_cast<const RewardShare*>(
               &_RewardShare_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RewardShare& a, RewardShare& b) {
    a.Swap(&b);
  }
  inline void Swap(RewardShare* other) {
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
  void UnsafeArenaSwap(RewardShare* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  RewardShare* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<RewardShare>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const RewardShare& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const RewardShare& from) {
    RewardShare::MergeImpl(*this, from);
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
  void InternalSwap(RewardShare* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "dydxprotocol.rewards.RewardShare";
  }
  protected:
  explicit RewardShare(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAddressFieldNumber = 1,
    kWeightFieldNumber = 2,
  };
  // string address = 1 [(.cosmos_proto.scalar) = "cosmos.AddressString"];
  void clear_address() ;
  const std::string& address() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_address(Arg_&& arg, Args_... args);
  std::string* mutable_address();
  PROTOBUF_NODISCARD std::string* release_address();
  void set_allocated_address(std::string* ptr);

  private:
  const std::string& _internal_address() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_address(
      const std::string& value);
  std::string* _internal_mutable_address();

  public:
  // bytes weight = 2 [(.gogoproto.nullable) = false, (.gogoproto.customtype) = "github.com/dydxprotocol/v4-chain/protocol/dtypes.SerializableInt"];
  void clear_weight() ;
  const std::string& weight() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_weight(Arg_&& arg, Args_... args);
  std::string* mutable_weight();
  PROTOBUF_NODISCARD std::string* release_weight();
  void set_allocated_weight(std::string* ptr);

  private:
  const std::string& _internal_weight() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_weight(
      const std::string& value);
  std::string* _internal_mutable_weight();

  public:
  // @@protoc_insertion_point(class_scope:dydxprotocol.rewards.RewardShare)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr address_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr weight_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_dydxprotocol_2frewards_2freward_5fshare_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// RewardShare

// string address = 1 [(.cosmos_proto.scalar) = "cosmos.AddressString"];
inline void RewardShare::clear_address() {
  _impl_.address_.ClearToEmpty();
}
inline const std::string& RewardShare::address() const {
  // @@protoc_insertion_point(field_get:dydxprotocol.rewards.RewardShare.address)
  return _internal_address();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void RewardShare::set_address(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.address_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:dydxprotocol.rewards.RewardShare.address)
}
inline std::string* RewardShare::mutable_address() {
  std::string* _s = _internal_mutable_address();
  // @@protoc_insertion_point(field_mutable:dydxprotocol.rewards.RewardShare.address)
  return _s;
}
inline const std::string& RewardShare::_internal_address() const {
  return _impl_.address_.Get();
}
inline void RewardShare::_internal_set_address(const std::string& value) {
  ;


  _impl_.address_.Set(value, GetArenaForAllocation());
}
inline std::string* RewardShare::_internal_mutable_address() {
  ;
  return _impl_.address_.Mutable( GetArenaForAllocation());
}
inline std::string* RewardShare::release_address() {
  // @@protoc_insertion_point(field_release:dydxprotocol.rewards.RewardShare.address)
  return _impl_.address_.Release();
}
inline void RewardShare::set_allocated_address(std::string* value) {
  _impl_.address_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.address_.IsDefault()) {
          _impl_.address_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:dydxprotocol.rewards.RewardShare.address)
}

// bytes weight = 2 [(.gogoproto.nullable) = false, (.gogoproto.customtype) = "github.com/dydxprotocol/v4-chain/protocol/dtypes.SerializableInt"];
inline void RewardShare::clear_weight() {
  _impl_.weight_.ClearToEmpty();
}
inline const std::string& RewardShare::weight() const {
  // @@protoc_insertion_point(field_get:dydxprotocol.rewards.RewardShare.weight)
  return _internal_weight();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void RewardShare::set_weight(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.weight_.SetBytes(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:dydxprotocol.rewards.RewardShare.weight)
}
inline std::string* RewardShare::mutable_weight() {
  std::string* _s = _internal_mutable_weight();
  // @@protoc_insertion_point(field_mutable:dydxprotocol.rewards.RewardShare.weight)
  return _s;
}
inline const std::string& RewardShare::_internal_weight() const {
  return _impl_.weight_.Get();
}
inline void RewardShare::_internal_set_weight(const std::string& value) {
  ;


  _impl_.weight_.Set(value, GetArenaForAllocation());
}
inline std::string* RewardShare::_internal_mutable_weight() {
  ;
  return _impl_.weight_.Mutable( GetArenaForAllocation());
}
inline std::string* RewardShare::release_weight() {
  // @@protoc_insertion_point(field_release:dydxprotocol.rewards.RewardShare.weight)
  return _impl_.weight_.Release();
}
inline void RewardShare::set_allocated_weight(std::string* value) {
  _impl_.weight_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.weight_.IsDefault()) {
          _impl_.weight_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:dydxprotocol.rewards.RewardShare.weight)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace rewards
}  // namespace dydxprotocol


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2frewards_2freward_5fshare_2eproto_2epb_2eh
