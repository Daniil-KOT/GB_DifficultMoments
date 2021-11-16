// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Students.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Students_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Students_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Students_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Students_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Students_2eproto;
namespace University {
class FullName;
struct FullNameDefaultTypeInternal;
extern FullNameDefaultTypeInternal _FullName_default_instance_;
class Student;
struct StudentDefaultTypeInternal;
extern StudentDefaultTypeInternal _Student_default_instance_;
class StudentsGroup;
struct StudentsGroupDefaultTypeInternal;
extern StudentsGroupDefaultTypeInternal _StudentsGroup_default_instance_;
}  // namespace University
PROTOBUF_NAMESPACE_OPEN
template<> ::University::FullName* Arena::CreateMaybeMessage<::University::FullName>(Arena*);
template<> ::University::Student* Arena::CreateMaybeMessage<::University::Student>(Arena*);
template<> ::University::StudentsGroup* Arena::CreateMaybeMessage<::University::StudentsGroup>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace University {

// ===================================================================

class FullName final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:University.FullName) */ {
 public:
  inline FullName() : FullName(nullptr) {}
  ~FullName() override;
  explicit constexpr FullName(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  FullName(const FullName& from);
  FullName(FullName&& from) noexcept
    : FullName() {
    *this = ::std::move(from);
  }

  inline FullName& operator=(const FullName& from) {
    CopyFrom(from);
    return *this;
  }
  inline FullName& operator=(FullName&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const FullName& default_instance() {
    return *internal_default_instance();
  }
  enum PatronymicCase {
    kPatronymic = 3,
    kHasPatronymic = 4,
    PATRONYMIC_NOT_SET = 0,
  };

  static inline const FullName* internal_default_instance() {
    return reinterpret_cast<const FullName*>(
               &_FullName_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(FullName& a, FullName& b) {
    a.Swap(&b);
  }
  inline void Swap(FullName* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(FullName* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline FullName* New() const final {
    return new FullName();
  }

  FullName* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<FullName>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const FullName& from);
  void MergeFrom(const FullName& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(FullName* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "University.FullName";
  }
  protected:
  explicit FullName(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kSurnameFieldNumber = 2,
    kPatronymicFieldNumber = 3,
    kHasPatronymicFieldNumber = 4,
  };
  // string name_ = 1;
  void clear_name_();
  const std::string& name_() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name_(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name_();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_name_();
  void set_allocated_name_(std::string* name_);
  private:
  const std::string& _internal_name_() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name_(const std::string& value);
  std::string* _internal_mutable_name_();
  public:

  // string surname_ = 2;
  void clear_surname_();
  const std::string& surname_() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_surname_(ArgT0&& arg0, ArgT... args);
  std::string* mutable_surname_();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_surname_();
  void set_allocated_surname_(std::string* surname_);
  private:
  const std::string& _internal_surname_() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_surname_(const std::string& value);
  std::string* _internal_mutable_surname_();
  public:

  // string patronymic_ = 3;
  bool has_patronymic_() const;
  private:
  bool _internal_has_patronymic_() const;
  public:
  void clear_patronymic_();
  const std::string& patronymic_() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_patronymic_(ArgT0&& arg0, ArgT... args);
  std::string* mutable_patronymic_();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_patronymic_();
  void set_allocated_patronymic_(std::string* patronymic_);
  private:
  const std::string& _internal_patronymic_() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_patronymic_(const std::string& value);
  std::string* _internal_mutable_patronymic_();
  public:

  // bool hasPatronymic_ = 4;
  bool has_haspatronymic_() const;
  private:
  bool _internal_has_haspatronymic_() const;
  public:
  void clear_haspatronymic_();
  bool haspatronymic_() const;
  void set_haspatronymic_(bool value);
  private:
  bool _internal_haspatronymic_() const;
  void _internal_set_haspatronymic_(bool value);
  public:

  void clear_Patronymic();
  PatronymicCase Patronymic_case() const;
  // @@protoc_insertion_point(class_scope:University.FullName)
 private:
  class _Internal;
  void set_has_patronymic_();
  void set_has_haspatronymic_();

  inline bool has_Patronymic() const;
  inline void clear_has_Patronymic();

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name__;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr surname__;
  union PatronymicUnion {
    constexpr PatronymicUnion() : _constinit_{} {}
      ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized _constinit_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr patronymic__;
    bool haspatronymic__;
  } Patronymic_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 _oneof_case_[1];

  friend struct ::TableStruct_Students_2eproto;
};
// -------------------------------------------------------------------

class Student final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:University.Student) */ {
 public:
  inline Student() : Student(nullptr) {}
  ~Student() override;
  explicit constexpr Student(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Student(const Student& from);
  Student(Student&& from) noexcept
    : Student() {
    *this = ::std::move(from);
  }

  inline Student& operator=(const Student& from) {
    CopyFrom(from);
    return *this;
  }
  inline Student& operator=(Student&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Student& default_instance() {
    return *internal_default_instance();
  }
  static inline const Student* internal_default_instance() {
    return reinterpret_cast<const Student*>(
               &_Student_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Student& a, Student& b) {
    a.Swap(&b);
  }
  inline void Swap(Student* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Student* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Student* New() const final {
    return new Student();
  }

  Student* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Student>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Student& from);
  void MergeFrom(const Student& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Student* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "University.Student";
  }
  protected:
  explicit Student(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kScoresFieldNumber = 2,
    kNameFieldNumber = 1,
    kAverageFieldNumber = 3,
  };
  // repeated int32 scores_ = 2;
  int scores__size() const;
  private:
  int _internal_scores__size() const;
  public:
  void clear_scores_();
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_scores_(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      _internal_scores_() const;
  void _internal_add_scores_(::PROTOBUF_NAMESPACE_ID::int32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      _internal_mutable_scores_();
  public:
  ::PROTOBUF_NAMESPACE_ID::int32 scores_(int index) const;
  void set_scores_(int index, ::PROTOBUF_NAMESPACE_ID::int32 value);
  void add_scores_(::PROTOBUF_NAMESPACE_ID::int32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      scores_() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      mutable_scores_();

  // .University.FullName name_ = 1;
  bool has_name_() const;
  private:
  bool _internal_has_name_() const;
  public:
  void clear_name_();
  const ::University::FullName& name_() const;
  PROTOBUF_FUTURE_MUST_USE_RESULT ::University::FullName* release_name_();
  ::University::FullName* mutable_name_();
  void set_allocated_name_(::University::FullName* name_);
  private:
  const ::University::FullName& _internal_name_() const;
  ::University::FullName* _internal_mutable_name_();
  public:
  void unsafe_arena_set_allocated_name_(
      ::University::FullName* name_);
  ::University::FullName* unsafe_arena_release_name_();

  // int32 average_ = 3;
  void clear_average_();
  ::PROTOBUF_NAMESPACE_ID::int32 average_() const;
  void set_average_(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_average_() const;
  void _internal_set_average_(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:University.Student)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > scores__;
  mutable std::atomic<int> _scores__cached_byte_size_;
  ::University::FullName* name__;
  ::PROTOBUF_NAMESPACE_ID::int32 average__;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Students_2eproto;
};
// -------------------------------------------------------------------

class StudentsGroup final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:University.StudentsGroup) */ {
 public:
  inline StudentsGroup() : StudentsGroup(nullptr) {}
  ~StudentsGroup() override;
  explicit constexpr StudentsGroup(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  StudentsGroup(const StudentsGroup& from);
  StudentsGroup(StudentsGroup&& from) noexcept
    : StudentsGroup() {
    *this = ::std::move(from);
  }

  inline StudentsGroup& operator=(const StudentsGroup& from) {
    CopyFrom(from);
    return *this;
  }
  inline StudentsGroup& operator=(StudentsGroup&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const StudentsGroup& default_instance() {
    return *internal_default_instance();
  }
  static inline const StudentsGroup* internal_default_instance() {
    return reinterpret_cast<const StudentsGroup*>(
               &_StudentsGroup_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(StudentsGroup& a, StudentsGroup& b) {
    a.Swap(&b);
  }
  inline void Swap(StudentsGroup* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(StudentsGroup* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline StudentsGroup* New() const final {
    return new StudentsGroup();
  }

  StudentsGroup* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<StudentsGroup>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const StudentsGroup& from);
  void MergeFrom(const StudentsGroup& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(StudentsGroup* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "University.StudentsGroup";
  }
  protected:
  explicit StudentsGroup(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStudentsFieldNumber = 1,
  };
  // repeated .University.Student students_ = 1;
  int students__size() const;
  private:
  int _internal_students__size() const;
  public:
  void clear_students_();
  ::University::Student* mutable_students_(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::University::Student >*
      mutable_students_();
  private:
  const ::University::Student& _internal_students_(int index) const;
  ::University::Student* _internal_add_students_();
  public:
  const ::University::Student& students_(int index) const;
  ::University::Student* add_students_();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::University::Student >&
      students_() const;

  // @@protoc_insertion_point(class_scope:University.StudentsGroup)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::University::Student > students__;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Students_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FullName

// string name_ = 1;
inline void FullName::clear_name_() {
  name__.ClearToEmpty();
}
inline const std::string& FullName::name_() const {
  // @@protoc_insertion_point(field_get:University.FullName.name_)
  return _internal_name_();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void FullName::set_name_(ArgT0&& arg0, ArgT... args) {
 
 name__.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:University.FullName.name_)
}
inline std::string* FullName::mutable_name_() {
  // @@protoc_insertion_point(field_mutable:University.FullName.name_)
  return _internal_mutable_name_();
}
inline const std::string& FullName::_internal_name_() const {
  return name__.Get();
}
inline void FullName::_internal_set_name_(const std::string& value) {
  
  name__.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* FullName::_internal_mutable_name_() {
  
  return name__.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* FullName::release_name_() {
  // @@protoc_insertion_point(field_release:University.FullName.name_)
  return name__.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void FullName::set_allocated_name_(std::string* name_) {
  if (name_ != nullptr) {
    
  } else {
    
  }
  name__.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name_,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:University.FullName.name_)
}

// string surname_ = 2;
inline void FullName::clear_surname_() {
  surname__.ClearToEmpty();
}
inline const std::string& FullName::surname_() const {
  // @@protoc_insertion_point(field_get:University.FullName.surname_)
  return _internal_surname_();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void FullName::set_surname_(ArgT0&& arg0, ArgT... args) {
 
 surname__.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:University.FullName.surname_)
}
inline std::string* FullName::mutable_surname_() {
  // @@protoc_insertion_point(field_mutable:University.FullName.surname_)
  return _internal_mutable_surname_();
}
inline const std::string& FullName::_internal_surname_() const {
  return surname__.Get();
}
inline void FullName::_internal_set_surname_(const std::string& value) {
  
  surname__.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* FullName::_internal_mutable_surname_() {
  
  return surname__.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* FullName::release_surname_() {
  // @@protoc_insertion_point(field_release:University.FullName.surname_)
  return surname__.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void FullName::set_allocated_surname_(std::string* surname_) {
  if (surname_ != nullptr) {
    
  } else {
    
  }
  surname__.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), surname_,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:University.FullName.surname_)
}

// string patronymic_ = 3;
inline bool FullName::_internal_has_patronymic_() const {
  return Patronymic_case() == kPatronymic;
}
inline bool FullName::has_patronymic_() const {
  return _internal_has_patronymic_();
}
inline void FullName::set_has_patronymic_() {
  _oneof_case_[0] = kPatronymic;
}
inline void FullName::clear_patronymic_() {
  if (_internal_has_patronymic_()) {
    Patronymic_.patronymic__.Destroy(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
    clear_has_Patronymic();
  }
}
inline const std::string& FullName::patronymic_() const {
  // @@protoc_insertion_point(field_get:University.FullName.patronymic_)
  return _internal_patronymic_();
}
template <typename ArgT0, typename... ArgT>
inline void FullName::set_patronymic_(ArgT0&& arg0, ArgT... args) {
  if (!_internal_has_patronymic_()) {
    clear_Patronymic();
    set_has_patronymic_();
    Patronymic_.patronymic__.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  Patronymic_.patronymic__.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:University.FullName.patronymic_)
}
inline std::string* FullName::mutable_patronymic_() {
  // @@protoc_insertion_point(field_mutable:University.FullName.patronymic_)
  return _internal_mutable_patronymic_();
}
inline const std::string& FullName::_internal_patronymic_() const {
  if (_internal_has_patronymic_()) {
    return Patronymic_.patronymic__.Get();
  }
  return ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited();
}
inline void FullName::_internal_set_patronymic_(const std::string& value) {
  if (!_internal_has_patronymic_()) {
    clear_Patronymic();
    set_has_patronymic_();
    Patronymic_.patronymic__.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  Patronymic_.patronymic__.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* FullName::_internal_mutable_patronymic_() {
  if (!_internal_has_patronymic_()) {
    clear_Patronymic();
    set_has_patronymic_();
    Patronymic_.patronymic__.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  return Patronymic_.patronymic__.Mutable(
      ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* FullName::release_patronymic_() {
  // @@protoc_insertion_point(field_release:University.FullName.patronymic_)
  if (_internal_has_patronymic_()) {
    clear_has_Patronymic();
    return Patronymic_.patronymic__.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
  } else {
    return nullptr;
  }
}
inline void FullName::set_allocated_patronymic_(std::string* patronymic_) {
  if (has_Patronymic()) {
    clear_Patronymic();
  }
  if (patronymic_ != nullptr) {
    set_has_patronymic_();
    Patronymic_.patronymic__.UnsafeSetDefault(patronymic_);
    ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArenaForAllocation();
    if (arena != nullptr) {
      arena->Own(patronymic_);
    }
  }
  // @@protoc_insertion_point(field_set_allocated:University.FullName.patronymic_)
}

// bool hasPatronymic_ = 4;
inline bool FullName::_internal_has_haspatronymic_() const {
  return Patronymic_case() == kHasPatronymic;
}
inline bool FullName::has_haspatronymic_() const {
  return _internal_has_haspatronymic_();
}
inline void FullName::set_has_haspatronymic_() {
  _oneof_case_[0] = kHasPatronymic;
}
inline void FullName::clear_haspatronymic_() {
  if (_internal_has_haspatronymic_()) {
    Patronymic_.haspatronymic__ = false;
    clear_has_Patronymic();
  }
}
inline bool FullName::_internal_haspatronymic_() const {
  if (_internal_has_haspatronymic_()) {
    return Patronymic_.haspatronymic__;
  }
  return false;
}
inline void FullName::_internal_set_haspatronymic_(bool value) {
  if (!_internal_has_haspatronymic_()) {
    clear_Patronymic();
    set_has_haspatronymic_();
  }
  Patronymic_.haspatronymic__ = value;
}
inline bool FullName::haspatronymic_() const {
  // @@protoc_insertion_point(field_get:University.FullName.hasPatronymic_)
  return _internal_haspatronymic_();
}
inline void FullName::set_haspatronymic_(bool value) {
  _internal_set_haspatronymic_(value);
  // @@protoc_insertion_point(field_set:University.FullName.hasPatronymic_)
}

inline bool FullName::has_Patronymic() const {
  return Patronymic_case() != PATRONYMIC_NOT_SET;
}
inline void FullName::clear_has_Patronymic() {
  _oneof_case_[0] = PATRONYMIC_NOT_SET;
}
inline FullName::PatronymicCase FullName::Patronymic_case() const {
  return FullName::PatronymicCase(_oneof_case_[0]);
}
// -------------------------------------------------------------------

// Student

// .University.FullName name_ = 1;
inline bool Student::_internal_has_name_() const {
  return this != internal_default_instance() && name__ != nullptr;
}
inline bool Student::has_name_() const {
  return _internal_has_name_();
}
inline void Student::clear_name_() {
  if (GetArenaForAllocation() == nullptr && name__ != nullptr) {
    delete name__;
  }
  name__ = nullptr;
}
inline const ::University::FullName& Student::_internal_name_() const {
  const ::University::FullName* p = name__;
  return p != nullptr ? *p : reinterpret_cast<const ::University::FullName&>(
      ::University::_FullName_default_instance_);
}
inline const ::University::FullName& Student::name_() const {
  // @@protoc_insertion_point(field_get:University.Student.name_)
  return _internal_name_();
}
inline void Student::unsafe_arena_set_allocated_name_(
    ::University::FullName* name_) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(name__);
  }
  name__ = name_;
  if (name_) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:University.Student.name_)
}
inline ::University::FullName* Student::release_name_() {
  
  ::University::FullName* temp = name__;
  name__ = nullptr;
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::University::FullName* Student::unsafe_arena_release_name_() {
  // @@protoc_insertion_point(field_release:University.Student.name_)
  
  ::University::FullName* temp = name__;
  name__ = nullptr;
  return temp;
}
inline ::University::FullName* Student::_internal_mutable_name_() {
  
  if (name__ == nullptr) {
    auto* p = CreateMaybeMessage<::University::FullName>(GetArenaForAllocation());
    name__ = p;
  }
  return name__;
}
inline ::University::FullName* Student::mutable_name_() {
  // @@protoc_insertion_point(field_mutable:University.Student.name_)
  return _internal_mutable_name_();
}
inline void Student::set_allocated_name_(::University::FullName* name_) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete name__;
  }
  if (name_) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<::University::FullName>::GetOwningArena(name_);
    if (message_arena != submessage_arena) {
      name_ = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, name_, submessage_arena);
    }
    
  } else {
    
  }
  name__ = name_;
  // @@protoc_insertion_point(field_set_allocated:University.Student.name_)
}

// repeated int32 scores_ = 2;
inline int Student::_internal_scores__size() const {
  return scores__.size();
}
inline int Student::scores__size() const {
  return _internal_scores__size();
}
inline void Student::clear_scores_() {
  scores__.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Student::_internal_scores_(int index) const {
  return scores__.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Student::scores_(int index) const {
  // @@protoc_insertion_point(field_get:University.Student.scores_)
  return _internal_scores_(index);
}
inline void Student::set_scores_(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  scores__.Set(index, value);
  // @@protoc_insertion_point(field_set:University.Student.scores_)
}
inline void Student::_internal_add_scores_(::PROTOBUF_NAMESPACE_ID::int32 value) {
  scores__.Add(value);
}
inline void Student::add_scores_(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_add_scores_(value);
  // @@protoc_insertion_point(field_add:University.Student.scores_)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
Student::_internal_scores_() const {
  return scores__;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
Student::scores_() const {
  // @@protoc_insertion_point(field_list:University.Student.scores_)
  return _internal_scores_();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
Student::_internal_mutable_scores_() {
  return &scores__;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
Student::mutable_scores_() {
  // @@protoc_insertion_point(field_mutable_list:University.Student.scores_)
  return _internal_mutable_scores_();
}

// int32 average_ = 3;
inline void Student::clear_average_() {
  average__ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Student::_internal_average_() const {
  return average__;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Student::average_() const {
  // @@protoc_insertion_point(field_get:University.Student.average_)
  return _internal_average_();
}
inline void Student::_internal_set_average_(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  average__ = value;
}
inline void Student::set_average_(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_average_(value);
  // @@protoc_insertion_point(field_set:University.Student.average_)
}

// -------------------------------------------------------------------

// StudentsGroup

// repeated .University.Student students_ = 1;
inline int StudentsGroup::_internal_students__size() const {
  return students__.size();
}
inline int StudentsGroup::students__size() const {
  return _internal_students__size();
}
inline void StudentsGroup::clear_students_() {
  students__.Clear();
}
inline ::University::Student* StudentsGroup::mutable_students_(int index) {
  // @@protoc_insertion_point(field_mutable:University.StudentsGroup.students_)
  return students__.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::University::Student >*
StudentsGroup::mutable_students_() {
  // @@protoc_insertion_point(field_mutable_list:University.StudentsGroup.students_)
  return &students__;
}
inline const ::University::Student& StudentsGroup::_internal_students_(int index) const {
  return students__.Get(index);
}
inline const ::University::Student& StudentsGroup::students_(int index) const {
  // @@protoc_insertion_point(field_get:University.StudentsGroup.students_)
  return _internal_students_(index);
}
inline ::University::Student* StudentsGroup::_internal_add_students_() {
  return students__.Add();
}
inline ::University::Student* StudentsGroup::add_students_() {
  // @@protoc_insertion_point(field_add:University.StudentsGroup.students_)
  return _internal_add_students_();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::University::Student >&
StudentsGroup::students_() const {
  // @@protoc_insertion_point(field_list:University.StudentsGroup.students_)
  return students__;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace University

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Students_2eproto
