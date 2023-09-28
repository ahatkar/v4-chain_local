// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dydxprotocol/epochs/genesis.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2fepochs_2fgenesis_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2fepochs_2fgenesis_2eproto_2epb_2eh

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
#include "dydxprotocol/epochs/epoch_info.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_dydxprotocol_2fepochs_2fgenesis_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_dydxprotocol_2fepochs_2fgenesis_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_dydxprotocol_2fepochs_2fgenesis_2eproto;
namespace dydxprotocol {
namespace epochs {
class GenesisState;
struct GenesisStateDefaultTypeInternal;
extern GenesisStateDefaultTypeInternal _GenesisState_default_instance_;
}  // namespace epochs
}  // namespace dydxprotocol
PROTOBUF_NAMESPACE_OPEN
template <>
::dydxprotocol::epochs::GenesisState* Arena::CreateMaybeMessage<::dydxprotocol::epochs::GenesisState>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace dydxprotocol {
namespace epochs {

// ===================================================================


// -------------------------------------------------------------------

class GenesisState final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:dydxprotocol.epochs.GenesisState) */ {
 public:
  inline GenesisState() : GenesisState(nullptr) {}
  ~GenesisState() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR GenesisState(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GenesisState(const GenesisState& from);
  GenesisState(GenesisState&& from) noexcept
    : GenesisState() {
    *this = ::std::move(from);
  }

  inline GenesisState& operator=(const GenesisState& from) {
    CopyFrom(from);
    return *this;
  }
  inline GenesisState& operator=(GenesisState&& from) noexcept {
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
  static const GenesisState& default_instance() {
    return *internal_default_instance();
  }
  static inline const GenesisState* internal_default_instance() {
    return reinterpret_cast<const GenesisState*>(
               &_GenesisState_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GenesisState& a, GenesisState& b) {
    a.Swap(&b);
  }
  inline void Swap(GenesisState* other) {
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
  void UnsafeArenaSwap(GenesisState* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GenesisState* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GenesisState>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const GenesisState& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const GenesisState& from) {
    GenesisState::MergeImpl(*this, from);
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
  void InternalSwap(GenesisState* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "dydxprotocol.epochs.GenesisState";
  }
  protected:
  explicit GenesisState(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kEpochInfoListFieldNumber = 1,
  };
  // repeated .dydxprotocol.epochs.EpochInfo epoch_info_list = 1 [(.gogoproto.nullable) = false];
  int epoch_info_list_size() const;
  private:
  int _internal_epoch_info_list_size() const;

  public:
  void clear_epoch_info_list() ;
  ::dydxprotocol::epochs::EpochInfo* mutable_epoch_info_list(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::dydxprotocol::epochs::EpochInfo >*
      mutable_epoch_info_list();
  private:
  const ::dydxprotocol::epochs::EpochInfo& _internal_epoch_info_list(int index) const;
  ::dydxprotocol::epochs::EpochInfo* _internal_add_epoch_info_list();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::dydxprotocol::epochs::EpochInfo>& _internal_epoch_info_list() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::dydxprotocol::epochs::EpochInfo>* _internal_mutable_epoch_info_list();
  public:
  const ::dydxprotocol::epochs::EpochInfo& epoch_info_list(int index) const;
  ::dydxprotocol::epochs::EpochInfo* add_epoch_info_list();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::dydxprotocol::epochs::EpochInfo >&
      epoch_info_list() const;
  // @@protoc_insertion_point(class_scope:dydxprotocol.epochs.GenesisState)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::dydxprotocol::epochs::EpochInfo > epoch_info_list_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_dydxprotocol_2fepochs_2fgenesis_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// GenesisState

// repeated .dydxprotocol.epochs.EpochInfo epoch_info_list = 1 [(.gogoproto.nullable) = false];
inline int GenesisState::_internal_epoch_info_list_size() const {
  return _impl_.epoch_info_list_.size();
}
inline int GenesisState::epoch_info_list_size() const {
  return _internal_epoch_info_list_size();
}
inline ::dydxprotocol::epochs::EpochInfo* GenesisState::mutable_epoch_info_list(int index) {
  // @@protoc_insertion_point(field_mutable:dydxprotocol.epochs.GenesisState.epoch_info_list)
  return _internal_mutable_epoch_info_list()->Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::dydxprotocol::epochs::EpochInfo >*
GenesisState::mutable_epoch_info_list() {
  // @@protoc_insertion_point(field_mutable_list:dydxprotocol.epochs.GenesisState.epoch_info_list)
  return _internal_mutable_epoch_info_list();
}
inline const ::dydxprotocol::epochs::EpochInfo& GenesisState::_internal_epoch_info_list(int index) const {
  return _internal_epoch_info_list().Get(index);
}
inline const ::dydxprotocol::epochs::EpochInfo& GenesisState::epoch_info_list(int index) const {
  // @@protoc_insertion_point(field_get:dydxprotocol.epochs.GenesisState.epoch_info_list)
  return _internal_epoch_info_list(index);
}
inline ::dydxprotocol::epochs::EpochInfo* GenesisState::_internal_add_epoch_info_list() {
  return _internal_mutable_epoch_info_list()->Add();
}
inline ::dydxprotocol::epochs::EpochInfo* GenesisState::add_epoch_info_list() {
  ::dydxprotocol::epochs::EpochInfo* _add = _internal_add_epoch_info_list();
  // @@protoc_insertion_point(field_add:dydxprotocol.epochs.GenesisState.epoch_info_list)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::dydxprotocol::epochs::EpochInfo >&
GenesisState::epoch_info_list() const {
  // @@protoc_insertion_point(field_list:dydxprotocol.epochs.GenesisState.epoch_info_list)
  return _internal_epoch_info_list();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::dydxprotocol::epochs::EpochInfo>&
GenesisState::_internal_epoch_info_list() const {
  return _impl_.epoch_info_list_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::dydxprotocol::epochs::EpochInfo>*
GenesisState::_internal_mutable_epoch_info_list() {
  return &_impl_.epoch_info_list_;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace epochs
}  // namespace dydxprotocol


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2fepochs_2fgenesis_2eproto_2epb_2eh