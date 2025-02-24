// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_well_known_types.proto

#ifndef PROTOBUF_google_2fprotobuf_2funittest_5fwell_5fknown_5ftypes_2eproto__INCLUDED
#define PROTOBUF_google_2fprotobuf_2funittest_5fwell_5fknown_5ftypes_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "google/protobuf/any.pb.h"
#include "google/protobuf/api.pb.h"
#include "google/protobuf/duration.pb.h"
#include "google/protobuf/empty.pb.h"
#include "google/protobuf/field_mask.pb.h"
#include "google/protobuf/source_context.pb.h"
#include "google/protobuf/struct.pb.h"
#include "google/protobuf/timestamp.pb.h"
#include "google/protobuf/type.pb.h"
#include "google/protobuf/wrappers.pb.h"
// @@protoc_insertion_point(includes)

namespace protobuf_unittest {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_google_2fprotobuf_2funittest_5fwell_5fknown_5ftypes_2eproto();
void protobuf_AssignDesc_google_2fprotobuf_2funittest_5fwell_5fknown_5ftypes_2eproto();
void protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fwell_5fknown_5ftypes_2eproto();

class TestWellKnownTypes;

// ===================================================================

class TestWellKnownTypes : public ::google::protobuf::Message {
 public:
  TestWellKnownTypes();
  virtual ~TestWellKnownTypes();

  TestWellKnownTypes(const TestWellKnownTypes& from);

  inline TestWellKnownTypes& operator=(const TestWellKnownTypes& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TestWellKnownTypes& default_instance();

  void Swap(TestWellKnownTypes* other);

  // implements Message ----------------------------------------------

  inline TestWellKnownTypes* New() const { return New(NULL); }

  TestWellKnownTypes* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TestWellKnownTypes& from);
  void MergeFrom(const TestWellKnownTypes& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(TestWellKnownTypes* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .google.protobuf.Any any_field = 1;
  bool has_any_field() const;
  void clear_any_field();
  static const int kAnyFieldFieldNumber = 1;
  const ::google::protobuf::Any& any_field() const;
  ::google::protobuf::Any* mutable_any_field();
  ::google::protobuf::Any* release_any_field();
  void set_allocated_any_field(::google::protobuf::Any* any_field);

  // optional .google.protobuf.Api api_field = 2;
  bool has_api_field() const;
  void clear_api_field();
  static const int kApiFieldFieldNumber = 2;
  const ::google::protobuf::Api& api_field() const;
  ::google::protobuf::Api* mutable_api_field();
  ::google::protobuf::Api* release_api_field();
  void set_allocated_api_field(::google::protobuf::Api* api_field);

  // optional .google.protobuf.Duration duration_field = 3;
  bool has_duration_field() const;
  void clear_duration_field();
  static const int kDurationFieldFieldNumber = 3;
  const ::google::protobuf::Duration& duration_field() const;
  ::google::protobuf::Duration* mutable_duration_field();
  ::google::protobuf::Duration* release_duration_field();
  void set_allocated_duration_field(::google::protobuf::Duration* duration_field);

  // optional .google.protobuf.Empty empty_field = 4;
  bool has_empty_field() const;
  void clear_empty_field();
  static const int kEmptyFieldFieldNumber = 4;
  const ::google::protobuf::Empty& empty_field() const;
  ::google::protobuf::Empty* mutable_empty_field();
  ::google::protobuf::Empty* release_empty_field();
  void set_allocated_empty_field(::google::protobuf::Empty* empty_field);

  // optional .google.protobuf.FieldMask field_mask_field = 5;
  bool has_field_mask_field() const;
  void clear_field_mask_field();
  static const int kFieldMaskFieldFieldNumber = 5;
  const ::google::protobuf::FieldMask& field_mask_field() const;
  ::google::protobuf::FieldMask* mutable_field_mask_field();
  ::google::protobuf::FieldMask* release_field_mask_field();
  void set_allocated_field_mask_field(::google::protobuf::FieldMask* field_mask_field);

  // optional .google.protobuf.SourceContext source_context_field = 6;
  bool has_source_context_field() const;
  void clear_source_context_field();
  static const int kSourceContextFieldFieldNumber = 6;
  const ::google::protobuf::SourceContext& source_context_field() const;
  ::google::protobuf::SourceContext* mutable_source_context_field();
  ::google::protobuf::SourceContext* release_source_context_field();
  void set_allocated_source_context_field(::google::protobuf::SourceContext* source_context_field);

  // optional .google.protobuf.Struct struct_field = 7;
  bool has_struct_field() const;
  void clear_struct_field();
  static const int kStructFieldFieldNumber = 7;
  const ::google::protobuf::Struct& struct_field() const;
  ::google::protobuf::Struct* mutable_struct_field();
  ::google::protobuf::Struct* release_struct_field();
  void set_allocated_struct_field(::google::protobuf::Struct* struct_field);

  // optional .google.protobuf.Timestamp timestamp_field = 8;
  bool has_timestamp_field() const;
  void clear_timestamp_field();
  static const int kTimestampFieldFieldNumber = 8;
  const ::google::protobuf::Timestamp& timestamp_field() const;
  ::google::protobuf::Timestamp* mutable_timestamp_field();
  ::google::protobuf::Timestamp* release_timestamp_field();
  void set_allocated_timestamp_field(::google::protobuf::Timestamp* timestamp_field);

  // optional .google.protobuf.Type type_field = 9;
  bool has_type_field() const;
  void clear_type_field();
  static const int kTypeFieldFieldNumber = 9;
  const ::google::protobuf::Type& type_field() const;
  ::google::protobuf::Type* mutable_type_field();
  ::google::protobuf::Type* release_type_field();
  void set_allocated_type_field(::google::protobuf::Type* type_field);

  // optional .google.protobuf.Int32Value int32_field = 10;
  bool has_int32_field() const;
  void clear_int32_field();
  static const int kInt32FieldFieldNumber = 10;
  const ::google::protobuf::Int32Value& int32_field() const;
  ::google::protobuf::Int32Value* mutable_int32_field();
  ::google::protobuf::Int32Value* release_int32_field();
  void set_allocated_int32_field(::google::protobuf::Int32Value* int32_field);

  // @@protoc_insertion_point(class_scope:protobuf_unittest.TestWellKnownTypes)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::Any* any_field_;
  ::google::protobuf::Api* api_field_;
  ::google::protobuf::Duration* duration_field_;
  ::google::protobuf::Empty* empty_field_;
  ::google::protobuf::FieldMask* field_mask_field_;
  ::google::protobuf::SourceContext* source_context_field_;
  ::google::protobuf::Struct* struct_field_;
  ::google::protobuf::Timestamp* timestamp_field_;
  ::google::protobuf::Type* type_field_;
  ::google::protobuf::Int32Value* int32_field_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_google_2fprotobuf_2funittest_5fwell_5fknown_5ftypes_2eproto();
  friend void protobuf_AssignDesc_google_2fprotobuf_2funittest_5fwell_5fknown_5ftypes_2eproto();
  friend void protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fwell_5fknown_5ftypes_2eproto();

  void InitAsDefaultInstance();
  static TestWellKnownTypes* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// TestWellKnownTypes

// optional .google.protobuf.Any any_field = 1;
inline bool TestWellKnownTypes::has_any_field() const {
  return !_is_default_instance_ && any_field_ != NULL;
}
inline void TestWellKnownTypes::clear_any_field() {
  if (GetArenaNoVirtual() == NULL && any_field_ != NULL) delete any_field_;
  any_field_ = NULL;
}
inline const ::google::protobuf::Any& TestWellKnownTypes::any_field() const {
  // @@protoc_insertion_point(field_get:protobuf_unittest.TestWellKnownTypes.any_field)
  return any_field_ != NULL ? *any_field_ : *default_instance_->any_field_;
}
inline ::google::protobuf::Any* TestWellKnownTypes::mutable_any_field() {
  
  if (any_field_ == NULL) {
    any_field_ = new ::google::protobuf::Any;
  }
  // @@protoc_insertion_point(field_mutable:protobuf_unittest.TestWellKnownTypes.any_field)
  return any_field_;
}
inline ::google::protobuf::Any* TestWellKnownTypes::release_any_field() {
  
  ::google::protobuf::Any* temp = any_field_;
  any_field_ = NULL;
  return temp;
}
inline void TestWellKnownTypes::set_allocated_any_field(::google::protobuf::Any* any_field) {
  delete any_field_;
  any_field_ = any_field;
  if (any_field) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protobuf_unittest.TestWellKnownTypes.any_field)
}

// optional .google.protobuf.Api api_field = 2;
inline bool TestWellKnownTypes::has_api_field() const {
  return !_is_default_instance_ && api_field_ != NULL;
}
inline void TestWellKnownTypes::clear_api_field() {
  if (GetArenaNoVirtual() == NULL && api_field_ != NULL) delete api_field_;
  api_field_ = NULL;
}
inline const ::google::protobuf::Api& TestWellKnownTypes::api_field() const {
  // @@protoc_insertion_point(field_get:protobuf_unittest.TestWellKnownTypes.api_field)
  return api_field_ != NULL ? *api_field_ : *default_instance_->api_field_;
}
inline ::google::protobuf::Api* TestWellKnownTypes::mutable_api_field() {
  
  if (api_field_ == NULL) {
    api_field_ = new ::google::protobuf::Api;
  }
  // @@protoc_insertion_point(field_mutable:protobuf_unittest.TestWellKnownTypes.api_field)
  return api_field_;
}
inline ::google::protobuf::Api* TestWellKnownTypes::release_api_field() {
  
  ::google::protobuf::Api* temp = api_field_;
  api_field_ = NULL;
  return temp;
}
inline void TestWellKnownTypes::set_allocated_api_field(::google::protobuf::Api* api_field) {
  delete api_field_;
  api_field_ = api_field;
  if (api_field) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protobuf_unittest.TestWellKnownTypes.api_field)
}

// optional .google.protobuf.Duration duration_field = 3;
inline bool TestWellKnownTypes::has_duration_field() const {
  return !_is_default_instance_ && duration_field_ != NULL;
}
inline void TestWellKnownTypes::clear_duration_field() {
  if (GetArenaNoVirtual() == NULL && duration_field_ != NULL) delete duration_field_;
  duration_field_ = NULL;
}
inline const ::google::protobuf::Duration& TestWellKnownTypes::duration_field() const {
  // @@protoc_insertion_point(field_get:protobuf_unittest.TestWellKnownTypes.duration_field)
  return duration_field_ != NULL ? *duration_field_ : *default_instance_->duration_field_;
}
inline ::google::protobuf::Duration* TestWellKnownTypes::mutable_duration_field() {
  
  if (duration_field_ == NULL) {
    duration_field_ = new ::google::protobuf::Duration;
  }
  // @@protoc_insertion_point(field_mutable:protobuf_unittest.TestWellKnownTypes.duration_field)
  return duration_field_;
}
inline ::google::protobuf::Duration* TestWellKnownTypes::release_duration_field() {
  
  ::google::protobuf::Duration* temp = duration_field_;
  duration_field_ = NULL;
  return temp;
}
inline void TestWellKnownTypes::set_allocated_duration_field(::google::protobuf::Duration* duration_field) {
  delete duration_field_;
  duration_field_ = duration_field;
  if (duration_field) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protobuf_unittest.TestWellKnownTypes.duration_field)
}

// optional .google.protobuf.Empty empty_field = 4;
inline bool TestWellKnownTypes::has_empty_field() const {
  return !_is_default_instance_ && empty_field_ != NULL;
}
inline void TestWellKnownTypes::clear_empty_field() {
  if (GetArenaNoVirtual() == NULL && empty_field_ != NULL) delete empty_field_;
  empty_field_ = NULL;
}
inline const ::google::protobuf::Empty& TestWellKnownTypes::empty_field() const {
  // @@protoc_insertion_point(field_get:protobuf_unittest.TestWellKnownTypes.empty_field)
  return empty_field_ != NULL ? *empty_field_ : *default_instance_->empty_field_;
}
inline ::google::protobuf::Empty* TestWellKnownTypes::mutable_empty_field() {
  
  if (empty_field_ == NULL) {
    empty_field_ = new ::google::protobuf::Empty;
  }
  // @@protoc_insertion_point(field_mutable:protobuf_unittest.TestWellKnownTypes.empty_field)
  return empty_field_;
}
inline ::google::protobuf::Empty* TestWellKnownTypes::release_empty_field() {
  
  ::google::protobuf::Empty* temp = empty_field_;
  empty_field_ = NULL;
  return temp;
}
inline void TestWellKnownTypes::set_allocated_empty_field(::google::protobuf::Empty* empty_field) {
  delete empty_field_;
  empty_field_ = empty_field;
  if (empty_field) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protobuf_unittest.TestWellKnownTypes.empty_field)
}

// optional .google.protobuf.FieldMask field_mask_field = 5;
inline bool TestWellKnownTypes::has_field_mask_field() const {
  return !_is_default_instance_ && field_mask_field_ != NULL;
}
inline void TestWellKnownTypes::clear_field_mask_field() {
  if (GetArenaNoVirtual() == NULL && field_mask_field_ != NULL) delete field_mask_field_;
  field_mask_field_ = NULL;
}
inline const ::google::protobuf::FieldMask& TestWellKnownTypes::field_mask_field() const {
  // @@protoc_insertion_point(field_get:protobuf_unittest.TestWellKnownTypes.field_mask_field)
  return field_mask_field_ != NULL ? *field_mask_field_ : *default_instance_->field_mask_field_;
}
inline ::google::protobuf::FieldMask* TestWellKnownTypes::mutable_field_mask_field() {
  
  if (field_mask_field_ == NULL) {
    field_mask_field_ = new ::google::protobuf::FieldMask;
  }
  // @@protoc_insertion_point(field_mutable:protobuf_unittest.TestWellKnownTypes.field_mask_field)
  return field_mask_field_;
}
inline ::google::protobuf::FieldMask* TestWellKnownTypes::release_field_mask_field() {
  
  ::google::protobuf::FieldMask* temp = field_mask_field_;
  field_mask_field_ = NULL;
  return temp;
}
inline void TestWellKnownTypes::set_allocated_field_mask_field(::google::protobuf::FieldMask* field_mask_field) {
  delete field_mask_field_;
  field_mask_field_ = field_mask_field;
  if (field_mask_field) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protobuf_unittest.TestWellKnownTypes.field_mask_field)
}

// optional .google.protobuf.SourceContext source_context_field = 6;
inline bool TestWellKnownTypes::has_source_context_field() const {
  return !_is_default_instance_ && source_context_field_ != NULL;
}
inline void TestWellKnownTypes::clear_source_context_field() {
  if (GetArenaNoVirtual() == NULL && source_context_field_ != NULL) delete source_context_field_;
  source_context_field_ = NULL;
}
inline const ::google::protobuf::SourceContext& TestWellKnownTypes::source_context_field() const {
  // @@protoc_insertion_point(field_get:protobuf_unittest.TestWellKnownTypes.source_context_field)
  return source_context_field_ != NULL ? *source_context_field_ : *default_instance_->source_context_field_;
}
inline ::google::protobuf::SourceContext* TestWellKnownTypes::mutable_source_context_field() {
  
  if (source_context_field_ == NULL) {
    source_context_field_ = new ::google::protobuf::SourceContext;
  }
  // @@protoc_insertion_point(field_mutable:protobuf_unittest.TestWellKnownTypes.source_context_field)
  return source_context_field_;
}
inline ::google::protobuf::SourceContext* TestWellKnownTypes::release_source_context_field() {
  
  ::google::protobuf::SourceContext* temp = source_context_field_;
  source_context_field_ = NULL;
  return temp;
}
inline void TestWellKnownTypes::set_allocated_source_context_field(::google::protobuf::SourceContext* source_context_field) {
  delete source_context_field_;
  source_context_field_ = source_context_field;
  if (source_context_field) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protobuf_unittest.TestWellKnownTypes.source_context_field)
}

// optional .google.protobuf.Struct struct_field = 7;
inline bool TestWellKnownTypes::has_struct_field() const {
  return !_is_default_instance_ && struct_field_ != NULL;
}
inline void TestWellKnownTypes::clear_struct_field() {
  if (GetArenaNoVirtual() == NULL && struct_field_ != NULL) delete struct_field_;
  struct_field_ = NULL;
}
inline const ::google::protobuf::Struct& TestWellKnownTypes::struct_field() const {
  // @@protoc_insertion_point(field_get:protobuf_unittest.TestWellKnownTypes.struct_field)
  return struct_field_ != NULL ? *struct_field_ : *default_instance_->struct_field_;
}
inline ::google::protobuf::Struct* TestWellKnownTypes::mutable_struct_field() {
  
  if (struct_field_ == NULL) {
    struct_field_ = new ::google::protobuf::Struct;
  }
  // @@protoc_insertion_point(field_mutable:protobuf_unittest.TestWellKnownTypes.struct_field)
  return struct_field_;
}
inline ::google::protobuf::Struct* TestWellKnownTypes::release_struct_field() {
  
  ::google::protobuf::Struct* temp = struct_field_;
  struct_field_ = NULL;
  return temp;
}
inline void TestWellKnownTypes::set_allocated_struct_field(::google::protobuf::Struct* struct_field) {
  delete struct_field_;
  struct_field_ = struct_field;
  if (struct_field) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protobuf_unittest.TestWellKnownTypes.struct_field)
}

// optional .google.protobuf.Timestamp timestamp_field = 8;
inline bool TestWellKnownTypes::has_timestamp_field() const {
  return !_is_default_instance_ && timestamp_field_ != NULL;
}
inline void TestWellKnownTypes::clear_timestamp_field() {
  if (GetArenaNoVirtual() == NULL && timestamp_field_ != NULL) delete timestamp_field_;
  timestamp_field_ = NULL;
}
inline const ::google::protobuf::Timestamp& TestWellKnownTypes::timestamp_field() const {
  // @@protoc_insertion_point(field_get:protobuf_unittest.TestWellKnownTypes.timestamp_field)
  return timestamp_field_ != NULL ? *timestamp_field_ : *default_instance_->timestamp_field_;
}
inline ::google::protobuf::Timestamp* TestWellKnownTypes::mutable_timestamp_field() {
  
  if (timestamp_field_ == NULL) {
    timestamp_field_ = new ::google::protobuf::Timestamp;
  }
  // @@protoc_insertion_point(field_mutable:protobuf_unittest.TestWellKnownTypes.timestamp_field)
  return timestamp_field_;
}
inline ::google::protobuf::Timestamp* TestWellKnownTypes::release_timestamp_field() {
  
  ::google::protobuf::Timestamp* temp = timestamp_field_;
  timestamp_field_ = NULL;
  return temp;
}
inline void TestWellKnownTypes::set_allocated_timestamp_field(::google::protobuf::Timestamp* timestamp_field) {
  delete timestamp_field_;
  timestamp_field_ = timestamp_field;
  if (timestamp_field) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protobuf_unittest.TestWellKnownTypes.timestamp_field)
}

// optional .google.protobuf.Type type_field = 9;
inline bool TestWellKnownTypes::has_type_field() const {
  return !_is_default_instance_ && type_field_ != NULL;
}
inline void TestWellKnownTypes::clear_type_field() {
  if (GetArenaNoVirtual() == NULL && type_field_ != NULL) delete type_field_;
  type_field_ = NULL;
}
inline const ::google::protobuf::Type& TestWellKnownTypes::type_field() const {
  // @@protoc_insertion_point(field_get:protobuf_unittest.TestWellKnownTypes.type_field)
  return type_field_ != NULL ? *type_field_ : *default_instance_->type_field_;
}
inline ::google::protobuf::Type* TestWellKnownTypes::mutable_type_field() {
  
  if (type_field_ == NULL) {
    type_field_ = new ::google::protobuf::Type;
  }
  // @@protoc_insertion_point(field_mutable:protobuf_unittest.TestWellKnownTypes.type_field)
  return type_field_;
}
inline ::google::protobuf::Type* TestWellKnownTypes::release_type_field() {
  
  ::google::protobuf::Type* temp = type_field_;
  type_field_ = NULL;
  return temp;
}
inline void TestWellKnownTypes::set_allocated_type_field(::google::protobuf::Type* type_field) {
  delete type_field_;
  type_field_ = type_field;
  if (type_field) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protobuf_unittest.TestWellKnownTypes.type_field)
}

// optional .google.protobuf.Int32Value int32_field = 10;
inline bool TestWellKnownTypes::has_int32_field() const {
  return !_is_default_instance_ && int32_field_ != NULL;
}
inline void TestWellKnownTypes::clear_int32_field() {
  if (GetArenaNoVirtual() == NULL && int32_field_ != NULL) delete int32_field_;
  int32_field_ = NULL;
}
inline const ::google::protobuf::Int32Value& TestWellKnownTypes::int32_field() const {
  // @@protoc_insertion_point(field_get:protobuf_unittest.TestWellKnownTypes.int32_field)
  return int32_field_ != NULL ? *int32_field_ : *default_instance_->int32_field_;
}
inline ::google::protobuf::Int32Value* TestWellKnownTypes::mutable_int32_field() {
  
  if (int32_field_ == NULL) {
    int32_field_ = new ::google::protobuf::Int32Value;
  }
  // @@protoc_insertion_point(field_mutable:protobuf_unittest.TestWellKnownTypes.int32_field)
  return int32_field_;
}
inline ::google::protobuf::Int32Value* TestWellKnownTypes::release_int32_field() {
  
  ::google::protobuf::Int32Value* temp = int32_field_;
  int32_field_ = NULL;
  return temp;
}
inline void TestWellKnownTypes::set_allocated_int32_field(::google::protobuf::Int32Value* int32_field) {
  delete int32_field_;
  int32_field_ = int32_field;
  if (int32_field) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:protobuf_unittest.TestWellKnownTypes.int32_field)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf_unittest

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fprotobuf_2funittest_5fwell_5fknown_5ftypes_2eproto__INCLUDED
