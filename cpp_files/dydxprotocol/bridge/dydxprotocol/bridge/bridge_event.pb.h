// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dydxprotocol/bridge/bridge_event.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2fbridge_2fbridge_5fevent_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2fbridge_2fbridge_5fevent_2eproto_2epb_2eh

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
#include "cosmos_proto/cosmos.pb.h"
#include "cosmos/base/v1beta1/coin.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_dydxprotocol_2fbridge_2fbridge_5fevent_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_dydxprotocol_2fbridge_2fbridge_5fevent_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_dydxprotocol_2fbridge_2fbridge_5fevent_2eproto;
namespace dydxprotocol {
namespace bridge {
class BridgeEvent;
struct BridgeEventDefaultTypeInternal;
extern BridgeEventDefaultTypeInternal _BridgeEvent_default_instance_;
}  // namespace bridge
}  // namespace dydxprotocol
PROTOBUF_NAMESPACE_OPEN
template <>
::dydxprotocol::bridge::BridgeEvent* Arena::CreateMaybeMessage<::dydxprotocol::bridge::BridgeEvent>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace dydxprotocol {
namespace bridge {

// ===================================================================


// -------------------------------------------------------------------

class BridgeEvent final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:dydxprotocol.bridge.BridgeEvent) */ {
 public:
  inline BridgeEvent() : BridgeEvent(nullptr) {}
  ~BridgeEvent() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR BridgeEvent(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  BridgeEvent(const BridgeEvent& from);
  BridgeEvent(BridgeEvent&& from) noexcept
    : BridgeEvent() {
    *this = ::std::move(from);
  }

  inline BridgeEvent& operator=(const BridgeEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline BridgeEvent& operator=(BridgeEvent&& from) noexcept {
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
  static const BridgeEvent& default_instance() {
    return *internal_default_instance();
  }
  static inline const BridgeEvent* internal_default_instance() {
    return reinterpret_cast<const BridgeEvent*>(
               &_BridgeEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(BridgeEvent& a, BridgeEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(BridgeEvent* other) {
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
  void UnsafeArenaSwap(BridgeEvent* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  BridgeEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<BridgeEvent>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const BridgeEvent& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const BridgeEvent& from) {
    BridgeEvent::MergeImpl(*this, from);
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
  void InternalSwap(BridgeEvent* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "dydxprotocol.bridge.BridgeEvent";
  }
  protected:
  explicit BridgeEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAddressFieldNumber = 3,
    kCoinFieldNumber = 2,
    kEthBlockHeightFieldNumber = 4,
    kIdFieldNumber = 1,
  };
  // string address = 3 [(.cosmos_proto.scalar) = "cosmos.AddressString"];
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
  // .cosmos.base.v1beta1.Coin coin = 2 [(.gogoproto.nullable) = false];
  bool has_coin() const;
  void clear_coin() ;
  const ::cosmos::base::v1beta1::Coin& coin() const;
  PROTOBUF_NODISCARD ::cosmos::base::v1beta1::Coin* release_coin();
  ::cosmos::base::v1beta1::Coin* mutable_coin();
  void set_allocated_coin(::cosmos::base::v1beta1::Coin* coin);
  private:
  const ::cosmos::base::v1beta1::Coin& _internal_coin() const;
  ::cosmos::base::v1beta1::Coin* _internal_mutable_coin();
  public:
  void unsafe_arena_set_allocated_coin(
      ::cosmos::base::v1beta1::Coin* coin);
  ::cosmos::base::v1beta1::Coin* unsafe_arena_release_coin();
  // uint64 eth_block_height = 4;
  void clear_eth_block_height() ;
  ::uint64_t eth_block_height() const;
  void set_eth_block_height(::uint64_t value);

  private:
  ::uint64_t _internal_eth_block_height() const;
  void _internal_set_eth_block_height(::uint64_t value);

  public:
  // uint32 id = 1;
  void clear_id() ;
  ::uint32_t id() const;
  void set_id(::uint32_t value);

  private:
  ::uint32_t _internal_id() const;
  void _internal_set_id(::uint32_t value);

  public:
  // @@protoc_insertion_point(class_scope:dydxprotocol.bridge.BridgeEvent)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr address_;
    ::cosmos::base::v1beta1::Coin* coin_;
    ::uint64_t eth_block_height_;
    ::uint32_t id_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_dydxprotocol_2fbridge_2fbridge_5fevent_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// BridgeEvent

// uint32 id = 1;
inline void BridgeEvent::clear_id() {
  _impl_.id_ = 0u;
}
inline ::uint32_t BridgeEvent::id() const {
  // @@protoc_insertion_point(field_get:dydxprotocol.bridge.BridgeEvent.id)
  return _internal_id();
}
inline void BridgeEvent::set_id(::uint32_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:dydxprotocol.bridge.BridgeEvent.id)
}
inline ::uint32_t BridgeEvent::_internal_id() const {
  return _impl_.id_;
}
inline void BridgeEvent::_internal_set_id(::uint32_t value) {
  ;
  _impl_.id_ = value;
}

// .cosmos.base.v1beta1.Coin coin = 2 [(.gogoproto.nullable) = false];
inline bool BridgeEvent::has_coin() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.coin_ != nullptr);
  return value;
}
inline const ::cosmos::base::v1beta1::Coin& BridgeEvent::_internal_coin() const {
  const ::cosmos::base::v1beta1::Coin* p = _impl_.coin_;
  return p != nullptr ? *p : reinterpret_cast<const ::cosmos::base::v1beta1::Coin&>(
      ::cosmos::base::v1beta1::_Coin_default_instance_);
}
inline const ::cosmos::base::v1beta1::Coin& BridgeEvent::coin() const {
  // @@protoc_insertion_point(field_get:dydxprotocol.bridge.BridgeEvent.coin)
  return _internal_coin();
}
inline void BridgeEvent::unsafe_arena_set_allocated_coin(
    ::cosmos::base::v1beta1::Coin* coin) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.coin_);
  }
  _impl_.coin_ = coin;
  if (coin) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:dydxprotocol.bridge.BridgeEvent.coin)
}
inline ::cosmos::base::v1beta1::Coin* BridgeEvent::release_coin() {
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::cosmos::base::v1beta1::Coin* temp = _impl_.coin_;
  _impl_.coin_ = nullptr;
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
inline ::cosmos::base::v1beta1::Coin* BridgeEvent::unsafe_arena_release_coin() {
  // @@protoc_insertion_point(field_release:dydxprotocol.bridge.BridgeEvent.coin)
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::cosmos::base::v1beta1::Coin* temp = _impl_.coin_;
  _impl_.coin_ = nullptr;
  return temp;
}
inline ::cosmos::base::v1beta1::Coin* BridgeEvent::_internal_mutable_coin() {
  _impl_._has_bits_[0] |= 0x00000001u;
  if (_impl_.coin_ == nullptr) {
    auto* p = CreateMaybeMessage<::cosmos::base::v1beta1::Coin>(GetArenaForAllocation());
    _impl_.coin_ = p;
  }
  return _impl_.coin_;
}
inline ::cosmos::base::v1beta1::Coin* BridgeEvent::mutable_coin() {
  ::cosmos::base::v1beta1::Coin* _msg = _internal_mutable_coin();
  // @@protoc_insertion_point(field_mutable:dydxprotocol.bridge.BridgeEvent.coin)
  return _msg;
}
inline void BridgeEvent::set_allocated_coin(::cosmos::base::v1beta1::Coin* coin) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.coin_);
  }
  if (coin) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(coin));
    if (message_arena != submessage_arena) {
      coin = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, coin, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.coin_ = coin;
  // @@protoc_insertion_point(field_set_allocated:dydxprotocol.bridge.BridgeEvent.coin)
}

// string address = 3 [(.cosmos_proto.scalar) = "cosmos.AddressString"];
inline void BridgeEvent::clear_address() {
  _impl_.address_.ClearToEmpty();
}
inline const std::string& BridgeEvent::address() const {
  // @@protoc_insertion_point(field_get:dydxprotocol.bridge.BridgeEvent.address)
  return _internal_address();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void BridgeEvent::set_address(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.address_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:dydxprotocol.bridge.BridgeEvent.address)
}
inline std::string* BridgeEvent::mutable_address() {
  std::string* _s = _internal_mutable_address();
  // @@protoc_insertion_point(field_mutable:dydxprotocol.bridge.BridgeEvent.address)
  return _s;
}
inline const std::string& BridgeEvent::_internal_address() const {
  return _impl_.address_.Get();
}
inline void BridgeEvent::_internal_set_address(const std::string& value) {
  ;


  _impl_.address_.Set(value, GetArenaForAllocation());
}
inline std::string* BridgeEvent::_internal_mutable_address() {
  ;
  return _impl_.address_.Mutable( GetArenaForAllocation());
}
inline std::string* BridgeEvent::release_address() {
  // @@protoc_insertion_point(field_release:dydxprotocol.bridge.BridgeEvent.address)
  return _impl_.address_.Release();
}
inline void BridgeEvent::set_allocated_address(std::string* value) {
  _impl_.address_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.address_.IsDefault()) {
          _impl_.address_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:dydxprotocol.bridge.BridgeEvent.address)
}

// uint64 eth_block_height = 4;
inline void BridgeEvent::clear_eth_block_height() {
  _impl_.eth_block_height_ = ::uint64_t{0u};
}
inline ::uint64_t BridgeEvent::eth_block_height() const {
  // @@protoc_insertion_point(field_get:dydxprotocol.bridge.BridgeEvent.eth_block_height)
  return _internal_eth_block_height();
}
inline void BridgeEvent::set_eth_block_height(::uint64_t value) {
  _internal_set_eth_block_height(value);
  // @@protoc_insertion_point(field_set:dydxprotocol.bridge.BridgeEvent.eth_block_height)
}
inline ::uint64_t BridgeEvent::_internal_eth_block_height() const {
  return _impl_.eth_block_height_;
}
inline void BridgeEvent::_internal_set_eth_block_height(::uint64_t value) {
  ;
  _impl_.eth_block_height_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace bridge
}  // namespace dydxprotocol


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2fbridge_2fbridge_5fevent_2eproto_2epb_2eh
