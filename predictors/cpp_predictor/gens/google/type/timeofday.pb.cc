// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/type/timeofday.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/type/timeofday.pb.h"

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

namespace google {
namespace type {
class TimeOfDayDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<TimeOfDay>
     _instance;
} _TimeOfDay_default_instance_;

namespace protobuf_google_2ftype_2ftimeofday_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

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
};

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TimeOfDay, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TimeOfDay, hours_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TimeOfDay, minutes_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TimeOfDay, seconds_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TimeOfDay, nanos_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(TimeOfDay)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_TimeOfDay_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/type/timeofday.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _TimeOfDay_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_TimeOfDay_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\033google/type/timeofday.proto\022\013google.ty"
      "pe\"K\n\tTimeOfDay\022\r\n\005hours\030\001 \001(\005\022\017\n\007minute"
      "s\030\002 \001(\005\022\017\n\007seconds\030\003 \001(\005\022\r\n\005nanos\030\004 \001(\005B"
      "i\n\017com.google.typeB\016TimeOfDayProtoP\001Z>go"
      "ogle.golang.org/genproto/googleapis/type"
      "/timeofday;timeofday\242\002\003GTPb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 234);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/type/timeofday.proto", &protobuf_RegisterTypes);
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

}  // namespace protobuf_google_2ftype_2ftimeofday_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TimeOfDay::kHoursFieldNumber;
const int TimeOfDay::kMinutesFieldNumber;
const int TimeOfDay::kSecondsFieldNumber;
const int TimeOfDay::kNanosFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TimeOfDay::TimeOfDay()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_google_2ftype_2ftimeofday_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.type.TimeOfDay)
}
TimeOfDay::TimeOfDay(const TimeOfDay& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&hours_, &from.hours_,
    static_cast<size_t>(reinterpret_cast<char*>(&nanos_) -
    reinterpret_cast<char*>(&hours_)) + sizeof(nanos_));
  // @@protoc_insertion_point(copy_constructor:google.type.TimeOfDay)
}

void TimeOfDay::SharedCtor() {
  ::memset(&hours_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&nanos_) -
      reinterpret_cast<char*>(&hours_)) + sizeof(nanos_));
  _cached_size_ = 0;
}

TimeOfDay::~TimeOfDay() {
  // @@protoc_insertion_point(destructor:google.type.TimeOfDay)
  SharedDtor();
}

void TimeOfDay::SharedDtor() {
}

void TimeOfDay::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TimeOfDay::descriptor() {
  protobuf_google_2ftype_2ftimeofday_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2ftype_2ftimeofday_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const TimeOfDay& TimeOfDay::default_instance() {
  protobuf_google_2ftype_2ftimeofday_2eproto::InitDefaults();
  return *internal_default_instance();
}

TimeOfDay* TimeOfDay::New(::google::protobuf::Arena* arena) const {
  TimeOfDay* n = new TimeOfDay;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void TimeOfDay::Clear() {
// @@protoc_insertion_point(message_clear_start:google.type.TimeOfDay)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&hours_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&nanos_) -
      reinterpret_cast<char*>(&hours_)) + sizeof(nanos_));
  _internal_metadata_.Clear();
}

bool TimeOfDay::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.type.TimeOfDay)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 hours = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &hours_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 minutes = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &minutes_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 seconds = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &seconds_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 nanos = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &nanos_)));
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
  // @@protoc_insertion_point(parse_success:google.type.TimeOfDay)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.type.TimeOfDay)
  return false;
#undef DO_
}

void TimeOfDay::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.type.TimeOfDay)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 hours = 1;
  if (this->hours() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->hours(), output);
  }

  // int32 minutes = 2;
  if (this->minutes() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->minutes(), output);
  }

  // int32 seconds = 3;
  if (this->seconds() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->seconds(), output);
  }

  // int32 nanos = 4;
  if (this->nanos() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->nanos(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.type.TimeOfDay)
}

::google::protobuf::uint8* TimeOfDay::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.type.TimeOfDay)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 hours = 1;
  if (this->hours() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->hours(), target);
  }

  // int32 minutes = 2;
  if (this->minutes() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->minutes(), target);
  }

  // int32 seconds = 3;
  if (this->seconds() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->seconds(), target);
  }

  // int32 nanos = 4;
  if (this->nanos() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->nanos(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.type.TimeOfDay)
  return target;
}

size_t TimeOfDay::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.type.TimeOfDay)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // int32 hours = 1;
  if (this->hours() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->hours());
  }

  // int32 minutes = 2;
  if (this->minutes() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->minutes());
  }

  // int32 seconds = 3;
  if (this->seconds() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->seconds());
  }

  // int32 nanos = 4;
  if (this->nanos() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->nanos());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TimeOfDay::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.type.TimeOfDay)
  GOOGLE_DCHECK_NE(&from, this);
  const TimeOfDay* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const TimeOfDay>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.type.TimeOfDay)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.type.TimeOfDay)
    MergeFrom(*source);
  }
}

void TimeOfDay::MergeFrom(const TimeOfDay& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.type.TimeOfDay)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.hours() != 0) {
    set_hours(from.hours());
  }
  if (from.minutes() != 0) {
    set_minutes(from.minutes());
  }
  if (from.seconds() != 0) {
    set_seconds(from.seconds());
  }
  if (from.nanos() != 0) {
    set_nanos(from.nanos());
  }
}

void TimeOfDay::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.type.TimeOfDay)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TimeOfDay::CopyFrom(const TimeOfDay& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.type.TimeOfDay)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TimeOfDay::IsInitialized() const {
  return true;
}

void TimeOfDay::Swap(TimeOfDay* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TimeOfDay::InternalSwap(TimeOfDay* other) {
  using std::swap;
  swap(hours_, other->hours_);
  swap(minutes_, other->minutes_);
  swap(seconds_, other->seconds_);
  swap(nanos_, other->nanos_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata TimeOfDay::GetMetadata() const {
  protobuf_google_2ftype_2ftimeofday_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2ftype_2ftimeofday_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// TimeOfDay

// int32 hours = 1;
void TimeOfDay::clear_hours() {
  hours_ = 0;
}
::google::protobuf::int32 TimeOfDay::hours() const {
  // @@protoc_insertion_point(field_get:google.type.TimeOfDay.hours)
  return hours_;
}
void TimeOfDay::set_hours(::google::protobuf::int32 value) {
  
  hours_ = value;
  // @@protoc_insertion_point(field_set:google.type.TimeOfDay.hours)
}

// int32 minutes = 2;
void TimeOfDay::clear_minutes() {
  minutes_ = 0;
}
::google::protobuf::int32 TimeOfDay::minutes() const {
  // @@protoc_insertion_point(field_get:google.type.TimeOfDay.minutes)
  return minutes_;
}
void TimeOfDay::set_minutes(::google::protobuf::int32 value) {
  
  minutes_ = value;
  // @@protoc_insertion_point(field_set:google.type.TimeOfDay.minutes)
}

// int32 seconds = 3;
void TimeOfDay::clear_seconds() {
  seconds_ = 0;
}
::google::protobuf::int32 TimeOfDay::seconds() const {
  // @@protoc_insertion_point(field_get:google.type.TimeOfDay.seconds)
  return seconds_;
}
void TimeOfDay::set_seconds(::google::protobuf::int32 value) {
  
  seconds_ = value;
  // @@protoc_insertion_point(field_set:google.type.TimeOfDay.seconds)
}

// int32 nanos = 4;
void TimeOfDay::clear_nanos() {
  nanos_ = 0;
}
::google::protobuf::int32 TimeOfDay::nanos() const {
  // @@protoc_insertion_point(field_get:google.type.TimeOfDay.nanos)
  return nanos_;
}
void TimeOfDay::set_nanos(::google::protobuf::int32 value) {
  
  nanos_ = value;
  // @@protoc_insertion_point(field_set:google.type.TimeOfDay.nanos)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace type
}  // namespace google

// @@protoc_insertion_point(global_scope)
