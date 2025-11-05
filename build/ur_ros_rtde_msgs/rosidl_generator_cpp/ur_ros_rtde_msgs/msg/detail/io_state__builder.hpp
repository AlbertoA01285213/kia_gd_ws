// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ur_ros_rtde_msgs:msg/IOState.idl
// generated code does not contain a copyright notice

#ifndef UR_ROS_RTDE_MSGS__MSG__DETAIL__IO_STATE__BUILDER_HPP_
#define UR_ROS_RTDE_MSGS__MSG__DETAIL__IO_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ur_ros_rtde_msgs/msg/detail/io_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ur_ros_rtde_msgs
{

namespace msg
{

namespace builder
{

class Init_IOState_digital_output_state
{
public:
  explicit Init_IOState_digital_output_state(::ur_ros_rtde_msgs::msg::IOState & msg)
  : msg_(msg)
  {}
  ::ur_ros_rtde_msgs::msg::IOState digital_output_state(::ur_ros_rtde_msgs::msg::IOState::_digital_output_state_type arg)
  {
    msg_.digital_output_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_msgs::msg::IOState msg_;
};

class Init_IOState_digital_input_state
{
public:
  Init_IOState_digital_input_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IOState_digital_output_state digital_input_state(::ur_ros_rtde_msgs::msg::IOState::_digital_input_state_type arg)
  {
    msg_.digital_input_state = std::move(arg);
    return Init_IOState_digital_output_state(msg_);
  }

private:
  ::ur_ros_rtde_msgs::msg::IOState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_msgs::msg::IOState>()
{
  return ur_ros_rtde_msgs::msg::builder::Init_IOState_digital_input_state();
}

}  // namespace ur_ros_rtde_msgs

#endif  // UR_ROS_RTDE_MSGS__MSG__DETAIL__IO_STATE__BUILDER_HPP_
