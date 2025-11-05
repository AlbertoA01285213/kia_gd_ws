// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ur_ros_rtde_msgs:action/MoveLRelative.idl
// generated code does not contain a copyright notice

#ifndef UR_ROS_RTDE_MSGS__ACTION__DETAIL__MOVE_L_RELATIVE__TRAITS_HPP_
#define UR_ROS_RTDE_MSGS__ACTION__DETAIL__MOVE_L_RELATIVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ur_ros_rtde_msgs/action/detail/move_l_relative__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
// Member 'orientation'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace ur_ros_rtde_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveLRelative_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: orientation
  {
    out << "orientation: ";
    to_flow_style_yaml(msg.orientation, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: acceleration
  {
    out << "acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveLRelative_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation:\n";
    to_block_style_yaml(msg.orientation, out, indentation + 2);
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveLRelative_Goal & msg, bool use_flow_style = false)
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
  const ur_ros_rtde_msgs::action::MoveLRelative_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_ros_rtde_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_ros_rtde_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ur_ros_rtde_msgs::action::MoveLRelative_Goal & msg)
{
  return ur_ros_rtde_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ur_ros_rtde_msgs::action::MoveLRelative_Goal>()
{
  return "ur_ros_rtde_msgs::action::MoveLRelative_Goal";
}

template<>
inline const char * name<ur_ros_rtde_msgs::action::MoveLRelative_Goal>()
{
  return "ur_ros_rtde_msgs/action/MoveLRelative_Goal";
}

template<>
struct has_fixed_size<ur_ros_rtde_msgs::action::MoveLRelative_Goal>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<ur_ros_rtde_msgs::action::MoveLRelative_Goal>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<ur_ros_rtde_msgs::action::MoveLRelative_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ur_ros_rtde_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveLRelative_Result & msg,
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
  const MoveLRelative_Result & msg,
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

inline std::string to_yaml(const MoveLRelative_Result & msg, bool use_flow_style = false)
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
  const ur_ros_rtde_msgs::action::MoveLRelative_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_ros_rtde_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_ros_rtde_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ur_ros_rtde_msgs::action::MoveLRelative_Result & msg)
{
  return ur_ros_rtde_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ur_ros_rtde_msgs::action::MoveLRelative_Result>()
{
  return "ur_ros_rtde_msgs::action::MoveLRelative_Result";
}

template<>
inline const char * name<ur_ros_rtde_msgs::action::MoveLRelative_Result>()
{
  return "ur_ros_rtde_msgs/action/MoveLRelative_Result";
}

template<>
struct has_fixed_size<ur_ros_rtde_msgs::action::MoveLRelative_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ur_ros_rtde_msgs::action::MoveLRelative_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ur_ros_rtde_msgs::action::MoveLRelative_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ur_ros_rtde_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveLRelative_Feedback & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveLRelative_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveLRelative_Feedback & msg, bool use_flow_style = false)
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
  const ur_ros_rtde_msgs::action::MoveLRelative_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_ros_rtde_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_ros_rtde_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ur_ros_rtde_msgs::action::MoveLRelative_Feedback & msg)
{
  return ur_ros_rtde_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ur_ros_rtde_msgs::action::MoveLRelative_Feedback>()
{
  return "ur_ros_rtde_msgs::action::MoveLRelative_Feedback";
}

template<>
inline const char * name<ur_ros_rtde_msgs::action::MoveLRelative_Feedback>()
{
  return "ur_ros_rtde_msgs/action/MoveLRelative_Feedback";
}

template<>
struct has_fixed_size<ur_ros_rtde_msgs::action::MoveLRelative_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ur_ros_rtde_msgs::action::MoveLRelative_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ur_ros_rtde_msgs::action::MoveLRelative_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "ur_ros_rtde_msgs/action/detail/move_l_relative__traits.hpp"

namespace ur_ros_rtde_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveLRelative_SendGoal_Request & msg,
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
  const MoveLRelative_SendGoal_Request & msg,
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

inline std::string to_yaml(const MoveLRelative_SendGoal_Request & msg, bool use_flow_style = false)
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
  const ur_ros_rtde_msgs::action::MoveLRelative_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_ros_rtde_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_ros_rtde_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ur_ros_rtde_msgs::action::MoveLRelative_SendGoal_Request & msg)
{
  return ur_ros_rtde_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ur_ros_rtde_msgs::action::MoveLRelative_SendGoal_Request>()
{
  return "ur_ros_rtde_msgs::action::MoveLRelative_SendGoal_Request";
}

template<>
inline const char * name<ur_ros_rtde_msgs::action::MoveLRelative_SendGoal_Request>()
{
  return "ur_ros_rtde_msgs/action/MoveLRelative_SendGoal_Request";
}

template<>
struct has_fixed_size<ur_ros_rtde_msgs::action::MoveLRelative_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value && has_fixed_size<ur_ros_rtde_msgs::action::MoveLRelative_Goal>::value> {};

template<>
struct has_bounded_size<ur_ros_rtde_msgs::action::MoveLRelative_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value && has_bounded_size<ur_ros_rtde_msgs::action::MoveLRelative_Goal>::value> {};

template<>
struct is_message<ur_ros_rtde_msgs::action::MoveLRelative_SendGoal_Request>
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
  const MoveLRelative_SendGoal_Response & msg,
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
  const MoveLRelative_SendGoal_Response & msg,
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

inline std::string to_yaml(const MoveLRelative_SendGoal_Response & msg, bool use_flow_style = false)
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
  const ur_ros_rtde_msgs::action::MoveLRelative_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_ros_rtde_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_ros_rtde_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ur_ros_rtde_msgs::action::MoveLRelative_SendGoal_Response & msg)
{
  return ur_ros_rtde_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ur_ros_rtde_msgs::action::MoveLRelative_SendGoal_Response>()
{
  return "ur_ros_rtde_msgs::action::MoveLRelative_SendGoal_Response";
}

template<>
inline const char * name<ur_ros_rtde_msgs::action::MoveLRelative_SendGoal_Response>()
{
  return "ur_ros_rtde_msgs/action/MoveLRelative_SendGoal_Response";
}

template<>
struct has_fixed_size<ur_ros_rtde_msgs::action::MoveLRelative_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<ur_ros_rtde_msgs::action::MoveLRelative_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<ur_ros_rtde_msgs::action::MoveLRelative_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur_ros_rtde_msgs::action::MoveLRelative_SendGoal>()
{
  return "ur_ros_rtde_msgs::action::MoveLRelative_SendGoal";
}

template<>
inline const char * name<ur_ros_rtde_msgs::action::MoveLRelative_SendGoal>()
{
  return "ur_ros_rtde_msgs/action/MoveLRelative_SendGoal";
}

template<>
struct has_fixed_size<ur_ros_rtde_msgs::action::MoveLRelative_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<ur_ros_rtde_msgs::action::MoveLRelative_SendGoal_Request>::value &&
    has_fixed_size<ur_ros_rtde_msgs::action::MoveLRelative_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<ur_ros_rtde_msgs::action::MoveLRelative_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<ur_ros_rtde_msgs::action::MoveLRelative_SendGoal_Request>::value &&
    has_bounded_size<ur_ros_rtde_msgs::action::MoveLRelative_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<ur_ros_rtde_msgs::action::MoveLRelative_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<ur_ros_rtde_msgs::action::MoveLRelative_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ur_ros_rtde_msgs::action::MoveLRelative_SendGoal_Response>
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
  const MoveLRelative_GetResult_Request & msg,
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
  const MoveLRelative_GetResult_Request & msg,
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

inline std::string to_yaml(const MoveLRelative_GetResult_Request & msg, bool use_flow_style = false)
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
  const ur_ros_rtde_msgs::action::MoveLRelative_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_ros_rtde_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_ros_rtde_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ur_ros_rtde_msgs::action::MoveLRelative_GetResult_Request & msg)
{
  return ur_ros_rtde_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ur_ros_rtde_msgs::action::MoveLRelative_GetResult_Request>()
{
  return "ur_ros_rtde_msgs::action::MoveLRelative_GetResult_Request";
}

template<>
inline const char * name<ur_ros_rtde_msgs::action::MoveLRelative_GetResult_Request>()
{
  return "ur_ros_rtde_msgs/action/MoveLRelative_GetResult_Request";
}

template<>
struct has_fixed_size<ur_ros_rtde_msgs::action::MoveLRelative_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ur_ros_rtde_msgs::action::MoveLRelative_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ur_ros_rtde_msgs::action::MoveLRelative_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "ur_ros_rtde_msgs/action/detail/move_l_relative__traits.hpp"

namespace ur_ros_rtde_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveLRelative_GetResult_Response & msg,
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
  const MoveLRelative_GetResult_Response & msg,
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

inline std::string to_yaml(const MoveLRelative_GetResult_Response & msg, bool use_flow_style = false)
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
  const ur_ros_rtde_msgs::action::MoveLRelative_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_ros_rtde_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_ros_rtde_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ur_ros_rtde_msgs::action::MoveLRelative_GetResult_Response & msg)
{
  return ur_ros_rtde_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ur_ros_rtde_msgs::action::MoveLRelative_GetResult_Response>()
{
  return "ur_ros_rtde_msgs::action::MoveLRelative_GetResult_Response";
}

template<>
inline const char * name<ur_ros_rtde_msgs::action::MoveLRelative_GetResult_Response>()
{
  return "ur_ros_rtde_msgs/action/MoveLRelative_GetResult_Response";
}

template<>
struct has_fixed_size<ur_ros_rtde_msgs::action::MoveLRelative_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<ur_ros_rtde_msgs::action::MoveLRelative_Result>::value> {};

template<>
struct has_bounded_size<ur_ros_rtde_msgs::action::MoveLRelative_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<ur_ros_rtde_msgs::action::MoveLRelative_Result>::value> {};

template<>
struct is_message<ur_ros_rtde_msgs::action::MoveLRelative_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur_ros_rtde_msgs::action::MoveLRelative_GetResult>()
{
  return "ur_ros_rtde_msgs::action::MoveLRelative_GetResult";
}

template<>
inline const char * name<ur_ros_rtde_msgs::action::MoveLRelative_GetResult>()
{
  return "ur_ros_rtde_msgs/action/MoveLRelative_GetResult";
}

template<>
struct has_fixed_size<ur_ros_rtde_msgs::action::MoveLRelative_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<ur_ros_rtde_msgs::action::MoveLRelative_GetResult_Request>::value &&
    has_fixed_size<ur_ros_rtde_msgs::action::MoveLRelative_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<ur_ros_rtde_msgs::action::MoveLRelative_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<ur_ros_rtde_msgs::action::MoveLRelative_GetResult_Request>::value &&
    has_bounded_size<ur_ros_rtde_msgs::action::MoveLRelative_GetResult_Response>::value
  >
{
};

template<>
struct is_service<ur_ros_rtde_msgs::action::MoveLRelative_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<ur_ros_rtde_msgs::action::MoveLRelative_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ur_ros_rtde_msgs::action::MoveLRelative_GetResult_Response>
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
// #include "ur_ros_rtde_msgs/action/detail/move_l_relative__traits.hpp"

namespace ur_ros_rtde_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveLRelative_FeedbackMessage & msg,
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
  const MoveLRelative_FeedbackMessage & msg,
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

inline std::string to_yaml(const MoveLRelative_FeedbackMessage & msg, bool use_flow_style = false)
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
  const ur_ros_rtde_msgs::action::MoveLRelative_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_ros_rtde_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_ros_rtde_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ur_ros_rtde_msgs::action::MoveLRelative_FeedbackMessage & msg)
{
  return ur_ros_rtde_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ur_ros_rtde_msgs::action::MoveLRelative_FeedbackMessage>()
{
  return "ur_ros_rtde_msgs::action::MoveLRelative_FeedbackMessage";
}

template<>
inline const char * name<ur_ros_rtde_msgs::action::MoveLRelative_FeedbackMessage>()
{
  return "ur_ros_rtde_msgs/action/MoveLRelative_FeedbackMessage";
}

template<>
struct has_fixed_size<ur_ros_rtde_msgs::action::MoveLRelative_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value && has_fixed_size<ur_ros_rtde_msgs::action::MoveLRelative_Feedback>::value> {};

template<>
struct has_bounded_size<ur_ros_rtde_msgs::action::MoveLRelative_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value && has_bounded_size<ur_ros_rtde_msgs::action::MoveLRelative_Feedback>::value> {};

template<>
struct is_message<ur_ros_rtde_msgs::action::MoveLRelative_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<ur_ros_rtde_msgs::action::MoveLRelative>
  : std::true_type
{
};

template<>
struct is_action_goal<ur_ros_rtde_msgs::action::MoveLRelative_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<ur_ros_rtde_msgs::action::MoveLRelative_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<ur_ros_rtde_msgs::action::MoveLRelative_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // UR_ROS_RTDE_MSGS__ACTION__DETAIL__MOVE_L_RELATIVE__TRAITS_HPP_
