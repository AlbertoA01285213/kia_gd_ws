// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ur_ros_rtde_msgs:msg/JointsConfiguration.idl
// generated code does not contain a copyright notice

#ifndef UR_ROS_RTDE_MSGS__MSG__DETAIL__JOINTS_CONFIGURATION__STRUCT_H_
#define UR_ROS_RTDE_MSGS__MSG__DETAIL__JOINTS_CONFIGURATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'motors'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/JointsConfiguration in the package ur_ros_rtde_msgs.
typedef struct ur_ros_rtde_msgs__msg__JointsConfiguration
{
  rosidl_runtime_c__double__Sequence motors;
} ur_ros_rtde_msgs__msg__JointsConfiguration;

// Struct for a sequence of ur_ros_rtde_msgs__msg__JointsConfiguration.
typedef struct ur_ros_rtde_msgs__msg__JointsConfiguration__Sequence
{
  ur_ros_rtde_msgs__msg__JointsConfiguration * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_ros_rtde_msgs__msg__JointsConfiguration__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UR_ROS_RTDE_MSGS__MSG__DETAIL__JOINTS_CONFIGURATION__STRUCT_H_
