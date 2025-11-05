// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ur_ros_rtde_msgs:msg/Vector.idl
// generated code does not contain a copyright notice

#ifndef UR_ROS_RTDE_MSGS__MSG__DETAIL__VECTOR__BUILDER_HPP_
#define UR_ROS_RTDE_MSGS__MSG__DETAIL__VECTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ur_ros_rtde_msgs/msg/detail/vector__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ur_ros_rtde_msgs
{

namespace msg
{

namespace builder
{

class Init_Vector_vector
{
public:
  Init_Vector_vector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ur_ros_rtde_msgs::msg::Vector vector(::ur_ros_rtde_msgs::msg::Vector::_vector_type arg)
  {
    msg_.vector = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_msgs::msg::Vector msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_msgs::msg::Vector>()
{
  return ur_ros_rtde_msgs::msg::builder::Init_Vector_vector();
}

}  // namespace ur_ros_rtde_msgs

#endif  // UR_ROS_RTDE_MSGS__MSG__DETAIL__VECTOR__BUILDER_HPP_
