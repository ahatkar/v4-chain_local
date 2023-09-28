// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dydxprotocol/clob/process_proposer_matches_events.proto

#include "dydxprotocol/clob/process_proposer_matches_events.pb.h"

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
namespace clob {
template <typename>
PROTOBUF_CONSTEXPR ProcessProposerMatchesEvents::ProcessProposerMatchesEvents(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.placed_long_term_order_ids_)*/{}
  , /*decltype(_impl_.expired_stateful_order_ids_)*/{}
  , /*decltype(_impl_.order_ids_filled_in_last_block_)*/{}
  , /*decltype(_impl_.placed_stateful_cancellation_order_ids_)*/{}
  , /*decltype(_impl_.removed_stateful_order_ids_)*/{}
  , /*decltype(_impl_.conditional_order_ids_triggered_in_last_block_)*/{}
  , /*decltype(_impl_.placed_conditional_order_ids_)*/{}
  , /*decltype(_impl_.block_height_)*/ 0u

  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ProcessProposerMatchesEventsDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ProcessProposerMatchesEventsDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ProcessProposerMatchesEventsDefaultTypeInternal() {}
  union {
    ProcessProposerMatchesEvents _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ProcessProposerMatchesEventsDefaultTypeInternal _ProcessProposerMatchesEvents_default_instance_;
}  // namespace clob
}  // namespace dydxprotocol
static ::_pb::Metadata file_level_metadata_dydxprotocol_2fclob_2fprocess_5fproposer_5fmatches_5fevents_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_dydxprotocol_2fclob_2fprocess_5fproposer_5fmatches_5fevents_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_dydxprotocol_2fclob_2fprocess_5fproposer_5fmatches_5fevents_2eproto = nullptr;
const ::uint32_t TableStruct_dydxprotocol_2fclob_2fprocess_5fproposer_5fmatches_5fevents_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::clob::ProcessProposerMatchesEvents, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::clob::ProcessProposerMatchesEvents, _impl_.placed_long_term_order_ids_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::clob::ProcessProposerMatchesEvents, _impl_.expired_stateful_order_ids_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::clob::ProcessProposerMatchesEvents, _impl_.order_ids_filled_in_last_block_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::clob::ProcessProposerMatchesEvents, _impl_.placed_stateful_cancellation_order_ids_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::clob::ProcessProposerMatchesEvents, _impl_.removed_stateful_order_ids_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::clob::ProcessProposerMatchesEvents, _impl_.conditional_order_ids_triggered_in_last_block_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::clob::ProcessProposerMatchesEvents, _impl_.placed_conditional_order_ids_),
    PROTOBUF_FIELD_OFFSET(::dydxprotocol::clob::ProcessProposerMatchesEvents, _impl_.block_height_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, -1, -1, sizeof(::dydxprotocol::clob::ProcessProposerMatchesEvents)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::dydxprotocol::clob::_ProcessProposerMatchesEvents_default_instance_._instance,
};
const char descriptor_table_protodef_dydxprotocol_2fclob_2fprocess_5fproposer_5fmatches_5fevents_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n7dydxprotocol/clob/process_proposer_mat"
    "ches_events.proto\022\021dydxprotocol.clob\032\024go"
    "goproto/gogo.proto\032\035dydxprotocol/clob/or"
    "der.proto\"\303\004\n\034ProcessProposerMatchesEven"
    "ts\022D\n\032placed_long_term_order_ids\030\001 \003(\0132\032"
    ".dydxprotocol.clob.OrderIdB\004\310\336\037\000\022D\n\032expi"
    "red_stateful_order_ids\030\002 \003(\0132\032.dydxproto"
    "col.clob.OrderIdB\004\310\336\037\000\022H\n\036order_ids_fill"
    "ed_in_last_block\030\003 \003(\0132\032.dydxprotocol.cl"
    "ob.OrderIdB\004\310\336\037\000\022P\n&placed_stateful_canc"
    "ellation_order_ids\030\004 \003(\0132\032.dydxprotocol."
    "clob.OrderIdB\004\310\336\037\000\022D\n\032removed_stateful_o"
    "rder_ids\030\005 \003(\0132\032.dydxprotocol.clob.Order"
    "IdB\004\310\336\037\000\022W\n-conditional_order_ids_trigge"
    "red_in_last_block\030\006 \003(\0132\032.dydxprotocol.c"
    "lob.OrderIdB\004\310\336\037\000\022F\n\034placed_conditional_"
    "order_ids\030\007 \003(\0132\032.dydxprotocol.clob.Orde"
    "rIdB\004\310\336\037\000\022\024\n\014block_height\030\010 \001(\rB8Z6githu"
    "b.com/dydxprotocol/v4-chain/protocol/x/c"
    "lob/typesb\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_dydxprotocol_2fclob_2fprocess_5fproposer_5fmatches_5fevents_2eproto_deps[2] =
    {
        &::descriptor_table_dydxprotocol_2fclob_2forder_2eproto,
        &::descriptor_table_gogoproto_2fgogo_2eproto,
};
static ::absl::once_flag descriptor_table_dydxprotocol_2fclob_2fprocess_5fproposer_5fmatches_5fevents_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_dydxprotocol_2fclob_2fprocess_5fproposer_5fmatches_5fevents_2eproto = {
    false,
    false,
    777,
    descriptor_table_protodef_dydxprotocol_2fclob_2fprocess_5fproposer_5fmatches_5fevents_2eproto,
    "dydxprotocol/clob/process_proposer_matches_events.proto",
    &descriptor_table_dydxprotocol_2fclob_2fprocess_5fproposer_5fmatches_5fevents_2eproto_once,
    descriptor_table_dydxprotocol_2fclob_2fprocess_5fproposer_5fmatches_5fevents_2eproto_deps,
    2,
    1,
    schemas,
    file_default_instances,
    TableStruct_dydxprotocol_2fclob_2fprocess_5fproposer_5fmatches_5fevents_2eproto::offsets,
    file_level_metadata_dydxprotocol_2fclob_2fprocess_5fproposer_5fmatches_5fevents_2eproto,
    file_level_enum_descriptors_dydxprotocol_2fclob_2fprocess_5fproposer_5fmatches_5fevents_2eproto,
    file_level_service_descriptors_dydxprotocol_2fclob_2fprocess_5fproposer_5fmatches_5fevents_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_dydxprotocol_2fclob_2fprocess_5fproposer_5fmatches_5fevents_2eproto_getter() {
  return &descriptor_table_dydxprotocol_2fclob_2fprocess_5fproposer_5fmatches_5fevents_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_dydxprotocol_2fclob_2fprocess_5fproposer_5fmatches_5fevents_2eproto(&descriptor_table_dydxprotocol_2fclob_2fprocess_5fproposer_5fmatches_5fevents_2eproto);
namespace dydxprotocol {
namespace clob {
// ===================================================================

class ProcessProposerMatchesEvents::_Internal {
 public:
};

void ProcessProposerMatchesEvents::clear_placed_long_term_order_ids() {
  _internal_mutable_placed_long_term_order_ids()->Clear();
}
void ProcessProposerMatchesEvents::clear_expired_stateful_order_ids() {
  _internal_mutable_expired_stateful_order_ids()->Clear();
}
void ProcessProposerMatchesEvents::clear_order_ids_filled_in_last_block() {
  _internal_mutable_order_ids_filled_in_last_block()->Clear();
}
void ProcessProposerMatchesEvents::clear_placed_stateful_cancellation_order_ids() {
  _internal_mutable_placed_stateful_cancellation_order_ids()->Clear();
}
void ProcessProposerMatchesEvents::clear_removed_stateful_order_ids() {
  _internal_mutable_removed_stateful_order_ids()->Clear();
}
void ProcessProposerMatchesEvents::clear_conditional_order_ids_triggered_in_last_block() {
  _internal_mutable_conditional_order_ids_triggered_in_last_block()->Clear();
}
void ProcessProposerMatchesEvents::clear_placed_conditional_order_ids() {
  _internal_mutable_placed_conditional_order_ids()->Clear();
}
ProcessProposerMatchesEvents::ProcessProposerMatchesEvents(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:dydxprotocol.clob.ProcessProposerMatchesEvents)
}
ProcessProposerMatchesEvents::ProcessProposerMatchesEvents(const ProcessProposerMatchesEvents& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ProcessProposerMatchesEvents* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.placed_long_term_order_ids_){from._impl_.placed_long_term_order_ids_}
    , decltype(_impl_.expired_stateful_order_ids_){from._impl_.expired_stateful_order_ids_}
    , decltype(_impl_.order_ids_filled_in_last_block_){from._impl_.order_ids_filled_in_last_block_}
    , decltype(_impl_.placed_stateful_cancellation_order_ids_){from._impl_.placed_stateful_cancellation_order_ids_}
    , decltype(_impl_.removed_stateful_order_ids_){from._impl_.removed_stateful_order_ids_}
    , decltype(_impl_.conditional_order_ids_triggered_in_last_block_){from._impl_.conditional_order_ids_triggered_in_last_block_}
    , decltype(_impl_.placed_conditional_order_ids_){from._impl_.placed_conditional_order_ids_}
    , decltype(_impl_.block_height_) {}

    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.block_height_ = from._impl_.block_height_;
  // @@protoc_insertion_point(copy_constructor:dydxprotocol.clob.ProcessProposerMatchesEvents)
}

inline void ProcessProposerMatchesEvents::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.placed_long_term_order_ids_){arena}
    , decltype(_impl_.expired_stateful_order_ids_){arena}
    , decltype(_impl_.order_ids_filled_in_last_block_){arena}
    , decltype(_impl_.placed_stateful_cancellation_order_ids_){arena}
    , decltype(_impl_.removed_stateful_order_ids_){arena}
    , decltype(_impl_.conditional_order_ids_triggered_in_last_block_){arena}
    , decltype(_impl_.placed_conditional_order_ids_){arena}
    , decltype(_impl_.block_height_) { 0u }

    , /*decltype(_impl_._cached_size_)*/{}
  };
}

ProcessProposerMatchesEvents::~ProcessProposerMatchesEvents() {
  // @@protoc_insertion_point(destructor:dydxprotocol.clob.ProcessProposerMatchesEvents)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ProcessProposerMatchesEvents::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _internal_mutable_placed_long_term_order_ids()->~RepeatedPtrField();
  _internal_mutable_expired_stateful_order_ids()->~RepeatedPtrField();
  _internal_mutable_order_ids_filled_in_last_block()->~RepeatedPtrField();
  _internal_mutable_placed_stateful_cancellation_order_ids()->~RepeatedPtrField();
  _internal_mutable_removed_stateful_order_ids()->~RepeatedPtrField();
  _internal_mutable_conditional_order_ids_triggered_in_last_block()->~RepeatedPtrField();
  _internal_mutable_placed_conditional_order_ids()->~RepeatedPtrField();
}

void ProcessProposerMatchesEvents::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ProcessProposerMatchesEvents::Clear() {
// @@protoc_insertion_point(message_clear_start:dydxprotocol.clob.ProcessProposerMatchesEvents)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_mutable_placed_long_term_order_ids()->Clear();
  _internal_mutable_expired_stateful_order_ids()->Clear();
  _internal_mutable_order_ids_filled_in_last_block()->Clear();
  _internal_mutable_placed_stateful_cancellation_order_ids()->Clear();
  _internal_mutable_removed_stateful_order_ids()->Clear();
  _internal_mutable_conditional_order_ids_triggered_in_last_block()->Clear();
  _internal_mutable_placed_conditional_order_ids()->Clear();
  _impl_.block_height_ = 0u;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ProcessProposerMatchesEvents::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .dydxprotocol.clob.OrderId placed_long_term_order_ids = 1 [(.gogoproto.nullable) = false];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_placed_long_term_order_ids(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else {
          goto handle_unusual;
        }
        continue;
      // repeated .dydxprotocol.clob.OrderId expired_stateful_order_ids = 2 [(.gogoproto.nullable) = false];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_expired_stateful_order_ids(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else {
          goto handle_unusual;
        }
        continue;
      // repeated .dydxprotocol.clob.OrderId order_ids_filled_in_last_block = 3 [(.gogoproto.nullable) = false];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_order_ids_filled_in_last_block(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else {
          goto handle_unusual;
        }
        continue;
      // repeated .dydxprotocol.clob.OrderId placed_stateful_cancellation_order_ids = 4 [(.gogoproto.nullable) = false];
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_placed_stateful_cancellation_order_ids(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
        } else {
          goto handle_unusual;
        }
        continue;
      // repeated .dydxprotocol.clob.OrderId removed_stateful_order_ids = 5 [(.gogoproto.nullable) = false];
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 42)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_removed_stateful_order_ids(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<42>(ptr));
        } else {
          goto handle_unusual;
        }
        continue;
      // repeated .dydxprotocol.clob.OrderId conditional_order_ids_triggered_in_last_block = 6 [(.gogoproto.nullable) = false];
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 50)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_conditional_order_ids_triggered_in_last_block(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<50>(ptr));
        } else {
          goto handle_unusual;
        }
        continue;
      // repeated .dydxprotocol.clob.OrderId placed_conditional_order_ids = 7 [(.gogoproto.nullable) = false];
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 58)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_placed_conditional_order_ids(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<58>(ptr));
        } else {
          goto handle_unusual;
        }
        continue;
      // uint32 block_height = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 64)) {
          _impl_.block_height_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* ProcessProposerMatchesEvents::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:dydxprotocol.clob.ProcessProposerMatchesEvents)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .dydxprotocol.clob.OrderId placed_long_term_order_ids = 1 [(.gogoproto.nullable) = false];
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_placed_long_term_order_ids_size()); i < n; i++) {
    const auto& repfield = this->_internal_placed_long_term_order_ids(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  // repeated .dydxprotocol.clob.OrderId expired_stateful_order_ids = 2 [(.gogoproto.nullable) = false];
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_expired_stateful_order_ids_size()); i < n; i++) {
    const auto& repfield = this->_internal_expired_stateful_order_ids(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(2, repfield, repfield.GetCachedSize(), target, stream);
  }

  // repeated .dydxprotocol.clob.OrderId order_ids_filled_in_last_block = 3 [(.gogoproto.nullable) = false];
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_order_ids_filled_in_last_block_size()); i < n; i++) {
    const auto& repfield = this->_internal_order_ids_filled_in_last_block(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(3, repfield, repfield.GetCachedSize(), target, stream);
  }

  // repeated .dydxprotocol.clob.OrderId placed_stateful_cancellation_order_ids = 4 [(.gogoproto.nullable) = false];
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_placed_stateful_cancellation_order_ids_size()); i < n; i++) {
    const auto& repfield = this->_internal_placed_stateful_cancellation_order_ids(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(4, repfield, repfield.GetCachedSize(), target, stream);
  }

  // repeated .dydxprotocol.clob.OrderId removed_stateful_order_ids = 5 [(.gogoproto.nullable) = false];
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_removed_stateful_order_ids_size()); i < n; i++) {
    const auto& repfield = this->_internal_removed_stateful_order_ids(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(5, repfield, repfield.GetCachedSize(), target, stream);
  }

  // repeated .dydxprotocol.clob.OrderId conditional_order_ids_triggered_in_last_block = 6 [(.gogoproto.nullable) = false];
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_conditional_order_ids_triggered_in_last_block_size()); i < n; i++) {
    const auto& repfield = this->_internal_conditional_order_ids_triggered_in_last_block(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(6, repfield, repfield.GetCachedSize(), target, stream);
  }

  // repeated .dydxprotocol.clob.OrderId placed_conditional_order_ids = 7 [(.gogoproto.nullable) = false];
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_placed_conditional_order_ids_size()); i < n; i++) {
    const auto& repfield = this->_internal_placed_conditional_order_ids(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(7, repfield, repfield.GetCachedSize(), target, stream);
  }

  // uint32 block_height = 8;
  if (this->_internal_block_height() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        8, this->_internal_block_height(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:dydxprotocol.clob.ProcessProposerMatchesEvents)
  return target;
}

::size_t ProcessProposerMatchesEvents::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:dydxprotocol.clob.ProcessProposerMatchesEvents)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .dydxprotocol.clob.OrderId placed_long_term_order_ids = 1 [(.gogoproto.nullable) = false];
  total_size += 1UL * this->_internal_placed_long_term_order_ids_size();
  for (const auto& msg : this->_internal_placed_long_term_order_ids()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .dydxprotocol.clob.OrderId expired_stateful_order_ids = 2 [(.gogoproto.nullable) = false];
  total_size += 1UL * this->_internal_expired_stateful_order_ids_size();
  for (const auto& msg : this->_internal_expired_stateful_order_ids()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .dydxprotocol.clob.OrderId order_ids_filled_in_last_block = 3 [(.gogoproto.nullable) = false];
  total_size += 1UL * this->_internal_order_ids_filled_in_last_block_size();
  for (const auto& msg : this->_internal_order_ids_filled_in_last_block()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .dydxprotocol.clob.OrderId placed_stateful_cancellation_order_ids = 4 [(.gogoproto.nullable) = false];
  total_size += 1UL * this->_internal_placed_stateful_cancellation_order_ids_size();
  for (const auto& msg : this->_internal_placed_stateful_cancellation_order_ids()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .dydxprotocol.clob.OrderId removed_stateful_order_ids = 5 [(.gogoproto.nullable) = false];
  total_size += 1UL * this->_internal_removed_stateful_order_ids_size();
  for (const auto& msg : this->_internal_removed_stateful_order_ids()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .dydxprotocol.clob.OrderId conditional_order_ids_triggered_in_last_block = 6 [(.gogoproto.nullable) = false];
  total_size += 1UL * this->_internal_conditional_order_ids_triggered_in_last_block_size();
  for (const auto& msg : this->_internal_conditional_order_ids_triggered_in_last_block()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .dydxprotocol.clob.OrderId placed_conditional_order_ids = 7 [(.gogoproto.nullable) = false];
  total_size += 1UL * this->_internal_placed_conditional_order_ids_size();
  for (const auto& msg : this->_internal_placed_conditional_order_ids()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // uint32 block_height = 8;
  if (this->_internal_block_height() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
        this->_internal_block_height());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ProcessProposerMatchesEvents::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ProcessProposerMatchesEvents::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ProcessProposerMatchesEvents::GetClassData() const { return &_class_data_; }


void ProcessProposerMatchesEvents::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ProcessProposerMatchesEvents*>(&to_msg);
  auto& from = static_cast<const ProcessProposerMatchesEvents&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:dydxprotocol.clob.ProcessProposerMatchesEvents)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_placed_long_term_order_ids()->MergeFrom(from._internal_placed_long_term_order_ids());
  _this->_internal_mutable_expired_stateful_order_ids()->MergeFrom(from._internal_expired_stateful_order_ids());
  _this->_internal_mutable_order_ids_filled_in_last_block()->MergeFrom(from._internal_order_ids_filled_in_last_block());
  _this->_internal_mutable_placed_stateful_cancellation_order_ids()->MergeFrom(from._internal_placed_stateful_cancellation_order_ids());
  _this->_internal_mutable_removed_stateful_order_ids()->MergeFrom(from._internal_removed_stateful_order_ids());
  _this->_internal_mutable_conditional_order_ids_triggered_in_last_block()->MergeFrom(from._internal_conditional_order_ids_triggered_in_last_block());
  _this->_internal_mutable_placed_conditional_order_ids()->MergeFrom(from._internal_placed_conditional_order_ids());
  if (from._internal_block_height() != 0) {
    _this->_internal_set_block_height(from._internal_block_height());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ProcessProposerMatchesEvents::CopyFrom(const ProcessProposerMatchesEvents& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dydxprotocol.clob.ProcessProposerMatchesEvents)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProcessProposerMatchesEvents::IsInitialized() const {
  return true;
}

void ProcessProposerMatchesEvents::InternalSwap(ProcessProposerMatchesEvents* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _internal_mutable_placed_long_term_order_ids()->InternalSwap(other->_internal_mutable_placed_long_term_order_ids());
  _internal_mutable_expired_stateful_order_ids()->InternalSwap(other->_internal_mutable_expired_stateful_order_ids());
  _internal_mutable_order_ids_filled_in_last_block()->InternalSwap(other->_internal_mutable_order_ids_filled_in_last_block());
  _internal_mutable_placed_stateful_cancellation_order_ids()->InternalSwap(other->_internal_mutable_placed_stateful_cancellation_order_ids());
  _internal_mutable_removed_stateful_order_ids()->InternalSwap(other->_internal_mutable_removed_stateful_order_ids());
  _internal_mutable_conditional_order_ids_triggered_in_last_block()->InternalSwap(other->_internal_mutable_conditional_order_ids_triggered_in_last_block());
  _internal_mutable_placed_conditional_order_ids()->InternalSwap(other->_internal_mutable_placed_conditional_order_ids());

  swap(_impl_.block_height_, other->_impl_.block_height_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ProcessProposerMatchesEvents::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_dydxprotocol_2fclob_2fprocess_5fproposer_5fmatches_5fevents_2eproto_getter, &descriptor_table_dydxprotocol_2fclob_2fprocess_5fproposer_5fmatches_5fevents_2eproto_once,
      file_level_metadata_dydxprotocol_2fclob_2fprocess_5fproposer_5fmatches_5fevents_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace clob
}  // namespace dydxprotocol
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::dydxprotocol::clob::ProcessProposerMatchesEvents*
Arena::CreateMaybeMessage< ::dydxprotocol::clob::ProcessProposerMatchesEvents >(Arena* arena) {
  return Arena::CreateMessageInternal< ::dydxprotocol::clob::ProcessProposerMatchesEvents >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"