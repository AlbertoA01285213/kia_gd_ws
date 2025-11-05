// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ur_ros_rtde_msgs:srv/GetJointState.idl
// generated code does not contain a copyright notice

#ifndef UR_ROS_RTDE_MSGS__SRV__DETAIL__GET_JOINT_STATE__STRUCT_H_
#define UR_ROS_RTDE_MSGS__SRV__DETAIL__GET_JOINT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetJointState in the package ur_ros_rtde_msgs.
typedef struct ur_ros_rtde_msgs__srv__GetJointState_Request
{
  uint8_t structure_needs_at_least_one_member;
} ur_ros_rtde_msgs__srv__GetJointState_Request;

// Struct for a sequence of ur_ros_rtde_msgs__srv__GetJointState_Request.
typedef struct ur_ros_rtde_msgs__srv__GetJointState_Request__Sequence
{
  ur_ros_rtde_msgs__srv__GetJointState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_ros_rtde_msgs__srv__GetJointState_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'joint_state'
#include "sensor_msgs/msg/detail/joint_state__struct.h"

/// Struct defined in srv/GetJointState in the package ur_ros_rtde_msgs.
typedef struct ur_ros_rtde_msgs__srv__GetJointState_Response
{
  bool success;
  sensor_msgs__msg__JointState joint_state;
} ur_ros_rtde_msgs__srv__GetJointState_Response;

// Struct for a sequence of ur_ros_rtde_msgs__srv__GetJointState_Response.
typedef struct ur_ros_rtde_msgs__srv__GetJointState_Response__Sequence
{
  ur_ros_rtde_msgs__srv__GetJointState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_ros_rtde_msgs__srv__GetJointState_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UR_ROS_RTDE_MSGS__SRV__DETAIL__GET_JOINT_STATE__STRUCT_H_
