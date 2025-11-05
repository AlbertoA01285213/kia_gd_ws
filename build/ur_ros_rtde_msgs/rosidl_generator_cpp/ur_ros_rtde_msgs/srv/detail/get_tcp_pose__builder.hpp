// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ur_ros_rtde_msgs:srv/GetTcpPose.idl
// generated code does not contain a copyright notice

#ifndef UR_ROS_RTDE_MSGS__SRV__DETAIL__GET_TCP_POSE__BUILDER_HPP_
#define UR_ROS_RTDE_MSGS__SRV__DETAIL__GET_TCP_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ur_ros_rtde_msgs/srv/detail/get_tcp_pose__struct.hpp"
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
auto build<::ur_ros_rtde_msgs::srv::GetTcpPose_Request>()
{
  return ::ur_ros_rtde_msgs::srv::GetTcpPose_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace ur_ros_rtde_msgs


namespace ur_ros_rtde_msgs
{

namespace srv
{

namespace builder
{

class Init_GetTcpPose_Response_pose
{
public:
  explicit Init_GetTcpPose_Response_pose(::ur_ros_rtde_msgs::srv::GetTcpPose_Response & msg)
  : msg_(msg)
  {}
  ::ur_ros_rtde_msgs::srv::GetTcpPose_Response pose(::ur_ros_rtde_msgs::srv::GetTcpPose_Response::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_msgs::srv::GetTcpPose_Response msg_;
};

class Init_GetTcpPose_Response_success
{
public:
  Init_GetTcpPose_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetTcpPose_Response_pose success(::ur_ros_rtde_msgs::srv::GetTcpPose_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetTcpPose_Response_pose(msg_);
  }

private:
  ::ur_ros_rtde_msgs::srv::GetTcpPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_msgs::srv::GetTcpPose_Response>()
{
  return ur_ros_rtde_msgs::srv::builder::Init_GetTcpPose_Response_success();
}

}  // namespace ur_ros_rtde_msgs

#endif  // UR_ROS_RTDE_MSGS__SRV__DETAIL__GET_TCP_POSE__BUILDER_HPP_
