// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/monitoring.proto

#ifndef PROTOBUF_INCLUDED_google_2fapi_2fmonitoring_2eproto
#define PROTOBUF_INCLUDED_google_2fapi_2fmonitoring_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "google/api/annotations.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fapi_2fmonitoring_2eproto 

namespace protobuf_google_2fapi_2fmonitoring_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_google_2fapi_2fmonitoring_2eproto
namespace google {
namespace api {
class Monitoring;
class MonitoringDefaultTypeInternal;
extern MonitoringDefaultTypeInternal _Monitoring_default_instance_;
class Monitoring_MonitoringDestination;
class Monitoring_MonitoringDestinationDefaultTypeInternal;
extern Monitoring_MonitoringDestinationDefaultTypeInternal _Monitoring_MonitoringDestination_default_instance_;
}  // namespace api
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::api::Monitoring* Arena::CreateMaybeMessage<::google::api::Monitoring>(Arena*);
template<> ::google::api::Monitoring_MonitoringDestination* Arena::CreateMaybeMessage<::google::api::Monitoring_MonitoringDestination>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace api {

// ===================================================================

class Monitoring_MonitoringDestination : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.api.Monitoring.MonitoringDestination) */ {
 public:
  Monitoring_MonitoringDestination();
  virtual ~Monitoring_MonitoringDestination();

  Monitoring_MonitoringDestination(const Monitoring_MonitoringDestination& from);

  inline Monitoring_MonitoringDestination& operator=(const Monitoring_MonitoringDestination& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Monitoring_MonitoringDestination(Monitoring_MonitoringDestination&& from) noexcept
    : Monitoring_MonitoringDestination() {
    *this = ::std::move(from);
  }

  inline Monitoring_MonitoringDestination& operator=(Monitoring_MonitoringDestination&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Monitoring_MonitoringDestination& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Monitoring_MonitoringDestination* internal_default_instance() {
    return reinterpret_cast<const Monitoring_MonitoringDestination*>(
               &_Monitoring_MonitoringDestination_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Monitoring_MonitoringDestination* other);
  friend void swap(Monitoring_MonitoringDestination& a, Monitoring_MonitoringDestination& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Monitoring_MonitoringDestination* New() const final {
    return CreateMaybeMessage<Monitoring_MonitoringDestination>(NULL);
  }

  Monitoring_MonitoringDestination* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Monitoring_MonitoringDestination>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Monitoring_MonitoringDestination& from);
  void MergeFrom(const Monitoring_MonitoringDestination& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Monitoring_MonitoringDestination* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated string metrics = 2;
  int metrics_size() const;
  void clear_metrics();
  static const int kMetricsFieldNumber = 2;
  const ::std::string& metrics(int index) const;
  ::std::string* mutable_metrics(int index);
  void set_metrics(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_metrics(int index, ::std::string&& value);
  #endif
  void set_metrics(int index, const char* value);
  void set_metrics(int index, const char* value, size_t size);
  ::std::string* add_metrics();
  void add_metrics(const ::std::string& value);
  #if LANG_CXX11
  void add_metrics(::std::string&& value);
  #endif
  void add_metrics(const char* value);
  void add_metrics(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& metrics() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_metrics();

  // string monitored_resource = 1;
  void clear_monitored_resource();
  static const int kMonitoredResourceFieldNumber = 1;
  const ::std::string& monitored_resource() const;
  void set_monitored_resource(const ::std::string& value);
  #if LANG_CXX11
  void set_monitored_resource(::std::string&& value);
  #endif
  void set_monitored_resource(const char* value);
  void set_monitored_resource(const char* value, size_t size);
  ::std::string* mutable_monitored_resource();
  ::std::string* release_monitored_resource();
  void set_allocated_monitored_resource(::std::string* monitored_resource);

  // @@protoc_insertion_point(class_scope:google.api.Monitoring.MonitoringDestination)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::std::string> metrics_;
  ::google::protobuf::internal::ArenaStringPtr monitored_resource_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fapi_2fmonitoring_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Monitoring : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.api.Monitoring) */ {
 public:
  Monitoring();
  virtual ~Monitoring();

  Monitoring(const Monitoring& from);

  inline Monitoring& operator=(const Monitoring& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Monitoring(Monitoring&& from) noexcept
    : Monitoring() {
    *this = ::std::move(from);
  }

  inline Monitoring& operator=(Monitoring&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Monitoring& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Monitoring* internal_default_instance() {
    return reinterpret_cast<const Monitoring*>(
               &_Monitoring_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Monitoring* other);
  friend void swap(Monitoring& a, Monitoring& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Monitoring* New() const final {
    return CreateMaybeMessage<Monitoring>(NULL);
  }

  Monitoring* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Monitoring>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Monitoring& from);
  void MergeFrom(const Monitoring& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Monitoring* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef Monitoring_MonitoringDestination MonitoringDestination;

  // accessors -------------------------------------------------------

  // repeated .google.api.Monitoring.MonitoringDestination producer_destinations = 1;
  int producer_destinations_size() const;
  void clear_producer_destinations();
  static const int kProducerDestinationsFieldNumber = 1;
  ::google::api::Monitoring_MonitoringDestination* mutable_producer_destinations(int index);
  ::google::protobuf::RepeatedPtrField< ::google::api::Monitoring_MonitoringDestination >*
      mutable_producer_destinations();
  const ::google::api::Monitoring_MonitoringDestination& producer_destinations(int index) const;
  ::google::api::Monitoring_MonitoringDestination* add_producer_destinations();
  const ::google::protobuf::RepeatedPtrField< ::google::api::Monitoring_MonitoringDestination >&
      producer_destinations() const;

  // repeated .google.api.Monitoring.MonitoringDestination consumer_destinations = 2;
  int consumer_destinations_size() const;
  void clear_consumer_destinations();
  static const int kConsumerDestinationsFieldNumber = 2;
  ::google::api::Monitoring_MonitoringDestination* mutable_consumer_destinations(int index);
  ::google::protobuf::RepeatedPtrField< ::google::api::Monitoring_MonitoringDestination >*
      mutable_consumer_destinations();
  const ::google::api::Monitoring_MonitoringDestination& consumer_destinations(int index) const;
  ::google::api::Monitoring_MonitoringDestination* add_consumer_destinations();
  const ::google::protobuf::RepeatedPtrField< ::google::api::Monitoring_MonitoringDestination >&
      consumer_destinations() const;

  // @@protoc_insertion_point(class_scope:google.api.Monitoring)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::google::api::Monitoring_MonitoringDestination > producer_destinations_;
  ::google::protobuf::RepeatedPtrField< ::google::api::Monitoring_MonitoringDestination > consumer_destinations_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fapi_2fmonitoring_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Monitoring_MonitoringDestination

// string monitored_resource = 1;
inline void Monitoring_MonitoringDestination::clear_monitored_resource() {
  monitored_resource_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Monitoring_MonitoringDestination::monitored_resource() const {
  // @@protoc_insertion_point(field_get:google.api.Monitoring.MonitoringDestination.monitored_resource)
  return monitored_resource_.GetNoArena();
}
inline void Monitoring_MonitoringDestination::set_monitored_resource(const ::std::string& value) {
  
  monitored_resource_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.api.Monitoring.MonitoringDestination.monitored_resource)
}
#if LANG_CXX11
inline void Monitoring_MonitoringDestination::set_monitored_resource(::std::string&& value) {
  
  monitored_resource_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.api.Monitoring.MonitoringDestination.monitored_resource)
}
#endif
inline void Monitoring_MonitoringDestination::set_monitored_resource(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  monitored_resource_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.api.Monitoring.MonitoringDestination.monitored_resource)
}
inline void Monitoring_MonitoringDestination::set_monitored_resource(const char* value, size_t size) {
  
  monitored_resource_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.api.Monitoring.MonitoringDestination.monitored_resource)
}
inline ::std::string* Monitoring_MonitoringDestination::mutable_monitored_resource() {
  
  // @@protoc_insertion_point(field_mutable:google.api.Monitoring.MonitoringDestination.monitored_resource)
  return monitored_resource_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Monitoring_MonitoringDestination::release_monitored_resource() {
  // @@protoc_insertion_point(field_release:google.api.Monitoring.MonitoringDestination.monitored_resource)
  
  return monitored_resource_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Monitoring_MonitoringDestination::set_allocated_monitored_resource(::std::string* monitored_resource) {
  if (monitored_resource != NULL) {
    
  } else {
    
  }
  monitored_resource_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), monitored_resource);
  // @@protoc_insertion_point(field_set_allocated:google.api.Monitoring.MonitoringDestination.monitored_resource)
}

// repeated string metrics = 2;
inline int Monitoring_MonitoringDestination::metrics_size() const {
  return metrics_.size();
}
inline void Monitoring_MonitoringDestination::clear_metrics() {
  metrics_.Clear();
}
inline const ::std::string& Monitoring_MonitoringDestination::metrics(int index) const {
  // @@protoc_insertion_point(field_get:google.api.Monitoring.MonitoringDestination.metrics)
  return metrics_.Get(index);
}
inline ::std::string* Monitoring_MonitoringDestination::mutable_metrics(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.Monitoring.MonitoringDestination.metrics)
  return metrics_.Mutable(index);
}
inline void Monitoring_MonitoringDestination::set_metrics(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:google.api.Monitoring.MonitoringDestination.metrics)
  metrics_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void Monitoring_MonitoringDestination::set_metrics(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:google.api.Monitoring.MonitoringDestination.metrics)
  metrics_.Mutable(index)->assign(std::move(value));
}
#endif
inline void Monitoring_MonitoringDestination::set_metrics(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  metrics_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.api.Monitoring.MonitoringDestination.metrics)
}
inline void Monitoring_MonitoringDestination::set_metrics(int index, const char* value, size_t size) {
  metrics_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.api.Monitoring.MonitoringDestination.metrics)
}
inline ::std::string* Monitoring_MonitoringDestination::add_metrics() {
  // @@protoc_insertion_point(field_add_mutable:google.api.Monitoring.MonitoringDestination.metrics)
  return metrics_.Add();
}
inline void Monitoring_MonitoringDestination::add_metrics(const ::std::string& value) {
  metrics_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.api.Monitoring.MonitoringDestination.metrics)
}
#if LANG_CXX11
inline void Monitoring_MonitoringDestination::add_metrics(::std::string&& value) {
  metrics_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:google.api.Monitoring.MonitoringDestination.metrics)
}
#endif
inline void Monitoring_MonitoringDestination::add_metrics(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  metrics_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.api.Monitoring.MonitoringDestination.metrics)
}
inline void Monitoring_MonitoringDestination::add_metrics(const char* value, size_t size) {
  metrics_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.api.Monitoring.MonitoringDestination.metrics)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
Monitoring_MonitoringDestination::metrics() const {
  // @@protoc_insertion_point(field_list:google.api.Monitoring.MonitoringDestination.metrics)
  return metrics_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
Monitoring_MonitoringDestination::mutable_metrics() {
  // @@protoc_insertion_point(field_mutable_list:google.api.Monitoring.MonitoringDestination.metrics)
  return &metrics_;
}

// -------------------------------------------------------------------

// Monitoring

// repeated .google.api.Monitoring.MonitoringDestination producer_destinations = 1;
inline int Monitoring::producer_destinations_size() const {
  return producer_destinations_.size();
}
inline void Monitoring::clear_producer_destinations() {
  producer_destinations_.Clear();
}
inline ::google::api::Monitoring_MonitoringDestination* Monitoring::mutable_producer_destinations(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.Monitoring.producer_destinations)
  return producer_destinations_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::google::api::Monitoring_MonitoringDestination >*
Monitoring::mutable_producer_destinations() {
  // @@protoc_insertion_point(field_mutable_list:google.api.Monitoring.producer_destinations)
  return &producer_destinations_;
}
inline const ::google::api::Monitoring_MonitoringDestination& Monitoring::producer_destinations(int index) const {
  // @@protoc_insertion_point(field_get:google.api.Monitoring.producer_destinations)
  return producer_destinations_.Get(index);
}
inline ::google::api::Monitoring_MonitoringDestination* Monitoring::add_producer_destinations() {
  // @@protoc_insertion_point(field_add:google.api.Monitoring.producer_destinations)
  return producer_destinations_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::google::api::Monitoring_MonitoringDestination >&
Monitoring::producer_destinations() const {
  // @@protoc_insertion_point(field_list:google.api.Monitoring.producer_destinations)
  return producer_destinations_;
}

// repeated .google.api.Monitoring.MonitoringDestination consumer_destinations = 2;
inline int Monitoring::consumer_destinations_size() const {
  return consumer_destinations_.size();
}
inline void Monitoring::clear_consumer_destinations() {
  consumer_destinations_.Clear();
}
inline ::google::api::Monitoring_MonitoringDestination* Monitoring::mutable_consumer_destinations(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.Monitoring.consumer_destinations)
  return consumer_destinations_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::google::api::Monitoring_MonitoringDestination >*
Monitoring::mutable_consumer_destinations() {
  // @@protoc_insertion_point(field_mutable_list:google.api.Monitoring.consumer_destinations)
  return &consumer_destinations_;
}
inline const ::google::api::Monitoring_MonitoringDestination& Monitoring::consumer_destinations(int index) const {
  // @@protoc_insertion_point(field_get:google.api.Monitoring.consumer_destinations)
  return consumer_destinations_.Get(index);
}
inline ::google::api::Monitoring_MonitoringDestination* Monitoring::add_consumer_destinations() {
  // @@protoc_insertion_point(field_add:google.api.Monitoring.consumer_destinations)
  return consumer_destinations_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::google::api::Monitoring_MonitoringDestination >&
Monitoring::consumer_destinations() const {
  // @@protoc_insertion_point(field_list:google.api.Monitoring.consumer_destinations)
  return consumer_destinations_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fapi_2fmonitoring_2eproto
