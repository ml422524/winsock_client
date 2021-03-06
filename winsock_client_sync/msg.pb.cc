// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "msg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Protocol {
class HelloDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<Hello>
     _instance;
} _Hello_default_instance_;
class GetNameDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<GetName>
     _instance;
} _GetName_default_instance_;

namespace protobuf_msg_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[2];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hello, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Hello, content_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetName, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetName, userid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetName, sex_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(Hello)},
  { 6, -1, sizeof(GetName)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_Hello_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_GetName_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "msg.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _Hello_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_Hello_default_instance_);_GetName_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_GetName_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\tmsg.proto\022\010Protocol\"\030\n\005Hello\022\017\n\007conten"
      "t\030\001 \001(\t\"&\n\007GetName\022\016\n\006userId\030\001 \001(\005\022\013\n\003se"
      "x\030\002 \001(\005b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 95);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "msg.proto", &protobuf_RegisterTypes);
}
} // anonymous namespace

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_msg_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Hello::kContentFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Hello::Hello()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_msg_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:Protocol.Hello)
}
Hello::Hello(const Hello& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  content_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.content().size() > 0) {
    content_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.content_);
  }
  // @@protoc_insertion_point(copy_constructor:Protocol.Hello)
}

void Hello::SharedCtor() {
  content_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

Hello::~Hello() {
  // @@protoc_insertion_point(destructor:Protocol.Hello)
  SharedDtor();
}

void Hello::SharedDtor() {
  content_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Hello::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Hello::descriptor() {
  protobuf_msg_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_msg_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Hello& Hello::default_instance() {
  protobuf_msg_2eproto::InitDefaults();
  return *internal_default_instance();
}

Hello* Hello::New(::google::protobuf::Arena* arena) const {
  Hello* n = new Hello;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Hello::Clear() {
// @@protoc_insertion_point(message_clear_start:Protocol.Hello)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  content_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool Hello::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Protocol.Hello)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string content = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_content()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->content().data(), static_cast<int>(this->content().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Protocol.Hello.content"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Protocol.Hello)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Protocol.Hello)
  return false;
#undef DO_
}

void Hello::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Protocol.Hello)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string content = 1;
  if (this->content().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->content().data(), static_cast<int>(this->content().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Protocol.Hello.content");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->content(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:Protocol.Hello)
}

::google::protobuf::uint8* Hello::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Protocol.Hello)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string content = 1;
  if (this->content().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->content().data(), static_cast<int>(this->content().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Protocol.Hello.content");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->content(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Protocol.Hello)
  return target;
}

size_t Hello::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Protocol.Hello)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string content = 1;
  if (this->content().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->content());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Hello::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Protocol.Hello)
  GOOGLE_DCHECK_NE(&from, this);
  const Hello* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Hello>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Protocol.Hello)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Protocol.Hello)
    MergeFrom(*source);
  }
}

void Hello::MergeFrom(const Hello& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Protocol.Hello)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.content().size() > 0) {

    content_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.content_);
  }
}

void Hello::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Protocol.Hello)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Hello::CopyFrom(const Hello& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Protocol.Hello)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Hello::IsInitialized() const {
  return true;
}

void Hello::Swap(Hello* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Hello::InternalSwap(Hello* other) {
  using std::swap;
  content_.Swap(&other->content_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Hello::GetMetadata() const {
  protobuf_msg_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_msg_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Hello

// string content = 1;
void Hello::clear_content() {
  content_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& Hello::content() const {
  // @@protoc_insertion_point(field_get:Protocol.Hello.content)
  return content_.GetNoArena();
}
void Hello::set_content(const ::std::string& value) {
  
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Protocol.Hello.content)
}
#if LANG_CXX11
void Hello::set_content(::std::string&& value) {
  
  content_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Protocol.Hello.content)
}
#endif
void Hello::set_content(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Protocol.Hello.content)
}
void Hello::set_content(const char* value, size_t size) {
  
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Protocol.Hello.content)
}
::std::string* Hello::mutable_content() {
  
  // @@protoc_insertion_point(field_mutable:Protocol.Hello.content)
  return content_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Hello::release_content() {
  // @@protoc_insertion_point(field_release:Protocol.Hello.content)
  
  return content_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Hello::set_allocated_content(::std::string* content) {
  if (content != NULL) {
    
  } else {
    
  }
  content_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), content);
  // @@protoc_insertion_point(field_set_allocated:Protocol.Hello.content)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GetName::kUserIdFieldNumber;
const int GetName::kSexFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GetName::GetName()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_msg_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:Protocol.GetName)
}
GetName::GetName(const GetName& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&userid_, &from.userid_,
    static_cast<size_t>(reinterpret_cast<char*>(&sex_) -
    reinterpret_cast<char*>(&userid_)) + sizeof(sex_));
  // @@protoc_insertion_point(copy_constructor:Protocol.GetName)
}

void GetName::SharedCtor() {
  ::memset(&userid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&sex_) -
      reinterpret_cast<char*>(&userid_)) + sizeof(sex_));
  _cached_size_ = 0;
}

GetName::~GetName() {
  // @@protoc_insertion_point(destructor:Protocol.GetName)
  SharedDtor();
}

void GetName::SharedDtor() {
}

void GetName::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GetName::descriptor() {
  protobuf_msg_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_msg_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const GetName& GetName::default_instance() {
  protobuf_msg_2eproto::InitDefaults();
  return *internal_default_instance();
}

GetName* GetName::New(::google::protobuf::Arena* arena) const {
  GetName* n = new GetName;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GetName::Clear() {
// @@protoc_insertion_point(message_clear_start:Protocol.GetName)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&userid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&sex_) -
      reinterpret_cast<char*>(&userid_)) + sizeof(sex_));
  _internal_metadata_.Clear();
}

bool GetName::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Protocol.GetName)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 userId = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &userid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 sex = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &sex_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Protocol.GetName)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Protocol.GetName)
  return false;
#undef DO_
}

void GetName::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Protocol.GetName)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 userId = 1;
  if (this->userid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->userid(), output);
  }

  // int32 sex = 2;
  if (this->sex() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->sex(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:Protocol.GetName)
}

::google::protobuf::uint8* GetName::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Protocol.GetName)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 userId = 1;
  if (this->userid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->userid(), target);
  }

  // int32 sex = 2;
  if (this->sex() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->sex(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Protocol.GetName)
  return target;
}

size_t GetName::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Protocol.GetName)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // int32 userId = 1;
  if (this->userid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->userid());
  }

  // int32 sex = 2;
  if (this->sex() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->sex());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GetName::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Protocol.GetName)
  GOOGLE_DCHECK_NE(&from, this);
  const GetName* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const GetName>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Protocol.GetName)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Protocol.GetName)
    MergeFrom(*source);
  }
}

void GetName::MergeFrom(const GetName& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Protocol.GetName)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.userid() != 0) {
    set_userid(from.userid());
  }
  if (from.sex() != 0) {
    set_sex(from.sex());
  }
}

void GetName::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Protocol.GetName)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GetName::CopyFrom(const GetName& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Protocol.GetName)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetName::IsInitialized() const {
  return true;
}

void GetName::Swap(GetName* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GetName::InternalSwap(GetName* other) {
  using std::swap;
  swap(userid_, other->userid_);
  swap(sex_, other->sex_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata GetName::GetMetadata() const {
  protobuf_msg_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_msg_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// GetName

// int32 userId = 1;
void GetName::clear_userid() {
  userid_ = 0;
}
::google::protobuf::int32 GetName::userid() const {
  // @@protoc_insertion_point(field_get:Protocol.GetName.userId)
  return userid_;
}
void GetName::set_userid(::google::protobuf::int32 value) {
  
  userid_ = value;
  // @@protoc_insertion_point(field_set:Protocol.GetName.userId)
}

// int32 sex = 2;
void GetName::clear_sex() {
  sex_ = 0;
}
::google::protobuf::int32 GetName::sex() const {
  // @@protoc_insertion_point(field_get:Protocol.GetName.sex)
  return sex_;
}
void GetName::set_sex(::google::protobuf::int32 value) {
  
  sex_ = value;
  // @@protoc_insertion_point(field_set:Protocol.GetName.sex)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Protocol

// @@protoc_insertion_point(global_scope)
