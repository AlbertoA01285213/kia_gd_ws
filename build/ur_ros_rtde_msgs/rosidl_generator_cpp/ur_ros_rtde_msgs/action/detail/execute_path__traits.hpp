// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ur_ros_rtde_msgs:action/ExecutePath.idl
// generated code does not contain a copyright notice

#ifndef UR_ROS_RTDE_MSGS__ACTION__DETAIL__EXECUTE_PATH__TRAITS_HPP_
#define UR_ROS_RTDE_MSGS__ACTION__DETAIL__EXECUTE_PATH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ur_ros_rtde_msgs/action/detail/execute_path__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'waypoints'
#include "ur_ros_rtde_msgs/msg/detail/vector__traits.hpp"

namespace ur_ros_rtde_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecutePath_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: waypoints
  {
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []";
    } else {
      out << "waypoints: [";
      size_t pending_items = msg.waypoints.size();
      for (auto item : msg.waypoints) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: speed
  {
    if (msg.speed.size() == 0) {
      out << "speed: []";
    } else {
      out << "speed: [";
      size_t pending_items = msg.speed.size();
      for (auto item : msg.speed) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: acceleration
  {
    if (msg.acceleration.size() == 0) {
      out << "acceleration: []";
    } else {
      out << "acceleration: [";
      size_t pending_items = msg.acceleration.size();
      for (auto item : msg.acceleration) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: blend
  {
    if (msg.blend.size() == 0) {
      out << "blend: []";
    } else {
      out << "blend: [";
      size_t pending_items = msg.blend.size();
      for (auto item : msg.blend) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: move_type
  {
    if (msg.move_type.size() == 0) {
      out << "move_type: []";
    } else {
      out << "move_type: [";
      size_t pending_items = msg.move_type.size();
      for (auto item : msg.move_type) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecutePath_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []\n";
    } else {
      out << "waypoints:\n";
      for (auto item : msg.waypoints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.speed.size() == 0) {
      out << "speed: []\n";
    } else {
      out << "speed:\n";
      for (auto item : msg.speed) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.acceleration.size() == 0) {
      out << "acceleration: []\n";
    } else {
      out << "acceleration:\n";
      for (auto item : msg.acceleration) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: blend
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.blend.size() == 0) {
      out << "blend: []\n";
    } else {
      out << "blend:\n";
      for (auto item : msg.blend) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: move_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.move_type.size() == 0) {
      out << "move_type: []\n";
    } else {
      out << "move_type:\n";
      for (auto item : msg.move_type) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecutePath_Goal & msg, bool use_flow_style = false)
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
  const ur_ros_rtde_msgs::action::ExecutePath_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_ros_rtde_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_ros_rtde_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ur_ros_rtde_msgs::action::ExecutePath_Goal & msg)
{
  return ur_ros_rtde_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ur_ros_rtde_msgs::action::ExecutePath_Goal>()
{
  return "ur_ros_rtde_msgs::action::ExecutePath_Goal";
}

template<>
inline const char * name<ur_ros_rtde_msgs::action::ExecutePath_Goal>()
{
  return "ur_ros_rtde_msgs/action/ExecutePath_Goal";
}

template<>
struct has_fixed_size<ur_ros_rtde_msgs::action::ExecutePath_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ur_ros_rtde_msgs::action::ExecutePath_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ur_ros_rtde_msgs::action::ExecutePath_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ur_ros_rtde_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecutePath_Result & msg,
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
  const ExecutePath_Result & msg,
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

inline std::string to_yaml(const ExecutePath_Result & msg, bool use_flow_style = false)
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
  const ur_ros_rtde_msgs::action::ExecutePath_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_ros_rtde_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_ros_rtde_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ur_ros_rtde_msgs::action::ExecutePath_Result & msg)
{
  return ur_ros_rtde_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ur_ros_rtde_msgs::action::ExecutePath_Result>()
{
  return "ur_ros_rtde_msgs::action::ExecutePath_Result";
}

template<>
inline const char * name<ur_ros_rtde_msgs::action::ExecutePath_Result>()
{
  return "ur_ros_rtde_msgs/action/ExecutePath_Result";
}

template<>
struct has_fixed_size<ur_ros_rtde_msgs::action::ExecutePath_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ur_ros_rtde_msgs::action::ExecutePath_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ur_ros_rtde_msgs::action::ExecutePath_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ur_ros_rtde_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecutePath_Feedback & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecutePath_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecutePath_Feedback & msg, bool use_flow_style = false)
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
  const ur_ros_rtde_msgs::action::ExecutePath_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_ros_rtde_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_ros_rtde_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ur_ros_rtde_msgs::action::ExecutePath_Feedback & msg)
{
  return ur_ros_rtde_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ur_ros_rtde_msgs::action::ExecutePath_Feedback>()
{
  return "ur_ros_rtde_msgs::action::ExecutePath_Feedback";
}

template<>
inline const char * name<ur_ros_rtde_msgs::action::ExecutePath_Feedback>()
{
  return "ur_ros_rtde_msgs/action/ExecutePath_Feedback";
}

template<>
struct has_fixed_size<ur_ros_rtde_msgs::action::ExecutePath_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ur_ros_rtde_msgs::action::ExecutePath_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ur_ros_rtde_msgs::action::ExecutePath_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "ur_ros_rtde_msgs/action/detail/execute_path__traits.hpp"

namespace ur_ros_rtde_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecutePath_SendGoal_Request & msg,
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
  const ExecutePath_SendGoal_Request & msg,
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

inline std::string to_yaml(const ExecutePath_SendGoal_Request & msg, bool use_flow_style = false)
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
  const ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_ros_rtde_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_ros_rtde_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Request & msg)
{
  return ur_ros_rtde_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Request>()
{
  return "ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Request";
}

template<>
inline const char * name<ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Request>()
{
  return "ur_ros_rtde_msgs/action/ExecutePath_SendGoal_Request";
}

template<>
struct has_fixed_size<ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value && has_fixed_size<ur_ros_rtde_msgs::action::ExecutePath_Goal>::value> {};

template<>
struct has_bounded_size<ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value && has_bounded_size<ur_ros_rtde_msgs::action::ExecutePath_Goal>::value> {};

template<>
struct is_message<ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Request>
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
  const ExecutePath_SendGoal_Response & msg,
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
  const ExecutePath_SendGoal_Response & msg,
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

inline std::string to_yaml(const ExecutePath_SendGoal_Response & msg, bool use_flow_style = false)
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
  const ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_ros_rtde_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_ros_rtde_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Response & msg)
{
  return ur_ros_rtde_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Response>()
{
  return "ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Response";
}

template<>
inline const char * name<ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Response>()
{
  return "ur_ros_rtde_msgs/action/ExecutePath_SendGoal_Response";
}

template<>
struct has_fixed_size<ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur_ros_rtde_msgs::action::ExecutePath_SendGoal>()
{
  return "ur_ros_rtde_msgs::action::ExecutePath_SendGoal";
}

template<>
inline const char * name<ur_ros_rtde_msgs::action::ExecutePath_SendGoal>()
{
  return "ur_ros_rtde_msgs/action/ExecutePath_SendGoal";
}

template<>
struct has_fixed_size<ur_ros_rtde_msgs::action::ExecutePath_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Request>::value &&
    has_fixed_size<ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<ur_ros_rtde_msgs::action::ExecutePath_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Request>::value &&
    has_bounded_size<ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<ur_ros_rtde_msgs::action::ExecutePath_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ur_ros_rtde_msgs::action::ExecutePath_SendGoal_Response>
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
  const ExecutePath_GetResult_Request & msg,
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
  const ExecutePath_GetResult_Request & msg,
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

inline std::string to_yaml(const ExecutePath_GetResult_Request & msg, bool use_flow_style = false)
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
  const ur_ros_rtde_msgs::action::ExecutePath_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_ros_rtde_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_ros_rtde_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ur_ros_rtde_msgs::action::ExecutePath_GetResult_Request & msg)
{
  return ur_ros_rtde_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ur_ros_rtde_msgs::action::ExecutePath_GetResult_Request>()
{
  return "ur_ros_rtde_msgs::action::ExecutePath_GetResult_Request";
}

template<>
inline const char * name<ur_ros_rtde_msgs::action::ExecutePath_GetResult_Request>()
{
  return "ur_ros_rtde_msgs/action/ExecutePath_GetResult_Request";
}

template<>
struct has_fixed_size<ur_ros_rtde_msgs::action::ExecutePath_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ur_ros_rtde_msgs::action::ExecutePath_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ur_ros_rtde_msgs::action::ExecutePath_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "ur_ros_rtde_msgs/action/detail/execute_path__traits.hpp"

namespace ur_ros_rtde_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecutePath_GetResult_Response & msg,
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
  const ExecutePath_GetResult_Response & msg,
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

inline std::string to_yaml(const ExecutePath_GetResult_Response & msg, bool use_flow_style = false)
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
  const ur_ros_rtde_msgs::action::ExecutePath_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_ros_rtde_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_ros_rtde_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ur_ros_rtde_msgs::action::ExecutePath_GetResult_Response & msg)
{
  return ur_ros_rtde_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ur_ros_rtde_msgs::action::ExecutePath_GetResult_Response>()
{
  return "ur_ros_rtde_msgs::action::ExecutePath_GetResult_Response";
}

template<>
inline const char * name<ur_ros_rtde_msgs::action::ExecutePath_GetResult_Response>()
{
  return "ur_ros_rtde_msgs/action/ExecutePath_GetResult_Response";
}

template<>
struct has_fixed_size<ur_ros_rtde_msgs::action::ExecutePath_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<ur_ros_rtde_msgs::action::ExecutePath_Result>::value> {};

template<>
struct has_bounded_size<ur_ros_rtde_msgs::action::ExecutePath_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<ur_ros_rtde_msgs::action::ExecutePath_Result>::value> {};

template<>
struct is_message<ur_ros_rtde_msgs::action::ExecutePath_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur_ros_rtde_msgs::action::ExecutePath_GetResult>()
{
  return "ur_ros_rtde_msgs::action::ExecutePath_GetResult";
}

template<>
inline const char * name<ur_ros_rtde_msgs::action::ExecutePath_GetResult>()
{
  return "ur_ros_rtde_msgs/action/ExecutePath_GetResult";
}

template<>
struct has_fixed_size<ur_ros_rtde_msgs::action::ExecutePath_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<ur_ros_rtde_msgs::action::ExecutePath_GetResult_Request>::value &&
    has_fixed_size<ur_ros_rtde_msgs::action::ExecutePath_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<ur_ros_rtde_msgs::action::ExecutePath_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<ur_ros_rtde_msgs::action::ExecutePath_GetResult_Request>::value &&
    has_bounded_size<ur_ros_rtde_msgs::action::ExecutePath_GetResult_Response>::value
  >
{
};

template<>
struct is_service<ur_ros_rtde_msgs::action::ExecutePath_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<ur_ros_rtde_msgs::action::ExecutePath_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ur_ros_rtde_msgs::action::ExecutePath_GetResult_Response>
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
// #include "ur_ros_rtde_msgs/action/detail/execute_path__traits.hpp"

namespace ur_ros_rtde_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecutePath_FeedbackMessage & msg,
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
  const ExecutePath_FeedbackMessage & msg,
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

inline std::string to_yaml(const ExecutePath_FeedbackMessage & msg, bool use_flow_style = false)
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
  const ur_ros_rtde_msgs::action::ExecutePath_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_ros_rtde_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_ros_rtde_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const ur_ros_rtde_msgs::action::ExecutePath_FeedbackMessage & msg)
{
  return ur_ros_rtde_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<ur_ros_rtde_msgs::action::ExecutePath_FeedbackMessage>()
{
  return "ur_ros_rtde_msgs::action::ExecutePath_FeedbackMessage";
}

template<>
inline const char * name<ur_ros_rtde_msgs::action::ExecutePath_FeedbackMessage>()
{
  return "ur_ros_rtde_msgs/action/ExecutePath_FeedbackMessage";
}

template<>
struct has_fixed_size<ur_ros_rtde_msgs::action::ExecutePath_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value && has_fixed_size<ur_ros_rtde_msgs::action::ExecutePath_Feedback>::value> {};

template<>
struct has_bounded_size<ur_ros_rtde_msgs::action::ExecutePath_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value && has_bounded_size<ur_ros_rtde_msgs::action::ExecutePath_Feedback>::value> {};

template<>
struct is_message<ur_ros_rtde_msgs::action::ExecutePath_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<ur_ros_rtde_msgs::action::ExecutePath>
  : std::true_type
{
};

template<>
struct is_action_goal<ur_ros_rtde_msgs::action::ExecutePath_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<ur_ros_rtde_msgs::action::ExecutePath_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<ur_ros_rtde_msgs::action::ExecutePath_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // UR_ROS_RTDE_MSGS__ACTION__DETAIL__EXECUTE_PATH__TRAITS_HPP_
