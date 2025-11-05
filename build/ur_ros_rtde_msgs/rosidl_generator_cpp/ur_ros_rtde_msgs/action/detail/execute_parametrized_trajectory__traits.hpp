// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ur_ros_rtde_msgs:action/ExecuteParametrizedTrajectory.idl
// generated code does not contain a copyright notice

#ifndef UR_ROS_RTDE_MSGS__ACTION__DETAIL__EXECUTE_PARAMETRIZED_TRAJECTORY__TRAITS_HPP_
#define UR_ROS_RTDE_MSGS__ACTION__DETAIL__EXECUTE_PARAMETRIZED_TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ur_ros_rtde_msgs/action/detail/execute_parametrized_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'joint_positions'
// Member 'joint_velocities'
#include "ur_ros_rtde_msgs/msg/detail/vector__traits.hpp"

namespace ur_ros_rtde_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteParametrizedTrajectory_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_positions
  {
    if (msg.joint_positions.size() == 0) {
      out << "joint_positions: []";
    } else {
      out << "joint_positions: [";
      size_t pending_items = msg.joint_positions.size();
      for (auto item : msg.joint_positions) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_velocities
  {
    if (msg.joint_velocities.size() == 0) {
      out << "joint_velocities: []";
    } else {
      out << "joint_velocities: [";
      size_t pending_items = msg.joint_velocities.size();
      for (auto item : msg.joint_velocities) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: times
  {
    if (msg.times.size() == 0) {
      out << "times: []";
    } else {
      out << "times: [";
      size_t pending_items = msg.times.size();
      for (auto item : msg.times) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: deceleration
  {
    out << "deceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.deceleration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteParametrizedTrajectory_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_positions.size() == 0) {
      out << "joint_positions: []\n";
    } else {
      out << "joint_positions:\n";
      for (auto item : msg.joint_positions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: joint_velocities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_velocities.size() == 0) {
      out << "joint_velocities: []\n";
    } else {
      out << "joint_velocities:\n";
      for (auto item : msg.joint_velocities) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: times
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.times.size() == 0) {
      out << "times: []\n";
    } else {
      out << "times:\n";
      for (auto item : msg.times) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: deceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "deceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.deceleration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteParametrizedTrajectory_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ur_ros_rtde_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ur_ros_rtde_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_ros_rtde_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_ros_rtde_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Goal & msg)
{
  return ur_ros_rtde_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Goal>()
{
  return "ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Goal";
}

template<>
inline const char * name<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Goal>()
{
  return "ur_ros_rtde_msgs/action/ExecuteParametrizedTrajectory_Goal";
}

template<>
struct has_fixed_size<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ur_ros_rtde_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteParametrizedTrajectory_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteParametrizedTrajectory_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteParametrizedTrajectory_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ur_ros_rtde_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ur_ros_rtde_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_ros_rtde_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_ros_rtde_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Result & msg)
{
  return ur_ros_rtde_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Result>()
{
  return "ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Result";
}

template<>
inline const char * name<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Result>()
{
  return "ur_ros_rtde_msgs/action/ExecuteParametrizedTrajectory_Result";
}

template<>
struct has_fixed_size<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ur_ros_rtde_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteParametrizedTrajectory_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: reached_waypoint
  {
    out << "reached_waypoint: ";
    rosidl_generator_traits::value_to_yaml(msg.reached_waypoint, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteParametrizedTrajectory_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: reached_waypoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reached_waypoint: ";
    rosidl_generator_traits::value_to_yaml(msg.reached_waypoint, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteParametrizedTrajectory_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ur_ros_rtde_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ur_ros_rtde_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_ros_rtde_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_ros_rtde_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Feedback & msg)
{
  return ur_ros_rtde_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Feedback>()
{
  return "ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Feedback";
}

template<>
inline const char * name<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Feedback>()
{
  return "ur_ros_rtde_msgs/action/ExecuteParametrizedTrajectory_Feedback";
}

template<>
struct has_fixed_size<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "ur_ros_rtde_msgs/action/detail/execute_parametrized_trajectory__traits.hpp"

namespace ur_ros_rtde_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteParametrizedTrajectory_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteParametrizedTrajectory_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteParametrizedTrajectory_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ur_ros_rtde_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ur_ros_rtde_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_ros_rtde_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_ros_rtde_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Request & msg)
{
  return ur_ros_rtde_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Request>()
{
  return "ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Request";
}

template<>
inline const char * name<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Request>()
{
  return "ur_ros_rtde_msgs/action/ExecuteParametrizedTrajectory_SendGoal_Request";
}

template<>
struct has_fixed_size<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value && has_fixed_size<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Goal>::value> {};

template<>
struct has_bounded_size<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value && has_bounded_size<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Goal>::value> {};

template<>
struct is_message<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace ur_ros_rtde_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteParametrizedTrajectory_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteParametrizedTrajectory_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteParametrizedTrajectory_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ur_ros_rtde_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ur_ros_rtde_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_ros_rtde_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_ros_rtde_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Response & msg)
{
  return ur_ros_rtde_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Response>()
{
  return "ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Response";
}

template<>
inline const char * name<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Response>()
{
  return "ur_ros_rtde_msgs/action/ExecuteParametrizedTrajectory_SendGoal_Response";
}

template<>
struct has_fixed_size<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal>()
{
  return "ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal";
}

template<>
inline const char * name<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal>()
{
  return "ur_ros_rtde_msgs/action/ExecuteParametrizedTrajectory_SendGoal";
}

template<>
struct has_fixed_size<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Request>::value &&
    has_fixed_size<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Request>::value &&
    has_bounded_size<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace ur_ros_rtde_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteParametrizedTrajectory_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteParametrizedTrajectory_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteParametrizedTrajectory_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ur_ros_rtde_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ur_ros_rtde_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_ros_rtde_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_ros_rtde_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult_Request & msg)
{
  return ur_ros_rtde_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult_Request>()
{
  return "ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult_Request";
}

template<>
inline const char * name<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult_Request>()
{
  return "ur_ros_rtde_msgs/action/ExecuteParametrizedTrajectory_GetResult_Request";
}

template<>
struct has_fixed_size<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_parametrized_trajectory__traits.hpp"

namespace ur_ros_rtde_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteParametrizedTrajectory_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteParametrizedTrajectory_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteParametrizedTrajectory_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ur_ros_rtde_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ur_ros_rtde_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_ros_rtde_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_ros_rtde_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult_Response & msg)
{
  return ur_ros_rtde_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult_Response>()
{
  return "ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult_Response";
}

template<>
inline const char * name<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult_Response>()
{
  return "ur_ros_rtde_msgs/action/ExecuteParametrizedTrajectory_GetResult_Response";
}

template<>
struct has_fixed_size<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Result>::value> {};

template<>
struct has_bounded_size<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Result>::value> {};

template<>
struct is_message<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult>()
{
  return "ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult";
}

template<>
inline const char * name<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult>()
{
  return "ur_ros_rtde_msgs/action/ExecuteParametrizedTrajectory_GetResult";
}

template<>
struct has_fixed_size<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult_Request>::value &&
    has_fixed_size<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult_Request>::value &&
    has_bounded_size<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult_Response>::value
  >
{
};

template<>
struct is_service<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_parametrized_trajectory__traits.hpp"

namespace ur_ros_rtde_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteParametrizedTrajectory_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteParametrizedTrajectory_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteParametrizedTrajectory_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ur_ros_rtde_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ur_ros_rtde_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_ros_rtde_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_ros_rtde_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_FeedbackMessage & msg)
{
  return ur_ros_rtde_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_FeedbackMessage>()
{
  return "ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_FeedbackMessage";
}

template<>
inline const char * name<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_FeedbackMessage>()
{
  return "ur_ros_rtde_msgs/action/ExecuteParametrizedTrajectory_FeedbackMessage";
}

template<>
struct has_fixed_size<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value && has_fixed_size<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Feedback>::value> {};

template<>
struct has_bounded_size<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value && has_bounded_size<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Feedback>::value> {};

template<>
struct is_message<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory>
  : std::true_type
{
};

template<>
struct is_action_goal<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // UR_ROS_RTDE_MSGS__ACTION__DETAIL__EXECUTE_PARAMETRIZED_TRAJECTORY__TRAITS_HPP_
