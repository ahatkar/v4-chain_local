// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dydxprotocol/perpetuals/params.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2fperpetuals_2fparams_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2fperpetuals_2fparams_2eproto_2epb_2eh

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

#define PROTOBUF_INTERNAL_EXPORT_dydxprotocol_2fperpetuals_2fparams_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_dydxprotocol_2fperpetuals_2fparams_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_dydxprotocol_2fperpetuals_2fparams_2eproto;
namespace dydxprotocol {
namespace perpetuals {
class Params;
struct ParamsDefaultTypeInternal;
extern ParamsDefaultTypeInternal _Params_default_instance_;
}  // namespace perpetuals
}  // namespace dydxprotocol
PROTOBUF_NAMESPACE_OPEN
template <>
::dydxprotocol::perpetuals::Params* Arena::CreateMaybeMessage<::dydxprotocol::perpetuals::Params>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace dydxprotocol {
namespace perpetuals {

// ===================================================================


// -------------------------------------------------------------------

class Params final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:dydxprotocol.perpetuals.Params) */ {
 public:
  inline Params() : Params(nullptr) {}
  ~Params() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Params(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Params(const Params& from);
  Params(Params&& from) noexcept
    : Params() {
    *this = ::std::move(from);
  }

  inline Params& operator=(const Params& from) {
    CopyFrom(from);
    return *this;
  }
  inline Params& operator=(Params&& from) noexcept {
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
  static const Params& default_instance() {
    return *internal_default_instance();
  }
  static inline const Params* internal_default_instance() {
    return reinterpret_cast<const Params*>(
               &_Params_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Params& a, Params& b) {
    a.Swap(&b);
  }
  inline void Swap(Params* other) {
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
  void UnsafeArenaSwap(Params* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Params* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Params>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Params& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Params& from) {
    Params::MergeImpl(*this, from);
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
  void InternalSwap(Params* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "dydxprotocol.perpetuals.Params";
  }
  protected:
  explicit Params(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFundingRateClampFactorPpmFieldNumber = 1,
    kPremiumVoteClampFactorPpmFieldNumber = 2,
    kMinNumVotesPerSampleFieldNumber = 3,
  };
  // uint32 funding_rate_clamp_factor_ppm = 1;
  void clear_funding_rate_clamp_factor_ppm() ;
  ::uint32_t funding_rate_clamp_factor_ppm() const;
  void set_funding_rate_clamp_factor_ppm(::uint32_t value);

  private:
  ::uint32_t _internal_funding_rate_clamp_factor_ppm() const;
  void _internal_set_funding_rate_clamp_factor_ppm(::uint32_t value);

  public:
  // uint32 premium_vote_clamp_factor_ppm = 2;
  void clear_premium_vote_clamp_factor_ppm() ;
  ::uint32_t premium_vote_clamp_factor_ppm() const;
  void set_premium_vote_clamp_factor_ppm(::uint32_t value);

  private:
  ::uint32_t _internal_premium_vote_clamp_factor_ppm() const;
  void _internal_set_premium_vote_clamp_factor_ppm(::uint32_t value);

  public:
  // uint32 min_num_votes_per_sample = 3;
  void clear_min_num_votes_per_sample() ;
  ::uint32_t min_num_votes_per_sample() const;
  void set_min_num_votes_per_sample(::uint32_t value);

  private:
  ::uint32_t _internal_min_num_votes_per_sample() const;
  void _internal_set_min_num_votes_per_sample(::uint32_t value);

  public:
  // @@protoc_insertion_point(class_scope:dydxprotocol.perpetuals.Params)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::uint32_t funding_rate_clamp_factor_ppm_;
    ::uint32_t premium_vote_clamp_factor_ppm_;
    ::uint32_t min_num_votes_per_sample_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_dydxprotocol_2fperpetuals_2fparams_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Params

// uint32 funding_rate_clamp_factor_ppm = 1;
inline void Params::clear_funding_rate_clamp_factor_ppm() {
  _impl_.funding_rate_clamp_factor_ppm_ = 0u;
}
inline ::uint32_t Params::funding_rate_clamp_factor_ppm() const {
  // @@protoc_insertion_point(field_get:dydxprotocol.perpetuals.Params.funding_rate_clamp_factor_ppm)
  return _internal_funding_rate_clamp_factor_ppm();
}
inline void Params::set_funding_rate_clamp_factor_ppm(::uint32_t value) {
  _internal_set_funding_rate_clamp_factor_ppm(value);
  // @@protoc_insertion_point(field_set:dydxprotocol.perpetuals.Params.funding_rate_clamp_factor_ppm)
}
inline ::uint32_t Params::_internal_funding_rate_clamp_factor_ppm() const {
  return _impl_.funding_rate_clamp_factor_ppm_;
}
inline void Params::_internal_set_funding_rate_clamp_factor_ppm(::uint32_t value) {
  ;
  _impl_.funding_rate_clamp_factor_ppm_ = value;
}

// uint32 premium_vote_clamp_factor_ppm = 2;
inline void Params::clear_premium_vote_clamp_factor_ppm() {
  _impl_.premium_vote_clamp_factor_ppm_ = 0u;
}
inline ::uint32_t Params::premium_vote_clamp_factor_ppm() const {
  // @@protoc_insertion_point(field_get:dydxprotocol.perpetuals.Params.premium_vote_clamp_factor_ppm)
  return _internal_premium_vote_clamp_factor_ppm();
}
inline void Params::set_premium_vote_clamp_factor_ppm(::uint32_t value) {
  _internal_set_premium_vote_clamp_factor_ppm(value);
  // @@protoc_insertion_point(field_set:dydxprotocol.perpetuals.Params.premium_vote_clamp_factor_ppm)
}
inline ::uint32_t Params::_internal_premium_vote_clamp_factor_ppm() const {
  return _impl_.premium_vote_clamp_factor_ppm_;
}
inline void Params::_internal_set_premium_vote_clamp_factor_ppm(::uint32_t value) {
  ;
  _impl_.premium_vote_clamp_factor_ppm_ = value;
}

// uint32 min_num_votes_per_sample = 3;
inline void Params::clear_min_num_votes_per_sample() {
  _impl_.min_num_votes_per_sample_ = 0u;
}
inline ::uint32_t Params::min_num_votes_per_sample() const {
  // @@protoc_insertion_point(field_get:dydxprotocol.perpetuals.Params.min_num_votes_per_sample)
  return _internal_min_num_votes_per_sample();
}
inline void Params::set_min_num_votes_per_sample(::uint32_t value) {
  _internal_set_min_num_votes_per_sample(value);
  // @@protoc_insertion_point(field_set:dydxprotocol.perpetuals.Params.min_num_votes_per_sample)
}
inline ::uint32_t Params::_internal_min_num_votes_per_sample() const {
  return _impl_.min_num_votes_per_sample_;
}
inline void Params::_internal_set_min_num_votes_per_sample(::uint32_t value) {
  ;
  _impl_.min_num_votes_per_sample_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace perpetuals
}  // namespace dydxprotocol


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_dydxprotocol_2fperpetuals_2fparams_2eproto_2epb_2eh
