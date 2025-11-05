// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ur_ros_rtde_msgs:action/ExecutePath.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ur_ros_rtde_msgs/action/detail/execute_path__rosidl_typesupport_introspection_c.h"
#include "ur_ros_rtde_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ur_ros_rtde_msgs/action/detail/execute_path__functions.h"
#include "ur_ros_rtde_msgs/action/detail/execute_path__struct.h"


// Include directives for member types
// Member `waypoints`
#include "ur_ros_rtde_msgs/msg/vector.h"
// Member `waypoints`
#include "ur_ros_rtde_msgs/msg/detail/vector__rosidl_typesupport_introspection_c.h"
// Member `speed`
// Member `acceleration`
// Member `blend`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `move_type`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__ExecutePath_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_ros_rtde_msgs__action__ExecutePath_Goal__init(message_memory);
}

void ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__ExecutePath_Goal_fini_function(void * message_memory)
{
  ur_ros_rtde_msgs__action__ExecutePath_Goal__fini(message_memory);
}

size_t ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__size_function__ExecutePath_Goal__waypoints(
  const void * untyped_member)
{
  const ur_ros_rtde_msgs__msg__Vector__Sequence * member =
    (const ur_ros_rtde_msgs__msg__Vector__Sequence *)(untyped_member);
  return member->size;
}

const void * ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__get_const_function__ExecutePath_Goal__waypoints(
  const void * untyped_member, size_t index)
{
  const ur_ros_rtde_msgs__msg__Vector__Sequence * member =
    (const ur_ros_rtde_msgs__msg__Vector__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__get_function__ExecutePath_Goal__waypoints(
  void * untyped_member, size_t index)
{
  ur_ros_rtde_msgs__msg__Vector__Sequence * member =
    (ur_ros_rtde_msgs__msg__Vector__Sequence *)(untyped_member);
  return &member->data[index];
}

void ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__fetch_function__ExecutePath_Goal__waypoints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ur_ros_rtde_msgs__msg__Vector * item =
    ((const ur_ros_rtde_msgs__msg__Vector *)
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__get_const_function__ExecutePath_Goal__waypoints(untyped_member, index));
  ur_ros_rtde_msgs__msg__Vector * value =
    (ur_ros_rtde_msgs__msg__Vector *)(untyped_value);
  *value = *item;
}

void ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__assign_function__ExecutePath_Goal__waypoints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ur_ros_rtde_msgs__msg__Vector * item =
    ((ur_ros_rtde_msgs__msg__Vector *)
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__get_function__ExecutePath_Goal__waypoints(untyped_member, index));
  const ur_ros_rtde_msgs__msg__Vector * value =
    (const ur_ros_rtde_msgs__msg__Vector *)(untyped_value);
  *item = *value;
}

bool ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__resize_function__ExecutePath_Goal__waypoints(
  void * untyped_member, size_t size)
{
  ur_ros_rtde_msgs__msg__Vector__Sequence * member =
    (ur_ros_rtde_msgs__msg__Vector__Sequence *)(untyped_member);
  ur_ros_rtde_msgs__msg__Vector__Sequence__fini(member);
  return ur_ros_rtde_msgs__msg__Vector__Sequence__init(member, size);
}

size_t ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__size_function__ExecutePath_Goal__speed(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__get_const_function__ExecutePath_Goal__speed(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__get_function__ExecutePath_Goal__speed(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__fetch_function__ExecutePath_Goal__speed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__get_const_function__ExecutePath_Goal__speed(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__assign_function__ExecutePath_Goal__speed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__get_function__ExecutePath_Goal__speed(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__resize_function__ExecutePath_Goal__speed(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__size_function__ExecutePath_Goal__acceleration(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__get_const_function__ExecutePath_Goal__acceleration(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__get_function__ExecutePath_Goal__acceleration(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__fetch_function__ExecutePath_Goal__acceleration(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__get_const_function__ExecutePath_Goal__acceleration(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__assign_function__ExecutePath_Goal__acceleration(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__get_function__ExecutePath_Goal__acceleration(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__resize_function__ExecutePath_Goal__acceleration(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__size_function__ExecutePath_Goal__blend(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__get_const_function__ExecutePath_Goal__blend(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__get_function__ExecutePath_Goal__blend(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__fetch_function__ExecutePath_Goal__blend(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__get_const_function__ExecutePath_Goal__blend(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__assign_function__ExecutePath_Goal__blend(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__get_function__ExecutePath_Goal__blend(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__resize_function__ExecutePath_Goal__blend(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__size_function__ExecutePath_Goal__move_type(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__get_const_function__ExecutePath_Goal__move_type(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__get_function__ExecutePath_Goal__move_type(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__fetch_function__ExecutePath_Goal__move_type(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__get_const_function__ExecutePath_Goal__move_type(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__assign_function__ExecutePath_Goal__move_type(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__get_function__ExecutePath_Goal__move_type(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__resize_function__ExecutePath_Goal__move_type(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__ExecutePath_Goal_message_member_array[5] = {
  {
    "waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs__action__ExecutePath_Goal, waypoints),  // bytes offset in struct
    NULL,  // default value
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__size_function__ExecutePath_Goal__waypoints,  // size() function pointer
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__get_const_function__ExecutePath_Goal__waypoints,  // get_const(index) function pointer
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__get_function__ExecutePath_Goal__waypoints,  // get(index) function pointer
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__fetch_function__ExecutePath_Goal__waypoints,  // fetch(index, &value) function pointer
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__assign_function__ExecutePath_Goal__waypoints,  // assign(index, value) function pointer
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__resize_function__ExecutePath_Goal__waypoints  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs__action__ExecutePath_Goal, speed),  // bytes offset in struct
    NULL,  // default value
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__size_function__ExecutePath_Goal__speed,  // size() function pointer
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__get_const_function__ExecutePath_Goal__speed,  // get_const(index) function pointer
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__get_function__ExecutePath_Goal__speed,  // get(index) function pointer
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__fetch_function__ExecutePath_Goal__speed,  // fetch(index, &value) function pointer
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__assign_function__ExecutePath_Goal__speed,  // assign(index, value) function pointer
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__resize_function__ExecutePath_Goal__speed  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs__action__ExecutePath_Goal, acceleration),  // bytes offset in struct
    NULL,  // default value
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__size_function__ExecutePath_Goal__acceleration,  // size() function pointer
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__get_const_function__ExecutePath_Goal__acceleration,  // get_const(index) function pointer
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__get_function__ExecutePath_Goal__acceleration,  // get(index) function pointer
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__fetch_function__ExecutePath_Goal__acceleration,  // fetch(index, &value) function pointer
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__assign_function__ExecutePath_Goal__acceleration,  // assign(index, value) function pointer
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__resize_function__ExecutePath_Goal__acceleration  // resize(index) function pointer
  },
  {
    "blend",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs__action__ExecutePath_Goal, blend),  // bytes offset in struct
    NULL,  // default value
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__size_function__ExecutePath_Goal__blend,  // size() function pointer
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__get_const_function__ExecutePath_Goal__blend,  // get_const(index) function pointer
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__get_function__ExecutePath_Goal__blend,  // get(index) function pointer
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__fetch_function__ExecutePath_Goal__blend,  // fetch(index, &value) function pointer
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__assign_function__ExecutePath_Goal__blend,  // assign(index, value) function pointer
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__resize_function__ExecutePath_Goal__blend  // resize(index) function pointer
  },
  {
    "move_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs__action__ExecutePath_Goal, move_type),  // bytes offset in struct
    NULL,  // default value
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__size_function__ExecutePath_Goal__move_type,  // size() function pointer
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__get_const_function__ExecutePath_Goal__move_type,  // get_const(index) function pointer
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__get_function__ExecutePath_Goal__move_type,  // get(index) function pointer
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__fetch_function__ExecutePath_Goal__move_type,  // fetch(index, &value) function pointer
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__assign_function__ExecutePath_Goal__move_type,  // assign(index, value) function pointer
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__resize_function__ExecutePath_Goal__move_type  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__ExecutePath_Goal_message_members = {
  "ur_ros_rtde_msgs__action",  // message namespace
  "ExecutePath_Goal",  // message name
  5,  // number of fields
  sizeof(ur_ros_rtde_msgs__action__ExecutePath_Goal),
  ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__ExecutePath_Goal_message_member_array,  // message members
  ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__ExecutePath_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__ExecutePath_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__ExecutePath_Goal_message_type_support_handle = {
  0,
  &ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__ExecutePath_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_ros_rtde_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecutePath_Goal)() {
  ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__ExecutePath_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, msg, Vector)();
  if (!ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__ExecutePath_Goal_message_type_support_handle.typesupport_identifier) {
    ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__ExecutePath_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_ros_rtde_msgs__action__ExecutePath_Goal__rosidl_typesupport_introspection_c__ExecutePath_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur_ros_rtde_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__functions.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ur_ros_rtde_msgs__action__ExecutePath_Result__rosidl_typesupport_introspection_c__ExecutePath_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_ros_rtde_msgs__action__ExecutePath_Result__init(message_memory);
}

void ur_ros_rtde_msgs__action__ExecutePath_Result__rosidl_typesupport_introspection_c__ExecutePath_Result_fini_function(void * message_memory)
{
  ur_ros_rtde_msgs__action__ExecutePath_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ur_ros_rtde_msgs__action__ExecutePath_Result__rosidl_typesupport_introspection_c__ExecutePath_Result_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs__action__ExecutePath_Result, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_ros_rtde_msgs__action__ExecutePath_Result__rosidl_typesupport_introspection_c__ExecutePath_Result_message_members = {
  "ur_ros_rtde_msgs__action",  // message namespace
  "ExecutePath_Result",  // message name
  1,  // number of fields
  sizeof(ur_ros_rtde_msgs__action__ExecutePath_Result),
  ur_ros_rtde_msgs__action__ExecutePath_Result__rosidl_typesupport_introspection_c__ExecutePath_Result_message_member_array,  // message members
  ur_ros_rtde_msgs__action__ExecutePath_Result__rosidl_typesupport_introspection_c__ExecutePath_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_ros_rtde_msgs__action__ExecutePath_Result__rosidl_typesupport_introspection_c__ExecutePath_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_ros_rtde_msgs__action__ExecutePath_Result__rosidl_typesupport_introspection_c__ExecutePath_Result_message_type_support_handle = {
  0,
  &ur_ros_rtde_msgs__action__ExecutePath_Result__rosidl_typesupport_introspection_c__ExecutePath_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_ros_rtde_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecutePath_Result)() {
  if (!ur_ros_rtde_msgs__action__ExecutePath_Result__rosidl_typesupport_introspection_c__ExecutePath_Result_message_type_support_handle.typesupport_identifier) {
    ur_ros_rtde_msgs__action__ExecutePath_Result__rosidl_typesupport_introspection_c__ExecutePath_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_ros_rtde_msgs__action__ExecutePath_Result__rosidl_typesupport_introspection_c__ExecutePath_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur_ros_rtde_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__functions.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ur_ros_rtde_msgs__action__ExecutePath_Feedback__rosidl_typesupport_introspection_c__ExecutePath_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_ros_rtde_msgs__action__ExecutePath_Feedback__init(message_memory);
}

void ur_ros_rtde_msgs__action__ExecutePath_Feedback__rosidl_typesupport_introspection_c__ExecutePath_Feedback_fini_function(void * message_memory)
{
  ur_ros_rtde_msgs__action__ExecutePath_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ur_ros_rtde_msgs__action__ExecutePath_Feedback__rosidl_typesupport_introspection_c__ExecutePath_Feedback_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs__action__ExecutePath_Feedback, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_ros_rtde_msgs__action__ExecutePath_Feedback__rosidl_typesupport_introspection_c__ExecutePath_Feedback_message_members = {
  "ur_ros_rtde_msgs__action",  // message namespace
  "ExecutePath_Feedback",  // message name
  1,  // number of fields
  sizeof(ur_ros_rtde_msgs__action__ExecutePath_Feedback),
  ur_ros_rtde_msgs__action__ExecutePath_Feedback__rosidl_typesupport_introspection_c__ExecutePath_Feedback_message_member_array,  // message members
  ur_ros_rtde_msgs__action__ExecutePath_Feedback__rosidl_typesupport_introspection_c__ExecutePath_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_ros_rtde_msgs__action__ExecutePath_Feedback__rosidl_typesupport_introspection_c__ExecutePath_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_ros_rtde_msgs__action__ExecutePath_Feedback__rosidl_typesupport_introspection_c__ExecutePath_Feedback_message_type_support_handle = {
  0,
  &ur_ros_rtde_msgs__action__ExecutePath_Feedback__rosidl_typesupport_introspection_c__ExecutePath_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_ros_rtde_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecutePath_Feedback)() {
  if (!ur_ros_rtde_msgs__action__ExecutePath_Feedback__rosidl_typesupport_introspection_c__ExecutePath_Feedback_message_type_support_handle.typesupport_identifier) {
    ur_ros_rtde_msgs__action__ExecutePath_Feedback__rosidl_typesupport_introspection_c__ExecutePath_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_ros_rtde_msgs__action__ExecutePath_Feedback__rosidl_typesupport_introspection_c__ExecutePath_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur_ros_rtde_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__functions.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "ur_ros_rtde_msgs/action/execute_path.h"
// Member `goal`
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Request__init(message_memory);
}

void ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Request_fini_function(void * message_memory)
{
  ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Request_message_members = {
  "ur_ros_rtde_msgs__action",  // message namespace
  "ExecutePath_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Request),
  ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Request_message_member_array,  // message members
  ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Request_message_type_support_handle = {
  0,
  &ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_ros_rtde_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecutePath_SendGoal_Request)() {
  ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecutePath_Goal)();
  if (!ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Request__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur_ros_rtde_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__functions.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Response__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Response__init(message_memory);
}

void ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Response__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Response_fini_function(void * message_memory)
{
  ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Response__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Response__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Response_message_members = {
  "ur_ros_rtde_msgs__action",  // message namespace
  "ExecutePath_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Response),
  ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Response__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Response_message_member_array,  // message members
  ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Response__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Response__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Response__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Response_message_type_support_handle = {
  0,
  &ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Response__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_ros_rtde_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecutePath_SendGoal_Response)() {
  ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Response__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Response__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Response__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Response__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ur_ros_rtde_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ur_ros_rtde_msgs__action__detail__execute_path__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_service_members = {
  "ur_ros_rtde_msgs__action",  // service namespace
  "ExecutePath_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ur_ros_rtde_msgs__action__detail__execute_path__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // ur_ros_rtde_msgs__action__detail__execute_path__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t ur_ros_rtde_msgs__action__detail__execute_path__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_service_type_support_handle = {
  0,
  &ur_ros_rtde_msgs__action__detail__execute_path__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecutePath_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecutePath_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_ros_rtde_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecutePath_SendGoal)() {
  if (!ur_ros_rtde_msgs__action__detail__execute_path__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_service_type_support_handle.typesupport_identifier) {
    ur_ros_rtde_msgs__action__detail__execute_path__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ur_ros_rtde_msgs__action__detail__execute_path__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecutePath_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecutePath_SendGoal_Response)()->data;
  }

  return &ur_ros_rtde_msgs__action__detail__execute_path__rosidl_typesupport_introspection_c__ExecutePath_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur_ros_rtde_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__functions.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur_ros_rtde_msgs__action__ExecutePath_GetResult_Request__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_ros_rtde_msgs__action__ExecutePath_GetResult_Request__init(message_memory);
}

void ur_ros_rtde_msgs__action__ExecutePath_GetResult_Request__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Request_fini_function(void * message_memory)
{
  ur_ros_rtde_msgs__action__ExecutePath_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ur_ros_rtde_msgs__action__ExecutePath_GetResult_Request__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs__action__ExecutePath_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_ros_rtde_msgs__action__ExecutePath_GetResult_Request__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Request_message_members = {
  "ur_ros_rtde_msgs__action",  // message namespace
  "ExecutePath_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(ur_ros_rtde_msgs__action__ExecutePath_GetResult_Request),
  ur_ros_rtde_msgs__action__ExecutePath_GetResult_Request__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Request_message_member_array,  // message members
  ur_ros_rtde_msgs__action__ExecutePath_GetResult_Request__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_ros_rtde_msgs__action__ExecutePath_GetResult_Request__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_ros_rtde_msgs__action__ExecutePath_GetResult_Request__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Request_message_type_support_handle = {
  0,
  &ur_ros_rtde_msgs__action__ExecutePath_GetResult_Request__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_ros_rtde_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecutePath_GetResult_Request)() {
  ur_ros_rtde_msgs__action__ExecutePath_GetResult_Request__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!ur_ros_rtde_msgs__action__ExecutePath_GetResult_Request__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    ur_ros_rtde_msgs__action__ExecutePath_GetResult_Request__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_ros_rtde_msgs__action__ExecutePath_GetResult_Request__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur_ros_rtde_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__functions.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "ur_ros_rtde_msgs/action/execute_path.h"
// Member `result`
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur_ros_rtde_msgs__action__ExecutePath_GetResult_Response__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_ros_rtde_msgs__action__ExecutePath_GetResult_Response__init(message_memory);
}

void ur_ros_rtde_msgs__action__ExecutePath_GetResult_Response__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Response_fini_function(void * message_memory)
{
  ur_ros_rtde_msgs__action__ExecutePath_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ur_ros_rtde_msgs__action__ExecutePath_GetResult_Response__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs__action__ExecutePath_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs__action__ExecutePath_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_ros_rtde_msgs__action__ExecutePath_GetResult_Response__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Response_message_members = {
  "ur_ros_rtde_msgs__action",  // message namespace
  "ExecutePath_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(ur_ros_rtde_msgs__action__ExecutePath_GetResult_Response),
  ur_ros_rtde_msgs__action__ExecutePath_GetResult_Response__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Response_message_member_array,  // message members
  ur_ros_rtde_msgs__action__ExecutePath_GetResult_Response__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_ros_rtde_msgs__action__ExecutePath_GetResult_Response__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_ros_rtde_msgs__action__ExecutePath_GetResult_Response__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Response_message_type_support_handle = {
  0,
  &ur_ros_rtde_msgs__action__ExecutePath_GetResult_Response__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_ros_rtde_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecutePath_GetResult_Response)() {
  ur_ros_rtde_msgs__action__ExecutePath_GetResult_Response__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecutePath_Result)();
  if (!ur_ros_rtde_msgs__action__ExecutePath_GetResult_Response__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    ur_ros_rtde_msgs__action__ExecutePath_GetResult_Response__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_ros_rtde_msgs__action__ExecutePath_GetResult_Response__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ur_ros_rtde_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ur_ros_rtde_msgs__action__detail__execute_path__rosidl_typesupport_introspection_c__ExecutePath_GetResult_service_members = {
  "ur_ros_rtde_msgs__action",  // service namespace
  "ExecutePath_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ur_ros_rtde_msgs__action__detail__execute_path__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // ur_ros_rtde_msgs__action__detail__execute_path__rosidl_typesupport_introspection_c__ExecutePath_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t ur_ros_rtde_msgs__action__detail__execute_path__rosidl_typesupport_introspection_c__ExecutePath_GetResult_service_type_support_handle = {
  0,
  &ur_ros_rtde_msgs__action__detail__execute_path__rosidl_typesupport_introspection_c__ExecutePath_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecutePath_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecutePath_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_ros_rtde_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecutePath_GetResult)() {
  if (!ur_ros_rtde_msgs__action__detail__execute_path__rosidl_typesupport_introspection_c__ExecutePath_GetResult_service_type_support_handle.typesupport_identifier) {
    ur_ros_rtde_msgs__action__detail__execute_path__rosidl_typesupport_introspection_c__ExecutePath_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ur_ros_rtde_msgs__action__detail__execute_path__rosidl_typesupport_introspection_c__ExecutePath_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecutePath_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecutePath_GetResult_Response)()->data;
  }

  return &ur_ros_rtde_msgs__action__detail__execute_path__rosidl_typesupport_introspection_c__ExecutePath_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur_ros_rtde_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__functions.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "ur_ros_rtde_msgs/action/execute_path.h"
// Member `feedback`
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur_ros_rtde_msgs__action__ExecutePath_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePath_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_ros_rtde_msgs__action__ExecutePath_FeedbackMessage__init(message_memory);
}

void ur_ros_rtde_msgs__action__ExecutePath_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePath_FeedbackMessage_fini_function(void * message_memory)
{
  ur_ros_rtde_msgs__action__ExecutePath_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ur_ros_rtde_msgs__action__ExecutePath_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePath_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs__action__ExecutePath_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs__action__ExecutePath_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_ros_rtde_msgs__action__ExecutePath_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePath_FeedbackMessage_message_members = {
  "ur_ros_rtde_msgs__action",  // message namespace
  "ExecutePath_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(ur_ros_rtde_msgs__action__ExecutePath_FeedbackMessage),
  ur_ros_rtde_msgs__action__ExecutePath_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePath_FeedbackMessage_message_member_array,  // message members
  ur_ros_rtde_msgs__action__ExecutePath_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePath_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_ros_rtde_msgs__action__ExecutePath_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePath_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_ros_rtde_msgs__action__ExecutePath_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePath_FeedbackMessage_message_type_support_handle = {
  0,
  &ur_ros_rtde_msgs__action__ExecutePath_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePath_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_ros_rtde_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecutePath_FeedbackMessage)() {
  ur_ros_rtde_msgs__action__ExecutePath_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePath_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  ur_ros_rtde_msgs__action__ExecutePath_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePath_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecutePath_Feedback)();
  if (!ur_ros_rtde_msgs__action__ExecutePath_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePath_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    ur_ros_rtde_msgs__action__ExecutePath_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePath_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_ros_rtde_msgs__action__ExecutePath_FeedbackMessage__rosidl_typesupport_introspection_c__ExecutePath_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
