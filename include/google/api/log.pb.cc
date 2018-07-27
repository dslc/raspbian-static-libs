// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/log.proto

#include "google/api/log.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_google_2fapi_2flabel_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fapi_2flabel_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_LabelDescriptor;
}  // namespace protobuf_google_2fapi_2flabel_2eproto
namespace google {
namespace api {
class LogDescriptorDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<LogDescriptor>
      _instance;
} _LogDescriptor_default_instance_;
}  // namespace api
}  // namespace google
namespace protobuf_google_2fapi_2flog_2eproto {
static void InitDefaultsLogDescriptor() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::api::_LogDescriptor_default_instance_;
    new (ptr) ::google::api::LogDescriptor();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::api::LogDescriptor::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_LogDescriptor =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsLogDescriptor}, {
      &protobuf_google_2fapi_2flabel_2eproto::scc_info_LabelDescriptor.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_LogDescriptor.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::api::LogDescriptor, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::api::LogDescriptor, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::api::LogDescriptor, labels_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::api::LogDescriptor, description_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::api::LogDescriptor, display_name_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::api::LogDescriptor)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::google::api::_LogDescriptor_default_instance_),
};

static void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "google/api/log.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

static void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

static void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\024google/api/log.proto\022\ngoogle.api\032\026goog"
      "le/api/label.proto\"u\n\rLogDescriptor\022\014\n\004n"
      "ame\030\001 \001(\t\022+\n\006labels\030\002 \003(\0132\033.google.api.L"
      "abelDescriptor\022\023\n\013description\030\003 \001(\t\022\024\n\014d"
      "isplay_name\030\004 \001(\tBj\n\016com.google.apiB\010Log"
      "ProtoP\001ZEgoogle.golang.org/genproto/goog"
      "leapis/api/serviceconfig;serviceconfig\242\002"
      "\004GAPIb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 293);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/api/log.proto", &protobuf_RegisterTypes);
  ::protobuf_google_2fapi_2flabel_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_google_2fapi_2flog_2eproto
namespace google {
namespace api {

// ===================================================================

void LogDescriptor::InitAsDefaultInstance() {
}
void LogDescriptor::clear_labels() {
  labels_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LogDescriptor::kNameFieldNumber;
const int LogDescriptor::kLabelsFieldNumber;
const int LogDescriptor::kDescriptionFieldNumber;
const int LogDescriptor::kDisplayNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LogDescriptor::LogDescriptor()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_google_2fapi_2flog_2eproto::scc_info_LogDescriptor.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.api.LogDescriptor)
}
LogDescriptor::LogDescriptor(const LogDescriptor& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      labels_(from.labels_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  description_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.description().size() > 0) {
    description_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.description_);
  }
  display_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.display_name().size() > 0) {
    display_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.display_name_);
  }
  // @@protoc_insertion_point(copy_constructor:google.api.LogDescriptor)
}

void LogDescriptor::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  description_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  display_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

LogDescriptor::~LogDescriptor() {
  // @@protoc_insertion_point(destructor:google.api.LogDescriptor)
  SharedDtor();
}

void LogDescriptor::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  description_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  display_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LogDescriptor::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* LogDescriptor::descriptor() {
  ::protobuf_google_2fapi_2flog_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fapi_2flog_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const LogDescriptor& LogDescriptor::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_google_2fapi_2flog_2eproto::scc_info_LogDescriptor.base);
  return *internal_default_instance();
}


void LogDescriptor::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.LogDescriptor)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  labels_.Clear();
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  description_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  display_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool LogDescriptor::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.api.LogDescriptor)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.api.LogDescriptor.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .google.api.LabelDescriptor labels = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_labels()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string description = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_description()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->description().data(), static_cast<int>(this->description().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.api.LogDescriptor.description"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string display_name = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_display_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->display_name().data(), static_cast<int>(this->display_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.api.LogDescriptor.display_name"));
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
  // @@protoc_insertion_point(parse_success:google.api.LogDescriptor)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.api.LogDescriptor)
  return false;
#undef DO_
}

void LogDescriptor::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.api.LogDescriptor)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.LogDescriptor.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // repeated .google.api.LabelDescriptor labels = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->labels_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2,
      this->labels(static_cast<int>(i)),
      output);
  }

  // string description = 3;
  if (this->description().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->description().data(), static_cast<int>(this->description().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.LogDescriptor.description");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->description(), output);
  }

  // string display_name = 4;
  if (this->display_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->display_name().data(), static_cast<int>(this->display_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.LogDescriptor.display_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->display_name(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.api.LogDescriptor)
}

::google::protobuf::uint8* LogDescriptor::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.api.LogDescriptor)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.LogDescriptor.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // repeated .google.api.LabelDescriptor labels = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->labels_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->labels(static_cast<int>(i)), deterministic, target);
  }

  // string description = 3;
  if (this->description().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->description().data(), static_cast<int>(this->description().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.LogDescriptor.description");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->description(), target);
  }

  // string display_name = 4;
  if (this->display_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->display_name().data(), static_cast<int>(this->display_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.api.LogDescriptor.display_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->display_name(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.LogDescriptor)
  return target;
}

size_t LogDescriptor::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.LogDescriptor)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .google.api.LabelDescriptor labels = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->labels_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->labels(static_cast<int>(i)));
    }
  }

  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // string description = 3;
  if (this->description().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->description());
  }

  // string display_name = 4;
  if (this->display_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->display_name());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LogDescriptor::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.api.LogDescriptor)
  GOOGLE_DCHECK_NE(&from, this);
  const LogDescriptor* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LogDescriptor>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.api.LogDescriptor)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.api.LogDescriptor)
    MergeFrom(*source);
  }
}

void LogDescriptor::MergeFrom(const LogDescriptor& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.LogDescriptor)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  labels_.MergeFrom(from.labels_);
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.description().size() > 0) {

    description_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.description_);
  }
  if (from.display_name().size() > 0) {

    display_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.display_name_);
  }
}

void LogDescriptor::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.api.LogDescriptor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LogDescriptor::CopyFrom(const LogDescriptor& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.LogDescriptor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LogDescriptor::IsInitialized() const {
  return true;
}

void LogDescriptor::Swap(LogDescriptor* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LogDescriptor::InternalSwap(LogDescriptor* other) {
  using std::swap;
  CastToBase(&labels_)->InternalSwap(CastToBase(&other->labels_));
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  description_.Swap(&other->description_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  display_name_.Swap(&other->display_name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata LogDescriptor::GetMetadata() const {
  protobuf_google_2fapi_2flog_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fapi_2flog_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace api
}  // namespace google
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::google::api::LogDescriptor* Arena::CreateMaybeMessage< ::google::api::LogDescriptor >(Arena* arena) {
  return Arena::CreateInternal< ::google::api::LogDescriptor >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
