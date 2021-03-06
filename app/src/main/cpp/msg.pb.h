// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msg.proto

#ifndef PROTOBUF_msg_2eproto__INCLUDED
#define PROTOBUF_msg_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_msg_2eproto();
void protobuf_AssignDesc_msg_2eproto();
void protobuf_ShutdownFile_msg_2eproto();

class msg_t;

// ===================================================================

class msg_t : public ::google::protobuf::MessageLite {
 public:
  msg_t();
  virtual ~msg_t();
  
  msg_t(const msg_t& from);
  
  inline msg_t& operator=(const msg_t& from) {
    CopyFrom(from);
    return *this;
  }
  
  static const msg_t& default_instance();
  
  void Swap(msg_t* other);
  
  // implements Message ----------------------------------------------
  
  msg_t* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const msg_t& from);
  void MergeFrom(const msg_t& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::std::string GetTypeName() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);
  
  // @@protoc_insertion_point(class_scope:msg_t)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  
  ::google::protobuf::int32 id_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_msg_2eproto();
  friend void protobuf_AssignDesc_msg_2eproto();
  friend void protobuf_ShutdownFile_msg_2eproto();
  
  void InitAsDefaultInstance();
  static msg_t* default_instance_;
};
// ===================================================================


// ===================================================================

// msg_t

// required int32 id = 1;
inline bool msg_t::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void msg_t::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void msg_t::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void msg_t::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 msg_t::id() const {
  return id_;
}
inline void msg_t::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_msg_2eproto__INCLUDED
