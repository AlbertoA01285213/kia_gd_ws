// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ur_ros_rtde_msgs:action/ProgramState.idl
// generated code does not contain a copyright notice

#ifndef UR_ROS_RTDE_MSGS__ACTION__DETAIL__PROGRAM_STATE__STRUCT_H_
#define UR_ROS_RTDE_MSGS__ACTION__DETAIL__PROGRAM_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/ProgramState in the package ur_ros_rtde_msgs.
typedef struct ur_ros_rtde_msgs__action__ProgramState_Goal
{
  uint8_t structure_needs_at_least_one_member;
} ur_ros_rtde_msgs__action__ProgramState_Goal;

// Struct for a sequence of ur_ros_rtde_msgs__action__ProgramState_Goal.
typedef struct ur_ros_rtde_msgs__action__ProgramState_Goal__Sequence
{
  ur_ros_rtde_msgs__action__ProgramState_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_ros_rtde_msgs__action__ProgramState_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/ProgramState in the package ur_ros_rtde_msgs.
typedef struct ur_ros_rtde_msgs__action__ProgramState_Result
{
  rosidl_runtime_c__String result;
} ur_ros_rtde_msgs__action__ProgramState_Result;

// Struct for a sequence of ur_ros_rtde_msgs__action__ProgramState_Result.
typedef struct ur_ros_rtde_msgs__action__ProgramState_Result__Sequence
{
  ur_ros_rtde_msgs__action__ProgramState_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_ros_rtde_msgs__action__ProgramState_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/ProgramState in the package ur_ros_rtde_msgs.
typedef struct ur_ros_rtde_msgs__action__ProgramState_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} ur_ros_rtde_msgs__action__ProgramState_Feedback;

// Struct for a sequence of ur_ros_rtde_msgs__action__ProgramState_Feedback.
typedef struct ur_ros_rtde_msgs__action__ProgramState_Feedback__Sequence
{
  ur_ros_rtde_msgs__action__ProgramState_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_ros_rtde_msgs__action__ProgramState_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "ur_ros_rtde_msgs/action/detail/program_state__struct.h"

/// Struct defined in action/ProgramState in the package ur_ros_rtde_msgs.
typedef struct ur_ros_rtde_msgs__action__ProgramState_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  ur_ros_rtde_msgs__action__ProgramState_Goal goal;
} ur_ros_rtde_msgs__action__ProgramState_SendGoal_Request;

// Struct for a sequence of ur_ros_rtde_msgs__action__ProgramState_SendGoal_Request.
typedef struct ur_ros_rtde_msgs__action__ProgramState_SendGoal_Request__Sequence
{
  ur_ros_rtde_msgs__action__ProgramState_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_ros_rtde_msgs__action__ProgramState_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ProgramState in the package ur_ros_rtde_msgs.
typedef struct ur_ros_rtde_msgs__action__ProgramState_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} ur_ros_rtde_msgs__action__ProgramState_SendGoal_Response;

// Struct for a sequence of ur_ros_rtde_msgs__action__ProgramState_SendGoal_Response.
typedef struct ur_ros_rtde_msgs__action__ProgramState_SendGoal_Response__Sequence
{
  ur_ros_rtde_msgs__action__ProgramState_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_ros_rtde_msgs__action__ProgramState_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ProgramState in the package ur_ros_rtde_msgs.
typedef struct ur_ros_rtde_msgs__action__ProgramState_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} ur_ros_rtde_msgs__action__ProgramState_GetResult_Request;

// Struct for a sequence of ur_ros_rtde_msgs__action__ProgramState_GetResult_Request.
typedef struct ur_ros_rtde_msgs__action__ProgramState_GetResult_Request__Sequence
{
  ur_ros_rtde_msgs__action__ProgramState_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_ros_rtde_msgs__action__ProgramState_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "ur_ros_rtde_msgs/action/detail/program_state__struct.h"

/// Struct defined in action/ProgramState in the package ur_ros_rtde_msgs.
typedef struct ur_ros_rtde_msgs__action__ProgramState_GetResult_Response
{
  int8_t status;
  ur_ros_rtde_msgs__action__ProgramState_Result result;
} ur_ros_rtde_msgs__action__ProgramState_GetResult_Response;

// Struct for a sequence of ur_ros_rtde_msgs__action__ProgramState_GetResult_Response.
typedef struct ur_ros_rtde_msgs__action__ProgramState_GetResult_Response__Sequence
{
  ur_ros_rtde_msgs__action__ProgramState_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_ros_rtde_msgs__action__ProgramState_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "ur_ros_rtde_msgs/action/detail/program_state__struct.h"

/// Struct defined in action/ProgramState in the package ur_ros_rtde_msgs.
typedef struct ur_ros_rtde_msgs__action__ProgramState_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  ur_ros_rtde_msgs__action__ProgramState_Feedback feedback;
} ur_ros_rtde_msgs__action__ProgramState_FeedbackMessage;

// Struct for a sequence of ur_ros_rtde_msgs__action__ProgramState_FeedbackMessage.
typedef struct ur_ros_rtde_msgs__action__ProgramState_FeedbackMessage__Sequence
{
  ur_ros_rtde_msgs__action__ProgramState_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_ros_rtde_msgs__action__ProgramState_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UR_ROS_RTDE_MSGS__ACTION__DETAIL__PROGRAM_STATE__STRUCT_H_
