// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: scan_contexts.proto

#ifndef PROTOBUF_INCLUDED_scan_5fcontexts_2eproto
#define PROTOBUF_INCLUDED_scan_5fcontexts_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_scan_5fcontexts_2eproto 

namespace protobuf_scan_5fcontexts_2eproto {
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
}  // namespace protobuf_scan_5fcontexts_2eproto
namespace scan_context_io {
class ScanContext;
class ScanContextDefaultTypeInternal;
extern ScanContextDefaultTypeInternal _ScanContext_default_instance_;
class ScanContexts;
class ScanContextsDefaultTypeInternal;
extern ScanContextsDefaultTypeInternal _ScanContexts_default_instance_;
}  // namespace scan_context_io
namespace google {
namespace protobuf {
template<> ::scan_context_io::ScanContext* Arena::CreateMaybeMessage<::scan_context_io::ScanContext>(Arena*);
template<> ::scan_context_io::ScanContexts* Arena::CreateMaybeMessage<::scan_context_io::ScanContexts>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace scan_context_io {

// ===================================================================

class ScanContext : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:scan_context_io.ScanContext) */ {
 public:
  ScanContext();
  virtual ~ScanContext();

  ScanContext(const ScanContext& from);

  inline ScanContext& operator=(const ScanContext& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ScanContext(ScanContext&& from) noexcept
    : ScanContext() {
    *this = ::std::move(from);
  }

  inline ScanContext& operator=(ScanContext&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ScanContext& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ScanContext* internal_default_instance() {
    return reinterpret_cast<const ScanContext*>(
               &_ScanContext_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(ScanContext* other);
  friend void swap(ScanContext& a, ScanContext& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ScanContext* New() const final {
    return CreateMaybeMessage<ScanContext>(NULL);
  }

  ScanContext* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ScanContext>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ScanContext& from);
  void MergeFrom(const ScanContext& from);
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
  void InternalSwap(ScanContext* other);
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

  // repeated float data = 1;
  int data_size() const;
  void clear_data();
  static const int kDataFieldNumber = 1;
  float data(int index) const;
  void set_data(int index, float value);
  void add_data(float value);
  const ::google::protobuf::RepeatedField< float >&
      data() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_data();

  // @@protoc_insertion_point(class_scope:scan_context_io.ScanContext)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedField< float > data_;
  friend struct ::protobuf_scan_5fcontexts_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ScanContexts : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:scan_context_io.ScanContexts) */ {
 public:
  ScanContexts();
  virtual ~ScanContexts();

  ScanContexts(const ScanContexts& from);

  inline ScanContexts& operator=(const ScanContexts& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ScanContexts(ScanContexts&& from) noexcept
    : ScanContexts() {
    *this = ::std::move(from);
  }

  inline ScanContexts& operator=(ScanContexts&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ScanContexts& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ScanContexts* internal_default_instance() {
    return reinterpret_cast<const ScanContexts*>(
               &_ScanContexts_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(ScanContexts* other);
  friend void swap(ScanContexts& a, ScanContexts& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ScanContexts* New() const final {
    return CreateMaybeMessage<ScanContexts>(NULL);
  }

  ScanContexts* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ScanContexts>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ScanContexts& from);
  void MergeFrom(const ScanContexts& from);
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
  void InternalSwap(ScanContexts* other);
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

  // repeated .scan_context_io.ScanContext data = 3;
  int data_size() const;
  void clear_data();
  static const int kDataFieldNumber = 3;
  ::scan_context_io::ScanContext* mutable_data(int index);
  ::google::protobuf::RepeatedPtrField< ::scan_context_io::ScanContext >*
      mutable_data();
  const ::scan_context_io::ScanContext& data(int index) const;
  ::scan_context_io::ScanContext* add_data();
  const ::google::protobuf::RepeatedPtrField< ::scan_context_io::ScanContext >&
      data() const;

  // required int32 num_rings = 1;
  bool has_num_rings() const;
  void clear_num_rings();
  static const int kNumRingsFieldNumber = 1;
  ::google::protobuf::int32 num_rings() const;
  void set_num_rings(::google::protobuf::int32 value);

  // required int32 num_sectors = 2;
  bool has_num_sectors() const;
  void clear_num_sectors();
  static const int kNumSectorsFieldNumber = 2;
  ::google::protobuf::int32 num_sectors() const;
  void set_num_sectors(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:scan_context_io.ScanContexts)
 private:
  void set_has_num_rings();
  void clear_has_num_rings();
  void set_has_num_sectors();
  void clear_has_num_sectors();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::scan_context_io::ScanContext > data_;
  ::google::protobuf::int32 num_rings_;
  ::google::protobuf::int32 num_sectors_;
  friend struct ::protobuf_scan_5fcontexts_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ScanContext

// repeated float data = 1;
inline int ScanContext::data_size() const {
  return data_.size();
}
inline void ScanContext::clear_data() {
  data_.Clear();
}
inline float ScanContext::data(int index) const {
  // @@protoc_insertion_point(field_get:scan_context_io.ScanContext.data)
  return data_.Get(index);
}
inline void ScanContext::set_data(int index, float value) {
  data_.Set(index, value);
  // @@protoc_insertion_point(field_set:scan_context_io.ScanContext.data)
}
inline void ScanContext::add_data(float value) {
  data_.Add(value);
  // @@protoc_insertion_point(field_add:scan_context_io.ScanContext.data)
}
inline const ::google::protobuf::RepeatedField< float >&
ScanContext::data() const {
  // @@protoc_insertion_point(field_list:scan_context_io.ScanContext.data)
  return data_;
}
inline ::google::protobuf::RepeatedField< float >*
ScanContext::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:scan_context_io.ScanContext.data)
  return &data_;
}

// -------------------------------------------------------------------

// ScanContexts

// required int32 num_rings = 1;
inline bool ScanContexts::has_num_rings() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ScanContexts::set_has_num_rings() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ScanContexts::clear_has_num_rings() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ScanContexts::clear_num_rings() {
  num_rings_ = 0;
  clear_has_num_rings();
}
inline ::google::protobuf::int32 ScanContexts::num_rings() const {
  // @@protoc_insertion_point(field_get:scan_context_io.ScanContexts.num_rings)
  return num_rings_;
}
inline void ScanContexts::set_num_rings(::google::protobuf::int32 value) {
  set_has_num_rings();
  num_rings_ = value;
  // @@protoc_insertion_point(field_set:scan_context_io.ScanContexts.num_rings)
}

// required int32 num_sectors = 2;
inline bool ScanContexts::has_num_sectors() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ScanContexts::set_has_num_sectors() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ScanContexts::clear_has_num_sectors() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ScanContexts::clear_num_sectors() {
  num_sectors_ = 0;
  clear_has_num_sectors();
}
inline ::google::protobuf::int32 ScanContexts::num_sectors() const {
  // @@protoc_insertion_point(field_get:scan_context_io.ScanContexts.num_sectors)
  return num_sectors_;
}
inline void ScanContexts::set_num_sectors(::google::protobuf::int32 value) {
  set_has_num_sectors();
  num_sectors_ = value;
  // @@protoc_insertion_point(field_set:scan_context_io.ScanContexts.num_sectors)
}

// repeated .scan_context_io.ScanContext data = 3;
inline int ScanContexts::data_size() const {
  return data_.size();
}
inline void ScanContexts::clear_data() {
  data_.Clear();
}
inline ::scan_context_io::ScanContext* ScanContexts::mutable_data(int index) {
  // @@protoc_insertion_point(field_mutable:scan_context_io.ScanContexts.data)
  return data_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::scan_context_io::ScanContext >*
ScanContexts::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:scan_context_io.ScanContexts.data)
  return &data_;
}
inline const ::scan_context_io::ScanContext& ScanContexts::data(int index) const {
  // @@protoc_insertion_point(field_get:scan_context_io.ScanContexts.data)
  return data_.Get(index);
}
inline ::scan_context_io::ScanContext* ScanContexts::add_data() {
  // @@protoc_insertion_point(field_add:scan_context_io.ScanContexts.data)
  return data_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::scan_context_io::ScanContext >&
ScanContexts::data() const {
  // @@protoc_insertion_point(field_list:scan_context_io.ScanContexts.data)
  return data_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace scan_context_io

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_scan_5fcontexts_2eproto