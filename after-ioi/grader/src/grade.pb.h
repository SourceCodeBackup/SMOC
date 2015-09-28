// Generated by the protocol buffer compiler.  DO NOT EDIT!

#ifndef PROTOBUF_grade_2eproto__INCLUDED
#define PROTOBUF_grade_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>

namespace model {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_grade_2eproto();
void protobuf_AssignDesc_grade_2eproto();
void protobuf_ShutdownFile_grade_2eproto();

class Grade;
class GradeResult;

// ===================================================================

class Grade : public ::google::protobuf::Message {
 public:
  Grade();
  virtual ~Grade();
  
  Grade(const Grade& from);
  
  inline Grade& operator=(const Grade& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const Grade& default_instance();
  void Swap(Grade* other);
  
  // implements Message ----------------------------------------------
  
  Grade* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Grade& from);
  void MergeFrom(const Grade& from);
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
  void SetCachedSize(int size) const { _cached_size_ = size; }
  public:
  
  const ::google::protobuf::Descriptor* GetDescriptor() const;
  const ::google::protobuf::Reflection* GetReflection() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required string taskName = 1;
  inline bool has_taskname() const;
  inline void clear_taskname();
  static const int kTaskNameFieldNumber = 1;
  inline const ::std::string& taskname() const;
  inline void set_taskname(const ::std::string& value);
  inline void set_taskname(const char* value);
  inline void set_taskname(const char* value, size_t size);
  inline ::std::string* mutable_taskname();
  
  // required string language = 2;
  inline bool has_language() const;
  inline void clear_language();
  static const int kLanguageFieldNumber = 2;
  inline const ::std::string& language() const;
  inline void set_language(const ::std::string& value);
  inline void set_language(const char* value);
  inline void set_language(const char* value, size_t size);
  inline ::std::string* mutable_language();
  
  // repeated int32 testIndexes = 3;
  inline int testindexes_size() const;
  inline void clear_testindexes();
  static const int kTestIndexesFieldNumber = 3;
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >& testindexes() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >* mutable_testindexes();
  inline ::google::protobuf::int32 testindexes(int index) const;
  inline void set_testindexes(int index, ::google::protobuf::int32 value);
  inline void add_testindexes(::google::protobuf::int32 value);
  
  // repeated string maxPoints = 4;
  inline int maxpoints_size() const;
  inline void clear_maxpoints();
  static const int kMaxPointsFieldNumber = 4;
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& maxpoints() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_maxpoints();
  inline const ::std::string& maxpoints(int index) const;
  inline ::std::string* mutable_maxpoints(int index);
  inline void set_maxpoints(int index, const ::std::string& value);
  inline void set_maxpoints(int index, const char* value);
  inline void set_maxpoints(int index, const char* value, size_t size);
  inline ::std::string* add_maxpoints();
  inline void add_maxpoints(const ::std::string& value);
  inline void add_maxpoints(const char* value);
  inline void add_maxpoints(const char* value, size_t size);
  
  // required bool explicitGrade = 5;
  inline bool has_explicitgrade() const;
  inline void clear_explicitgrade();
  static const int kExplicitGradeFieldNumber = 5;
  inline bool explicitgrade() const;
  inline void set_explicitgrade(bool value);
  
  // required int32 taskType = 16;
  inline bool has_tasktype() const;
  inline void clear_tasktype();
  static const int kTaskTypeFieldNumber = 16;
  inline ::google::protobuf::int32 tasktype() const;
  inline void set_tasktype(::google::protobuf::int32 value);
  
  // required int32 timeLimit = 17;
  inline bool has_timelimit() const;
  inline void clear_timelimit();
  static const int kTimeLimitFieldNumber = 17;
  inline ::google::protobuf::int32 timelimit() const;
  inline void set_timelimit(::google::protobuf::int32 value);
  
  // required int32 outputLimit = 18;
  inline bool has_outputlimit() const;
  inline void clear_outputlimit();
  static const int kOutputLimitFieldNumber = 18;
  inline ::google::protobuf::int32 outputlimit() const;
  inline void set_outputlimit(::google::protobuf::int32 value);
  
  // required int32 testsCount = 19;
  inline bool has_testscount() const;
  inline void clear_testscount();
  static const int kTestsCountFieldNumber = 19;
  inline ::google::protobuf::int32 testscount() const;
  inline void set_testscount(::google::protobuf::int32 value);
  
  // required int32 memoryLimit = 20;
  inline bool has_memorylimit() const;
  inline void clear_memorylimit();
  static const int kMemoryLimitFieldNumber = 20;
  inline ::google::protobuf::int32 memorylimit() const;
  inline void set_memorylimit(::google::protobuf::int32 value);
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::std::string* taskname_;
  static const ::std::string _default_taskname_;
  ::std::string* language_;
  static const ::std::string _default_language_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > testindexes_;
  ::google::protobuf::RepeatedPtrField< ::std::string> maxpoints_;
  bool explicitgrade_;
  ::google::protobuf::int32 tasktype_;
  ::google::protobuf::int32 timelimit_;
  ::google::protobuf::int32 outputlimit_;
  ::google::protobuf::int32 testscount_;
  ::google::protobuf::int32 memorylimit_;
  friend void  protobuf_AddDesc_grade_2eproto();
  friend void protobuf_AssignDesc_grade_2eproto();
  friend void protobuf_ShutdownFile_grade_2eproto();
  ::google::protobuf::uint32 _has_bits_[(10 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static Grade* default_instance_;
};
// -------------------------------------------------------------------

class GradeResult : public ::google::protobuf::Message {
 public:
  GradeResult();
  virtual ~GradeResult();
  
  GradeResult(const GradeResult& from);
  
  inline GradeResult& operator=(const GradeResult& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const GradeResult& default_instance();
  void Swap(GradeResult* other);
  
  // implements Message ----------------------------------------------
  
  GradeResult* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GradeResult& from);
  void MergeFrom(const GradeResult& from);
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
  void SetCachedSize(int size) const { _cached_size_ = size; }
  public:
  
  const ::google::protobuf::Descriptor* GetDescriptor() const;
  const ::google::protobuf::Reflection* GetReflection() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional string sampleOutput = 1;
  inline bool has_sampleoutput() const;
  inline void clear_sampleoutput();
  static const int kSampleOutputFieldNumber = 1;
  inline const ::std::string& sampleoutput() const;
  inline void set_sampleoutput(const ::std::string& value);
  inline void set_sampleoutput(const char* value);
  inline void set_sampleoutput(const char* value, size_t size);
  inline ::std::string* mutable_sampleoutput();
  
  // repeated int32 testIndexes = 2;
  inline int testindexes_size() const;
  inline void clear_testindexes();
  static const int kTestIndexesFieldNumber = 2;
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >& testindexes() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >* mutable_testindexes();
  inline ::google::protobuf::int32 testindexes(int index) const;
  inline void set_testindexes(int index, ::google::protobuf::int32 value);
  inline void add_testindexes(::google::protobuf::int32 value);
  
  // repeated string result = 3;
  inline int result_size() const;
  inline void clear_result();
  static const int kResultFieldNumber = 3;
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& result() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_result();
  inline const ::std::string& result(int index) const;
  inline ::std::string* mutable_result(int index);
  inline void set_result(int index, const ::std::string& value);
  inline void set_result(int index, const char* value);
  inline void set_result(int index, const char* value, size_t size);
  inline ::std::string* add_result();
  inline void add_result(const ::std::string& value);
  inline void add_result(const char* value);
  inline void add_result(const char* value, size_t size);
  
  // optional bool accept = 4;
  inline bool has_accept() const;
  inline void clear_accept();
  static const int kAcceptFieldNumber = 4;
  inline bool accept() const;
  inline void set_accept(bool value);
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::std::string* sampleoutput_;
  static const ::std::string _default_sampleoutput_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > testindexes_;
  ::google::protobuf::RepeatedPtrField< ::std::string> result_;
  bool accept_;
  friend void  protobuf_AddDesc_grade_2eproto();
  friend void protobuf_AssignDesc_grade_2eproto();
  friend void protobuf_ShutdownFile_grade_2eproto();
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static GradeResult* default_instance_;
};
// ===================================================================


// ===================================================================


// ===================================================================

// Grade

// required string taskName = 1;
inline bool Grade::has_taskname() const {
  return _has_bit(0);
}
inline void Grade::clear_taskname() {
  if (taskname_ != &_default_taskname_) {
    taskname_->clear();
  }
  _clear_bit(0);
}
inline const ::std::string& Grade::taskname() const {
  return *taskname_;
}
inline void Grade::set_taskname(const ::std::string& value) {
  _set_bit(0);
  if (taskname_ == &_default_taskname_) {
    taskname_ = new ::std::string;
  }
  taskname_->assign(value);
}
inline void Grade::set_taskname(const char* value) {
  _set_bit(0);
  if (taskname_ == &_default_taskname_) {
    taskname_ = new ::std::string;
  }
  taskname_->assign(value);
}
inline void Grade::set_taskname(const char* value, size_t size) {
  _set_bit(0);
  if (taskname_ == &_default_taskname_) {
    taskname_ = new ::std::string;
  }
  taskname_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Grade::mutable_taskname() {
  _set_bit(0);
  if (taskname_ == &_default_taskname_) {
    taskname_ = new ::std::string;
  }
  return taskname_;
}

// required string language = 2;
inline bool Grade::has_language() const {
  return _has_bit(1);
}
inline void Grade::clear_language() {
  if (language_ != &_default_language_) {
    language_->clear();
  }
  _clear_bit(1);
}
inline const ::std::string& Grade::language() const {
  return *language_;
}
inline void Grade::set_language(const ::std::string& value) {
  _set_bit(1);
  if (language_ == &_default_language_) {
    language_ = new ::std::string;
  }
  language_->assign(value);
}
inline void Grade::set_language(const char* value) {
  _set_bit(1);
  if (language_ == &_default_language_) {
    language_ = new ::std::string;
  }
  language_->assign(value);
}
inline void Grade::set_language(const char* value, size_t size) {
  _set_bit(1);
  if (language_ == &_default_language_) {
    language_ = new ::std::string;
  }
  language_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Grade::mutable_language() {
  _set_bit(1);
  if (language_ == &_default_language_) {
    language_ = new ::std::string;
  }
  return language_;
}

// repeated int32 testIndexes = 3;
inline int Grade::testindexes_size() const {
  return testindexes_.size();
}
inline void Grade::clear_testindexes() {
  testindexes_.Clear();
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
Grade::testindexes() const {
  return testindexes_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
Grade::mutable_testindexes() {
  return &testindexes_;
}
inline ::google::protobuf::int32 Grade::testindexes(int index) const {
  return testindexes_.Get(index);
}
inline void Grade::set_testindexes(int index, ::google::protobuf::int32 value) {
  testindexes_.Set(index, value);
}
inline void Grade::add_testindexes(::google::protobuf::int32 value) {
  testindexes_.Add(value);
}

// repeated string maxPoints = 4;
inline int Grade::maxpoints_size() const {
  return maxpoints_.size();
}
inline void Grade::clear_maxpoints() {
  maxpoints_.Clear();
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
Grade::maxpoints() const {
  return maxpoints_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
Grade::mutable_maxpoints() {
  return &maxpoints_;
}
inline const ::std::string& Grade::maxpoints(int index) const {
  return maxpoints_.Get(index);
}
inline ::std::string* Grade::mutable_maxpoints(int index) {
  return maxpoints_.Mutable(index);
}
inline void Grade::set_maxpoints(int index, const ::std::string& value) {
  maxpoints_.Mutable(index)->assign(value);
}
inline void Grade::set_maxpoints(int index, const char* value) {
  maxpoints_.Mutable(index)->assign(value);
}
inline void Grade::set_maxpoints(int index, const char* value, size_t size) {
  maxpoints_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Grade::add_maxpoints() {
  return maxpoints_.Add();
}
inline void Grade::add_maxpoints(const ::std::string& value) {
  maxpoints_.Add()->assign(value);
}
inline void Grade::add_maxpoints(const char* value) {
  maxpoints_.Add()->assign(value);
}
inline void Grade::add_maxpoints(const char* value, size_t size) {
  maxpoints_.Add()->assign(reinterpret_cast<const char*>(value), size);
}

// required bool explicitGrade = 5;
inline bool Grade::has_explicitgrade() const {
  return _has_bit(4);
}
inline void Grade::clear_explicitgrade() {
  explicitgrade_ = false;
  _clear_bit(4);
}
inline bool Grade::explicitgrade() const {
  return explicitgrade_;
}
inline void Grade::set_explicitgrade(bool value) {
  _set_bit(4);
  explicitgrade_ = value;
}

// required int32 taskType = 16;
inline bool Grade::has_tasktype() const {
  return _has_bit(5);
}
inline void Grade::clear_tasktype() {
  tasktype_ = 0;
  _clear_bit(5);
}
inline ::google::protobuf::int32 Grade::tasktype() const {
  return tasktype_;
}
inline void Grade::set_tasktype(::google::protobuf::int32 value) {
  _set_bit(5);
  tasktype_ = value;
}

// required int32 timeLimit = 17;
inline bool Grade::has_timelimit() const {
  return _has_bit(6);
}
inline void Grade::clear_timelimit() {
  timelimit_ = 0;
  _clear_bit(6);
}
inline ::google::protobuf::int32 Grade::timelimit() const {
  return timelimit_;
}
inline void Grade::set_timelimit(::google::protobuf::int32 value) {
  _set_bit(6);
  timelimit_ = value;
}

// required int32 outputLimit = 18;
inline bool Grade::has_outputlimit() const {
  return _has_bit(7);
}
inline void Grade::clear_outputlimit() {
  outputlimit_ = 0;
  _clear_bit(7);
}
inline ::google::protobuf::int32 Grade::outputlimit() const {
  return outputlimit_;
}
inline void Grade::set_outputlimit(::google::protobuf::int32 value) {
  _set_bit(7);
  outputlimit_ = value;
}

// required int32 testsCount = 19;
inline bool Grade::has_testscount() const {
  return _has_bit(8);
}
inline void Grade::clear_testscount() {
  testscount_ = 0;
  _clear_bit(8);
}
inline ::google::protobuf::int32 Grade::testscount() const {
  return testscount_;
}
inline void Grade::set_testscount(::google::protobuf::int32 value) {
  _set_bit(8);
  testscount_ = value;
}

// required int32 memoryLimit = 20;
inline bool Grade::has_memorylimit() const {
  return _has_bit(9);
}
inline void Grade::clear_memorylimit() {
  memorylimit_ = 0;
  _clear_bit(9);
}
inline ::google::protobuf::int32 Grade::memorylimit() const {
  return memorylimit_;
}
inline void Grade::set_memorylimit(::google::protobuf::int32 value) {
  _set_bit(9);
  memorylimit_ = value;
}

// -------------------------------------------------------------------

// GradeResult

// optional string sampleOutput = 1;
inline bool GradeResult::has_sampleoutput() const {
  return _has_bit(0);
}
inline void GradeResult::clear_sampleoutput() {
  if (sampleoutput_ != &_default_sampleoutput_) {
    sampleoutput_->clear();
  }
  _clear_bit(0);
}
inline const ::std::string& GradeResult::sampleoutput() const {
  return *sampleoutput_;
}
inline void GradeResult::set_sampleoutput(const ::std::string& value) {
  _set_bit(0);
  if (sampleoutput_ == &_default_sampleoutput_) {
    sampleoutput_ = new ::std::string;
  }
  sampleoutput_->assign(value);
}
inline void GradeResult::set_sampleoutput(const char* value) {
  _set_bit(0);
  if (sampleoutput_ == &_default_sampleoutput_) {
    sampleoutput_ = new ::std::string;
  }
  sampleoutput_->assign(value);
}
inline void GradeResult::set_sampleoutput(const char* value, size_t size) {
  _set_bit(0);
  if (sampleoutput_ == &_default_sampleoutput_) {
    sampleoutput_ = new ::std::string;
  }
  sampleoutput_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* GradeResult::mutable_sampleoutput() {
  _set_bit(0);
  if (sampleoutput_ == &_default_sampleoutput_) {
    sampleoutput_ = new ::std::string;
  }
  return sampleoutput_;
}

// repeated int32 testIndexes = 2;
inline int GradeResult::testindexes_size() const {
  return testindexes_.size();
}
inline void GradeResult::clear_testindexes() {
  testindexes_.Clear();
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
GradeResult::testindexes() const {
  return testindexes_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
GradeResult::mutable_testindexes() {
  return &testindexes_;
}
inline ::google::protobuf::int32 GradeResult::testindexes(int index) const {
  return testindexes_.Get(index);
}
inline void GradeResult::set_testindexes(int index, ::google::protobuf::int32 value) {
  testindexes_.Set(index, value);
}
inline void GradeResult::add_testindexes(::google::protobuf::int32 value) {
  testindexes_.Add(value);
}

// repeated string result = 3;
inline int GradeResult::result_size() const {
  return result_.size();
}
inline void GradeResult::clear_result() {
  result_.Clear();
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
GradeResult::result() const {
  return result_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
GradeResult::mutable_result() {
  return &result_;
}
inline const ::std::string& GradeResult::result(int index) const {
  return result_.Get(index);
}
inline ::std::string* GradeResult::mutable_result(int index) {
  return result_.Mutable(index);
}
inline void GradeResult::set_result(int index, const ::std::string& value) {
  result_.Mutable(index)->assign(value);
}
inline void GradeResult::set_result(int index, const char* value) {
  result_.Mutable(index)->assign(value);
}
inline void GradeResult::set_result(int index, const char* value, size_t size) {
  result_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* GradeResult::add_result() {
  return result_.Add();
}
inline void GradeResult::add_result(const ::std::string& value) {
  result_.Add()->assign(value);
}
inline void GradeResult::add_result(const char* value) {
  result_.Add()->assign(value);
}
inline void GradeResult::add_result(const char* value, size_t size) {
  result_.Add()->assign(reinterpret_cast<const char*>(value), size);
}

// optional bool accept = 4;
inline bool GradeResult::has_accept() const {
  return _has_bit(3);
}
inline void GradeResult::clear_accept() {
  accept_ = false;
  _clear_bit(3);
}
inline bool GradeResult::accept() const {
  return accept_;
}
inline void GradeResult::set_accept(bool value) {
  _set_bit(3);
  accept_ = value;
}


}  // namespace model
#endif  // PROTOBUF_grade_2eproto__INCLUDED