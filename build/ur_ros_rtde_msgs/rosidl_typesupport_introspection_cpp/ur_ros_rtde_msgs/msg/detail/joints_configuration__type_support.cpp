// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ur_ros_rtde_msgs:msg/JointsConfiguration.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ur_ros_rtde_msgs/msg/detail/joints_configuration__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ur_ros_rtde_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void JointsConfiguration_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ur_ros_rtde_msgs::msg::JointsConfiguration(_init);
}

void JointsConfiguration_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ur_ros_rtde_msgs::msg::JointsConfiguration *>(message_memory);
  typed_message->~JointsConfiguration();
}

size_t size_function__JointsConfiguration__motors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointsConfiguration__motors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__JointsConfiguration__motors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointsConfiguration__motors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__JointsConfiguration__motors(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__JointsConfiguration__motors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__JointsConfiguration__motors(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__JointsConfiguration__motors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JointsConfiguration_message_member_array[1] = {
  {
    "motors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs::msg::JointsConfiguration, motors),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointsConfiguration__motors,  // size() function pointer
    get_const_function__JointsConfiguration__motors,  // get_const(index) function pointer
    get_function__JointsConfiguration__motors,  // get(index) function pointer
    fetch_function__JointsConfiguration__motors,  // fetch(index, &value) function pointer
    assign_function__JointsConfiguration__motors,  // assign(index, value) function pointer
    resize_function__JointsConfiguration__motors  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JointsConfiguration_message_members = {
  "ur_ros_rtde_msgs::msg",  // message namespace
  "JointsConfiguration",  // message name
  1,  // number of fields
  sizeof(ur_ros_rtde_msgs::msg::JointsConfiguration),
  JointsConfiguration_message_member_array,  // message members
  JointsConfiguration_init_function,  // function to initialize message memory (memory has to be allocated)
  JointsConfiguration_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JointsConfiguration_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JointsConfiguration_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ur_ros_rtde_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_ros_rtde_msgs::msg::JointsConfiguration>()
{
  return &::ur_ros_rtde_msgs::msg::rosidl_typesupport_introspection_cpp::JointsConfiguration_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_ros_rtde_msgs, msg, JointsConfiguration)() {
  return &::ur_ros_rtde_msgs::msg::rosidl_typesupport_introspection_cpp::JointsConfiguration_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
