// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ur_ros_rtde_msgs:msg/IOState.idl
// generated code does not contain a copyright notice

#ifndef UR_ROS_RTDE_MSGS__MSG__DETAIL__IO_STATE__STRUCT_H_
#define UR_ROS_RTDE_MSGS__MSG__DETAIL__IO_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'digital_input_state'
// Member 'digital_output_state'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/IOState in the package ur_ros_rtde_msgs.
typedef struct ur_ros_rtde_msgs__msg__IOState
{
  rosidl_runtime_c__boolean__Sequence digital_input_state;
  rosidl_runtime_c__boolean__Sequence digital_output_state;
} ur_ros_rtde_msgs__msg__IOState;

// Struct for a sequence of ur_ros_rtde_msgs__msg__IOState.
typedef struct ur_ros_rtde_msgs__msg__IOState__Sequence
{
  ur_ros_rtde_msgs__msg__IOState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_ros_rtde_msgs__msg__IOState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UR_ROS_RTDE_MSGS__MSG__DETAIL__IO_STATE__STRUCT_H_
