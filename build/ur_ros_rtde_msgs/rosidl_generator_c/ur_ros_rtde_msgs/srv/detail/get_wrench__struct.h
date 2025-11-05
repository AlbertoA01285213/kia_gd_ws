// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ur_ros_rtde_msgs:srv/GetWrench.idl
// generated code does not contain a copyright notice

#ifndef UR_ROS_RTDE_MSGS__SRV__DETAIL__GET_WRENCH__STRUCT_H_
#define UR_ROS_RTDE_MSGS__SRV__DETAIL__GET_WRENCH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetWrench in the package ur_ros_rtde_msgs.
typedef struct ur_ros_rtde_msgs__srv__GetWrench_Request
{
  uint8_t structure_needs_at_least_one_member;
} ur_ros_rtde_msgs__srv__GetWrench_Request;

// Struct for a sequence of ur_ros_rtde_msgs__srv__GetWrench_Request.
typedef struct ur_ros_rtde_msgs__srv__GetWrench_Request__Sequence
{
  ur_ros_rtde_msgs__srv__GetWrench_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_ros_rtde_msgs__srv__GetWrench_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'wrench'
#include "geometry_msgs/msg/detail/wrench__struct.h"

/// Struct defined in srv/GetWrench in the package ur_ros_rtde_msgs.
typedef struct ur_ros_rtde_msgs__srv__GetWrench_Response
{
  bool success;
  geometry_msgs__msg__Wrench wrench;
} ur_ros_rtde_msgs__srv__GetWrench_Response;

// Struct for a sequence of ur_ros_rtde_msgs__srv__GetWrench_Response.
typedef struct ur_ros_rtde_msgs__srv__GetWrench_Response__Sequence
{
  ur_ros_rtde_msgs__srv__GetWrench_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_ros_rtde_msgs__srv__GetWrench_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UR_ROS_RTDE_MSGS__SRV__DETAIL__GET_WRENCH__STRUCT_H_
