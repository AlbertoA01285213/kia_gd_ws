// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ur_ros_rtde_msgs:action/ExecutePath.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ur_ros_rtde_msgs/action/detail/execute_path__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ur_ros_rtde_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ExecutePath_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ur_ros_rtde_msgs::action::ExecutePath_Goal(_init);
}

void ExecutePath_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ur_ros_rtde_msgs::action::ExecutePath_Goal *>(message_memory);
  typed_message->~ExecutePath_Goal();
}

size_t size_function__ExecutePath_Goal__waypoints(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ur_ros_rtde_msgs::msg::Vector> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePath_Goal__waypoints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ur_ros_rtde_msgs::msg::Vector> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePath_Goal__waypoints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ur_ros_rtde_msgs::msg::Vector> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePath_Goal__waypoints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ur_ros_rtde_msgs::msg::Vector *>(
    get_const_function__ExecutePath_Goal__waypoints(untyped_member, index));
  auto & value = *reinterpret_cast<ur_ros_rtde_msgs::msg::Vector *>(untyped_value);
  value = item;
}

void assign_function__ExecutePath_Goal__waypoints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ur_ros_rtde_msgs::msg::Vector *>(
    get_function__ExecutePath_Goal__waypoints(untyped_member, index));
  const auto & value = *reinterpret_cast<const ur_ros_rtde_msgs::msg::Vector *>(untyped_value);
  item = value;
}

void resize_function__ExecutePath_Goal__waypoints(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ur_ros_rtde_msgs::msg::Vector> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePath_Goal__speed(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePath_Goal__speed(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePath_Goal__speed(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePath_Goal__speed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExecutePath_Goal__speed(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExecutePath_Goal__speed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExecutePath_Goal__speed(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExecutePath_Goal__speed(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePath_Goal__acceleration(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePath_Goal__acceleration(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePath_Goal__acceleration(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePath_Goal__acceleration(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExecutePath_Goal__acceleration(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExecutePath_Goal__acceleration(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExecutePath_Goal__acceleration(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExecutePath_Goal__acceleration(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePath_Goal__blend(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePath_Goal__blend(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePath_Goal__blend(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePath_Goal__blend(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExecutePath_Goal__blend(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExecutePath_Goal__blend(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExecutePath_Goal__blend(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExecutePath_Goal__blend(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExecutePath_Goal__move_type(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExecutePath_Goal__move_type(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ExecutePath_Goal__move_type(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExecutePath_Goal__move_type(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__ExecutePath_Goal__move_type(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__ExecutePath_Goal__move_type(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__ExecutePath_Goal__move_type(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__ExecutePath_Goal__move_type(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ExecutePath_Goal_message_member_array[5] = {
  {
    "waypoints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ur_ros_rtde_msgs::msg::Vector>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs::action::ExecutePath_Goal, waypoints),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePath_Goal__waypoints,  // size() function pointer
    get_const_function__ExecutePath_Goal__waypoints,  // get_const(index) function pointer
    get_function__ExecutePath_Goal__waypoints,  // get(index) function pointer
    fetch_function__ExecutePath_Goal__waypoints,  // fetch(index, &value) function pointer
    assign_function__ExecutePath_Goal__waypoints,  // assign(index, value) function pointer
    resize_function__ExecutePath_Goal__waypoints  // resize(index) function pointer
  },
  {
    "speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs::action::ExecutePath_Goal, speed),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePath_Goal__speed,  // size() function pointer
    get_const_function__ExecutePath_Goal__speed,  // get_const(index) function pointer
    get_function__ExecutePath_Goal__speed,  // get(index) function pointer
    fetch_function__ExecutePath_Goal__speed,  // fetch(index, &value) function pointer
    assign_function__ExecutePath_Goal__speed,  // assign(index, value) function pointer
    resize_function__ExecutePath_Goal__speed  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs::action::ExecutePath_Goal, acceleration),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePath_Goal__acceleration,  // size() function pointer
    get_const_function__ExecutePath_Goal__acceleration,  // get_const(index) function pointer
    get_function__ExecutePath_Goal__acceleration,  // get(index) function pointer
    fetch_function__ExecutePath_Goal__acceleration,  // fetch(index, &value) function pointer
    assign_function__ExecutePath_Goal__acceleration,  // assign(index, value) function pointer
    resize_function__ExecutePath_Goal__acceleration  // resize(index) function pointer
  },
  {
    "blend",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs::action::ExecutePath_Goal, blend),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePath_Goal__blend,  // size() function pointer
    get_const_function__ExecutePath_Goal__blend,  // get_const(index) function pointer
    get_function__ExecutePath_Goal__blend,  // get(index) function pointer
    fetch_function__ExecutePath_Goal__blend,  // fetch(index, &value) function pointer
    assign_function__ExecutePath_Goal__blend,  // assign(index, value) function pointer
    resize_function__ExecutePath_Goal__blend  // resize(index) function pointer
  },
  {
    "move_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs::action::ExecutePath_Goal, move_type),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExecutePath_Goal__move_type,  // size() function pointer
    get_const_function__ExecutePath_Goal__move_type,  // get_const(index) function pointer
    get_function__ExecutePath_Goal__move_type,  // get(index) function pointer
    fetch_function__ExecutePath_Goal__move_type,  // fetch(index, &value) function pointer
    assign_function__ExecutePath_Goal__move_type,  // assign(index, value) function pointer
    resize_function__ExecutePath_Goal__move_type  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ExecutePath_Goal_message_members = {
  "ur_ros_rtde_msgs::action",  // message namespace
  "ExecutePath_Goal",  // message name
  5,  // number of fields
  sizeof(ur_ros_rtde_msgs::action::ExecutePath_Goal),
  ExecutePath_Goal_message_member_array,  // message members
  ExecutePath_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  ExecutePath_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ExecutePath_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExecutePath_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace ur_ros_rtde_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_ros_rtde_msgs::action::ExecutePath_Goal>()
{
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_introspection_cpp::ExecutePath_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_ros_rtde_msgs, action, ExecutePath_Goal)() {
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_introspection_cpp::ExecutePath_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ur_ros_rtde_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ExecutePath_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ur_ros_rtde_msgs::action::ExecutePath_Result(_init);
}

void ExecutePath_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ur_ros_rtde_msgs::action::ExecutePath_Result *>(message_memory);
  typed_message->~ExecutePath_Result();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ExecutePath_Result_message_member_array[1] = {
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs::action::ExecutePath_Result, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ExecutePath_Result_message_members = {
  "ur_ros_rtde_msgs::action",  // message namespace
  "ExecutePath_Result",  // message name
  1,  // number of fields
  sizeof(ur_ros_rtde_msgs::action::ExecutePath_Result),
  ExecutePath_Result_message_member_array,  // message members
  ExecutePath_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  ExecutePath_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ExecutePath_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExecutePath_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace ur_ros_rtde_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_ros_rtde_msgs::action::ExecutePath_Result>()
{
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_introspection_cpp::ExecutePath_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_ros_rtde_msgs, action, ExecutePath_Result)() {
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_introspection_cpp::ExecutePath_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ur_ros_rtde_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ExecutePath_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ur_ros_rtde_msgs::action::ExecutePath_Feedback(_init);
}

void ExecutePath_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ur_ros_rtde_msgs::action::ExecutePath_Feedback *>(message_memory);
  typed_message->~ExecutePath_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ExecutePath_Feedback_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs::action::ExecutePath_Feedback, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ExecutePath_Feedback_message_members = {
  "ur_ros_rtde_msgs::action",  // message namespace
  "ExecutePath_Feedback",  // message name
  1,  // number of fields
  sizeof(ur_ros_rtde_msgs::action::ExecutePath_Feedback),
  ExecutePath_Feedback_message_member_array,  // message members
  ExecutePath_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  ExecutePath_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ExecutePath_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExecutePath_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace ur_ros_rtde_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_ros_rtde_msgs::action::ExecutePath_Feedback>()
{
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_introspection_cpp::ExecutePath_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_ros_rtde_msgs, action, ExecutePath_Feedback)() {
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_introspection_cpp::ExecutePath_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ur_ros_rtde_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ExecutePath_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Request(_init);
}

void ExecutePath_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Request *>(message_memory);
  typed_message->~ExecutePath_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ExecutePath_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ur_ros_rtde_msgs::action::ExecutePath_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ExecutePath_SendGoal_Request_message_members = {
  "ur_ros_rtde_msgs::action",  // message namespace
  "ExecutePath_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Request),
  ExecutePath_SendGoal_Request_message_member_array,  // message members
  ExecutePath_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ExecutePath_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ExecutePath_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExecutePath_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace ur_ros_rtde_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Request>()
{
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_introspection_cpp::ExecutePath_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_ros_rtde_msgs, action, ExecutePath_SendGoal_Request)() {
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_introspection_cpp::ExecutePath_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ur_ros_rtde_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ExecutePath_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Response(_init);
}

void ExecutePath_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Response *>(message_memory);
  typed_message->~ExecutePath_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ExecutePath_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ExecutePath_SendGoal_Response_message_members = {
  "ur_ros_rtde_msgs::action",  // message namespace
  "ExecutePath_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Response),
  ExecutePath_SendGoal_Response_message_member_array,  // message members
  ExecutePath_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ExecutePath_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ExecutePath_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExecutePath_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace ur_ros_rtde_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Response>()
{
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_introspection_cpp::ExecutePath_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_ros_rtde_msgs, action, ExecutePath_SendGoal_Response)() {
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_introspection_cpp::ExecutePath_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace ur_ros_rtde_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ExecutePath_SendGoal_service_members = {
  "ur_ros_rtde_msgs::action",  // service namespace
  "ExecutePath_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<ur_ros_rtde_msgs::action::ExecutePath_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t ExecutePath_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExecutePath_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace ur_ros_rtde_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ur_ros_rtde_msgs::action::ExecutePath_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::ur_ros_rtde_msgs::action::rosidl_typesupport_introspection_cpp::ExecutePath_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_ros_rtde_msgs, action, ExecutePath_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<ur_ros_rtde_msgs::action::ExecutePath_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ur_ros_rtde_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ExecutePath_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ur_ros_rtde_msgs::action::ExecutePath_GetResult_Request(_init);
}

void ExecutePath_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ur_ros_rtde_msgs::action::ExecutePath_GetResult_Request *>(message_memory);
  typed_message->~ExecutePath_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ExecutePath_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs::action::ExecutePath_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ExecutePath_GetResult_Request_message_members = {
  "ur_ros_rtde_msgs::action",  // message namespace
  "ExecutePath_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(ur_ros_rtde_msgs::action::ExecutePath_GetResult_Request),
  ExecutePath_GetResult_Request_message_member_array,  // message members
  ExecutePath_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ExecutePath_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ExecutePath_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExecutePath_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace ur_ros_rtde_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_ros_rtde_msgs::action::ExecutePath_GetResult_Request>()
{
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_introspection_cpp::ExecutePath_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_ros_rtde_msgs, action, ExecutePath_GetResult_Request)() {
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_introspection_cpp::ExecutePath_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ur_ros_rtde_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ExecutePath_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ur_ros_rtde_msgs::action::ExecutePath_GetResult_Response(_init);
}

void ExecutePath_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ur_ros_rtde_msgs::action::ExecutePath_GetResult_Response *>(message_memory);
  typed_message->~ExecutePath_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ExecutePath_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs::action::ExecutePath_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ur_ros_rtde_msgs::action::ExecutePath_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs::action::ExecutePath_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ExecutePath_GetResult_Response_message_members = {
  "ur_ros_rtde_msgs::action",  // message namespace
  "ExecutePath_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(ur_ros_rtde_msgs::action::ExecutePath_GetResult_Response),
  ExecutePath_GetResult_Response_message_member_array,  // message members
  ExecutePath_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ExecutePath_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ExecutePath_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExecutePath_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace ur_ros_rtde_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_ros_rtde_msgs::action::ExecutePath_GetResult_Response>()
{
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_introspection_cpp::ExecutePath_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_ros_rtde_msgs, action, ExecutePath_GetResult_Response)() {
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_introspection_cpp::ExecutePath_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace ur_ros_rtde_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ExecutePath_GetResult_service_members = {
  "ur_ros_rtde_msgs::action",  // service namespace
  "ExecutePath_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<ur_ros_rtde_msgs::action::ExecutePath_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t ExecutePath_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExecutePath_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace ur_ros_rtde_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ur_ros_rtde_msgs::action::ExecutePath_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::ur_ros_rtde_msgs::action::rosidl_typesupport_introspection_cpp::ExecutePath_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ur_ros_rtde_msgs::action::ExecutePath_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ur_ros_rtde_msgs::action::ExecutePath_GetResult_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_ros_rtde_msgs, action, ExecutePath_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<ur_ros_rtde_msgs::action::ExecutePath_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ur_ros_rtde_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ExecutePath_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ur_ros_rtde_msgs::action::ExecutePath_FeedbackMessage(_init);
}

void ExecutePath_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ur_ros_rtde_msgs::action::ExecutePath_FeedbackMessage *>(message_memory);
  typed_message->~ExecutePath_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ExecutePath_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs::action::ExecutePath_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ur_ros_rtde_msgs::action::ExecutePath_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs::action::ExecutePath_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ExecutePath_FeedbackMessage_message_members = {
  "ur_ros_rtde_msgs::action",  // message namespace
  "ExecutePath_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(ur_ros_rtde_msgs::action::ExecutePath_FeedbackMessage),
  ExecutePath_FeedbackMessage_message_member_array,  // message members
  ExecutePath_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  ExecutePath_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ExecutePath_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExecutePath_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace ur_ros_rtde_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_ros_rtde_msgs::action::ExecutePath_FeedbackMessage>()
{
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_introspection_cpp::ExecutePath_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_ros_rtde_msgs, action, ExecutePath_FeedbackMessage)() {
  return &::ur_ros_rtde_msgs::action::rosidl_typesupport_introspection_cpp::ExecutePath_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
