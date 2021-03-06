// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "msg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

void protobuf_ShutdownFile_msg_2eproto() {
  delete msg_t::default_instance_;
}

void protobuf_AddDesc_msg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  msg_t::default_instance_ = new msg_t();
  msg_t::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_msg_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_msg_2eproto {
  StaticDescriptorInitializer_msg_2eproto() {
    protobuf_AddDesc_msg_2eproto();
  }
} static_descriptor_initializer_msg_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int msg_t::kIdFieldNumber;
#endif  // !_MSC_VER

msg_t::msg_t()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void msg_t::InitAsDefaultInstance() {
}

msg_t::msg_t(const msg_t& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void msg_t::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

msg_t::~msg_t() {
  SharedDtor();
}

void msg_t::SharedDtor() {
  if (this != default_instance_) {
  }
}

void msg_t::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const msg_t& msg_t::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_msg_2eproto();  return *default_instance_;
}

msg_t* msg_t::default_instance_ = NULL;

msg_t* msg_t::New() const {
  return new msg_t;
}

void msg_t::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool msg_t::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void msg_t::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }
  
}

int msg_t::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }
    
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void msg_t::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const msg_t*>(&from));
}

void msg_t::MergeFrom(const msg_t& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
  }
}

void msg_t::CopyFrom(const msg_t& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool msg_t::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  return true;
}

void msg_t::Swap(msg_t* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string msg_t::GetTypeName() const {
  return "msg_t";
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
