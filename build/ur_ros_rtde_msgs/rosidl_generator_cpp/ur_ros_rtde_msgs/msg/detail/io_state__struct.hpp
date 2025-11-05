// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ur_ros_rtde_msgs:msg/IOState.idl
// generated code does not contain a copyright notice

#ifndef UR_ROS_RTDE_MSGS__MSG__DETAIL__IO_STATE__STRUCT_HPP_
#define UR_ROS_RTDE_MSGS__MSG__DETAIL__IO_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ur_ros_rtde_msgs__msg__IOState __attribute__((deprecated))
#else
# define DEPRECATED__ur_ros_rtde_msgs__msg__IOState __declspec(deprecated)
#endif

namespace ur_ros_rtde_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IOState_
{
  using Type = IOState_<ContainerAllocator>;

  explicit IOState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit IOState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _digital_input_state_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _digital_input_state_type digital_input_state;
  using _digital_output_state_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _digital_output_state_type digital_output_state;

  // setters for named parameter idiom
  Type & set__digital_input_state(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->digital_input_state = _arg;
    return *this;
  }
  Type & set__digital_output_state(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->digital_output_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ur_ros_rtde_msgs::msg::IOState_<ContainerAllocator> *;
  using ConstRawPtr =
    const ur_ros_rtde_msgs::msg::IOState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ur_ros_rtde_msgs::msg::IOState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ur_ros_rtde_msgs::msg::IOState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ur_ros_rtde_msgs::msg::IOState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ur_ros_rtde_msgs::msg::IOState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ur_ros_rtde_msgs::msg::IOState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ur_ros_rtde_msgs::msg::IOState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ur_ros_rtde_msgs::msg::IOState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ur_ros_rtde_msgs::msg::IOState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ur_ros_rtde_msgs__msg__IOState
    std::shared_ptr<ur_ros_rtde_msgs::msg::IOState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ur_ros_rtde_msgs__msg__IOState
    std::shared_ptr<ur_ros_rtde_msgs::msg::IOState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IOState_ & other) const
  {
    if (this->digital_input_state != other.digital_input_state) {
      return false;
    }
    if (this->digital_output_state != other.digital_output_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const IOState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IOState_

// alias to use template instance with default allocator
using IOState =
  ur_ros_rtde_msgs::msg::IOState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ur_ros_rtde_msgs

#endif  // UR_ROS_RTDE_MSGS__MSG__DETAIL__IO_STATE__STRUCT_HPP_
