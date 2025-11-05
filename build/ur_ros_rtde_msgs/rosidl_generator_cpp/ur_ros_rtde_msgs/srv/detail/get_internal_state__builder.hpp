// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ur_ros_rtde_msgs:srv/GetInternalState.idl
// generated code does not contain a copyright notice

#ifndef UR_ROS_RTDE_MSGS__SRV__DETAIL__GET_INTERNAL_STATE__BUILDER_HPP_
#define UR_ROS_RTDE_MSGS__SRV__DETAIL__GET_INTERNAL_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ur_ros_rtde_msgs/srv/detail/get_internal_state__struct.hpp"
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
auto build<::ur_ros_rtde_msgs::srv::GetInternalState_Request>()
{
  return ::ur_ros_rtde_msgs::srv::GetInternalState_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace ur_ros_rtde_msgs


namespace ur_ros_rtde_msgs
{

namespace srv
{

namespace builder
{

class Init_GetInternalState_Response_payload_value
{
public:
  explicit Init_GetInternalState_Response_payload_value(::ur_ros_rtde_msgs::srv::GetInternalState_Response & msg)
  : msg_(msg)
  {}
  ::ur_ros_rtde_msgs::srv::GetInternalState_Response payload_value(::ur_ros_rtde_msgs::srv::GetInternalState_Response::_payload_value_type arg)
  {
    msg_.payload_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_msgs::srv::GetInternalState_Response msg_;
};

class Init_GetInternalState_Response_speed_slider_value
{
public:
  explicit Init_GetInternalState_Response_speed_slider_value(::ur_ros_rtde_msgs::srv::GetInternalState_Response & msg)
  : msg_(msg)
  {}
  Init_GetInternalState_Response_payload_value speed_slider_value(::ur_ros_rtde_msgs::srv::GetInternalState_Response::_speed_slider_value_type arg)
  {
    msg_.speed_slider_value = std::move(arg);
    return Init_GetInternalState_Response_payload_value(msg_);
  }

private:
  ::ur_ros_rtde_msgs::srv::GetInternalState_Response msg_;
};

class Init_GetInternalState_Response_digital_output_state
{
public:
  explicit Init_GetInternalState_Response_digital_output_state(::ur_ros_rtde_msgs::srv::GetInternalState_Response & msg)
  : msg_(msg)
  {}
  Init_GetInternalState_Response_speed_slider_value digital_output_state(::ur_ros_rtde_msgs::srv::GetInternalState_Response::_digital_output_state_type arg)
  {
    msg_.digital_output_state = std::move(arg);
    return Init_GetInternalState_Response_speed_slider_value(msg_);
  }

private:
  ::ur_ros_rtde_msgs::srv::GetInternalState_Response msg_;
};

class Init_GetInternalState_Response_digital_input_state
{
public:
  explicit Init_GetInternalState_Response_digital_input_state(::ur_ros_rtde_msgs::srv::GetInternalState_Response & msg)
  : msg_(msg)
  {}
  Init_GetInternalState_Response_digital_output_state digital_input_state(::ur_ros_rtde_msgs::srv::GetInternalState_Response::_digital_input_state_type arg)
  {
    msg_.digital_input_state = std::move(arg);
    return Init_GetInternalState_Response_digital_output_state(msg_);
  }

private:
  ::ur_ros_rtde_msgs::srv::GetInternalState_Response msg_;
};

class Init_GetInternalState_Response_success
{
public:
  Init_GetInternalState_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetInternalState_Response_digital_input_state success(::ur_ros_rtde_msgs::srv::GetInternalState_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetInternalState_Response_digital_input_state(msg_);
  }

private:
  ::ur_ros_rtde_msgs::srv::GetInternalState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_msgs::srv::GetInternalState_Response>()
{
  return ur_ros_rtde_msgs::srv::builder::Init_GetInternalState_Response_success();
}

}  // namespace ur_ros_rtde_msgs

#endif  // UR_ROS_RTDE_MSGS__SRV__DETAIL__GET_INTERNAL_STATE__BUILDER_HPP_
