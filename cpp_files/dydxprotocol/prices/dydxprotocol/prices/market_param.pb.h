// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dydxprotocol/prices/market_param.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2fprices_2fmarket_5fparam_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2fprices_2fmarket_5fparam_2eproto_2epb_2eh

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
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_dydxprotocol_2fprices_2fmarket_5fparam_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_dydxprotocol_2fprices_2fmarket_5fparam_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_dydxprotocol_2fprices_2fmarket_5fparam_2eproto;
namespace dydxprotocol {
namespace prices {
class MarketParam;
struct MarketParamDefaultTypeInternal;
extern MarketParamDefaultTypeInternal _MarketParam_default_instance_;
}  // namespace prices
}  // namespace dydxprotocol
PROTOBUF_NAMESPACE_OPEN
template <>
::dydxprotocol::prices::MarketParam* Arena::CreateMaybeMessage<::dydxprotocol::prices::MarketParam>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace dydxprotocol {
namespace prices {

// ===================================================================


// -------------------------------------------------------------------

class MarketParam final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:dydxprotocol.prices.MarketParam) */ {
 public:
  inline MarketParam() : MarketParam(nullptr) {}
  ~MarketParam() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR MarketParam(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  MarketParam(const MarketParam& from);
  MarketParam(MarketParam&& from) noexcept
    : MarketParam() {
    *this = ::std::move(from);
  }

  inline MarketParam& operator=(const MarketParam& from) {
    CopyFrom(from);
    return *this;
  }
  inline MarketParam& operator=(MarketParam&& from) noexcept {
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
  static const MarketParam& default_instance() {
    return *internal_default_instance();
  }
  static inline const MarketParam* internal_default_instance() {
    return reinterpret_cast<const MarketParam*>(
               &_MarketParam_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(MarketParam& a, MarketParam& b) {
    a.Swap(&b);
  }
  inline void Swap(MarketParam* other) {
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
  void UnsafeArenaSwap(MarketParam* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MarketParam* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<MarketParam>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const MarketParam& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const MarketParam& from) {
    MarketParam::MergeImpl(*this, from);
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
  void InternalSwap(MarketParam* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "dydxprotocol.prices.MarketParam";
  }
  protected:
  explicit MarketParam(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPairFieldNumber = 2,
    kExchangeConfigJsonFieldNumber = 6,
    kIdFieldNumber = 1,
    kExponentFieldNumber = 3,
    kMinExchangesFieldNumber = 4,
    kMinPriceChangePpmFieldNumber = 5,
  };
  // string pair = 2;
  void clear_pair() ;
  const std::string& pair() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_pair(Arg_&& arg, Args_... args);
  std::string* mutable_pair();
  PROTOBUF_NODISCARD std::string* release_pair();
  void set_allocated_pair(std::string* ptr);

  private:
  const std::string& _internal_pair() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_pair(
      const std::string& value);
  std::string* _internal_mutable_pair();

  public:
  // string exchange_config_json = 6;
  void clear_exchange_config_json() ;
  const std::string& exchange_config_json() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_exchange_config_json(Arg_&& arg, Args_... args);
  std::string* mutable_exchange_config_json();
  PROTOBUF_NODISCARD std::string* release_exchange_config_json();
  void set_allocated_exchange_config_json(std::string* ptr);

  private:
  const std::string& _internal_exchange_config_json() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_exchange_config_json(
      const std::string& value);
  std::string* _internal_mutable_exchange_config_json();

  public:
  // uint32 id = 1;
  void clear_id() ;
  ::uint32_t id() const;
  void set_id(::uint32_t value);

  private:
  ::uint32_t _internal_id() const;
  void _internal_set_id(::uint32_t value);

  public:
  // sint32 exponent = 3;
  void clear_exponent() ;
  ::int32_t exponent() const;
  void set_exponent(::int32_t value);

  private:
  ::int32_t _internal_exponent() const;
  void _internal_set_exponent(::int32_t value);

  public:
  // uint32 min_exchanges = 4;
  void clear_min_exchanges() ;
  ::uint32_t min_exchanges() const;
  void set_min_exchanges(::uint32_t value);

  private:
  ::uint32_t _internal_min_exchanges() const;
  void _internal_set_min_exchanges(::uint32_t value);

  public:
  // uint32 min_price_change_ppm = 5;
  void clear_min_price_change_ppm() ;
  ::uint32_t min_price_change_ppm() const;
  void set_min_price_change_ppm(::uint32_t value);

  private:
  ::uint32_t _internal_min_price_change_ppm() const;
  void _internal_set_min_price_change_ppm(::uint32_t value);

  public:
  // @@protoc_insertion_point(class_scope:dydxprotocol.prices.MarketParam)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr pair_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr exchange_config_json_;
    ::uint32_t id_;
    ::int32_t exponent_;
    ::uint32_t min_exchanges_;
    ::uint32_t min_price_change_ppm_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_dydxprotocol_2fprices_2fmarket_5fparam_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// MarketParam

// uint32 id = 1;
inline void MarketParam::clear_id() {
  _impl_.id_ = 0u;
}
inline ::uint32_t MarketParam::id() const {
  // @@protoc_insertion_point(field_get:dydxprotocol.prices.MarketParam.id)
  return _internal_id();
}
inline void MarketParam::set_id(::uint32_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:dydxprotocol.prices.MarketParam.id)
}
inline ::uint32_t MarketParam::_internal_id() const {
  return _impl_.id_;
}
inline void MarketParam::_internal_set_id(::uint32_t value) {
  ;
  _impl_.id_ = value;
}

// string pair = 2;
inline void MarketParam::clear_pair() {
  _impl_.pair_.ClearToEmpty();
}
inline const std::string& MarketParam::pair() const {
  // @@protoc_insertion_point(field_get:dydxprotocol.prices.MarketParam.pair)
  return _internal_pair();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void MarketParam::set_pair(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.pair_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:dydxprotocol.prices.MarketParam.pair)
}
inline std::string* MarketParam::mutable_pair() {
  std::string* _s = _internal_mutable_pair();
  // @@protoc_insertion_point(field_mutable:dydxprotocol.prices.MarketParam.pair)
  return _s;
}
inline const std::string& MarketParam::_internal_pair() const {
  return _impl_.pair_.Get();
}
inline void MarketParam::_internal_set_pair(const std::string& value) {
  ;


  _impl_.pair_.Set(value, GetArenaForAllocation());
}
inline std::string* MarketParam::_internal_mutable_pair() {
  ;
  return _impl_.pair_.Mutable( GetArenaForAllocation());
}
inline std::string* MarketParam::release_pair() {
  // @@protoc_insertion_point(field_release:dydxprotocol.prices.MarketParam.pair)
  return _impl_.pair_.Release();
}
inline void MarketParam::set_allocated_pair(std::string* value) {
  _impl_.pair_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.pair_.IsDefault()) {
          _impl_.pair_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:dydxprotocol.prices.MarketParam.pair)
}

// sint32 exponent = 3;
inline void MarketParam::clear_exponent() {
  _impl_.exponent_ = 0;
}
inline ::int32_t MarketParam::exponent() const {
  // @@protoc_insertion_point(field_get:dydxprotocol.prices.MarketParam.exponent)
  return _internal_exponent();
}
inline void MarketParam::set_exponent(::int32_t value) {
  _internal_set_exponent(value);
  // @@protoc_insertion_point(field_set:dydxprotocol.prices.MarketParam.exponent)
}
inline ::int32_t MarketParam::_internal_exponent() const {
  return _impl_.exponent_;
}
inline void MarketParam::_internal_set_exponent(::int32_t value) {
  ;
  _impl_.exponent_ = value;
}

// uint32 min_exchanges = 4;
inline void MarketParam::clear_min_exchanges() {
  _impl_.min_exchanges_ = 0u;
}
inline ::uint32_t MarketParam::min_exchanges() const {
  // @@protoc_insertion_point(field_get:dydxprotocol.prices.MarketParam.min_exchanges)
  return _internal_min_exchanges();
}
inline void MarketParam::set_min_exchanges(::uint32_t value) {
  _internal_set_min_exchanges(value);
  // @@protoc_insertion_point(field_set:dydxprotocol.prices.MarketParam.min_exchanges)
}
inline ::uint32_t MarketParam::_internal_min_exchanges() const {
  return _impl_.min_exchanges_;
}
inline void MarketParam::_internal_set_min_exchanges(::uint32_t value) {
  ;
  _impl_.min_exchanges_ = value;
}

// uint32 min_price_change_ppm = 5;
inline void MarketParam::clear_min_price_change_ppm() {
  _impl_.min_price_change_ppm_ = 0u;
}
inline ::uint32_t MarketParam::min_price_change_ppm() const {
  // @@protoc_insertion_point(field_get:dydxprotocol.prices.MarketParam.min_price_change_ppm)
  return _internal_min_price_change_ppm();
}
inline void MarketParam::set_min_price_change_ppm(::uint32_t value) {
  _internal_set_min_price_change_ppm(value);
  // @@protoc_insertion_point(field_set:dydxprotocol.prices.MarketParam.min_price_change_ppm)
}
inline ::uint32_t MarketParam::_internal_min_price_change_ppm() const {
  return _impl_.min_price_change_ppm_;
}
inline void MarketParam::_internal_set_min_price_change_ppm(::uint32_t value) {
  ;
  _impl_.min_price_change_ppm_ = value;
}

// string exchange_config_json = 6;
inline void MarketParam::clear_exchange_config_json() {
  _impl_.exchange_config_json_.ClearToEmpty();
}
inline const std::string& MarketParam::exchange_config_json() const {
  // @@protoc_insertion_point(field_get:dydxprotocol.prices.MarketParam.exchange_config_json)
  return _internal_exchange_config_json();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void MarketParam::set_exchange_config_json(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.exchange_config_json_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:dydxprotocol.prices.MarketParam.exchange_config_json)
}
inline std::string* MarketParam::mutable_exchange_config_json() {
  std::string* _s = _internal_mutable_exchange_config_json();
  // @@protoc_insertion_point(field_mutable:dydxprotocol.prices.MarketParam.exchange_config_json)
  return _s;
}
inline const std::string& MarketParam::_internal_exchange_config_json() const {
  return _impl_.exchange_config_json_.Get();
}
inline void MarketParam::_internal_set_exchange_config_json(const std::string& value) {
  ;


  _impl_.exchange_config_json_.Set(value, GetArenaForAllocation());
}
inline std::string* MarketParam::_internal_mutable_exchange_config_json() {
  ;
  return _impl_.exchange_config_json_.Mutable( GetArenaForAllocation());
}
inline std::string* MarketParam::release_exchange_config_json() {
  // @@protoc_insertion_point(field_release:dydxprotocol.prices.MarketParam.exchange_config_json)
  return _impl_.exchange_config_json_.Release();
}
inline void MarketParam::set_allocated_exchange_config_json(std::string* value) {
  _impl_.exchange_config_json_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.exchange_config_json_.IsDefault()) {
          _impl_.exchange_config_json_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:dydxprotocol.prices.MarketParam.exchange_config_json)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace prices
}  // namespace dydxprotocol


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2fprices_2fmarket_5fparam_2eproto_2epb_2eh