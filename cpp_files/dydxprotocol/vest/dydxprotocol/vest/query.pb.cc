// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dydxprotocol/vest/query.proto

#include "dydxprotocol/vest/query.pb.h"

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
PROTOBUF_CONSTEXPR QueryVestEntryRequest::QueryVestEntryRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.vester_account_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_._cached_size_)*/{}} {}
struct QueryVestEntryRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR QueryVestEntryRequestDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~QueryVestEntryRequestDefaultTypeInternal() {}
  union {
    QueryVestEntryRequest _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 QueryVestEntryRequestDefaultTypeInternal _QueryVestEntryRequest_default_instance_;
template <typename>
PROTOBUF_CONSTEXPR QueryVestEntryResponse::QueryVestEntryResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.entry_)*/nullptr} {}
struct QueryVestEntryResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR QueryVestEntryResponseDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~QueryVestEntryResponseDefaultTypeInternal() {}
  union {
    QueryVestEntryResponse _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 QueryVestEntryResponseDefaultTypeInternal _QueryVestEntryResponse_default_instance_;
}  // namespace vest
}  // namespace dydxprotocol
static ::_pb::Metadata file_level_metadata_dydxprotocol_2fvest_2fquery_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_dydxprotocol_2fvest_2fquery_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_dydxprotocol_2fvest_2fquery_2eproto = nullptr;
const ::uint32_t TableStruct_dydxprotocol_2fvest_2fquery_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::vest::QueryVestEntryRequest, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::vest::QueryVestEntryRequest, _impl_.vester_account_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::vest::QueryVestEntryResponse, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::vest::QueryVestEntryResponse, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::vest::QueryVestEntryResponse, _impl_.entry_),
    0,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, -1, -1, sizeof(::dydxprotocol::vest::QueryVestEntryRequest)},
        { 9, 18, -1, sizeof(::dydxprotocol::vest::QueryVestEntryResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::dydxprotocol::vest::_QueryVestEntryRequest_default_instance_._instance,
    &::dydxprotocol::vest::_QueryVestEntryResponse_default_instance_._instance,
};
const char descriptor_table_protodef_dydxprotocol_2fvest_2fquery_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\035dydxprotocol/vest/query.proto\022\021dydxpro"
    "tocol.vest\032\034google/api/annotations.proto"
    "\032\"dydxprotocol/vest/vest_entry.proto\032\024go"
    "goproto/gogo.proto\"/\n\025QueryVestEntryRequ"
    "est\022\026\n\016vester_account\030\001 \001(\t\"K\n\026QueryVest"
    "EntryResponse\0221\n\005entry\030\001 \001(\0132\034.dydxproto"
    "col.vest.VestEntryB\004\310\336\037\0002\224\001\n\005Query\022\212\001\n\tV"
    "estEntry\022(.dydxprotocol.vest.QueryVestEn"
    "tryRequest\032).dydxprotocol.vest.QueryVest"
    "EntryResponse\"(\202\323\344\223\002\"\022 /dydxprotocol/v4/"
    "vest/vest_entryB8Z6github.com/dydxprotoc"
    "ol/v4-chain/protocol/x/vest/typesb\006proto"
    "3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_dydxprotocol_2fvest_2fquery_2eproto_deps[3] =
    {
        &::descriptor_table_dydxprotocol_2fvest_2fvest_5fentry_2eproto,
        &::descriptor_table_gogoproto_2fgogo_2eproto,
        &::descriptor_table_google_2fapi_2fannotations_2eproto,
};
static ::absl::once_flag descriptor_table_dydxprotocol_2fvest_2fquery_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_dydxprotocol_2fvest_2fquery_2eproto = {
    false,
    false,
    481,
    descriptor_table_protodef_dydxprotocol_2fvest_2fquery_2eproto,
    "dydxprotocol/vest/query.proto",
    &descriptor_table_dydxprotocol_2fvest_2fquery_2eproto_once,
    descriptor_table_dydxprotocol_2fvest_2fquery_2eproto_deps,
    3,
    2,
    schemas,
    file_default_instances,
    TableStruct_dydxprotocol_2fvest_2fquery_2eproto::offsets,
    file_level_metadata_dydxprotocol_2fvest_2fquery_2eproto,
    file_level_enum_descriptors_dydxprotocol_2fvest_2fquery_2eproto,
    file_level_service_descriptors_dydxprotocol_2fvest_2fquery_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_dydxprotocol_2fvest_2fquery_2eproto_getter() {
  return &descriptor_table_dydxprotocol_2fvest_2fquery_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_dydxprotocol_2fvest_2fquery_2eproto(&descriptor_table_dydxprotocol_2fvest_2fquery_2eproto);
namespace dydxprotocol {
namespace vest {
// ===================================================================

class QueryVestEntryRequest::_Internal {
 public:
};

QueryVestEntryRequest::QueryVestEntryRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:dydxprotocol.vest.QueryVestEntryRequest)
}
QueryVestEntryRequest::QueryVestEntryRequest(const QueryVestEntryRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  QueryVestEntryRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.vester_account_) {}

    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.vester_account_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.vester_account_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_vester_account().empty()) {
    _this->_impl_.vester_account_.Set(from._internal_vester_account(), _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:dydxprotocol.vest.QueryVestEntryRequest)
}

inline void QueryVestEntryRequest::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.vester_account_) {}

    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.vester_account_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.vester_account_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

QueryVestEntryRequest::~QueryVestEntryRequest() {
  // @@protoc_insertion_point(destructor:dydxprotocol.vest.QueryVestEntryRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void QueryVestEntryRequest::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.vester_account_.Destroy();
}

void QueryVestEntryRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void QueryVestEntryRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:dydxprotocol.vest.QueryVestEntryRequest)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.vester_account_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* QueryVestEntryRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
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
          CHK_(::_pbi::VerifyUTF8(str, "dydxprotocol.vest.QueryVestEntryRequest.vester_account"));
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
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* QueryVestEntryRequest::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:dydxprotocol.vest.QueryVestEntryRequest)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string vester_account = 1;
  if (!this->_internal_vester_account().empty()) {
    const std::string& _s = this->_internal_vester_account();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "dydxprotocol.vest.QueryVestEntryRequest.vester_account");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:dydxprotocol.vest.QueryVestEntryRequest)
  return target;
}

::size_t QueryVestEntryRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:dydxprotocol.vest.QueryVestEntryRequest)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string vester_account = 1;
  if (!this->_internal_vester_account().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_vester_account());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData QueryVestEntryRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    QueryVestEntryRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*QueryVestEntryRequest::GetClassData() const { return &_class_data_; }


void QueryVestEntryRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<QueryVestEntryRequest*>(&to_msg);
  auto& from = static_cast<const QueryVestEntryRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:dydxprotocol.vest.QueryVestEntryRequest)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_vester_account().empty()) {
    _this->_internal_set_vester_account(from._internal_vester_account());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void QueryVestEntryRequest::CopyFrom(const QueryVestEntryRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dydxprotocol.vest.QueryVestEntryRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool QueryVestEntryRequest::IsInitialized() const {
  return true;
}

void QueryVestEntryRequest::InternalSwap(QueryVestEntryRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.vester_account_, lhs_arena,
                                       &other->_impl_.vester_account_, rhs_arena);
}

::PROTOBUF_NAMESPACE_ID::Metadata QueryVestEntryRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_dydxprotocol_2fvest_2fquery_2eproto_getter, &descriptor_table_dydxprotocol_2fvest_2fquery_2eproto_once,
      file_level_metadata_dydxprotocol_2fvest_2fquery_2eproto[0]);
}
// ===================================================================

class QueryVestEntryResponse::_Internal {
 public:
  using HasBits = decltype(std::declval<QueryVestEntryResponse>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(QueryVestEntryResponse, _impl_._has_bits_);
  static const ::dydxprotocol::vest::VestEntry& entry(const QueryVestEntryResponse* msg);
  static void set_has_entry(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::dydxprotocol::vest::VestEntry&
QueryVestEntryResponse::_Internal::entry(const QueryVestEntryResponse* msg) {
  return *msg->_impl_.entry_;
}
void QueryVestEntryResponse::clear_entry() {
  if (_impl_.entry_ != nullptr) _impl_.entry_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
QueryVestEntryResponse::QueryVestEntryResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:dydxprotocol.vest.QueryVestEntryResponse)
}
QueryVestEntryResponse::QueryVestEntryResponse(const QueryVestEntryResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  QueryVestEntryResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.entry_){nullptr}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.entry_ = new ::dydxprotocol::vest::VestEntry(*from._impl_.entry_);
  }
  // @@protoc_insertion_point(copy_constructor:dydxprotocol.vest.QueryVestEntryResponse)
}

inline void QueryVestEntryResponse::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.entry_){nullptr}
  };
}

QueryVestEntryResponse::~QueryVestEntryResponse() {
  // @@protoc_insertion_point(destructor:dydxprotocol.vest.QueryVestEntryResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void QueryVestEntryResponse::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.entry_;
}

void QueryVestEntryResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void QueryVestEntryResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:dydxprotocol.vest.QueryVestEntryResponse)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ABSL_DCHECK(_impl_.entry_ != nullptr);
    _impl_.entry_->Clear();
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* QueryVestEntryResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .dydxprotocol.vest.VestEntry entry = 1 [(.gogoproto.nullable) = false];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_entry(), ptr);
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

::uint8_t* QueryVestEntryResponse::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:dydxprotocol.vest.QueryVestEntryResponse)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // .dydxprotocol.vest.VestEntry entry = 1 [(.gogoproto.nullable) = false];
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::entry(this),
        _Internal::entry(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:dydxprotocol.vest.QueryVestEntryResponse)
  return target;
}

::size_t QueryVestEntryResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:dydxprotocol.vest.QueryVestEntryResponse)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .dydxprotocol.vest.VestEntry entry = 1 [(.gogoproto.nullable) = false];
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.entry_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData QueryVestEntryResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    QueryVestEntryResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*QueryVestEntryResponse::GetClassData() const { return &_class_data_; }


void QueryVestEntryResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<QueryVestEntryResponse*>(&to_msg);
  auto& from = static_cast<const QueryVestEntryResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:dydxprotocol.vest.QueryVestEntryResponse)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_internal_mutable_entry()->::dydxprotocol::vest::VestEntry::MergeFrom(
        from._internal_entry());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void QueryVestEntryResponse::CopyFrom(const QueryVestEntryResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dydxprotocol.vest.QueryVestEntryResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool QueryVestEntryResponse::IsInitialized() const {
  return true;
}

void QueryVestEntryResponse::InternalSwap(QueryVestEntryResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  swap(_impl_.entry_, other->_impl_.entry_);
}

::PROTOBUF_NAMESPACE_ID::Metadata QueryVestEntryResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_dydxprotocol_2fvest_2fquery_2eproto_getter, &descriptor_table_dydxprotocol_2fvest_2fquery_2eproto_once,
      file_level_metadata_dydxprotocol_2fvest_2fquery_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace vest
}  // namespace dydxprotocol
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::dydxprotocol::vest::QueryVestEntryRequest*
Arena::CreateMaybeMessage< ::dydxprotocol::vest::QueryVestEntryRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::dydxprotocol::vest::QueryVestEntryRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::dydxprotocol::vest::QueryVestEntryResponse*
Arena::CreateMaybeMessage< ::dydxprotocol::vest::QueryVestEntryResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::dydxprotocol::vest::QueryVestEntryResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"