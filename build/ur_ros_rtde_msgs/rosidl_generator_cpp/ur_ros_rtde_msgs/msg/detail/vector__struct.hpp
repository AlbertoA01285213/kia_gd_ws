// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ur_ros_rtde_msgs:msg/Vector.idl
// generated code does not contain a copyright notice

#ifndef UR_ROS_RTDE_MSGS__MSG__DETAIL__VECTOR__STRUCT_HPP_
#define UR_ROS_RTDE_MSGS__MSG__DETAIL__VECTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ur_ros_rtde_msgs__msg__Vector __attribute__((deprecated))
#else
# define DEPRECATED__ur_ros_rtde_msgs__msg__Vector __declspec(deprecated)
#endif

namespace ur_ros_rtde_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Vector_
{
  using Type = Vector_<ContainerAllocator>;

  explicit Vector_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Vector_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _vector_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _vector_type vector;

  // setters for named parameter idiom
  Type & set__vector(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->vector = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ur_ros_rtde_msgs::msg::Vector_<ContainerAllocator> *;
  using ConstRawPtr =
    const ur_ros_rtde_msgs::msg::Vector_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ur_ros_rtde_msgs::msg::Vector_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ur_ros_rtde_msgs::msg::Vector_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ur_ros_rtde_msgs::msg::Vector_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ur_ros_rtde_msgs::msg::Vector_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ur_ros_rtde_msgs::msg::Vector_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ur_ros_rtde_msgs::msg::Vector_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ur_ros_rtde_msgs::msg::Vector_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ur_ros_rtde_msgs::msg::Vector_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ur_ros_rtde_msgs__msg__Vector
    std::shared_ptr<ur_ros_rtde_msgs::msg::Vector_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ur_ros_rtde_msgs__msg__Vector
    std::shared_ptr<ur_ros_rtde_msgs::msg::Vector_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Vector_ & other) const
  {
    if (this->vector != other.vector) {
      return false;
    }
    return true;
  }
  bool operator!=(const Vector_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Vector_

// alias to use template instance with default allocator
using Vector =
  ur_ros_rtde_msgs::msg::Vector_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ur_ros_rtde_msgs

#endif  // UR_ROS_RTDE_MSGS__MSG__DETAIL__VECTOR__STRUCT_HPP_
