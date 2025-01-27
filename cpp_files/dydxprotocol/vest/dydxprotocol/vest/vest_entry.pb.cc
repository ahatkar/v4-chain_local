// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dydxprotocol/vest/vest_entry.proto

#include "dydxprotocol/vest/vest_entry.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = ::PROTOBUF_NAMESPACE_ID::internal;
namespace dydxprotocol {
namespace vest {
template <typename>
PROTOBUF_CONSTEXPR VestEntry::VestEntry(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.vester_account_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.treasury_account_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.denom_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.start_time_)*/nullptr
  , /*decltype(_impl_.end_time_)*/nullptr} {}
struct VestEntryDefaultTypeInternal {
  PROTOBUF_CONSTEXPR VestEntryDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~VestEntryDefaultTypeInternal() {}
  union {
    VestEntry _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 VestEntryDefaultTypeInternal _VestEntry_default_instance_;
}  // namespace vest
}  // namespace dydxprotocol
static ::_pb::Metadata file_level_metadata_dydxprotocol_2fvest_2fvest_5fentry_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_dydxprotocol_2fvest_2fvest_5fentry_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_dydxprotocol_2fvest_2fvest_5fentry_2eproto = nullptr;
const ::uint32_t TableStruct_dydxprotocol_2fvest_2fvest_5fentry_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::vest::VestEntry, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::vest::VestEntry, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::vest::VestEntry, _impl_.vester_account_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::vest::VestEntry, _impl_.treasury_account_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::vest::VestEntry, _impl_.denom_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::vest::VestEntry, _impl_.start_time_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::vest::VestEntry, _impl_.end_time_),
    ~0u,
    ~0u,
    ~0u,
    0,
    1,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, 13, -1, sizeof(::dydxprotocol::vest::VestEntry)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::dydxprotocol::vest::_VestEntry_default_instance_._instance,
};
const char descriptor_table_protodef_dydxprotocol_2fvest_2fvest_5fentry_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\"dydxprotocol/vest/vest_entry.proto\022\021dy"
    "dxprotocol.vest\032\037google/protobuf/timesta"
    "mp.proto\032\024gogoproto/gogo.proto\"\276\001\n\tVestE"
    "ntry\022\026\n\016vester_account\030\001 \001(\t\022\030\n\020treasury"
    "_account\030\002 \001(\t\022\r\n\005denom\030\003 \001(\t\0228\n\nstart_t"
    "ime\030\004 \001(\0132\032.google.protobuf.TimestampB\010\310"
    "\336\037\000\220\337\037\001\0226\n\010end_time\030\005 \001(\0132\032.google.proto"
    "buf.TimestampB\010\310\336\037\000\220\337\037\001B8Z6github.com/dy"
    "dxprotocol/v4-chain/protocol/x/vest/type"
    "sb\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_dydxprotocol_2fvest_2fvest_5fentry_2eproto_deps[2] =
    {
        &::descriptor_table_gogoproto_2fgogo_2eproto,
        &::descriptor_table_google_2fprotobuf_2ftimestamp_2eproto,
};
static ::absl::once_flag descriptor_table_dydxprotocol_2fvest_2fvest_5fentry_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_dydxprotocol_2fvest_2fvest_5fentry_2eproto = {
    false,
    false,
    369,
    descriptor_table_protodef_dydxprotocol_2fvest_2fvest_5fentry_2eproto,
    "dydxprotocol/vest/vest_entry.proto",
    &descriptor_table_dydxprotocol_2fvest_2fvest_5fentry_2eproto_once,
    descriptor_table_dydxprotocol_2fvest_2fvest_5fentry_2eproto_deps,
    2,
    1,
    schemas,
    file_default_instances,
    TableStruct_dydxprotocol_2fvest_2fvest_5fentry_2eproto::offsets,
    file_level_metadata_dydxprotocol_2fvest_2fvest_5fentry_2eproto,
    file_level_enum_descriptors_dydxprotocol_2fvest_2fvest_5fentry_2eproto,
    file_level_service_descriptors_dydxprotocol_2fvest_2fvest_5fentry_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_dydxprotocol_2fvest_2fvest_5fentry_2eproto_getter() {
  return &descriptor_table_dydxprotocol_2fvest_2fvest_5fentry_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_dydxprotocol_2fvest_2fvest_5fentry_2eproto(&descriptor_table_dydxprotocol_2fvest_2fvest_5fentry_2eproto);
namespace dydxprotocol {
namespace vest {
// ===================================================================

class VestEntry::_Internal {
 public:
  using HasBits = decltype(std::declval<VestEntry>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(VestEntry, _impl_._has_bits_);
  static const ::PROTOBUF_NAMESPACE_ID::Timestamp& start_time(const VestEntry* msg);
  static void set_has_start_time(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Timestamp& end_time(const VestEntry* msg);
  static void set_has_end_time(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

const ::PROTOBUF_NAMESPACE_ID::Timestamp&
VestEntry::_Internal::start_time(const VestEntry* msg) {
  return *msg->_impl_.start_time_;
}
const ::PROTOBUF_NAMESPACE_ID::Timestamp&
VestEntry::_Internal::end_time(const VestEntry* msg) {
  return *msg->_impl_.end_time_;
}
void VestEntry::clear_start_time() {
  if (_impl_.start_time_ != nullptr) _impl_.start_time_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
void VestEntry::clear_end_time() {
  if (_impl_.end_time_ != nullptr) _impl_.end_time_->Clear();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
VestEntry::VestEntry(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:dydxprotocol.vest.VestEntry)
}
VestEntry::VestEntry(const VestEntry& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  VestEntry* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.vester_account_) {}

    , decltype(_impl_.treasury_account_) {}

    , decltype(_impl_.denom_) {}

    , decltype(_impl_.start_time_){nullptr}
    , decltype(_impl_.end_time_){nullptr}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.vester_account_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.vester_account_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_vester_account().empty()) {
    _this->_impl_.vester_account_.Set(from._internal_vester_account(), _this->GetArenaForAllocation());
  }
  _impl_.treasury_account_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.treasury_account_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_treasury_account().empty()) {
    _this->_impl_.treasury_account_.Set(from._internal_treasury_account(), _this->GetArenaForAllocation());
  }
  _impl_.denom_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.denom_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_denom().empty()) {
    _this->_impl_.denom_.Set(from._internal_denom(), _this->GetArenaForAllocation());
  }
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.start_time_ = new ::PROTOBUF_NAMESPACE_ID::Timestamp(*from._impl_.start_time_);
  }
  if ((from._impl_._has_bits_[0] & 0x00000002u) != 0) {
    _this->_impl_.end_time_ = new ::PROTOBUF_NAMESPACE_ID::Timestamp(*from._impl_.end_time_);
  }
  // @@protoc_insertion_point(copy_constructor:dydxprotocol.vest.VestEntry)
}

inline void VestEntry::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.vester_account_) {}

    , decltype(_impl_.treasury_account_) {}

    , decltype(_impl_.denom_) {}

    , decltype(_impl_.start_time_){nullptr}
    , decltype(_impl_.end_time_){nullptr}
  };
  _impl_.vester_account_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.vester_account_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.treasury_account_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.treasury_account_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.denom_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.denom_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

VestEntry::~VestEntry() {
  // @@protoc_insertion_point(destructor:dydxprotocol.vest.VestEntry)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void VestEntry::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.vester_account_.Destroy();
  _impl_.treasury_account_.Destroy();
  _impl_.denom_.Destroy();
  if (this != internal_default_instance()) delete _impl_.start_time_;
  if (this != internal_default_instance()) delete _impl_.end_time_;
}

void VestEntry::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void VestEntry::Clear() {
// @@protoc_insertion_point(message_clear_start:dydxprotocol.vest.VestEntry)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.vester_account_.ClearToEmpty();
  _impl_.treasury_account_.ClearToEmpty();
  _impl_.denom_.ClearToEmpty();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      ABSL_DCHECK(_impl_.start_time_ != nullptr);
      _impl_.start_time_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      ABSL_DCHECK(_impl_.end_time_ != nullptr);
      _impl_.end_time_->Clear();
    }
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* VestEntry::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string vester_account = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_vester_account();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "dydxprotocol.vest.VestEntry.vester_account"));
        } else {
          goto handle_unusual;
        }
        continue;
      // string treasury_account = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_treasury_account();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "dydxprotocol.vest.VestEntry.treasury_account"));
        } else {
          goto handle_unusual;
        }
        continue;
      // string denom = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_denom();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "dydxprotocol.vest.VestEntry.denom"));
        } else {
          goto handle_unusual;
        }
        continue;
      // .google.protobuf.Timestamp start_time = 4 [(.gogoproto.nullable) = false, (.gogoproto.stdtime) = true];
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_start_time(), ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // .google.protobuf.Timestamp end_time = 5 [(.gogoproto.nullable) = false, (.gogoproto.stdtime) = true];
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 42)) {
          ptr = ctx->ParseMessage(_internal_mutable_end_time(), ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* VestEntry::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:dydxprotocol.vest.VestEntry)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string vester_account = 1;
  if (!this->_internal_vester_account().empty()) {
    const std::string& _s = this->_internal_vester_account();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "dydxprotocol.vest.VestEntry.vester_account");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // string treasury_account = 2;
  if (!this->_internal_treasury_account().empty()) {
    const std::string& _s = this->_internal_treasury_account();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "dydxprotocol.vest.VestEntry.treasury_account");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  // string denom = 3;
  if (!this->_internal_denom().empty()) {
    const std::string& _s = this->_internal_denom();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "dydxprotocol.vest.VestEntry.denom");
    target = stream->WriteStringMaybeAliased(3, _s, target);
  }

  cached_has_bits = _impl_._has_bits_[0];
  // .google.protobuf.Timestamp start_time = 4 [(.gogoproto.nullable) = false, (.gogoproto.stdtime) = true];
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, _Internal::start_time(this),
        _Internal::start_time(this).GetCachedSize(), target, stream);
  }

  // .google.protobuf.Timestamp end_time = 5 [(.gogoproto.nullable) = false, (.gogoproto.stdtime) = true];
  if (cached_has_bits & 0x00000002u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(5, _Internal::end_time(this),
        _Internal::end_time(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:dydxprotocol.vest.VestEntry)
  return target;
}

::size_t VestEntry::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:dydxprotocol.vest.VestEntry)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string vester_account = 1;
  if (!this->_internal_vester_account().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_vester_account());
  }

  // string treasury_account = 2;
  if (!this->_internal_treasury_account().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_treasury_account());
  }

  // string denom = 3;
  if (!this->_internal_denom().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_denom());
  }

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // .google.protobuf.Timestamp start_time = 4 [(.gogoproto.nullable) = false, (.gogoproto.stdtime) = true];
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.start_time_);
    }

    // .google.protobuf.Timestamp end_time = 5 [(.gogoproto.nullable) = false, (.gogoproto.stdtime) = true];
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.end_time_);
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData VestEntry::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    VestEntry::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*VestEntry::GetClassData() const { return &_class_data_; }


void VestEntry::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<VestEntry*>(&to_msg);
  auto& from = static_cast<const VestEntry&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:dydxprotocol.vest.VestEntry)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_vester_account().empty()) {
    _this->_internal_set_vester_account(from._internal_vester_account());
  }
  if (!from._internal_treasury_account().empty()) {
    _this->_internal_set_treasury_account(from._internal_treasury_account());
  }
  if (!from._internal_denom().empty()) {
    _this->_internal_set_denom(from._internal_denom());
  }
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_mutable_start_time()->::PROTOBUF_NAMESPACE_ID::Timestamp::MergeFrom(
          from._internal_start_time());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_mutable_end_time()->::PROTOBUF_NAMESPACE_ID::Timestamp::MergeFrom(
          from._internal_end_time());
    }
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void VestEntry::CopyFrom(const VestEntry& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dydxprotocol.vest.VestEntry)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VestEntry::IsInitialized() const {
  return true;
}

void VestEntry::InternalSwap(VestEntry* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.vester_account_, lhs_arena,
                                       &other->_impl_.vester_account_, rhs_arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.treasury_account_, lhs_arena,
                                       &other->_impl_.treasury_account_, rhs_arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.denom_, lhs_arena,
                                       &other->_impl_.denom_, rhs_arena);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(VestEntry, _impl_.end_time_)
      + sizeof(VestEntry::_impl_.end_time_)
      - PROTOBUF_FIELD_OFFSET(VestEntry, _impl_.start_time_)>(
          reinterpret_cast<char*>(&_impl_.start_time_),
          reinterpret_cast<char*>(&other->_impl_.start_time_));
}

::PROTOBUF_NAMESPACE_ID::Metadata VestEntry::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_dydxprotocol_2fvest_2fvest_5fentry_2eproto_getter, &descriptor_table_dydxprotocol_2fvest_2fvest_5fentry_2eproto_once,
      file_level_metadata_dydxprotocol_2fvest_2fvest_5fentry_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace vest
}  // namespace dydxprotocol
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::dydxprotocol::vest::VestEntry*
Arena::CreateMaybeMessage< ::dydxprotocol::vest::VestEntry >(Arena* arena) {
  return Arena::CreateMessageInternal< ::dydxprotocol::vest::VestEntry >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
