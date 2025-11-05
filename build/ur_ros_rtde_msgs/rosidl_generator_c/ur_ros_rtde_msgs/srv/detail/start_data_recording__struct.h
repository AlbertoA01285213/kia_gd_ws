// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ur_ros_rtde_msgs:srv/StartDataRecording.idl
// generated code does not contain a copyright notice

#ifndef UR_ROS_RTDE_MSGS__SRV__DETAIL__START_DATA_RECORDING__STRUCT_H_
#define UR_ROS_RTDE_MSGS__SRV__DETAIL__START_DATA_RECORDING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'filename'
// Member 'variables'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/StartDataRecording in the package ur_ros_rtde_msgs.
typedef struct ur_ros_rtde_msgs__srv__StartDataRecording_Request
{
  rosidl_runtime_c__String filename;
  rosidl_runtime_c__String__Sequence variables;
} ur_ros_rtde_msgs__srv__StartDataRecording_Request;

// Struct for a sequence of ur_ros_rtde_msgs__srv__StartDataRecording_Request.
typedef struct ur_ros_rtde_msgs__srv__StartDataRecording_Request__Sequence
{
  ur_ros_rtde_msgs__srv__StartDataRecording_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_ros_rtde_msgs__srv__StartDataRecording_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/StartDataRecording in the package ur_ros_rtde_msgs.
typedef struct ur_ros_rtde_msgs__srv__StartDataRecording_Response
{
  bool success;
} ur_ros_rtde_msgs__srv__StartDataRecording_Response;

// Struct for a sequence of ur_ros_rtde_msgs__srv__StartDataRecording_Response.
typedef struct ur_ros_rtde_msgs__srv__StartDataRecording_Response__Sequence
{
  ur_ros_rtde_msgs__srv__StartDataRecording_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_ros_rtde_msgs__srv__StartDataRecording_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UR_ROS_RTDE_MSGS__SRV__DETAIL__START_DATA_RECORDING__STRUCT_H_
