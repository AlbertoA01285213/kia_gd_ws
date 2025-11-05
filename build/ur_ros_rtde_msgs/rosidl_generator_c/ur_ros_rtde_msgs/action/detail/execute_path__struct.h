// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ur_ros_rtde_msgs:action/ExecutePath.idl
// generated code does not contain a copyright notice

#ifndef UR_ROS_RTDE_MSGS__ACTION__DETAIL__EXECUTE_PATH__STRUCT_H_
#define UR_ROS_RTDE_MSGS__ACTION__DETAIL__EXECUTE_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'waypoints'
#include "ur_ros_rtde_msgs/msg/detail/vector__struct.h"
// Member 'speed'
// Member 'acceleration'
// Member 'blend'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'move_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/ExecutePath in the package ur_ros_rtde_msgs.
typedef struct ur_ros_rtde_msgs__action__ExecutePath_Goal
{
  ur_ros_rtde_msgs__msg__Vector__Sequence waypoints;
  rosidl_runtime_c__double__Sequence speed;
  rosidl_runtime_c__double__Sequence acceleration;
  rosidl_runtime_c__double__Sequence blend;
  rosidl_runtime_c__String__Sequence move_type;
} ur_ros_rtde_msgs__action__ExecutePath_Goal;

// Struct for a sequence of ur_ros_rtde_msgs__action__ExecutePath_Goal.
typedef struct ur_ros_rtde_msgs__action__ExecutePath_Goal__Sequence
{
  ur_ros_rtde_msgs__action__ExecutePath_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_ros_rtde_msgs__action__ExecutePath_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/ExecutePath in the package ur_ros_rtde_msgs.
typedef struct ur_ros_rtde_msgs__action__ExecutePath_Result
{
  bool result;
} ur_ros_rtde_msgs__action__ExecutePath_Result;

// Struct for a sequence of ur_ros_rtde_msgs__action__ExecutePath_Result.
typedef struct ur_ros_rtde_msgs__action__ExecutePath_Result__Sequence
{
  ur_ros_rtde_msgs__action__ExecutePath_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_ros_rtde_msgs__action__ExecutePath_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/ExecutePath in the package ur_ros_rtde_msgs.
typedef struct ur_ros_rtde_msgs__action__ExecutePath_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} ur_ros_rtde_msgs__action__ExecutePath_Feedback;

// Struct for a sequence of ur_ros_rtde_msgs__action__ExecutePath_Feedback.
typedef struct ur_ros_rtde_msgs__action__ExecutePath_Feedback__Sequence
{
  ur_ros_rtde_msgs__action__ExecutePath_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_ros_rtde_msgs__action__ExecutePath_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "ur_ros_rtde_msgs/action/detail/execute_path__struct.h"

/// Struct defined in action/ExecutePath in the package ur_ros_rtde_msgs.
typedef struct ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  ur_ros_rtde_msgs__action__ExecutePath_Goal goal;
} ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Request;

// Struct for a sequence of ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Request.
typedef struct ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Request__Sequence
{
  ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ExecutePath in the package ur_ros_rtde_msgs.
typedef struct ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Response;

// Struct for a sequence of ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Response.
typedef struct ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Response__Sequence
{
  ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_ros_rtde_msgs__action__ExecutePath_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ExecutePath in the package ur_ros_rtde_msgs.
typedef struct ur_ros_rtde_msgs__action__ExecutePath_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} ur_ros_rtde_msgs__action__ExecutePath_GetResult_Request;

// Struct for a sequence of ur_ros_rtde_msgs__action__ExecutePath_GetResult_Request.
typedef struct ur_ros_rtde_msgs__action__ExecutePath_GetResult_Request__Sequence
{
  ur_ros_rtde_msgs__action__ExecutePath_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_ros_rtde_msgs__action__ExecutePath_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__struct.h"

/// Struct defined in action/ExecutePath in the package ur_ros_rtde_msgs.
typedef struct ur_ros_rtde_msgs__action__ExecutePath_GetResult_Response
{
  int8_t status;
  ur_ros_rtde_msgs__action__ExecutePath_Result result;
} ur_ros_rtde_msgs__action__ExecutePath_GetResult_Response;

// Struct for a sequence of ur_ros_rtde_msgs__action__ExecutePath_GetResult_Response.
typedef struct ur_ros_rtde_msgs__action__ExecutePath_GetResult_Response__Sequence
{
  ur_ros_rtde_msgs__action__ExecutePath_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_ros_rtde_msgs__action__ExecutePath_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__struct.h"

/// Struct defined in action/ExecutePath in the package ur_ros_rtde_msgs.
typedef struct ur_ros_rtde_msgs__action__ExecutePath_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  ur_ros_rtde_msgs__action__ExecutePath_Feedback feedback;
} ur_ros_rtde_msgs__action__ExecutePath_FeedbackMessage;

// Struct for a sequence of ur_ros_rtde_msgs__action__ExecutePath_FeedbackMessage.
typedef struct ur_ros_rtde_msgs__action__ExecutePath_FeedbackMessage__Sequence
{
  ur_ros_rtde_msgs__action__ExecutePath_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_ros_rtde_msgs__action__ExecutePath_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UR_ROS_RTDE_MSGS__ACTION__DETAIL__EXECUTE_PATH__STRUCT_H_
