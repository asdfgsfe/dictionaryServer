// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Query.proto

#ifndef PROTOBUF_INCLUDED_Query_2eproto
#define PROTOBUF_INCLUDED_Query_2eproto

#include <limits>
#include <string>

#include <google/protobuf/stubs/common.h>
#if GOOGLE_PROTOBUF_VERSION < 3006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Query_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_Query_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[4]
    GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_Query_2eproto();
namespace muduo {
class Empty;
class EmptyDefaultTypeInternal;
extern EmptyDefaultTypeInternal _Empty_default_instance_;
class Query;
class QueryDefaultTypeInternal;
extern QueryDefaultTypeInternal _Query_default_instance_;
class Reply;
class ReplyDefaultTypeInternal;
extern ReplyDefaultTypeInternal _Reply_default_instance_;
class Set;
class SetDefaultTypeInternal;
extern SetDefaultTypeInternal _Set_default_instance_;
}  // namespace muduo
namespace google {
namespace protobuf {
template<> ::muduo::Empty* Arena::CreateMaybeMessage<::muduo::Empty>(Arena*);
template<> ::muduo::Query* Arena::CreateMaybeMessage<::muduo::Query>(Arena*);
template<> ::muduo::Reply* Arena::CreateMaybeMessage<::muduo::Reply>(Arena*);
template<> ::muduo::Set* Arena::CreateMaybeMessage<::muduo::Set>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace muduo {

// ===================================================================

class Query : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:muduo.Query) */ {
 public:
  Query();
  virtual ~Query();

  Query(const Query& from);

  inline Query& operator=(const Query& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Query(Query&& from) noexcept
    : Query() {
    *this = ::std::move(from);
  }

  inline Query& operator=(Query&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const Query& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Query* internal_default_instance() {
    return reinterpret_cast<const Query*>(
               &_Query_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Query* other);
  friend void swap(Query& a, Query& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Query* New() const final {
    return CreateMaybeMessage<Query>(NULL);
  }

  Query* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Query>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Query& from);
  void MergeFrom(const Query& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Query* other);
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

  // repeated string question = 2;
  int question_size() const;
  void clear_question();
  static const int kQuestionFieldNumber = 2;
  const ::std::string& question(int index) const;
  ::std::string* mutable_question(int index);
  void set_question(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_question(int index, ::std::string&& value);
  #endif
  void set_question(int index, const char* value);
  void set_question(int index, const char* value, size_t size);
  ::std::string* add_question();
  void add_question(const ::std::string& value);
  #if LANG_CXX11
  void add_question(::std::string&& value);
  #endif
  void add_question(const char* value);
  void add_question(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField<::std::string>& question() const;
  ::google::protobuf::RepeatedPtrField<::std::string>* mutable_question();

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

  // @@protoc_insertion_point(class_scope:muduo.Query)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField<::std::string> question_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Query_2eproto;
};
// -------------------------------------------------------------------

class Reply : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:muduo.Reply) */ {
 public:
  Reply();
  virtual ~Reply();

  Reply(const Reply& from);

  inline Reply& operator=(const Reply& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Reply(Reply&& from) noexcept
    : Reply() {
    *this = ::std::move(from);
  }

  inline Reply& operator=(Reply&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const Reply& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Reply* internal_default_instance() {
    return reinterpret_cast<const Reply*>(
               &_Reply_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Reply* other);
  friend void swap(Reply& a, Reply& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Reply* New() const final {
    return CreateMaybeMessage<Reply>(NULL);
  }

  Reply* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Reply>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Reply& from);
  void MergeFrom(const Reply& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Reply* other);
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

  // repeated string solution = 3;
  int solution_size() const;
  void clear_solution();
  static const int kSolutionFieldNumber = 3;
  const ::std::string& solution(int index) const;
  ::std::string* mutable_solution(int index);
  void set_solution(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_solution(int index, ::std::string&& value);
  #endif
  void set_solution(int index, const char* value);
  void set_solution(int index, const char* value, size_t size);
  ::std::string* add_solution();
  void add_solution(const ::std::string& value);
  #if LANG_CXX11
  void add_solution(::std::string&& value);
  #endif
  void add_solution(const char* value);
  void add_solution(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField<::std::string>& solution() const;
  ::google::protobuf::RepeatedPtrField<::std::string>* mutable_solution();

  // string reply = 1;
  void clear_reply();
  static const int kReplyFieldNumber = 1;
  const ::std::string& reply() const;
  void set_reply(const ::std::string& value);
  #if LANG_CXX11
  void set_reply(::std::string&& value);
  #endif
  void set_reply(const char* value);
  void set_reply(const char* value, size_t size);
  ::std::string* mutable_reply();
  ::std::string* release_reply();
  void set_allocated_reply(::std::string* reply);

  // @@protoc_insertion_point(class_scope:muduo.Reply)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField<::std::string> solution_;
  ::google::protobuf::internal::ArenaStringPtr reply_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Query_2eproto;
};
// -------------------------------------------------------------------

class Set : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:muduo.Set) */ {
 public:
  Set();
  virtual ~Set();

  Set(const Set& from);

  inline Set& operator=(const Set& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Set(Set&& from) noexcept
    : Set() {
    *this = ::std::move(from);
  }

  inline Set& operator=(Set&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const Set& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Set* internal_default_instance() {
    return reinterpret_cast<const Set*>(
               &_Set_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(Set* other);
  friend void swap(Set& a, Set& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Set* New() const final {
    return CreateMaybeMessage<Set>(NULL);
  }

  Set* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Set>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Set& from);
  void MergeFrom(const Set& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Set* other);
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

  // string value = 2;
  void clear_value();
  static const int kValueFieldNumber = 2;
  const ::std::string& value() const;
  void set_value(const ::std::string& value);
  #if LANG_CXX11
  void set_value(::std::string&& value);
  #endif
  void set_value(const char* value);
  void set_value(const char* value, size_t size);
  ::std::string* mutable_value();
  ::std::string* release_value();
  void set_allocated_value(::std::string* value);

  // @@protoc_insertion_point(class_scope:muduo.Set)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  ::google::protobuf::internal::ArenaStringPtr value_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Query_2eproto;
};
// -------------------------------------------------------------------

class Empty : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:muduo.Empty) */ {
 public:
  Empty();
  virtual ~Empty();

  Empty(const Empty& from);

  inline Empty& operator=(const Empty& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Empty(Empty&& from) noexcept
    : Empty() {
    *this = ::std::move(from);
  }

  inline Empty& operator=(Empty&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const Empty& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Empty* internal_default_instance() {
    return reinterpret_cast<const Empty*>(
               &_Empty_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  void Swap(Empty* other);
  friend void swap(Empty& a, Empty& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Empty* New() const final {
    return CreateMaybeMessage<Empty>(NULL);
  }

  Empty* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Empty>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Empty& from);
  void MergeFrom(const Empty& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Empty* other);
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

  // int32 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:muduo.Empty)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 id_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Query_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Query

// string key = 1;
inline void Query::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Query::key() const {
  // @@protoc_insertion_point(field_get:muduo.Query.key)
  return key_.GetNoArena();
}
inline void Query::set_key(const ::std::string& value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:muduo.Query.key)
}
#if LANG_CXX11
inline void Query::set_key(::std::string&& value) {
  
  key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:muduo.Query.key)
}
#endif
inline void Query::set_key(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:muduo.Query.key)
}
inline void Query::set_key(const char* value, size_t size) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:muduo.Query.key)
}
inline ::std::string* Query::mutable_key() {
  
  // @@protoc_insertion_point(field_mutable:muduo.Query.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Query::release_key() {
  // @@protoc_insertion_point(field_release:muduo.Query.key)
  
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Query::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    
  } else {
    
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:muduo.Query.key)
}

// repeated string question = 2;
inline int Query::question_size() const {
  return question_.size();
}
inline void Query::clear_question() {
  question_.Clear();
}
inline const ::std::string& Query::question(int index) const {
  // @@protoc_insertion_point(field_get:muduo.Query.question)
  return question_.Get(index);
}
inline ::std::string* Query::mutable_question(int index) {
  // @@protoc_insertion_point(field_mutable:muduo.Query.question)
  return question_.Mutable(index);
}
inline void Query::set_question(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:muduo.Query.question)
  question_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void Query::set_question(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:muduo.Query.question)
  question_.Mutable(index)->assign(std::move(value));
}
#endif
inline void Query::set_question(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  question_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:muduo.Query.question)
}
inline void Query::set_question(int index, const char* value, size_t size) {
  question_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:muduo.Query.question)
}
inline ::std::string* Query::add_question() {
  // @@protoc_insertion_point(field_add_mutable:muduo.Query.question)
  return question_.Add();
}
inline void Query::add_question(const ::std::string& value) {
  question_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:muduo.Query.question)
}
#if LANG_CXX11
inline void Query::add_question(::std::string&& value) {
  question_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:muduo.Query.question)
}
#endif
inline void Query::add_question(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  question_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:muduo.Query.question)
}
inline void Query::add_question(const char* value, size_t size) {
  question_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:muduo.Query.question)
}
inline const ::google::protobuf::RepeatedPtrField<::std::string>&
Query::question() const {
  // @@protoc_insertion_point(field_list:muduo.Query.question)
  return question_;
}
inline ::google::protobuf::RepeatedPtrField<::std::string>*
Query::mutable_question() {
  // @@protoc_insertion_point(field_mutable_list:muduo.Query.question)
  return &question_;
}

// -------------------------------------------------------------------

// Reply

// string reply = 1;
inline void Reply::clear_reply() {
  reply_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Reply::reply() const {
  // @@protoc_insertion_point(field_get:muduo.Reply.reply)
  return reply_.GetNoArena();
}
inline void Reply::set_reply(const ::std::string& value) {
  
  reply_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:muduo.Reply.reply)
}
#if LANG_CXX11
inline void Reply::set_reply(::std::string&& value) {
  
  reply_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:muduo.Reply.reply)
}
#endif
inline void Reply::set_reply(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  reply_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:muduo.Reply.reply)
}
inline void Reply::set_reply(const char* value, size_t size) {
  
  reply_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:muduo.Reply.reply)
}
inline ::std::string* Reply::mutable_reply() {
  
  // @@protoc_insertion_point(field_mutable:muduo.Reply.reply)
  return reply_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Reply::release_reply() {
  // @@protoc_insertion_point(field_release:muduo.Reply.reply)
  
  return reply_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Reply::set_allocated_reply(::std::string* reply) {
  if (reply != NULL) {
    
  } else {
    
  }
  reply_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), reply);
  // @@protoc_insertion_point(field_set_allocated:muduo.Reply.reply)
}

// repeated string solution = 3;
inline int Reply::solution_size() const {
  return solution_.size();
}
inline void Reply::clear_solution() {
  solution_.Clear();
}
inline const ::std::string& Reply::solution(int index) const {
  // @@protoc_insertion_point(field_get:muduo.Reply.solution)
  return solution_.Get(index);
}
inline ::std::string* Reply::mutable_solution(int index) {
  // @@protoc_insertion_point(field_mutable:muduo.Reply.solution)
  return solution_.Mutable(index);
}
inline void Reply::set_solution(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:muduo.Reply.solution)
  solution_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void Reply::set_solution(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:muduo.Reply.solution)
  solution_.Mutable(index)->assign(std::move(value));
}
#endif
inline void Reply::set_solution(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  solution_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:muduo.Reply.solution)
}
inline void Reply::set_solution(int index, const char* value, size_t size) {
  solution_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:muduo.Reply.solution)
}
inline ::std::string* Reply::add_solution() {
  // @@protoc_insertion_point(field_add_mutable:muduo.Reply.solution)
  return solution_.Add();
}
inline void Reply::add_solution(const ::std::string& value) {
  solution_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:muduo.Reply.solution)
}
#if LANG_CXX11
inline void Reply::add_solution(::std::string&& value) {
  solution_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:muduo.Reply.solution)
}
#endif
inline void Reply::add_solution(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  solution_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:muduo.Reply.solution)
}
inline void Reply::add_solution(const char* value, size_t size) {
  solution_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:muduo.Reply.solution)
}
inline const ::google::protobuf::RepeatedPtrField<::std::string>&
Reply::solution() const {
  // @@protoc_insertion_point(field_list:muduo.Reply.solution)
  return solution_;
}
inline ::google::protobuf::RepeatedPtrField<::std::string>*
Reply::mutable_solution() {
  // @@protoc_insertion_point(field_mutable_list:muduo.Reply.solution)
  return &solution_;
}

// -------------------------------------------------------------------

// Set

// string key = 1;
inline void Set::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Set::key() const {
  // @@protoc_insertion_point(field_get:muduo.Set.key)
  return key_.GetNoArena();
}
inline void Set::set_key(const ::std::string& value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:muduo.Set.key)
}
#if LANG_CXX11
inline void Set::set_key(::std::string&& value) {
  
  key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:muduo.Set.key)
}
#endif
inline void Set::set_key(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:muduo.Set.key)
}
inline void Set::set_key(const char* value, size_t size) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:muduo.Set.key)
}
inline ::std::string* Set::mutable_key() {
  
  // @@protoc_insertion_point(field_mutable:muduo.Set.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Set::release_key() {
  // @@protoc_insertion_point(field_release:muduo.Set.key)
  
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Set::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    
  } else {
    
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:muduo.Set.key)
}

// string value = 2;
inline void Set::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Set::value() const {
  // @@protoc_insertion_point(field_get:muduo.Set.value)
  return value_.GetNoArena();
}
inline void Set::set_value(const ::std::string& value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:muduo.Set.value)
}
#if LANG_CXX11
inline void Set::set_value(::std::string&& value) {
  
  value_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:muduo.Set.value)
}
#endif
inline void Set::set_value(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:muduo.Set.value)
}
inline void Set::set_value(const char* value, size_t size) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:muduo.Set.value)
}
inline ::std::string* Set::mutable_value() {
  
  // @@protoc_insertion_point(field_mutable:muduo.Set.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Set::release_value() {
  // @@protoc_insertion_point(field_release:muduo.Set.value)
  
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Set::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    
  } else {
    
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:muduo.Set.value)
}

// -------------------------------------------------------------------

// Empty

// int32 id = 1;
inline void Empty::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 Empty::id() const {
  // @@protoc_insertion_point(field_get:muduo.Empty.id)
  return id_;
}
inline void Empty::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:muduo.Empty.id)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace muduo

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_Query_2eproto
