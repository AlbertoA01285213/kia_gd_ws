// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ur_ros_rtde_msgs:srv/GetWrench.idl
// generated code does not contain a copyright notice

#ifndef UR_ROS_RTDE_MSGS__SRV__DETAIL__GET_WRENCH__TRAITS_HPP_
#define UR_ROS_RTDE_MSGS__SRV__DETAIL__GET_WRENCH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ur_ros_rtde_msgs/srv/detail/get_wrench__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ur_ros_rtde_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetWrench_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetWrench_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetWrench_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ur_ros_rtde_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ur_ros_rtde_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ur_ros_rtde_msgs::srv::GetWrench_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_ros_rtde_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_ros_rtde_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ur_ros_rtde_msgs::srv::GetWrench_Request & msg)
{
  return ur_ros_rtde_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ur_ros_rtde_msgs::srv::GetWrench_Request>()
{
  return "ur_ros_rtde_msgs::srv::GetWrench_Request";
}

template<>
inline const char * name<ur_ros_rtde_msgs::srv::GetWrench_Request>()
{
  return "ur_ros_rtde_msgs/srv/GetWrench_Request";
}

template<>
struct has_fixed_size<ur_ros_rtde_msgs::srv::GetWrench_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ur_ros_rtde_msgs::srv::GetWrench_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ur_ros_rtde_msgs::srv::GetWrench_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'wrench'
#include "geometry_msgs/msg/detail/wrench__traits.hpp"

namespace ur_ros_rtde_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetWrench_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: wrench
  {
    out << "wrench: ";
    to_flow_style_yaml(msg.wrench, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetWrench_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: wrench
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrench:\n";
    to_block_style_yaml(msg.wrench, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetWrench_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ur_ros_rtde_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ur_ros_rtde_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ur_ros_rtde_msgs::srv::GetWrench_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_ros_rtde_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_ros_rtde_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ur_ros_rtde_msgs::srv::GetWrench_Response & msg)
{
  return ur_ros_rtde_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ur_ros_rtde_msgs::srv::GetWrench_Response>()
{
  return "ur_ros_rtde_msgs::srv::GetWrench_Response";
}

template<>
inline const char * name<ur_ros_rtde_msgs::srv::GetWrench_Response>()
{
  return "ur_ros_rtde_msgs/srv/GetWrench_Response";
}

template<>
struct has_fixed_size<ur_ros_rtde_msgs::srv::GetWrench_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Wrench>::value> {};

template<>
struct has_bounded_size<ur_ros_rtde_msgs::srv::GetWrench_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Wrench>::value> {};

template<>
struct is_message<ur_ros_rtde_msgs::srv::GetWrench_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur_ros_rtde_msgs::srv::GetWrench>()
{
  return "ur_ros_rtde_msgs::srv::GetWrench";
}

template<>
inline const char * name<ur_ros_rtde_msgs::srv::GetWrench>()
{
  return "ur_ros_rtde_msgs/srv/GetWrench";
}

template<>
struct has_fixed_size<ur_ros_rtde_msgs::srv::GetWrench>
  : std::integral_constant<
    bool,
    has_fixed_size<ur_ros_rtde_msgs::srv::GetWrench_Request>::value &&
    has_fixed_size<ur_ros_rtde_msgs::srv::GetWrench_Response>::value
  >
{
};

template<>
struct has_bounded_size<ur_ros_rtde_msgs::srv::GetWrench>
  : std::integral_constant<
    bool,
    has_bounded_size<ur_ros_rtde_msgs::srv::GetWrench_Request>::value &&
    has_bounded_size<ur_ros_rtde_msgs::srv::GetWrench_Response>::value
  >
{
};

template<>
struct is_service<ur_ros_rtde_msgs::srv::GetWrench>
  : std::true_type
{
};

template<>
struct is_service_request<ur_ros_rtde_msgs::srv::GetWrench_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ur_ros_rtde_msgs::srv::GetWrench_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UR_ROS_RTDE_MSGS__SRV__DETAIL__GET_WRENCH__TRAITS_HPP_
