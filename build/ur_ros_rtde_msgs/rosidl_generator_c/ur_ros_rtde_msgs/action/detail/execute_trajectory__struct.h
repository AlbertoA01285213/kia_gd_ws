// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ur_ros_rtde_msgs:action/ExecuteTrajectory.idl
// generated code does not contain a copyright notice

#ifndef UR_ROS_RTDE_MSGS__ACTION__DETAIL__EXECUTE_TRAJECTORY__STRUCT_H_
#define UR_ROS_RTDE_MSGS__ACTION__DETAIL__EXECUTE_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'trajectory'
#include "ur_ros_rtde_msgs/msg/detail/vector__struct.h"
// Member 'joint_speed_limits'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/ExecuteTrajectory in the package ur_ros_rtde_msgs.
typedef struct ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal
{
  ur_ros_rtde_msgs__msg__Vector__Sequence trajectory;
  double speed;
  double acceleration;
  double deceleration;
  double speed_percentage;
  rosidl_runtime_c__double__Sequence joint_speed_limits;
} ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal;

// Struct for a sequence of ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal.
typedef struct ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__Sequence
{
  ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/ExecuteTrajectory in the package ur_ros_rtde_msgs.
typedef struct ur_ros_rtde_msgs__action__ExecuteTrajectory_Result
{
  bool result;
} ur_ros_rtde_msgs__action__ExecuteTrajectory_Result;

// Struct for a sequence of ur_ros_rtde_msgs__action__ExecuteTrajectory_Result.
typedef struct ur_ros_rtde_msgs__action__ExecuteTrajectory_Result__Sequence
{
  ur_ros_rtde_msgs__action__ExecuteTrajectory_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_ros_rtde_msgs__action__ExecuteTrajectory_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/ExecuteTrajectory in the package ur_ros_rtde_msgs.
typedef struct ur_ros_rtde_msgs__action__ExecuteTrajectory_Feedback
{
  uint64_t reached_waypoint;
} ur_ros_rtde_msgs__action__ExecuteTrajectory_Feedback;

// Struct for a sequence of ur_ros_rtde_msgs__action__ExecuteTrajectory_Feedback.
typedef struct ur_ros_rtde_msgs__action__ExecuteTrajectory_Feedback__Sequence
{
  ur_ros_rtde_msgs__action__ExecuteTrajectory_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_ros_rtde_msgs__action__ExecuteTrajectory_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "ur_ros_rtde_msgs/action/detail/execute_trajectory__struct.h"

/// Struct defined in action/ExecuteTrajectory in the package ur_ros_rtde_msgs.
typedef struct ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  ur_ros_rtde_msgs__action__ExecuteTrajectory_Goal goal;
} ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Request;

// Struct for a sequence of ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Request.
typedef struct ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence
{
  ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ExecuteTrajectory in the package ur_ros_rtde_msgs.
typedef struct ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Response;

// Struct for a sequence of ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Response.
typedef struct ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence
{
  ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_ros_rtde_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ExecuteTrajectory in the package ur_ros_rtde_msgs.
typedef struct ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Request;

// Struct for a sequence of ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Request.
typedef struct ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence
{
  ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_trajectory__struct.h"

/// Struct defined in action/ExecuteTrajectory in the package ur_ros_rtde_msgs.
typedef struct ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Response
{
  int8_t status;
  ur_ros_rtde_msgs__action__ExecuteTrajectory_Result result;
} ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Response;

// Struct for a sequence of ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Response.
typedef struct ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence
{
  ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_ros_rtde_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_trajectory__struct.h"

/// Struct defined in action/ExecuteTrajectory in the package ur_ros_rtde_msgs.
typedef struct ur_ros_rtde_msgs__action__ExecuteTrajectory_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  ur_ros_rtde_msgs__action__ExecuteTrajectory_Feedback feedback;
} ur_ros_rtde_msgs__action__ExecuteTrajectory_FeedbackMessage;

// Struct for a sequence of ur_ros_rtde_msgs__action__ExecuteTrajectory_FeedbackMessage.
typedef struct ur_ros_rtde_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence
{
  ur_ros_rtde_msgs__action__ExecuteTrajectory_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_ros_rtde_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UR_ROS_RTDE_MSGS__ACTION__DETAIL__EXECUTE_TRAJECTORY__STRUCT_H_
