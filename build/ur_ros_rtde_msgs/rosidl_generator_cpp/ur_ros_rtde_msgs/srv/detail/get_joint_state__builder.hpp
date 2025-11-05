// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ur_ros_rtde_msgs:srv/GetJointState.idl
// generated code does not contain a copyright notice

#ifndef UR_ROS_RTDE_MSGS__SRV__DETAIL__GET_JOINT_STATE__BUILDER_HPP_
#define UR_ROS_RTDE_MSGS__SRV__DETAIL__GET_JOINT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ur_ros_rtde_msgs/srv/detail/get_joint_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ur_ros_rtde_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_msgs::srv::GetJointState_Request>()
{
  return ::ur_ros_rtde_msgs::srv::GetJointState_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace ur_ros_rtde_msgs


namespace ur_ros_rtde_msgs
{

namespace srv
{

namespace builder
{

class Init_GetJointState_Response_joint_state
{
public:
  explicit Init_GetJointState_Response_joint_state(::ur_ros_rtde_msgs::srv::GetJointState_Response & msg)
  : msg_(msg)
  {}
  ::ur_ros_rtde_msgs::srv::GetJointState_Response joint_state(::ur_ros_rtde_msgs::srv::GetJointState_Response::_joint_state_type arg)
  {
    msg_.joint_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_msgs::srv::GetJointState_Response msg_;
};

class Init_GetJointState_Response_success
{
public:
  Init_GetJointState_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetJointState_Response_joint_state success(::ur_ros_rtde_msgs::srv::GetJointState_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetJointState_Response_joint_state(msg_);
  }

private:
  ::ur_ros_rtde_msgs::srv::GetJointState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_msgs::srv::GetJointState_Response>()
{
  return ur_ros_rtde_msgs::srv::builder::Init_GetJointState_Response_success();
}

}  // namespace ur_ros_rtde_msgs

#endif  // UR_ROS_RTDE_MSGS__SRV__DETAIL__GET_JOINT_STATE__BUILDER_HPP_
