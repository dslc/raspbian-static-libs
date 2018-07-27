// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/cloud/oslogin/common/common.proto

#ifndef PROTOBUF_INCLUDED_google_2fcloud_2foslogin_2fcommon_2fcommon_2eproto
#define PROTOBUF_INCLUDED_google_2fcloud_2foslogin_2fcommon_2fcommon_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fcloud_2foslogin_2fcommon_2fcommon_2eproto 

namespace protobuf_google_2fcloud_2foslogin_2fcommon_2fcommon_2eproto {
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
}  // namespace protobuf_google_2fcloud_2foslogin_2fcommon_2fcommon_2eproto
namespace google {
namespace cloud {
namespace oslogin {
namespace common {
class PosixAccount;
class PosixAccountDefaultTypeInternal;
extern PosixAccountDefaultTypeInternal _PosixAccount_default_instance_;
class SshPublicKey;
class SshPublicKeyDefaultTypeInternal;
extern SshPublicKeyDefaultTypeInternal _SshPublicKey_default_instance_;
}  // namespace common
}  // namespace oslogin
}  // namespace cloud
}  // namespace google
namespace google {
namespace protobuf {
template<> ::google::cloud::oslogin::common::PosixAccount* Arena::CreateMaybeMessage<::google::cloud::oslogin::common::PosixAccount>(Arena*);
template<> ::google::cloud::oslogin::common::SshPublicKey* Arena::CreateMaybeMessage<::google::cloud::oslogin::common::SshPublicKey>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace google {
namespace cloud {
namespace oslogin {
namespace common {

// ===================================================================

class PosixAccount : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.cloud.oslogin.common.PosixAccount) */ {
 public:
  PosixAccount();
  virtual ~PosixAccount();

  PosixAccount(const PosixAccount& from);

  inline PosixAccount& operator=(const PosixAccount& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  PosixAccount(PosixAccount&& from) noexcept
    : PosixAccount() {
    *this = ::std::move(from);
  }

  inline PosixAccount& operator=(PosixAccount&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const PosixAccount& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PosixAccount* internal_default_instance() {
    return reinterpret_cast<const PosixAccount*>(
               &_PosixAccount_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(PosixAccount* other);
  friend void swap(PosixAccount& a, PosixAccount& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline PosixAccount* New() const final {
    return CreateMaybeMessage<PosixAccount>(NULL);
  }

  PosixAccount* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<PosixAccount>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const PosixAccount& from);
  void MergeFrom(const PosixAccount& from);
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
  void InternalSwap(PosixAccount* other);
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

  // string username = 2;
  void clear_username();
  static const int kUsernameFieldNumber = 2;
  const ::std::string& username() const;
  void set_username(const ::std::string& value);
  #if LANG_CXX11
  void set_username(::std::string&& value);
  #endif
  void set_username(const char* value);
  void set_username(const char* value, size_t size);
  ::std::string* mutable_username();
  ::std::string* release_username();
  void set_allocated_username(::std::string* username);

  // string home_directory = 5;
  void clear_home_directory();
  static const int kHomeDirectoryFieldNumber = 5;
  const ::std::string& home_directory() const;
  void set_home_directory(const ::std::string& value);
  #if LANG_CXX11
  void set_home_directory(::std::string&& value);
  #endif
  void set_home_directory(const char* value);
  void set_home_directory(const char* value, size_t size);
  ::std::string* mutable_home_directory();
  ::std::string* release_home_directory();
  void set_allocated_home_directory(::std::string* home_directory);

  // string shell = 6;
  void clear_shell();
  static const int kShellFieldNumber = 6;
  const ::std::string& shell() const;
  void set_shell(const ::std::string& value);
  #if LANG_CXX11
  void set_shell(::std::string&& value);
  #endif
  void set_shell(const char* value);
  void set_shell(const char* value, size_t size);
  ::std::string* mutable_shell();
  ::std::string* release_shell();
  void set_allocated_shell(::std::string* shell);

  // string gecos = 7;
  void clear_gecos();
  static const int kGecosFieldNumber = 7;
  const ::std::string& gecos() const;
  void set_gecos(const ::std::string& value);
  #if LANG_CXX11
  void set_gecos(::std::string&& value);
  #endif
  void set_gecos(const char* value);
  void set_gecos(const char* value, size_t size);
  ::std::string* mutable_gecos();
  ::std::string* release_gecos();
  void set_allocated_gecos(::std::string* gecos);

  // string system_id = 8;
  void clear_system_id();
  static const int kSystemIdFieldNumber = 8;
  const ::std::string& system_id() const;
  void set_system_id(const ::std::string& value);
  #if LANG_CXX11
  void set_system_id(::std::string&& value);
  #endif
  void set_system_id(const char* value);
  void set_system_id(const char* value, size_t size);
  ::std::string* mutable_system_id();
  ::std::string* release_system_id();
  void set_allocated_system_id(::std::string* system_id);

  // string account_id = 9;
  void clear_account_id();
  static const int kAccountIdFieldNumber = 9;
  const ::std::string& account_id() const;
  void set_account_id(const ::std::string& value);
  #if LANG_CXX11
  void set_account_id(::std::string&& value);
  #endif
  void set_account_id(const char* value);
  void set_account_id(const char* value, size_t size);
  ::std::string* mutable_account_id();
  ::std::string* release_account_id();
  void set_allocated_account_id(::std::string* account_id);

  // int64 uid = 3;
  void clear_uid();
  static const int kUidFieldNumber = 3;
  ::google::protobuf::int64 uid() const;
  void set_uid(::google::protobuf::int64 value);

  // int64 gid = 4;
  void clear_gid();
  static const int kGidFieldNumber = 4;
  ::google::protobuf::int64 gid() const;
  void set_gid(::google::protobuf::int64 value);

  // bool primary = 1;
  void clear_primary();
  static const int kPrimaryFieldNumber = 1;
  bool primary() const;
  void set_primary(bool value);

  // @@protoc_insertion_point(class_scope:google.cloud.oslogin.common.PosixAccount)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr username_;
  ::google::protobuf::internal::ArenaStringPtr home_directory_;
  ::google::protobuf::internal::ArenaStringPtr shell_;
  ::google::protobuf::internal::ArenaStringPtr gecos_;
  ::google::protobuf::internal::ArenaStringPtr system_id_;
  ::google::protobuf::internal::ArenaStringPtr account_id_;
  ::google::protobuf::int64 uid_;
  ::google::protobuf::int64 gid_;
  bool primary_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fcloud_2foslogin_2fcommon_2fcommon_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class SshPublicKey : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.cloud.oslogin.common.SshPublicKey) */ {
 public:
  SshPublicKey();
  virtual ~SshPublicKey();

  SshPublicKey(const SshPublicKey& from);

  inline SshPublicKey& operator=(const SshPublicKey& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SshPublicKey(SshPublicKey&& from) noexcept
    : SshPublicKey() {
    *this = ::std::move(from);
  }

  inline SshPublicKey& operator=(SshPublicKey&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SshPublicKey& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SshPublicKey* internal_default_instance() {
    return reinterpret_cast<const SshPublicKey*>(
               &_SshPublicKey_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(SshPublicKey* other);
  friend void swap(SshPublicKey& a, SshPublicKey& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SshPublicKey* New() const final {
    return CreateMaybeMessage<SshPublicKey>(NULL);
  }

  SshPublicKey* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SshPublicKey>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SshPublicKey& from);
  void MergeFrom(const SshPublicKey& from);
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
  void InternalSwap(SshPublicKey* other);
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

  // string key = 1;
  void clear_key();
  static const int kKeyFieldNumber = 1;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  #if LANG_CXX11
  void set_key(::std::string&& value);
  #endif
  void set_key(const char* value);
  void set_key(const char* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  // string fingerprint = 3;
  void clear_fingerprint();
  static const int kFingerprintFieldNumber = 3;
  const ::std::string& fingerprint() const;
  void set_fingerprint(const ::std::string& value);
  #if LANG_CXX11
  void set_fingerprint(::std::string&& value);
  #endif
  void set_fingerprint(const char* value);
  void set_fingerprint(const char* value, size_t size);
  ::std::string* mutable_fingerprint();
  ::std::string* release_fingerprint();
  void set_allocated_fingerprint(::std::string* fingerprint);

  // int64 expiration_time_usec = 2;
  void clear_expiration_time_usec();
  static const int kExpirationTimeUsecFieldNumber = 2;
  ::google::protobuf::int64 expiration_time_usec() const;
  void set_expiration_time_usec(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:google.cloud.oslogin.common.SshPublicKey)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  ::google::protobuf::internal::ArenaStringPtr fingerprint_;
  ::google::protobuf::int64 expiration_time_usec_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_google_2fcloud_2foslogin_2fcommon_2fcommon_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PosixAccount

// bool primary = 1;
inline void PosixAccount::clear_primary() {
  primary_ = false;
}
inline bool PosixAccount::primary() const {
  // @@protoc_insertion_point(field_get:google.cloud.oslogin.common.PosixAccount.primary)
  return primary_;
}
inline void PosixAccount::set_primary(bool value) {
  
  primary_ = value;
  // @@protoc_insertion_point(field_set:google.cloud.oslogin.common.PosixAccount.primary)
}

// string username = 2;
inline void PosixAccount::clear_username() {
  username_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& PosixAccount::username() const {
  // @@protoc_insertion_point(field_get:google.cloud.oslogin.common.PosixAccount.username)
  return username_.GetNoArena();
}
inline void PosixAccount::set_username(const ::std::string& value) {
  
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.cloud.oslogin.common.PosixAccount.username)
}
#if LANG_CXX11
inline void PosixAccount::set_username(::std::string&& value) {
  
  username_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.cloud.oslogin.common.PosixAccount.username)
}
#endif
inline void PosixAccount::set_username(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.cloud.oslogin.common.PosixAccount.username)
}
inline void PosixAccount::set_username(const char* value, size_t size) {
  
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.cloud.oslogin.common.PosixAccount.username)
}
inline ::std::string* PosixAccount::mutable_username() {
  
  // @@protoc_insertion_point(field_mutable:google.cloud.oslogin.common.PosixAccount.username)
  return username_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PosixAccount::release_username() {
  // @@protoc_insertion_point(field_release:google.cloud.oslogin.common.PosixAccount.username)
  
  return username_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PosixAccount::set_allocated_username(::std::string* username) {
  if (username != NULL) {
    
  } else {
    
  }
  username_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), username);
  // @@protoc_insertion_point(field_set_allocated:google.cloud.oslogin.common.PosixAccount.username)
}

// int64 uid = 3;
inline void PosixAccount::clear_uid() {
  uid_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 PosixAccount::uid() const {
  // @@protoc_insertion_point(field_get:google.cloud.oslogin.common.PosixAccount.uid)
  return uid_;
}
inline void PosixAccount::set_uid(::google::protobuf::int64 value) {
  
  uid_ = value;
  // @@protoc_insertion_point(field_set:google.cloud.oslogin.common.PosixAccount.uid)
}

// int64 gid = 4;
inline void PosixAccount::clear_gid() {
  gid_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 PosixAccount::gid() const {
  // @@protoc_insertion_point(field_get:google.cloud.oslogin.common.PosixAccount.gid)
  return gid_;
}
inline void PosixAccount::set_gid(::google::protobuf::int64 value) {
  
  gid_ = value;
  // @@protoc_insertion_point(field_set:google.cloud.oslogin.common.PosixAccount.gid)
}

// string home_directory = 5;
inline void PosixAccount::clear_home_directory() {
  home_directory_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& PosixAccount::home_directory() const {
  // @@protoc_insertion_point(field_get:google.cloud.oslogin.common.PosixAccount.home_directory)
  return home_directory_.GetNoArena();
}
inline void PosixAccount::set_home_directory(const ::std::string& value) {
  
  home_directory_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.cloud.oslogin.common.PosixAccount.home_directory)
}
#if LANG_CXX11
inline void PosixAccount::set_home_directory(::std::string&& value) {
  
  home_directory_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.cloud.oslogin.common.PosixAccount.home_directory)
}
#endif
inline void PosixAccount::set_home_directory(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  home_directory_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.cloud.oslogin.common.PosixAccount.home_directory)
}
inline void PosixAccount::set_home_directory(const char* value, size_t size) {
  
  home_directory_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.cloud.oslogin.common.PosixAccount.home_directory)
}
inline ::std::string* PosixAccount::mutable_home_directory() {
  
  // @@protoc_insertion_point(field_mutable:google.cloud.oslogin.common.PosixAccount.home_directory)
  return home_directory_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PosixAccount::release_home_directory() {
  // @@protoc_insertion_point(field_release:google.cloud.oslogin.common.PosixAccount.home_directory)
  
  return home_directory_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PosixAccount::set_allocated_home_directory(::std::string* home_directory) {
  if (home_directory != NULL) {
    
  } else {
    
  }
  home_directory_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), home_directory);
  // @@protoc_insertion_point(field_set_allocated:google.cloud.oslogin.common.PosixAccount.home_directory)
}

// string shell = 6;
inline void PosixAccount::clear_shell() {
  shell_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& PosixAccount::shell() const {
  // @@protoc_insertion_point(field_get:google.cloud.oslogin.common.PosixAccount.shell)
  return shell_.GetNoArena();
}
inline void PosixAccount::set_shell(const ::std::string& value) {
  
  shell_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.cloud.oslogin.common.PosixAccount.shell)
}
#if LANG_CXX11
inline void PosixAccount::set_shell(::std::string&& value) {
  
  shell_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.cloud.oslogin.common.PosixAccount.shell)
}
#endif
inline void PosixAccount::set_shell(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  shell_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.cloud.oslogin.common.PosixAccount.shell)
}
inline void PosixAccount::set_shell(const char* value, size_t size) {
  
  shell_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.cloud.oslogin.common.PosixAccount.shell)
}
inline ::std::string* PosixAccount::mutable_shell() {
  
  // @@protoc_insertion_point(field_mutable:google.cloud.oslogin.common.PosixAccount.shell)
  return shell_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PosixAccount::release_shell() {
  // @@protoc_insertion_point(field_release:google.cloud.oslogin.common.PosixAccount.shell)
  
  return shell_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PosixAccount::set_allocated_shell(::std::string* shell) {
  if (shell != NULL) {
    
  } else {
    
  }
  shell_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), shell);
  // @@protoc_insertion_point(field_set_allocated:google.cloud.oslogin.common.PosixAccount.shell)
}

// string gecos = 7;
inline void PosixAccount::clear_gecos() {
  gecos_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& PosixAccount::gecos() const {
  // @@protoc_insertion_point(field_get:google.cloud.oslogin.common.PosixAccount.gecos)
  return gecos_.GetNoArena();
}
inline void PosixAccount::set_gecos(const ::std::string& value) {
  
  gecos_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.cloud.oslogin.common.PosixAccount.gecos)
}
#if LANG_CXX11
inline void PosixAccount::set_gecos(::std::string&& value) {
  
  gecos_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.cloud.oslogin.common.PosixAccount.gecos)
}
#endif
inline void PosixAccount::set_gecos(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  gecos_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.cloud.oslogin.common.PosixAccount.gecos)
}
inline void PosixAccount::set_gecos(const char* value, size_t size) {
  
  gecos_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.cloud.oslogin.common.PosixAccount.gecos)
}
inline ::std::string* PosixAccount::mutable_gecos() {
  
  // @@protoc_insertion_point(field_mutable:google.cloud.oslogin.common.PosixAccount.gecos)
  return gecos_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PosixAccount::release_gecos() {
  // @@protoc_insertion_point(field_release:google.cloud.oslogin.common.PosixAccount.gecos)
  
  return gecos_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PosixAccount::set_allocated_gecos(::std::string* gecos) {
  if (gecos != NULL) {
    
  } else {
    
  }
  gecos_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), gecos);
  // @@protoc_insertion_point(field_set_allocated:google.cloud.oslogin.common.PosixAccount.gecos)
}

// string system_id = 8;
inline void PosixAccount::clear_system_id() {
  system_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& PosixAccount::system_id() const {
  // @@protoc_insertion_point(field_get:google.cloud.oslogin.common.PosixAccount.system_id)
  return system_id_.GetNoArena();
}
inline void PosixAccount::set_system_id(const ::std::string& value) {
  
  system_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.cloud.oslogin.common.PosixAccount.system_id)
}
#if LANG_CXX11
inline void PosixAccount::set_system_id(::std::string&& value) {
  
  system_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.cloud.oslogin.common.PosixAccount.system_id)
}
#endif
inline void PosixAccount::set_system_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  system_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.cloud.oslogin.common.PosixAccount.system_id)
}
inline void PosixAccount::set_system_id(const char* value, size_t size) {
  
  system_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.cloud.oslogin.common.PosixAccount.system_id)
}
inline ::std::string* PosixAccount::mutable_system_id() {
  
  // @@protoc_insertion_point(field_mutable:google.cloud.oslogin.common.PosixAccount.system_id)
  return system_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PosixAccount::release_system_id() {
  // @@protoc_insertion_point(field_release:google.cloud.oslogin.common.PosixAccount.system_id)
  
  return system_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PosixAccount::set_allocated_system_id(::std::string* system_id) {
  if (system_id != NULL) {
    
  } else {
    
  }
  system_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), system_id);
  // @@protoc_insertion_point(field_set_allocated:google.cloud.oslogin.common.PosixAccount.system_id)
}

// string account_id = 9;
inline void PosixAccount::clear_account_id() {
  account_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& PosixAccount::account_id() const {
  // @@protoc_insertion_point(field_get:google.cloud.oslogin.common.PosixAccount.account_id)
  return account_id_.GetNoArena();
}
inline void PosixAccount::set_account_id(const ::std::string& value) {
  
  account_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.cloud.oslogin.common.PosixAccount.account_id)
}
#if LANG_CXX11
inline void PosixAccount::set_account_id(::std::string&& value) {
  
  account_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.cloud.oslogin.common.PosixAccount.account_id)
}
#endif
inline void PosixAccount::set_account_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  account_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.cloud.oslogin.common.PosixAccount.account_id)
}
inline void PosixAccount::set_account_id(const char* value, size_t size) {
  
  account_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.cloud.oslogin.common.PosixAccount.account_id)
}
inline ::std::string* PosixAccount::mutable_account_id() {
  
  // @@protoc_insertion_point(field_mutable:google.cloud.oslogin.common.PosixAccount.account_id)
  return account_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PosixAccount::release_account_id() {
  // @@protoc_insertion_point(field_release:google.cloud.oslogin.common.PosixAccount.account_id)
  
  return account_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PosixAccount::set_allocated_account_id(::std::string* account_id) {
  if (account_id != NULL) {
    
  } else {
    
  }
  account_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), account_id);
  // @@protoc_insertion_point(field_set_allocated:google.cloud.oslogin.common.PosixAccount.account_id)
}

// -------------------------------------------------------------------

// SshPublicKey

// string key = 1;
inline void SshPublicKey::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SshPublicKey::key() const {
  // @@protoc_insertion_point(field_get:google.cloud.oslogin.common.SshPublicKey.key)
  return key_.GetNoArena();
}
inline void SshPublicKey::set_key(const ::std::string& value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.cloud.oslogin.common.SshPublicKey.key)
}
#if LANG_CXX11
inline void SshPublicKey::set_key(::std::string&& value) {
  
  key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.cloud.oslogin.common.SshPublicKey.key)
}
#endif
inline void SshPublicKey::set_key(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.cloud.oslogin.common.SshPublicKey.key)
}
inline void SshPublicKey::set_key(const char* value, size_t size) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.cloud.oslogin.common.SshPublicKey.key)
}
inline ::std::string* SshPublicKey::mutable_key() {
  
  // @@protoc_insertion_point(field_mutable:google.cloud.oslogin.common.SshPublicKey.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SshPublicKey::release_key() {
  // @@protoc_insertion_point(field_release:google.cloud.oslogin.common.SshPublicKey.key)
  
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SshPublicKey::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    
  } else {
    
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:google.cloud.oslogin.common.SshPublicKey.key)
}

// int64 expiration_time_usec = 2;
inline void SshPublicKey::clear_expiration_time_usec() {
  expiration_time_usec_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 SshPublicKey::expiration_time_usec() const {
  // @@protoc_insertion_point(field_get:google.cloud.oslogin.common.SshPublicKey.expiration_time_usec)
  return expiration_time_usec_;
}
inline void SshPublicKey::set_expiration_time_usec(::google::protobuf::int64 value) {
  
  expiration_time_usec_ = value;
  // @@protoc_insertion_point(field_set:google.cloud.oslogin.common.SshPublicKey.expiration_time_usec)
}

// string fingerprint = 3;
inline void SshPublicKey::clear_fingerprint() {
  fingerprint_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SshPublicKey::fingerprint() const {
  // @@protoc_insertion_point(field_get:google.cloud.oslogin.common.SshPublicKey.fingerprint)
  return fingerprint_.GetNoArena();
}
inline void SshPublicKey::set_fingerprint(const ::std::string& value) {
  
  fingerprint_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.cloud.oslogin.common.SshPublicKey.fingerprint)
}
#if LANG_CXX11
inline void SshPublicKey::set_fingerprint(::std::string&& value) {
  
  fingerprint_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.cloud.oslogin.common.SshPublicKey.fingerprint)
}
#endif
inline void SshPublicKey::set_fingerprint(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  fingerprint_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.cloud.oslogin.common.SshPublicKey.fingerprint)
}
inline void SshPublicKey::set_fingerprint(const char* value, size_t size) {
  
  fingerprint_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.cloud.oslogin.common.SshPublicKey.fingerprint)
}
inline ::std::string* SshPublicKey::mutable_fingerprint() {
  
  // @@protoc_insertion_point(field_mutable:google.cloud.oslogin.common.SshPublicKey.fingerprint)
  return fingerprint_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SshPublicKey::release_fingerprint() {
  // @@protoc_insertion_point(field_release:google.cloud.oslogin.common.SshPublicKey.fingerprint)
  
  return fingerprint_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SshPublicKey::set_allocated_fingerprint(::std::string* fingerprint) {
  if (fingerprint != NULL) {
    
  } else {
    
  }
  fingerprint_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), fingerprint);
  // @@protoc_insertion_point(field_set_allocated:google.cloud.oslogin.common.SshPublicKey.fingerprint)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace common
}  // namespace oslogin
}  // namespace cloud
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_google_2fcloud_2foslogin_2fcommon_2fcommon_2eproto
