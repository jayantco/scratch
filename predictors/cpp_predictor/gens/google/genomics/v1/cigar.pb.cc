// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/genomics/v1/cigar.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/genomics/v1/cigar.pb.h"

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
namespace genomics {
namespace v1 {
class CigarUnitDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<CigarUnit>
     _instance;
} _CigarUnit_default_instance_;

namespace protobuf_google_2fgenomics_2fv1_2fcigar_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CigarUnit, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CigarUnit, operation_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CigarUnit, operation_length_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CigarUnit, reference_sequence_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(CigarUnit)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_CigarUnit_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/genomics/v1/cigar.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
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
  ::google::api::protobuf_google_2fapi_2fannotations_2eproto::InitDefaults();
  _CigarUnit_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_CigarUnit_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\036google/genomics/v1/cigar.proto\022\022google"
      ".genomics.v1\032\034google/api/annotations.pro"
      "to\"\257\002\n\tCigarUnit\022:\n\toperation\030\001 \001(\0162\'.go"
      "ogle.genomics.v1.CigarUnit.Operation\022\030\n\020"
      "operation_length\030\002 \001(\003\022\032\n\022reference_sequ"
      "ence\030\003 \001(\t\"\257\001\n\tOperation\022\031\n\025OPERATION_UN"
      "SPECIFIED\020\000\022\023\n\017ALIGNMENT_MATCH\020\001\022\n\n\006INSE"
      "RT\020\002\022\n\n\006DELETE\020\003\022\010\n\004SKIP\020\004\022\r\n\tCLIP_SOFT\020"
      "\005\022\r\n\tCLIP_HARD\020\006\022\007\n\003PAD\020\007\022\022\n\016SEQUENCE_MA"
      "TCH\020\010\022\025\n\021SEQUENCE_MISMATCH\020\tBe\n\026com.goog"
      "le.genomics.v1B\nCigarProtoP\001Z:google.gol"
      "ang.org/genproto/googleapis/genomics/v1;"
      "genomics\370\001\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 499);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/genomics/v1/cigar.proto", &protobuf_RegisterTypes);
  ::google::api::protobuf_google_2fapi_2fannotations_2eproto::AddDescriptors();
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

}  // namespace protobuf_google_2fgenomics_2fv1_2fcigar_2eproto

const ::google::protobuf::EnumDescriptor* CigarUnit_Operation_descriptor() {
  protobuf_google_2fgenomics_2fv1_2fcigar_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fgenomics_2fv1_2fcigar_2eproto::file_level_enum_descriptors[0];
}
bool CigarUnit_Operation_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const CigarUnit_Operation CigarUnit::OPERATION_UNSPECIFIED;
const CigarUnit_Operation CigarUnit::ALIGNMENT_MATCH;
const CigarUnit_Operation CigarUnit::INSERT;
const CigarUnit_Operation CigarUnit::DELETE;
const CigarUnit_Operation CigarUnit::SKIP;
const CigarUnit_Operation CigarUnit::CLIP_SOFT;
const CigarUnit_Operation CigarUnit::CLIP_HARD;
const CigarUnit_Operation CigarUnit::PAD;
const CigarUnit_Operation CigarUnit::SEQUENCE_MATCH;
const CigarUnit_Operation CigarUnit::SEQUENCE_MISMATCH;
const CigarUnit_Operation CigarUnit::Operation_MIN;
const CigarUnit_Operation CigarUnit::Operation_MAX;
const int CigarUnit::Operation_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CigarUnit::kOperationFieldNumber;
const int CigarUnit::kOperationLengthFieldNumber;
const int CigarUnit::kReferenceSequenceFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CigarUnit::CigarUnit()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_google_2fgenomics_2fv1_2fcigar_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.genomics.v1.CigarUnit)
}
CigarUnit::CigarUnit(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
  protobuf_google_2fgenomics_2fv1_2fcigar_2eproto::InitDefaults();
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.genomics.v1.CigarUnit)
}
CigarUnit::CigarUnit(const CigarUnit& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  reference_sequence_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.reference_sequence().size() > 0) {
    reference_sequence_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.reference_sequence(),
      GetArenaNoVirtual());
  }
  ::memcpy(&operation_length_, &from.operation_length_,
    static_cast<size_t>(reinterpret_cast<char*>(&operation_) -
    reinterpret_cast<char*>(&operation_length_)) + sizeof(operation_));
  // @@protoc_insertion_point(copy_constructor:google.genomics.v1.CigarUnit)
}

void CigarUnit::SharedCtor() {
  reference_sequence_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&operation_length_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&operation_) -
      reinterpret_cast<char*>(&operation_length_)) + sizeof(operation_));
  _cached_size_ = 0;
}

CigarUnit::~CigarUnit() {
  // @@protoc_insertion_point(destructor:google.genomics.v1.CigarUnit)
  SharedDtor();
}

void CigarUnit::SharedDtor() {
  ::google::protobuf::Arena* arena = GetArenaNoVirtual();
  GOOGLE_DCHECK(arena == NULL);
  if (arena != NULL) {
    return;
  }

  reference_sequence_.Destroy(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), arena);
}

void CigarUnit::ArenaDtor(void* object) {
  CigarUnit* _this = reinterpret_cast< CigarUnit* >(object);
  (void)_this;
}
void CigarUnit::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void CigarUnit::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CigarUnit::descriptor() {
  protobuf_google_2fgenomics_2fv1_2fcigar_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fgenomics_2fv1_2fcigar_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const CigarUnit& CigarUnit::default_instance() {
  protobuf_google_2fgenomics_2fv1_2fcigar_2eproto::InitDefaults();
  return *internal_default_instance();
}

CigarUnit* CigarUnit::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<CigarUnit>(arena);
}

void CigarUnit::Clear() {
// @@protoc_insertion_point(message_clear_start:google.genomics.v1.CigarUnit)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  reference_sequence_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  ::memset(&operation_length_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&operation_) -
      reinterpret_cast<char*>(&operation_length_)) + sizeof(operation_));
  _internal_metadata_.Clear();
}

bool CigarUnit::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.genomics.v1.CigarUnit)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .google.genomics.v1.CigarUnit.Operation operation = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_operation(static_cast< ::google::genomics::v1::CigarUnit_Operation >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 operation_length = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &operation_length_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string reference_sequence = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_reference_sequence()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->reference_sequence().data(), static_cast<int>(this->reference_sequence().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.genomics.v1.CigarUnit.reference_sequence"));
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
  // @@protoc_insertion_point(parse_success:google.genomics.v1.CigarUnit)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.genomics.v1.CigarUnit)
  return false;
#undef DO_
}

void CigarUnit::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.genomics.v1.CigarUnit)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.genomics.v1.CigarUnit.Operation operation = 1;
  if (this->operation() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->operation(), output);
  }

  // int64 operation_length = 2;
  if (this->operation_length() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->operation_length(), output);
  }

  // string reference_sequence = 3;
  if (this->reference_sequence().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->reference_sequence().data(), static_cast<int>(this->reference_sequence().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.genomics.v1.CigarUnit.reference_sequence");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->reference_sequence(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.genomics.v1.CigarUnit)
}

::google::protobuf::uint8* CigarUnit::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.genomics.v1.CigarUnit)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.genomics.v1.CigarUnit.Operation operation = 1;
  if (this->operation() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->operation(), target);
  }

  // int64 operation_length = 2;
  if (this->operation_length() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->operation_length(), target);
  }

  // string reference_sequence = 3;
  if (this->reference_sequence().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->reference_sequence().data(), static_cast<int>(this->reference_sequence().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.genomics.v1.CigarUnit.reference_sequence");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->reference_sequence(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.genomics.v1.CigarUnit)
  return target;
}

size_t CigarUnit::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.genomics.v1.CigarUnit)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string reference_sequence = 3;
  if (this->reference_sequence().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->reference_sequence());
  }

  // int64 operation_length = 2;
  if (this->operation_length() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->operation_length());
  }

  // .google.genomics.v1.CigarUnit.Operation operation = 1;
  if (this->operation() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->operation());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CigarUnit::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.genomics.v1.CigarUnit)
  GOOGLE_DCHECK_NE(&from, this);
  const CigarUnit* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const CigarUnit>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.genomics.v1.CigarUnit)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.genomics.v1.CigarUnit)
    MergeFrom(*source);
  }
}

void CigarUnit::MergeFrom(const CigarUnit& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.genomics.v1.CigarUnit)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.reference_sequence().size() > 0) {
    set_reference_sequence(from.reference_sequence());
  }
  if (from.operation_length() != 0) {
    set_operation_length(from.operation_length());
  }
  if (from.operation() != 0) {
    set_operation(from.operation());
  }
}

void CigarUnit::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.genomics.v1.CigarUnit)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CigarUnit::CopyFrom(const CigarUnit& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.genomics.v1.CigarUnit)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CigarUnit::IsInitialized() const {
  return true;
}

void CigarUnit::Swap(CigarUnit* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    CigarUnit* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void CigarUnit::UnsafeArenaSwap(CigarUnit* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void CigarUnit::InternalSwap(CigarUnit* other) {
  using std::swap;
  reference_sequence_.Swap(&other->reference_sequence_);
  swap(operation_length_, other->operation_length_);
  swap(operation_, other->operation_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata CigarUnit::GetMetadata() const {
  protobuf_google_2fgenomics_2fv1_2fcigar_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fgenomics_2fv1_2fcigar_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// CigarUnit

// .google.genomics.v1.CigarUnit.Operation operation = 1;
void CigarUnit::clear_operation() {
  operation_ = 0;
}
::google::genomics::v1::CigarUnit_Operation CigarUnit::operation() const {
  // @@protoc_insertion_point(field_get:google.genomics.v1.CigarUnit.operation)
  return static_cast< ::google::genomics::v1::CigarUnit_Operation >(operation_);
}
void CigarUnit::set_operation(::google::genomics::v1::CigarUnit_Operation value) {
  
  operation_ = value;
  // @@protoc_insertion_point(field_set:google.genomics.v1.CigarUnit.operation)
}

// int64 operation_length = 2;
void CigarUnit::clear_operation_length() {
  operation_length_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 CigarUnit::operation_length() const {
  // @@protoc_insertion_point(field_get:google.genomics.v1.CigarUnit.operation_length)
  return operation_length_;
}
void CigarUnit::set_operation_length(::google::protobuf::int64 value) {
  
  operation_length_ = value;
  // @@protoc_insertion_point(field_set:google.genomics.v1.CigarUnit.operation_length)
}

// string reference_sequence = 3;
void CigarUnit::clear_reference_sequence() {
  reference_sequence_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
const ::std::string& CigarUnit::reference_sequence() const {
  // @@protoc_insertion_point(field_get:google.genomics.v1.CigarUnit.reference_sequence)
  return reference_sequence_.Get();
}
void CigarUnit::set_reference_sequence(const ::std::string& value) {
  
  reference_sequence_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:google.genomics.v1.CigarUnit.reference_sequence)
}
#if LANG_CXX11
void CigarUnit::set_reference_sequence(::std::string&& value) {
  
  reference_sequence_.Set(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:google.genomics.v1.CigarUnit.reference_sequence)
}
#endif
void CigarUnit::set_reference_sequence(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  reference_sequence_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:google.genomics.v1.CigarUnit.reference_sequence)
}
void CigarUnit::set_reference_sequence(const char* value,
    size_t size) {
  
  reference_sequence_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:google.genomics.v1.CigarUnit.reference_sequence)
}
::std::string* CigarUnit::mutable_reference_sequence() {
  
  // @@protoc_insertion_point(field_mutable:google.genomics.v1.CigarUnit.reference_sequence)
  return reference_sequence_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* CigarUnit::release_reference_sequence() {
  // @@protoc_insertion_point(field_release:google.genomics.v1.CigarUnit.reference_sequence)
  
  return reference_sequence_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* CigarUnit::unsafe_arena_release_reference_sequence() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.genomics.v1.CigarUnit.reference_sequence)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return reference_sequence_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
void CigarUnit::set_allocated_reference_sequence(::std::string* reference_sequence) {
  if (reference_sequence != NULL) {
    
  } else {
    
  }
  reference_sequence_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), reference_sequence,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:google.genomics.v1.CigarUnit.reference_sequence)
}
void CigarUnit::unsafe_arena_set_allocated_reference_sequence(
    ::std::string* reference_sequence) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (reference_sequence != NULL) {
    
  } else {
    
  }
  reference_sequence_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      reference_sequence, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.genomics.v1.CigarUnit.reference_sequence)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace genomics
}  // namespace google

// @@protoc_insertion_point(global_scope)
