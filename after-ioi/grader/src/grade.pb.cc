// Generated by the protocol buffer compiler.  DO NOT EDIT!

#include "grade.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format_inl.h>

namespace model {

namespace {

const ::google::protobuf::Descriptor* Grade_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Grade_reflection_ = NULL;
const ::google::protobuf::Descriptor* GradeResult_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GradeResult_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_grade_2eproto() {
  protobuf_AddDesc_grade_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "grade.proto");
  GOOGLE_CHECK(file != NULL);
  Grade_descriptor_ = file->message_type(0);
  static const int Grade_offsets_[10] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Grade, taskname_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Grade, language_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Grade, testindexes_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Grade, maxpoints_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Grade, explicitgrade_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Grade, tasktype_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Grade, timelimit_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Grade, outputlimit_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Grade, testscount_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Grade, memorylimit_),
  };
  Grade_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Grade_descriptor_,
      Grade::default_instance_,
      Grade_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Grade, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Grade, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Grade));
  GradeResult_descriptor_ = file->message_type(1);
  static const int GradeResult_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GradeResult, sampleoutput_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GradeResult, testindexes_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GradeResult, result_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GradeResult, accept_),
  };
  GradeResult_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      GradeResult_descriptor_,
      GradeResult::default_instance_,
      GradeResult_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GradeResult, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GradeResult, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(GradeResult));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_grade_2eproto);
}

void protobuf_RegisterTypes() {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Grade_descriptor_, &Grade::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    GradeResult_descriptor_, &GradeResult::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_grade_2eproto() {
  delete Grade::default_instance_;
  delete Grade_reflection_;
  delete GradeResult::default_instance_;
  delete GradeResult_reflection_;
}

void protobuf_AddDesc_grade_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013grade.proto\022\005model\"\315\001\n\005Grade\022\020\n\010taskNa"
    "me\030\001 \002(\t\022\020\n\010language\030\002 \002(\t\022\023\n\013testIndexe"
    "s\030\003 \003(\005\022\021\n\tmaxPoints\030\004 \003(\t\022\025\n\rexplicitGr"
    "ade\030\005 \002(\010\022\020\n\010taskType\030\020 \002(\005\022\021\n\ttimeLimit"
    "\030\021 \002(\005\022\023\n\013outputLimit\030\022 \002(\005\022\022\n\ntestsCoun"
    "t\030\023 \002(\005\022\023\n\013memoryLimit\030\024 \002(\005\"X\n\013GradeRes"
    "ult\022\024\n\014sampleOutput\030\001 \001(\t\022\023\n\013testIndexes"
    "\030\002 \003(\005\022\016\n\006result\030\003 \003(\t\022\016\n\006accept\030\004 \001(\010B\033"
    "\n\rbg.smoc.modelB\nGradeProto", 347);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "grade.proto", &protobuf_RegisterTypes);
  Grade::default_instance_ = new Grade();
  GradeResult::default_instance_ = new GradeResult();
  Grade::default_instance_->InitAsDefaultInstance();
  GradeResult::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_grade_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_grade_2eproto {
  StaticDescriptorInitializer_grade_2eproto() {
    protobuf_AddDesc_grade_2eproto();
  }
} static_descriptor_initializer_grade_2eproto_;


// ===================================================================

const ::std::string Grade::_default_taskname_;
const ::std::string Grade::_default_language_;
#ifndef _MSC_VER
const int Grade::kTaskNameFieldNumber;
const int Grade::kLanguageFieldNumber;
const int Grade::kTestIndexesFieldNumber;
const int Grade::kMaxPointsFieldNumber;
const int Grade::kExplicitGradeFieldNumber;
const int Grade::kTaskTypeFieldNumber;
const int Grade::kTimeLimitFieldNumber;
const int Grade::kOutputLimitFieldNumber;
const int Grade::kTestsCountFieldNumber;
const int Grade::kMemoryLimitFieldNumber;
#endif  // !_MSC_VER

Grade::Grade()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Grade::InitAsDefaultInstance() {}

Grade::Grade(const Grade& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Grade::SharedCtor() {
  _cached_size_ = 0;
  taskname_ = const_cast< ::std::string*>(&_default_taskname_);
  language_ = const_cast< ::std::string*>(&_default_language_);
  explicitgrade_ = false;
  tasktype_ = 0;
  timelimit_ = 0;
  outputlimit_ = 0;
  testscount_ = 0;
  memorylimit_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Grade::~Grade() {
  SharedDtor();
}

void Grade::SharedDtor() {
  if (taskname_ != &_default_taskname_) {
    delete taskname_;
  }
  if (language_ != &_default_language_) {
    delete language_;
  }
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* Grade::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Grade_descriptor_;
}

const Grade& Grade::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_grade_2eproto();  return *default_instance_;
}

Grade* Grade::default_instance_ = NULL;

Grade* Grade::New() const {
  return new Grade;
}

void Grade::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (_has_bit(0)) {
      if (taskname_ != &_default_taskname_) {
        taskname_->clear();
      }
    }
    if (_has_bit(1)) {
      if (language_ != &_default_language_) {
        language_->clear();
      }
    }
    explicitgrade_ = false;
    tasktype_ = 0;
    timelimit_ = 0;
    outputlimit_ = 0;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    testscount_ = 0;
    memorylimit_ = 0;
  }
  testindexes_.Clear();
  maxpoints_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Grade::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormat::GetTagFieldNumber(tag)) {
      // required string taskName = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
        DO_(::google::protobuf::internal::WireFormat::ReadString(input, mutable_taskname()));
        if (input->ExpectTag(18)) goto parse_language;
        break;
      }
      
      // required string language = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_language:
        DO_(::google::protobuf::internal::WireFormat::ReadString(input, mutable_language()));
        if (input->ExpectTag(24)) goto parse_testIndexes;
        break;
      }
      
      // repeated int32 testIndexes = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_testIndexes:
        ::google::protobuf::int32 value;
        DO_(::google::protobuf::internal::WireFormat::ReadInt32(input, &value));
        add_testindexes(value);
        if (input->ExpectTag(24)) goto parse_testIndexes;
        if (input->ExpectTag(34)) goto parse_maxPoints;
        break;
      }
      
      // repeated string maxPoints = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_maxPoints:
        DO_(::google::protobuf::internal::WireFormat::ReadString(
             input, add_maxpoints()));
        if (input->ExpectTag(34)) goto parse_maxPoints;
        if (input->ExpectTag(40)) goto parse_explicitGrade;
        break;
      }
      
      // required bool explicitGrade = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_explicitGrade:
        DO_(::google::protobuf::internal::WireFormat::ReadBool(
              input, &explicitgrade_));
        _set_bit(4);
        if (input->ExpectTag(128)) goto parse_taskType;
        break;
      }
      
      // required int32 taskType = 16;
      case 16: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_taskType:
        DO_(::google::protobuf::internal::WireFormat::ReadInt32(
              input, &tasktype_));
        _set_bit(5);
        if (input->ExpectTag(136)) goto parse_timeLimit;
        break;
      }
      
      // required int32 timeLimit = 17;
      case 17: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_timeLimit:
        DO_(::google::protobuf::internal::WireFormat::ReadInt32(
              input, &timelimit_));
        _set_bit(6);
        if (input->ExpectTag(144)) goto parse_outputLimit;
        break;
      }
      
      // required int32 outputLimit = 18;
      case 18: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_outputLimit:
        DO_(::google::protobuf::internal::WireFormat::ReadInt32(
              input, &outputlimit_));
        _set_bit(7);
        if (input->ExpectTag(152)) goto parse_testsCount;
        break;
      }
      
      // required int32 testsCount = 19;
      case 19: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_testsCount:
        DO_(::google::protobuf::internal::WireFormat::ReadInt32(
              input, &testscount_));
        _set_bit(8);
        if (input->ExpectTag(160)) goto parse_memoryLimit;
        break;
      }
      
      // required int32 memoryLimit = 20;
      case 20: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_memoryLimit:
        DO_(::google::protobuf::internal::WireFormat::ReadInt32(
              input, &memorylimit_));
        _set_bit(9);
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormat::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Grade::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    Grade::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // required string taskName = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormat::WriteString(1, this->taskname(), output);
  }
  
  // required string language = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormat::WriteString(2, this->language(), output);
  }
  
  // repeated int32 testIndexes = 3;
  for (int i = 0; i < this->testindexes_size(); i++) {
    ::google::protobuf::internal::WireFormat::WriteInt32(3, this->testindexes(i), output);
  }
  
  // repeated string maxPoints = 4;
  for (int i = 0; i < this->maxpoints_size(); i++) {
    ::google::protobuf::internal::WireFormat::WriteString(4, this->maxpoints(i), output);
  }
  
  // required bool explicitGrade = 5;
  if (_has_bit(4)) {
    ::google::protobuf::internal::WireFormat::WriteBool(5, this->explicitgrade(), output);
  }
  
  // required int32 taskType = 16;
  if (_has_bit(5)) {
    ::google::protobuf::internal::WireFormat::WriteInt32(16, this->tasktype(), output);
  }
  
  // required int32 timeLimit = 17;
  if (_has_bit(6)) {
    ::google::protobuf::internal::WireFormat::WriteInt32(17, this->timelimit(), output);
  }
  
  // required int32 outputLimit = 18;
  if (_has_bit(7)) {
    ::google::protobuf::internal::WireFormat::WriteInt32(18, this->outputlimit(), output);
  }
  
  // required int32 testsCount = 19;
  if (_has_bit(8)) {
    ::google::protobuf::internal::WireFormat::WriteInt32(19, this->testscount(), output);
  }
  
  // required int32 memoryLimit = 20;
  if (_has_bit(9)) {
    ::google::protobuf::internal::WireFormat::WriteInt32(20, this->memorylimit(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Grade::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string taskName = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormat::WriteStringToArray(1, this->taskname(), target);
  }
  
  // required string language = 2;
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormat::WriteStringToArray(2, this->language(), target);
  }
  
  // repeated int32 testIndexes = 3;
  for (int i = 0; i < this->testindexes_size(); i++) {
    target = ::google::protobuf::internal::WireFormat::WriteInt32ToArray(3, this->testindexes(i), target);
  }
  
  // repeated string maxPoints = 4;
  for (int i = 0; i < this->maxpoints_size(); i++) {
    target = ::google::protobuf::internal::WireFormat::WriteStringToArray(4, this->maxpoints(i), target);
  }
  
  // required bool explicitGrade = 5;
  if (_has_bit(4)) {
    target = ::google::protobuf::internal::WireFormat::WriteBoolToArray(5, this->explicitgrade(), target);
  }
  
  // required int32 taskType = 16;
  if (_has_bit(5)) {
    target = ::google::protobuf::internal::WireFormat::WriteInt32ToArray(16, this->tasktype(), target);
  }
  
  // required int32 timeLimit = 17;
  if (_has_bit(6)) {
    target = ::google::protobuf::internal::WireFormat::WriteInt32ToArray(17, this->timelimit(), target);
  }
  
  // required int32 outputLimit = 18;
  if (_has_bit(7)) {
    target = ::google::protobuf::internal::WireFormat::WriteInt32ToArray(18, this->outputlimit(), target);
  }
  
  // required int32 testsCount = 19;
  if (_has_bit(8)) {
    target = ::google::protobuf::internal::WireFormat::WriteInt32ToArray(19, this->testscount(), target);
  }
  
  // required int32 memoryLimit = 20;
  if (_has_bit(9)) {
    target = ::google::protobuf::internal::WireFormat::WriteInt32ToArray(20, this->memorylimit(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Grade::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string taskName = 1;
    if (has_taskname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormat::StringSize(this->taskname());
    }
    
    // required string language = 2;
    if (has_language()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormat::StringSize(this->language());
    }
    
    // required bool explicitGrade = 5;
    if (has_explicitgrade()) {
      total_size += 1 + 1;
    }
    
    // required int32 taskType = 16;
    if (has_tasktype()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormat::Int32Size(
          this->tasktype());
    }
    
    // required int32 timeLimit = 17;
    if (has_timelimit()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormat::Int32Size(
          this->timelimit());
    }
    
    // required int32 outputLimit = 18;
    if (has_outputlimit()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormat::Int32Size(
          this->outputlimit());
    }
    
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // required int32 testsCount = 19;
    if (has_testscount()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormat::Int32Size(
          this->testscount());
    }
    
    // required int32 memoryLimit = 20;
    if (has_memorylimit()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormat::Int32Size(
          this->memorylimit());
    }
    
  }
  // repeated int32 testIndexes = 3;
  {
    int data_size = 0;
    for (int i = 0; i < this->testindexes_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormat::Int32Size(
        this->testindexes(i));
    }
    total_size += 1 * this->testindexes_size() + data_size;
  }
  
  // repeated string maxPoints = 4;
  total_size += 1 * this->maxpoints_size();
  for (int i = 0; i < this->maxpoints_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormat::StringSize(
      this->maxpoints(i));
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  _cached_size_ = total_size;
  return total_size;
}

void Grade::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Grade* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Grade*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Grade::MergeFrom(const Grade& from) {
  GOOGLE_CHECK_NE(&from, this);
  testindexes_.MergeFrom(from.testindexes_);
  maxpoints_.MergeFrom(from.maxpoints_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_taskname(from.taskname());
    }
    if (from._has_bit(1)) {
      set_language(from.language());
    }
    if (from._has_bit(4)) {
      set_explicitgrade(from.explicitgrade());
    }
    if (from._has_bit(5)) {
      set_tasktype(from.tasktype());
    }
    if (from._has_bit(6)) {
      set_timelimit(from.timelimit());
    }
    if (from._has_bit(7)) {
      set_outputlimit(from.outputlimit());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from._has_bit(8)) {
      set_testscount(from.testscount());
    }
    if (from._has_bit(9)) {
      set_memorylimit(from.memorylimit());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Grade::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Grade::CopyFrom(const Grade& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Grade::Swap(Grade* other) {
  if (other != this) {
    std::swap(taskname_, other->taskname_);
    std::swap(language_, other->language_);
    testindexes_.Swap(&other->testindexes_);
    maxpoints_.Swap(&other->maxpoints_);
    std::swap(explicitgrade_, other->explicitgrade_);
    std::swap(tasktype_, other->tasktype_);
    std::swap(timelimit_, other->timelimit_);
    std::swap(outputlimit_, other->outputlimit_);
    std::swap(testscount_, other->testscount_);
    std::swap(memorylimit_, other->memorylimit_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

bool Grade::IsInitialized() const {
  if ((_has_bits_[0] & 0x000003f3) != 0x000003f3) return false;
  
  return true;
}

const ::google::protobuf::Descriptor* Grade::GetDescriptor() const {
  return descriptor();
}

const ::google::protobuf::Reflection* Grade::GetReflection() const {
  protobuf_AssignDescriptorsOnce();
  return Grade_reflection_;
}

// ===================================================================

const ::std::string GradeResult::_default_sampleoutput_;
#ifndef _MSC_VER
const int GradeResult::kSampleOutputFieldNumber;
const int GradeResult::kTestIndexesFieldNumber;
const int GradeResult::kResultFieldNumber;
const int GradeResult::kAcceptFieldNumber;
#endif  // !_MSC_VER

GradeResult::GradeResult()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void GradeResult::InitAsDefaultInstance() {}

GradeResult::GradeResult(const GradeResult& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void GradeResult::SharedCtor() {
  _cached_size_ = 0;
  sampleoutput_ = const_cast< ::std::string*>(&_default_sampleoutput_);
  accept_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GradeResult::~GradeResult() {
  SharedDtor();
}

void GradeResult::SharedDtor() {
  if (sampleoutput_ != &_default_sampleoutput_) {
    delete sampleoutput_;
  }
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* GradeResult::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GradeResult_descriptor_;
}

const GradeResult& GradeResult::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_grade_2eproto();  return *default_instance_;
}

GradeResult* GradeResult::default_instance_ = NULL;

GradeResult* GradeResult::New() const {
  return new GradeResult;
}

void GradeResult::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (_has_bit(0)) {
      if (sampleoutput_ != &_default_sampleoutput_) {
        sampleoutput_->clear();
      }
    }
    accept_ = false;
  }
  testindexes_.Clear();
  result_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool GradeResult::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormat::GetTagFieldNumber(tag)) {
      // optional string sampleOutput = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
        DO_(::google::protobuf::internal::WireFormat::ReadString(input, mutable_sampleoutput()));
        if (input->ExpectTag(16)) goto parse_testIndexes;
        break;
      }
      
      // repeated int32 testIndexes = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_testIndexes:
        ::google::protobuf::int32 value;
        DO_(::google::protobuf::internal::WireFormat::ReadInt32(input, &value));
        add_testindexes(value);
        if (input->ExpectTag(16)) goto parse_testIndexes;
        if (input->ExpectTag(26)) goto parse_result;
        break;
      }
      
      // repeated string result = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
       parse_result:
        DO_(::google::protobuf::internal::WireFormat::ReadString(
             input, add_result()));
        if (input->ExpectTag(26)) goto parse_result;
        if (input->ExpectTag(32)) goto parse_accept;
        break;
      }
      
      // optional bool accept = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormat::WIRETYPE_VARINT) {
          goto handle_uninterpreted;
        }
       parse_accept:
        DO_(::google::protobuf::internal::WireFormat::ReadBool(
              input, &accept_));
        _set_bit(3);
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormat::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormat::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void GradeResult::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    GradeResult::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // optional string sampleOutput = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormat::WriteString(1, this->sampleoutput(), output);
  }
  
  // repeated int32 testIndexes = 2;
  for (int i = 0; i < this->testindexes_size(); i++) {
    ::google::protobuf::internal::WireFormat::WriteInt32(2, this->testindexes(i), output);
  }
  
  // repeated string result = 3;
  for (int i = 0; i < this->result_size(); i++) {
    ::google::protobuf::internal::WireFormat::WriteString(3, this->result(i), output);
  }
  
  // optional bool accept = 4;
  if (_has_bit(3)) {
    ::google::protobuf::internal::WireFormat::WriteBool(4, this->accept(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* GradeResult::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string sampleOutput = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormat::WriteStringToArray(1, this->sampleoutput(), target);
  }
  
  // repeated int32 testIndexes = 2;
  for (int i = 0; i < this->testindexes_size(); i++) {
    target = ::google::protobuf::internal::WireFormat::WriteInt32ToArray(2, this->testindexes(i), target);
  }
  
  // repeated string result = 3;
  for (int i = 0; i < this->result_size(); i++) {
    target = ::google::protobuf::internal::WireFormat::WriteStringToArray(3, this->result(i), target);
  }
  
  // optional bool accept = 4;
  if (_has_bit(3)) {
    target = ::google::protobuf::internal::WireFormat::WriteBoolToArray(4, this->accept(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int GradeResult::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string sampleOutput = 1;
    if (has_sampleoutput()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormat::StringSize(this->sampleoutput());
    }
    
    // optional bool accept = 4;
    if (has_accept()) {
      total_size += 1 + 1;
    }
    
  }
  // repeated int32 testIndexes = 2;
  {
    int data_size = 0;
    for (int i = 0; i < this->testindexes_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormat::Int32Size(
        this->testindexes(i));
    }
    total_size += 1 * this->testindexes_size() + data_size;
  }
  
  // repeated string result = 3;
  total_size += 1 * this->result_size();
  for (int i = 0; i < this->result_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormat::StringSize(
      this->result(i));
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  _cached_size_ = total_size;
  return total_size;
}

void GradeResult::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const GradeResult* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const GradeResult*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void GradeResult::MergeFrom(const GradeResult& from) {
  GOOGLE_CHECK_NE(&from, this);
  testindexes_.MergeFrom(from.testindexes_);
  result_.MergeFrom(from.result_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_sampleoutput(from.sampleoutput());
    }
    if (from._has_bit(3)) {
      set_accept(from.accept());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void GradeResult::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GradeResult::CopyFrom(const GradeResult& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GradeResult::Swap(GradeResult* other) {
  if (other != this) {
    std::swap(sampleoutput_, other->sampleoutput_);
    testindexes_.Swap(&other->testindexes_);
    result_.Swap(&other->result_);
    std::swap(accept_, other->accept_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

bool GradeResult::IsInitialized() const {
  
  return true;
}

const ::google::protobuf::Descriptor* GradeResult::GetDescriptor() const {
  return descriptor();
}

const ::google::protobuf::Reflection* GradeResult::GetReflection() const {
  protobuf_AssignDescriptorsOnce();
  return GradeResult_reflection_;
}

}  // namespace model
