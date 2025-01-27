// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dydxprotocol/indexer/shared/removal_reason.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2findexer_2fshared_2fremoval_5freason_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2findexer_2fshared_2fremoval_5freason_2eproto_2epb_2eh

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
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/generated_enum_reflection.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_dydxprotocol_2findexer_2fshared_2fremoval_5freason_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_dydxprotocol_2findexer_2fshared_2fremoval_5freason_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_dydxprotocol_2findexer_2fshared_2fremoval_5freason_2eproto;
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

namespace dydxprotocol {
namespace indexer {
namespace shared {
enum OrderRemovalReason : int {
  ORDER_REMOVAL_REASON_UNSPECIFIED = 0,
  ORDER_REMOVAL_REASON_EXPIRED = 1,
  ORDER_REMOVAL_REASON_USER_CANCELED = 2,
  ORDER_REMOVAL_REASON_UNDERCOLLATERALIZED = 3,
  ORDER_REMOVAL_REASON_INTERNAL_ERROR = 4,
  ORDER_REMOVAL_REASON_SELF_TRADE_ERROR = 5,
  ORDER_REMOVAL_REASON_POST_ONLY_WOULD_CROSS_MAKER_ORDER = 6,
  ORDER_REMOVAL_REASON_IMMEDIATE_OR_CANCEL_WOULD_REST_ON_BOOK = 7,
  ORDER_REMOVAL_REASON_FOK_ORDER_COULD_NOT_BE_FULLY_FULLED = 8,
  ORDER_REMOVAL_REASON_REDUCE_ONLY_RESIZE = 9,
  ORDER_REMOVAL_REASON_INDEXER_EXPIRED = 10,
  ORDER_REMOVAL_REASON_REPLACED = 11,
  ORDER_REMOVAL_REASON_FULLY_FILLED = 12,
  ORDER_REMOVAL_REASON_EQUITY_TIER = 13,
  OrderRemovalReason_INT_MIN_SENTINEL_DO_NOT_USE_ =
      std::numeric_limits<::int32_t>::min(),
  OrderRemovalReason_INT_MAX_SENTINEL_DO_NOT_USE_ =
      std::numeric_limits<::int32_t>::max(),
};

bool OrderRemovalReason_IsValid(int value);
constexpr OrderRemovalReason OrderRemovalReason_MIN = static_cast<OrderRemovalReason>(0);
constexpr OrderRemovalReason OrderRemovalReason_MAX = static_cast<OrderRemovalReason>(13);
constexpr int OrderRemovalReason_ARRAYSIZE = 13 + 1;
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
OrderRemovalReason_descriptor();
template <typename T>
const std::string& OrderRemovalReason_Name(T value) {
  static_assert(std::is_same<T, OrderRemovalReason>::value ||
                    std::is_integral<T>::value,
                "Incorrect type passed to OrderRemovalReason_Name().");
  return OrderRemovalReason_Name(static_cast<OrderRemovalReason>(value));
}
template <>
inline const std::string& OrderRemovalReason_Name(OrderRemovalReason value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfDenseEnum<OrderRemovalReason_descriptor,
                                                 0, 13>(
      static_cast<int>(value));
}
inline bool OrderRemovalReason_Parse(absl::string_view name, OrderRemovalReason* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<OrderRemovalReason>(
      OrderRemovalReason_descriptor(), name, value);
}

// ===================================================================



// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace shared
}  // namespace indexer
}  // namespace dydxprotocol


PROTOBUF_NAMESPACE_OPEN

template <>
struct is_proto_enum<::dydxprotocol::indexer::shared::OrderRemovalReason> : std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor<::dydxprotocol::indexer::shared::OrderRemovalReason>() {
  return ::dydxprotocol::indexer::shared::OrderRemovalReason_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2findexer_2fshared_2fremoval_5freason_2eproto_2epb_2eh
