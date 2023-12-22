// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: quiche/quic/core/proto/source_address_token.proto

#include "quiche/quic/core/proto/source_address_token.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace quic {
PROTOBUF_CONSTEXPR SourceAddressToken::SourceAddressToken(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.ip_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.cached_network_parameters_)*/nullptr
  , /*decltype(_impl_.timestamp_)*/int64_t{0}} {}
struct SourceAddressTokenDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SourceAddressTokenDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SourceAddressTokenDefaultTypeInternal() {}
  union {
    SourceAddressToken _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SourceAddressTokenDefaultTypeInternal _SourceAddressToken_default_instance_;
PROTOBUF_CONSTEXPR SourceAddressTokens::SourceAddressTokens(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.tokens_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct SourceAddressTokensDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SourceAddressTokensDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SourceAddressTokensDefaultTypeInternal() {}
  union {
    SourceAddressTokens _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SourceAddressTokensDefaultTypeInternal _SourceAddressTokens_default_instance_;
}  // namespace quic
namespace quic {

// ===================================================================

class SourceAddressToken::_Internal {
 public:
  using HasBits = decltype(std::declval<SourceAddressToken>()._impl_._has_bits_);
  static void set_has_ip(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_timestamp(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static const ::quic::CachedNetworkParameters& cached_network_parameters(const SourceAddressToken* msg);
  static void set_has_cached_network_parameters(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000005) ^ 0x00000005) != 0;
  }
};

const ::quic::CachedNetworkParameters&
SourceAddressToken::_Internal::cached_network_parameters(const SourceAddressToken* msg) {
  return *msg->_impl_.cached_network_parameters_;
}
void SourceAddressToken::clear_cached_network_parameters() {
  if (_impl_.cached_network_parameters_ != nullptr) _impl_.cached_network_parameters_->Clear();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
SourceAddressToken::SourceAddressToken(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:quic.SourceAddressToken)
}
SourceAddressToken::SourceAddressToken(const SourceAddressToken& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  SourceAddressToken* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.ip_){}
    , decltype(_impl_.cached_network_parameters_){nullptr}
    , decltype(_impl_.timestamp_){}};

  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  _impl_.ip_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.ip_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_ip()) {
    _this->_impl_.ip_.Set(from._internal_ip(),
      _this->GetArenaForAllocation());
  }
  if (from._internal_has_cached_network_parameters()) {
    _this->_impl_.cached_network_parameters_ = new ::quic::CachedNetworkParameters(*from._impl_.cached_network_parameters_);
  }
  _this->_impl_.timestamp_ = from._impl_.timestamp_;
  // @@protoc_insertion_point(copy_constructor:quic.SourceAddressToken)
}

inline void SourceAddressToken::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.ip_){}
    , decltype(_impl_.cached_network_parameters_){nullptr}
    , decltype(_impl_.timestamp_){int64_t{0}}
  };
  _impl_.ip_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.ip_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

SourceAddressToken::~SourceAddressToken() {
  // @@protoc_insertion_point(destructor:quic.SourceAddressToken)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SourceAddressToken::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.ip_.Destroy();
  if (this != internal_default_instance()) delete _impl_.cached_network_parameters_;
}

void SourceAddressToken::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SourceAddressToken::Clear() {
// @@protoc_insertion_point(message_clear_start:quic.SourceAddressToken)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.ip_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(_impl_.cached_network_parameters_ != nullptr);
      _impl_.cached_network_parameters_->Clear();
    }
  }
  _impl_.timestamp_ = int64_t{0};
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* SourceAddressToken::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required bytes ip = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_ip();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // required int64 timestamp = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_timestamp(&has_bits);
          _impl_.timestamp_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .quic.CachedNetworkParameters cached_network_parameters = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_cached_network_parameters(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
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
        _internal_metadata_.mutable_unknown_fields<std::string>(),
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

uint8_t* SourceAddressToken::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:quic.SourceAddressToken)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // required bytes ip = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_ip(), target);
  }

  // required int64 timestamp = 2;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(2, this->_internal_timestamp(), target);
  }

  // optional .quic.CachedNetworkParameters cached_network_parameters = 3;
  if (cached_has_bits & 0x00000002u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, _Internal::cached_network_parameters(this),
        _Internal::cached_network_parameters(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:quic.SourceAddressToken)
  return target;
}

size_t SourceAddressToken::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:quic.SourceAddressToken)
  size_t total_size = 0;

  if (_internal_has_ip()) {
    // required bytes ip = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_ip());
  }

  if (_internal_has_timestamp()) {
    // required int64 timestamp = 2;
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_timestamp());
  }

  return total_size;
}
size_t SourceAddressToken::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:quic.SourceAddressToken)
  size_t total_size = 0;

  if (((_impl_._has_bits_[0] & 0x00000005) ^ 0x00000005) == 0) {  // All required fields are present.
    // required bytes ip = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_ip());

    // required int64 timestamp = 2;
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_timestamp());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional .quic.CachedNetworkParameters cached_network_parameters = 3;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000002u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.cached_network_parameters_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SourceAddressToken::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const SourceAddressToken*>(
      &from));
}

void SourceAddressToken::MergeFrom(const SourceAddressToken& from) {
  SourceAddressToken* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:quic.SourceAddressToken)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_ip(from._internal_ip());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_mutable_cached_network_parameters()->::quic::CachedNetworkParameters::MergeFrom(
          from._internal_cached_network_parameters());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.timestamp_ = from._impl_.timestamp_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void SourceAddressToken::CopyFrom(const SourceAddressToken& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:quic.SourceAddressToken)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SourceAddressToken::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_impl_._has_bits_)) return false;
  return true;
}

void SourceAddressToken::InternalSwap(SourceAddressToken* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.ip_, lhs_arena,
      &other->_impl_.ip_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(SourceAddressToken, _impl_.timestamp_)
      + sizeof(SourceAddressToken::_impl_.timestamp_)
      - PROTOBUF_FIELD_OFFSET(SourceAddressToken, _impl_.cached_network_parameters_)>(
          reinterpret_cast<char*>(&_impl_.cached_network_parameters_),
          reinterpret_cast<char*>(&other->_impl_.cached_network_parameters_));
}

std::string SourceAddressToken::GetTypeName() const {
  return "quic.SourceAddressToken";
}


// ===================================================================

class SourceAddressTokens::_Internal {
 public:
};

SourceAddressTokens::SourceAddressTokens(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:quic.SourceAddressTokens)
}
SourceAddressTokens::SourceAddressTokens(const SourceAddressTokens& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  SourceAddressTokens* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.tokens_){from._impl_.tokens_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:quic.SourceAddressTokens)
}

inline void SourceAddressTokens::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.tokens_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

SourceAddressTokens::~SourceAddressTokens() {
  // @@protoc_insertion_point(destructor:quic.SourceAddressTokens)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SourceAddressTokens::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.tokens_.~RepeatedPtrField();
}

void SourceAddressTokens::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SourceAddressTokens::Clear() {
// @@protoc_insertion_point(message_clear_start:quic.SourceAddressTokens)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.tokens_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* SourceAddressTokens::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .quic.SourceAddressToken tokens = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_tokens(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
        } else
          goto handle_unusual;
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
        _internal_metadata_.mutable_unknown_fields<std::string>(),
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

uint8_t* SourceAddressTokens::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:quic.SourceAddressTokens)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .quic.SourceAddressToken tokens = 4;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_tokens_size()); i < n; i++) {
    const auto& repfield = this->_internal_tokens(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(4, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:quic.SourceAddressTokens)
  return target;
}

size_t SourceAddressTokens::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:quic.SourceAddressTokens)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .quic.SourceAddressToken tokens = 4;
  total_size += 1UL * this->_internal_tokens_size();
  for (const auto& msg : this->_impl_.tokens_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SourceAddressTokens::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const SourceAddressTokens*>(
      &from));
}

void SourceAddressTokens::MergeFrom(const SourceAddressTokens& from) {
  SourceAddressTokens* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:quic.SourceAddressTokens)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.tokens_.MergeFrom(from._impl_.tokens_);
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void SourceAddressTokens::CopyFrom(const SourceAddressTokens& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:quic.SourceAddressTokens)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SourceAddressTokens::IsInitialized() const {
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(_impl_.tokens_))
    return false;
  return true;
}

void SourceAddressTokens::InternalSwap(SourceAddressTokens* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.tokens_.InternalSwap(&other->_impl_.tokens_);
}

std::string SourceAddressTokens::GetTypeName() const {
  return "quic.SourceAddressTokens";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace quic
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::quic::SourceAddressToken*
Arena::CreateMaybeMessage< ::quic::SourceAddressToken >(Arena* arena) {
  return Arena::CreateMessageInternal< ::quic::SourceAddressToken >(arena);
}
template<> PROTOBUF_NOINLINE ::quic::SourceAddressTokens*
Arena::CreateMaybeMessage< ::quic::SourceAddressTokens >(Arena* arena) {
  return Arena::CreateMessageInternal< ::quic::SourceAddressTokens >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
