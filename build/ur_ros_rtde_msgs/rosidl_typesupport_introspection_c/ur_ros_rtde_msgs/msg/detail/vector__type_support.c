// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ur_ros_rtde_msgs:msg/Vector.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ur_ros_rtde_msgs/msg/detail/vector__rosidl_typesupport_introspection_c.h"
#include "ur_ros_rtde_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ur_ros_rtde_msgs/msg/detail/vector__functions.h"
#include "ur_ros_rtde_msgs/msg/detail/vector__struct.h"


// Include directives for member types
// Member `vector`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur_ros_rtde_msgs__msg__Vector__rosidl_typesupport_introspection_c__Vector_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_ros_rtde_msgs__msg__Vector__init(message_memory);
}

void ur_ros_rtde_msgs__msg__Vector__rosidl_typesupport_introspection_c__Vector_fini_function(void * message_memory)
{
  ur_ros_rtde_msgs__msg__Vector__fini(message_memory);
}

size_t ur_ros_rtde_msgs__msg__Vector__rosidl_typesupport_introspection_c__size_function__Vector__vector(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ur_ros_rtde_msgs__msg__Vector__rosidl_typesupport_introspection_c__get_const_function__Vector__vector(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ur_ros_rtde_msgs__msg__Vector__rosidl_typesupport_introspection_c__get_function__Vector__vector(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ur_ros_rtde_msgs__msg__Vector__rosidl_typesupport_introspection_c__fetch_function__Vector__vector(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ur_ros_rtde_msgs__msg__Vector__rosidl_typesupport_introspection_c__get_const_function__Vector__vector(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ur_ros_rtde_msgs__msg__Vector__rosidl_typesupport_introspection_c__assign_function__Vector__vector(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ur_ros_rtde_msgs__msg__Vector__rosidl_typesupport_introspection_c__get_function__Vector__vector(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ur_ros_rtde_msgs__msg__Vector__rosidl_typesupport_introspection_c__resize_function__Vector__vector(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ur_ros_rtde_msgs__msg__Vector__rosidl_typesupport_introspection_c__Vector_message_member_array[1] = {
  {
    "vector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs__msg__Vector, vector),  // bytes offset in struct
    NULL,  // default value
    ur_ros_rtde_msgs__msg__Vector__rosidl_typesupport_introspection_c__size_function__Vector__vector,  // size() function pointer
    ur_ros_rtde_msgs__msg__Vector__rosidl_typesupport_introspection_c__get_const_function__Vector__vector,  // get_const(index) function pointer
    ur_ros_rtde_msgs__msg__Vector__rosidl_typesupport_introspection_c__get_function__Vector__vector,  // get(index) function pointer
    ur_ros_rtde_msgs__msg__Vector__rosidl_typesupport_introspection_c__fetch_function__Vector__vector,  // fetch(index, &value) function pointer
    ur_ros_rtde_msgs__msg__Vector__rosidl_typesupport_introspection_c__assign_function__Vector__vector,  // assign(index, value) function pointer
    ur_ros_rtde_msgs__msg__Vector__rosidl_typesupport_introspection_c__resize_function__Vector__vector  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_ros_rtde_msgs__msg__Vector__rosidl_typesupport_introspection_c__Vector_message_members = {
  "ur_ros_rtde_msgs__msg",  // message namespace
  "Vector",  // message name
  1,  // number of fields
  sizeof(ur_ros_rtde_msgs__msg__Vector),
  ur_ros_rtde_msgs__msg__Vector__rosidl_typesupport_introspection_c__Vector_message_member_array,  // message members
  ur_ros_rtde_msgs__msg__Vector__rosidl_typesupport_introspection_c__Vector_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_ros_rtde_msgs__msg__Vector__rosidl_typesupport_introspection_c__Vector_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_ros_rtde_msgs__msg__Vector__rosidl_typesupport_introspection_c__Vector_message_type_support_handle = {
  0,
  &ur_ros_rtde_msgs__msg__Vector__rosidl_typesupport_introspection_c__Vector_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_ros_rtde_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, msg, Vector)() {
  if (!ur_ros_rtde_msgs__msg__Vector__rosidl_typesupport_introspection_c__Vector_message_type_support_handle.typesupport_identifier) {
    ur_ros_rtde_msgs__msg__Vector__rosidl_typesupport_introspection_c__Vector_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_ros_rtde_msgs__msg__Vector__rosidl_typesupport_introspection_c__Vector_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
