// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ur_ros_rtde_msgs:msg/JointsConfiguration.idl
// generated code does not contain a copyright notice

#ifndef UR_ROS_RTDE_MSGS__MSG__DETAIL__JOINTS_CONFIGURATION__BUILDER_HPP_
#define UR_ROS_RTDE_MSGS__MSG__DETAIL__JOINTS_CONFIGURATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ur_ros_rtde_msgs/msg/detail/joints_configuration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ur_ros_rtde_msgs
{

namespace msg
{

namespace builder
{

class Init_JointsConfiguration_motors
{
public:
  Init_JointsConfiguration_motors()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ur_ros_rtde_msgs::msg::JointsConfiguration motors(::ur_ros_rtde_msgs::msg::JointsConfiguration::_motors_type arg)
  {
    msg_.motors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_msgs::msg::JointsConfiguration msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_msgs::msg::JointsConfiguration>()
{
  return ur_ros_rtde_msgs::msg::builder::Init_JointsConfiguration_motors();
}

}  // namespace ur_ros_rtde_msgs

#endif  // UR_ROS_RTDE_MSGS__MSG__DETAIL__JOINTS_CONFIGURATION__BUILDER_HPP_
