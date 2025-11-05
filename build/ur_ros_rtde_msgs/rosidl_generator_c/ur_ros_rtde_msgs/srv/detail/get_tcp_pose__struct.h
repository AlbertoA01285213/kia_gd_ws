// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ur_ros_rtde_msgs:srv/GetTcpPose.idl
// generated code does not contain a copyright notice

#ifndef UR_ROS_RTDE_MSGS__SRV__DETAIL__GET_TCP_POSE__STRUCT_H_
#define UR_ROS_RTDE_MSGS__SRV__DETAIL__GET_TCP_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetTcpPose in the package ur_ros_rtde_msgs.
typedef struct ur_ros_rtde_msgs__srv__GetTcpPose_Request
{
  uint8_t structure_needs_at_least_one_member;
} ur_ros_rtde_msgs__srv__GetTcpPose_Request;

// Struct for a sequence of ur_ros_rtde_msgs__srv__GetTcpPose_Request.
typedef struct ur_ros_rtde_msgs__srv__GetTcpPose_Request__Sequence
{
  ur_ros_rtde_msgs__srv__GetTcpPose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_ros_rtde_msgs__srv__GetTcpPose_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/GetTcpPose in the package ur_ros_rtde_msgs.
typedef struct ur_ros_rtde_msgs__srv__GetTcpPose_Response
{
  bool success;
  geometry_msgs__msg__Pose pose;
} ur_ros_rtde_msgs__srv__GetTcpPose_Response;

// Struct for a sequence of ur_ros_rtde_msgs__srv__GetTcpPose_Response.
typedef struct ur_ros_rtde_msgs__srv__GetTcpPose_Response__Sequence
{
  ur_ros_rtde_msgs__srv__GetTcpPose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_ros_rtde_msgs__srv__GetTcpPose_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UR_ROS_RTDE_MSGS__SRV__DETAIL__GET_TCP_POSE__STRUCT_H_
