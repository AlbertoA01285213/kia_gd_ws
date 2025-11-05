// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ur_ros_rtde_msgs:srv/StartDataRecording.idl
// generated code does not contain a copyright notice

#ifndef UR_ROS_RTDE_MSGS__SRV__DETAIL__START_DATA_RECORDING__BUILDER_HPP_
#define UR_ROS_RTDE_MSGS__SRV__DETAIL__START_DATA_RECORDING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ur_ros_rtde_msgs/srv/detail/start_data_recording__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ur_ros_rtde_msgs
{

namespace srv
{

namespace builder
{

class Init_StartDataRecording_Request_variables
{
public:
  explicit Init_StartDataRecording_Request_variables(::ur_ros_rtde_msgs::srv::StartDataRecording_Request & msg)
  : msg_(msg)
  {}
  ::ur_ros_rtde_msgs::srv::StartDataRecording_Request variables(::ur_ros_rtde_msgs::srv::StartDataRecording_Request::_variables_type arg)
  {
    msg_.variables = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_msgs::srv::StartDataRecording_Request msg_;
};

class Init_StartDataRecording_Request_filename
{
public:
  Init_StartDataRecording_Request_filename()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartDataRecording_Request_variables filename(::ur_ros_rtde_msgs::srv::StartDataRecording_Request::_filename_type arg)
  {
    msg_.filename = std::move(arg);
    return Init_StartDataRecording_Request_variables(msg_);
  }

private:
  ::ur_ros_rtde_msgs::srv::StartDataRecording_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_msgs::srv::StartDataRecording_Request>()
{
  return ur_ros_rtde_msgs::srv::builder::Init_StartDataRecording_Request_filename();
}

}  // namespace ur_ros_rtde_msgs


namespace ur_ros_rtde_msgs
{

namespace srv
{

namespace builder
{

class Init_StartDataRecording_Response_success
{
public:
  Init_StartDataRecording_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ur_ros_rtde_msgs::srv::StartDataRecording_Response success(::ur_ros_rtde_msgs::srv::StartDataRecording_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_msgs::srv::StartDataRecording_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_msgs::srv::StartDataRecording_Response>()
{
  return ur_ros_rtde_msgs::srv::builder::Init_StartDataRecording_Response_success();
}

}  // namespace ur_ros_rtde_msgs

#endif  // UR_ROS_RTDE_MSGS__SRV__DETAIL__START_DATA_RECORDING__BUILDER_HPP_
