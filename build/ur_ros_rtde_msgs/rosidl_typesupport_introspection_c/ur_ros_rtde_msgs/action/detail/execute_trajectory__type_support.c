// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ur_ros_rtde_msgs:action/ExecuteTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ur_ros_rtde_msgs/action/detail/execute_trajectory__rosidl_typesupport_introspection_c.h"
#include "ur_ros_rtde_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ur_ros_rtde_msgs/action/detail/execute_trajectory__functions.h"
#include "ur_ros_rtde_msgs/action/detail/execute_trajectory__struct.h"


// Include directives for member types
// Member `trajectory`
#include "ur_ros_rtde_msgs/msg/vector.h"
// Member `trajectory`
#include "ur_ros_rtde_msgs/msg/detail/vector__rosidl_typesupport_introspection_c.h"
// Member `joint_speed_limits`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__ExecuteTrajectory_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__init(message_memory);
}

void ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__ExecuteTrajectory_Goal_fini_function(void * message_memory)
{
  ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__fini(message_memory);
}

size_t ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__size_function__ExecuteTrajectory_Goal__trajectory(
  const void * untyped_member)
{
  const ur_ros_rtde_msgs__msg__Vector__Sequence * member =
    (const ur_ros_rtde_msgs__msg__Vector__Sequence *)(untyped_member);
  return member->size;
}

const void * ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__get_const_function__ExecuteTrajectory_Goal__trajectory(
  const void * untyped_member, size_t index)
{
  const ur_ros_rtde_msgs__msg__Vector__Sequence * member =
    (const ur_ros_rtde_msgs__msg__Vector__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__get_function__ExecuteTrajectory_Goal__trajectory(
  void * untyped_member, size_t index)
{
  ur_ros_rtde_msgs__msg__Vector__Sequence * member =
    (ur_ros_rtde_msgs__msg__Vector__Sequence *)(untyped_member);
  return &member->data[index];
}

void ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__fetch_function__ExecuteTrajectory_Goal__trajectory(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ur_ros_rtde_msgs__msg__Vector * item =
    ((const ur_ros_rtde_msgs__msg__Vector *)
    ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__get_const_function__ExecuteTrajectory_Goal__trajectory(untyped_member, index));
  ur_ros_rtde_msgs__msg__Vector * value =
    (ur_ros_rtde_msgs__msg__Vector *)(untyped_value);
  *value = *item;
}

void ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__assign_function__ExecuteTrajectory_Goal__trajectory(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ur_ros_rtde_msgs__msg__Vector * item =
    ((ur_ros_rtde_msgs__msg__Vector *)
    ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__get_function__ExecuteTrajectory_Goal__trajectory(untyped_member, index));
  const ur_ros_rtde_msgs__msg__Vector * value =
    (const ur_ros_rtde_msgs__msg__Vector *)(untyped_value);
  *item = *value;
}

bool ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__resize_function__ExecuteTrajectory_Goal__trajectory(
  void * untyped_member, size_t size)
{
  ur_ros_rtde_msgs__msg__Vector__Sequence * member =
    (ur_ros_rtde_msgs__msg__Vector__Sequence *)(untyped_member);
  ur_ros_rtde_msgs__msg__Vector__Sequence__fini(member);
  return ur_ros_rtde_msgs__msg__Vector__Sequence__init(member, size);
}

size_t ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__size_function__ExecuteTrajectory_Goal__joint_speed_limits(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__get_const_function__ExecuteTrajectory_Goal__joint_speed_limits(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__get_function__ExecuteTrajectory_Goal__joint_speed_limits(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__fetch_function__ExecuteTrajectory_Goal__joint_speed_limits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__get_const_function__ExecuteTrajectory_Goal__joint_speed_limits(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__assign_function__ExecuteTrajectory_Goal__joint_speed_limits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__get_function__ExecuteTrajectory_Goal__joint_speed_limits(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__resize_function__ExecuteTrajectory_Goal__joint_speed_limits(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__ExecuteTrajectory_Goal_message_member_array[6] = {
  {
    "trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal, trajectory),  // bytes offset in struct
    NULL,  // default value
    ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__size_function__ExecuteTrajectory_Goal__trajectory,  // size() function pointer
    ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__get_const_function__ExecuteTrajectory_Goal__trajectory,  // get_const(index) function pointer
    ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__get_function__ExecuteTrajectory_Goal__trajectory,  // get(index) function pointer
    ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__fetch_function__ExecuteTrajectory_Goal__trajectory,  // fetch(index, &value) function pointer
    ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__assign_function__ExecuteTrajectory_Goal__trajectory,  // assign(index, value) function pointer
    ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__resize_function__ExecuteTrajectory_Goal__trajectory  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal, acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "deceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal, deceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_percentage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal, speed_percentage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_speed_limits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal, joint_speed_limits),  // bytes offset in struct
    NULL,  // default value
    ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__size_function__ExecuteTrajectory_Goal__joint_speed_limits,  // size() function pointer
    ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__get_const_function__ExecuteTrajectory_Goal__joint_speed_limits,  // get_const(index) function pointer
    ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__get_function__ExecuteTrajectory_Goal__joint_speed_limits,  // get(index) function pointer
    ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__fetch_function__ExecuteTrajectory_Goal__joint_speed_limits,  // fetch(index, &value) function pointer
    ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__assign_function__ExecuteTrajectory_Goal__joint_speed_limits,  // assign(index, value) function pointer
    ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__resize_function__ExecuteTrajectory_Goal__joint_speed_limits  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__ExecuteTrajectory_Goal_message_members = {
  "ur_ros_rtde_msgs__action",  // message namespace
  "ExecuteTrajectory_Goal",  // message name
  6,  // number of fields
  sizeof(ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal),
  ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__ExecuteTrajectory_Goal_message_member_array,  // message members
  ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__ExecuteTrajectory_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__ExecuteTrajectory_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__ExecuteTrajectory_Goal_message_type_support_handle = {
  0,
  &ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__ExecuteTrajectory_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_ros_rtde_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecuteTrajectory_Goal)() {
  ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__ExecuteTrajectory_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, msg, Vector)();
  if (!ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__ExecuteTrajectory_Goal_message_type_support_handle.typesupport_identifier) {
    ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__ExecuteTrajectory_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__rosidl_typesupport_introspection_c__ExecuteTrajectory_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur_ros_rtde_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_trajectory__functions.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_trajectory__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ur_ros_rtde_msgs__action__ExecuteTrajectory_Result__rosidl_typesupport_introspection_c__ExecuteTrajectory_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_ros_rtde_msgs__action__ExecuteTrajectory_Result__init(message_memory);
}

void ur_ros_rtde_msgs__action__ExecuteTrajectory_Result__rosidl_typesupport_introspection_c__ExecuteTrajectory_Result_fini_function(void * message_memory)
{
  ur_ros_rtde_msgs__action__ExecuteTrajectory_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ur_ros_rtde_msgs__action__ExecuteTrajectory_Result__rosidl_typesupport_introspection_c__ExecuteTrajectory_Result_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs__action__ExecuteTrajectory_Result, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_ros_rtde_msgs__action__ExecuteTrajectory_Result__rosidl_typesupport_introspection_c__ExecuteTrajectory_Result_message_members = {
  "ur_ros_rtde_msgs__action",  // message namespace
  "ExecuteTrajectory_Result",  // message name
  1,  // number of fields
  sizeof(ur_ros_rtde_msgs__action__ExecuteTrajectory_Result),
  ur_ros_rtde_msgs__action__ExecuteTrajectory_Result__rosidl_typesupport_introspection_c__ExecuteTrajectory_Result_message_member_array,  // message members
  ur_ros_rtde_msgs__action__ExecuteTrajectory_Result__rosidl_typesupport_introspection_c__ExecuteTrajectory_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_ros_rtde_msgs__action__ExecuteTrajectory_Result__rosidl_typesupport_introspection_c__ExecuteTrajectory_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_ros_rtde_msgs__action__ExecuteTrajectory_Result__rosidl_typesupport_introspection_c__ExecuteTrajectory_Result_message_type_support_handle = {
  0,
  &ur_ros_rtde_msgs__action__ExecuteTrajectory_Result__rosidl_typesupport_introspection_c__ExecuteTrajectory_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_ros_rtde_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecuteTrajectory_Result)() {
  if (!ur_ros_rtde_msgs__action__ExecuteTrajectory_Result__rosidl_typesupport_introspection_c__ExecuteTrajectory_Result_message_type_support_handle.typesupport_identifier) {
    ur_ros_rtde_msgs__action__ExecuteTrajectory_Result__rosidl_typesupport_introspection_c__ExecuteTrajectory_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_ros_rtde_msgs__action__ExecuteTrajectory_Result__rosidl_typesupport_introspection_c__ExecuteTrajectory_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur_ros_rtde_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_trajectory__functions.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_trajectory__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ur_ros_rtde_msgs__action__ExecuteTrajectory_Feedback__rosidl_typesupport_introspection_c__ExecuteTrajectory_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_ros_rtde_msgs__action__ExecuteTrajectory_Feedback__init(message_memory);
}

void ur_ros_rtde_msgs__action__ExecuteTrajectory_Feedback__rosidl_typesupport_introspection_c__ExecuteTrajectory_Feedback_fini_function(void * message_memory)
{
  ur_ros_rtde_msgs__action__ExecuteTrajectory_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ur_ros_rtde_msgs__action__ExecuteTrajectory_Feedback__rosidl_typesupport_introspection_c__ExecuteTrajectory_Feedback_message_member_array[1] = {
  {
    "reached_waypoint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs__action__ExecuteTrajectory_Feedback, reached_waypoint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_ros_rtde_msgs__action__ExecuteTrajectory_Feedback__rosidl_typesupport_introspection_c__ExecuteTrajectory_Feedback_message_members = {
  "ur_ros_rtde_msgs__action",  // message namespace
  "ExecuteTrajectory_Feedback",  // message name
  1,  // number of fields
  sizeof(ur_ros_rtde_msgs__action__ExecuteTrajectory_Feedback),
  ur_ros_rtde_msgs__action__ExecuteTrajectory_Feedback__rosidl_typesupport_introspection_c__ExecuteTrajectory_Feedback_message_member_array,  // message members
  ur_ros_rtde_msgs__action__ExecuteTrajectory_Feedback__rosidl_typesupport_introspection_c__ExecuteTrajectory_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_ros_rtde_msgs__action__ExecuteTrajectory_Feedback__rosidl_typesupport_introspection_c__ExecuteTrajectory_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_ros_rtde_msgs__action__ExecuteTrajectory_Feedback__rosidl_typesupport_introspection_c__ExecuteTrajectory_Feedback_message_type_support_handle = {
  0,
  &ur_ros_rtde_msgs__action__ExecuteTrajectory_Feedback__rosidl_typesupport_introspection_c__ExecuteTrajectory_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_ros_rtde_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecuteTrajectory_Feedback)() {
  if (!ur_ros_rtde_msgs__action__ExecuteTrajectory_Feedback__rosidl_typesupport_introspection_c__ExecuteTrajectory_Feedback_message_type_support_handle.typesupport_identifier) {
    ur_ros_rtde_msgs__action__ExecuteTrajectory_Feedback__rosidl_typesupport_introspection_c__ExecuteTrajectory_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_ros_rtde_msgs__action__ExecuteTrajectory_Feedback__rosidl_typesupport_introspection_c__ExecuteTrajectory_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur_ros_rtde_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_trajectory__functions.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_trajectory__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "ur_ros_rtde_msgs/action/execute_trajectory.h"
// Member `goal`
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Request__init(message_memory);
}

void ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_Request_fini_function(void * message_memory)
{
  ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Request, goal_id),  // bytes offset in struct
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
    offsetof(ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_Request_message_members = {
  "ur_ros_rtde_msgs__action",  // message namespace
  "ExecuteTrajectory_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Request),
  ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_Request_message_member_array,  // message members
  ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_Request_message_type_support_handle = {
  0,
  &ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_ros_rtde_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecuteTrajectory_SendGoal_Request)() {
  ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecuteTrajectory_Goal)();
  if (!ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur_ros_rtde_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_trajectory__functions.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_trajectory__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Response__init(message_memory);
}

void ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_Response_fini_function(void * message_memory)
{
  ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Response, accepted),  // bytes offset in struct
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
    offsetof(ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_Response_message_members = {
  "ur_ros_rtde_msgs__action",  // message namespace
  "ExecuteTrajectory_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Response),
  ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_Response_message_member_array,  // message members
  ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_Response_message_type_support_handle = {
  0,
  &ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_ros_rtde_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecuteTrajectory_SendGoal_Response)() {
  ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ur_ros_rtde_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ur_ros_rtde_msgs__action__detail__execute_trajectory__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_service_members = {
  "ur_ros_rtde_msgs__action",  // service namespace
  "ExecuteTrajectory_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ur_ros_rtde_msgs__action__detail__execute_trajectory__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // ur_ros_rtde_msgs__action__detail__execute_trajectory__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t ur_ros_rtde_msgs__action__detail__execute_trajectory__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_service_type_support_handle = {
  0,
  &ur_ros_rtde_msgs__action__detail__execute_trajectory__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecuteTrajectory_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecuteTrajectory_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_ros_rtde_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecuteTrajectory_SendGoal)() {
  if (!ur_ros_rtde_msgs__action__detail__execute_trajectory__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_service_type_support_handle.typesupport_identifier) {
    ur_ros_rtde_msgs__action__detail__execute_trajectory__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ur_ros_rtde_msgs__action__detail__execute_trajectory__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecuteTrajectory_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecuteTrajectory_SendGoal_Response)()->data;
  }

  return &ur_ros_rtde_msgs__action__detail__execute_trajectory__rosidl_typesupport_introspection_c__ExecuteTrajectory_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur_ros_rtde_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_trajectory__functions.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_trajectory__struct.h"


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

void ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__ExecuteTrajectory_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Request__init(message_memory);
}

void ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__ExecuteTrajectory_GetResult_Request_fini_function(void * message_memory)
{
  ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__ExecuteTrajectory_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__ExecuteTrajectory_GetResult_Request_message_members = {
  "ur_ros_rtde_msgs__action",  // message namespace
  "ExecuteTrajectory_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Request),
  ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__ExecuteTrajectory_GetResult_Request_message_member_array,  // message members
  ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__ExecuteTrajectory_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__ExecuteTrajectory_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__ExecuteTrajectory_GetResult_Request_message_type_support_handle = {
  0,
  &ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__ExecuteTrajectory_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_ros_rtde_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecuteTrajectory_GetResult_Request)() {
  ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__ExecuteTrajectory_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__ExecuteTrajectory_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__ExecuteTrajectory_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__ExecuteTrajectory_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur_ros_rtde_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_trajectory__functions.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_trajectory__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "ur_ros_rtde_msgs/action/execute_trajectory.h"
// Member `result`
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__ExecuteTrajectory_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Response__init(message_memory);
}

void ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__ExecuteTrajectory_GetResult_Response_fini_function(void * message_memory)
{
  ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__ExecuteTrajectory_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Response, status),  // bytes offset in struct
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
    offsetof(ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__ExecuteTrajectory_GetResult_Response_message_members = {
  "ur_ros_rtde_msgs__action",  // message namespace
  "ExecuteTrajectory_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Response),
  ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__ExecuteTrajectory_GetResult_Response_message_member_array,  // message members
  ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__ExecuteTrajectory_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__ExecuteTrajectory_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__ExecuteTrajectory_GetResult_Response_message_type_support_handle = {
  0,
  &ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__ExecuteTrajectory_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_ros_rtde_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecuteTrajectory_GetResult_Response)() {
  ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__ExecuteTrajectory_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecuteTrajectory_Result)();
  if (!ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__ExecuteTrajectory_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__ExecuteTrajectory_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__ExecuteTrajectory_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ur_ros_rtde_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ur_ros_rtde_msgs__action__detail__execute_trajectory__rosidl_typesupport_introspection_c__ExecuteTrajectory_GetResult_service_members = {
  "ur_ros_rtde_msgs__action",  // service namespace
  "ExecuteTrajectory_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ur_ros_rtde_msgs__action__detail__execute_trajectory__rosidl_typesupport_introspection_c__ExecuteTrajectory_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // ur_ros_rtde_msgs__action__detail__execute_trajectory__rosidl_typesupport_introspection_c__ExecuteTrajectory_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t ur_ros_rtde_msgs__action__detail__execute_trajectory__rosidl_typesupport_introspection_c__ExecuteTrajectory_GetResult_service_type_support_handle = {
  0,
  &ur_ros_rtde_msgs__action__detail__execute_trajectory__rosidl_typesupport_introspection_c__ExecuteTrajectory_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecuteTrajectory_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecuteTrajectory_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_ros_rtde_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecuteTrajectory_GetResult)() {
  if (!ur_ros_rtde_msgs__action__detail__execute_trajectory__rosidl_typesupport_introspection_c__ExecuteTrajectory_GetResult_service_type_support_handle.typesupport_identifier) {
    ur_ros_rtde_msgs__action__detail__execute_trajectory__rosidl_typesupport_introspection_c__ExecuteTrajectory_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ur_ros_rtde_msgs__action__detail__execute_trajectory__rosidl_typesupport_introspection_c__ExecuteTrajectory_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecuteTrajectory_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecuteTrajectory_GetResult_Response)()->data;
  }

  return &ur_ros_rtde_msgs__action__detail__execute_trajectory__rosidl_typesupport_introspection_c__ExecuteTrajectory_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur_ros_rtde_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_trajectory__functions.h"
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_trajectory__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "ur_ros_rtde_msgs/action/execute_trajectory.h"
// Member `feedback`
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur_ros_rtde_msgs__action__ExecuteTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__ExecuteTrajectory_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_ros_rtde_msgs__action__ExecuteTrajectory_FeedbackMessage__init(message_memory);
}

void ur_ros_rtde_msgs__action__ExecuteTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__ExecuteTrajectory_FeedbackMessage_fini_function(void * message_memory)
{
  ur_ros_rtde_msgs__action__ExecuteTrajectory_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ur_ros_rtde_msgs__action__ExecuteTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__ExecuteTrajectory_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_ros_rtde_msgs__action__ExecuteTrajectory_FeedbackMessage, goal_id),  // bytes offset in struct
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
    offsetof(ur_ros_rtde_msgs__action__ExecuteTrajectory_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_ros_rtde_msgs__action__ExecuteTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__ExecuteTrajectory_FeedbackMessage_message_members = {
  "ur_ros_rtde_msgs__action",  // message namespace
  "ExecuteTrajectory_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(ur_ros_rtde_msgs__action__ExecuteTrajectory_FeedbackMessage),
  ur_ros_rtde_msgs__action__ExecuteTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__ExecuteTrajectory_FeedbackMessage_message_member_array,  // message members
  ur_ros_rtde_msgs__action__ExecuteTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__ExecuteTrajectory_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_ros_rtde_msgs__action__ExecuteTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__ExecuteTrajectory_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_ros_rtde_msgs__action__ExecuteTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__ExecuteTrajectory_FeedbackMessage_message_type_support_handle = {
  0,
  &ur_ros_rtde_msgs__action__ExecuteTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__ExecuteTrajectory_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_ros_rtde_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecuteTrajectory_FeedbackMessage)() {
  ur_ros_rtde_msgs__action__ExecuteTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__ExecuteTrajectory_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  ur_ros_rtde_msgs__action__ExecuteTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__ExecuteTrajectory_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_ros_rtde_msgs, action, ExecuteTrajectory_Feedback)();
  if (!ur_ros_rtde_msgs__action__ExecuteTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__ExecuteTrajectory_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    ur_ros_rtde_msgs__action__ExecuteTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__ExecuteTrajectory_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_ros_rtde_msgs__action__ExecuteTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__ExecuteTrajectory_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
