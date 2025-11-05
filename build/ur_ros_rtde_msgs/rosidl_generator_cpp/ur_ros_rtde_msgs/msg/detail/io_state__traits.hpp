// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ur_ros_rtde_msgs:msg/IOState.idl
// generated code does not contain a copyright notice

#ifndef UR_ROS_RTDE_MSGS__MSG__DETAIL__IO_STATE__TRAITS_HPP_
#define UR_ROS_RTDE_MSGS__MSG__DETAIL__IO_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ur_ros_rtde_msgs/msg/detail/io_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ur_ros_rtde_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const IOState & msg,
  std::ostream & out)
{
  out << "{";
  // member: digital_input_state
  {
    if (msg.digital_input_state.size() == 0) {
      out << "digital_input_state: []";
    } else {
      out << "digital_input_state: [";
      size_t pending_items = msg.digital_input_state.size();
      for (auto item : msg.digital_input_state) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: digital_output_state
  {
    if (msg.digital_output_state.size() == 0) {
      out << "digital_output_state: []";
    } else {
      out << "digital_output_state: [";
      size_t pending_items = msg.digital_output_state.size();
      for (auto item : msg.digital_output_state) {
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
  const IOState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: digital_input_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.digital_input_state.size() == 0) {
      out << "digital_input_state: []\n";
    } else {
      out << "digital_input_state:\n";
      for (auto item : msg.digital_input_state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: digital_output_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.digital_output_state.size() == 0) {
      out << "digital_output_state: []\n";
    } else {
      out << "digital_output_state:\n";
      for (auto item : msg.digital_output_state) {
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

inline std::string to_yaml(const IOState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ur_ros_rtde_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ur_ros_rtde_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ur_ros_rtde_msgs::msg::IOState & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_ros_rtde_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_ros_rtde_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ur_ros_rtde_msgs::msg::IOState & msg)
{
  return ur_ros_rtde_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ur_ros_rtde_msgs::msg::IOState>()
{
  return "ur_ros_rtde_msgs::msg::IOState";
}

template<>
inline const char * name<ur_ros_rtde_msgs::msg::IOState>()
{
  return "ur_ros_rtde_msgs/msg/IOState";
}

template<>
struct has_fixed_size<ur_ros_rtde_msgs::msg::IOState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ur_ros_rtde_msgs::msg::IOState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ur_ros_rtde_msgs::msg::IOState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UR_ROS_RTDE_MSGS__MSG__DETAIL__IO_STATE__TRAITS_HPP_
