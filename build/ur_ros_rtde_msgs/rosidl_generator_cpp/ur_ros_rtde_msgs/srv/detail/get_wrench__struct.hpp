// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ur_ros_rtde_msgs:srv/GetWrench.idl
// generated code does not contain a copyright notice

#ifndef UR_ROS_RTDE_MSGS__SRV__DETAIL__GET_WRENCH__STRUCT_HPP_
#define UR_ROS_RTDE_MSGS__SRV__DETAIL__GET_WRENCH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ur_ros_rtde_msgs__srv__GetWrench_Request __attribute__((deprecated))
#else
# define DEPRECATED__ur_ros_rtde_msgs__srv__GetWrench_Request __declspec(deprecated)
#endif

namespace ur_ros_rtde_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetWrench_Request_
{
  using Type = GetWrench_Request_<ContainerAllocator>;

  explicit GetWrench_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetWrench_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    ur_ros_rtde_msgs::srv::GetWrench_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ur_ros_rtde_msgs::srv::GetWrench_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ur_ros_rtde_msgs::srv::GetWrench_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ur_ros_rtde_msgs::srv::GetWrench_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ur_ros_rtde_msgs::srv::GetWrench_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ur_ros_rtde_msgs::srv::GetWrench_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ur_ros_rtde_msgs::srv::GetWrench_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ur_ros_rtde_msgs::srv::GetWrench_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ur_ros_rtde_msgs::srv::GetWrench_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ur_ros_rtde_msgs::srv::GetWrench_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ur_ros_rtde_msgs__srv__GetWrench_Request
    std::shared_ptr<ur_ros_rtde_msgs::srv::GetWrench_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ur_ros_rtde_msgs__srv__GetWrench_Request
    std::shared_ptr<ur_ros_rtde_msgs::srv::GetWrench_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetWrench_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetWrench_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetWrench_Request_

// alias to use template instance with default allocator
using GetWrench_Request =
  ur_ros_rtde_msgs::srv::GetWrench_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ur_ros_rtde_msgs


// Include directives for member types
// Member 'wrench'
#include "geometry_msgs/msg/detail/wrench__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ur_ros_rtde_msgs__srv__GetWrench_Response __attribute__((deprecated))
#else
# define DEPRECATED__ur_ros_rtde_msgs__srv__GetWrench_Response __declspec(deprecated)
#endif

namespace ur_ros_rtde_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetWrench_Response_
{
  using Type = GetWrench_Response_<ContainerAllocator>;

  explicit GetWrench_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : wrench(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit GetWrench_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : wrench(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _wrench_type =
    geometry_msgs::msg::Wrench_<ContainerAllocator>;
  _wrench_type wrench;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__wrench(
    const geometry_msgs::msg::Wrench_<ContainerAllocator> & _arg)
  {
    this->wrench = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ur_ros_rtde_msgs::srv::GetWrench_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ur_ros_rtde_msgs::srv::GetWrench_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ur_ros_rtde_msgs::srv::GetWrench_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ur_ros_rtde_msgs::srv::GetWrench_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ur_ros_rtde_msgs::srv::GetWrench_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ur_ros_rtde_msgs::srv::GetWrench_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ur_ros_rtde_msgs::srv::GetWrench_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ur_ros_rtde_msgs::srv::GetWrench_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ur_ros_rtde_msgs::srv::GetWrench_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ur_ros_rtde_msgs::srv::GetWrench_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ur_ros_rtde_msgs__srv__GetWrench_Response
    std::shared_ptr<ur_ros_rtde_msgs::srv::GetWrench_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ur_ros_rtde_msgs__srv__GetWrench_Response
    std::shared_ptr<ur_ros_rtde_msgs::srv::GetWrench_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetWrench_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->wrench != other.wrench) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetWrench_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetWrench_Response_

// alias to use template instance with default allocator
using GetWrench_Response =
  ur_ros_rtde_msgs::srv::GetWrench_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ur_ros_rtde_msgs

namespace ur_ros_rtde_msgs
{

namespace srv
{

struct GetWrench
{
  using Request = ur_ros_rtde_msgs::srv::GetWrench_Request;
  using Response = ur_ros_rtde_msgs::srv::GetWrench_Response;
};

}  // namespace srv

}  // namespace ur_ros_rtde_msgs

#endif  // UR_ROS_RTDE_MSGS__SRV__DETAIL__GET_WRENCH__STRUCT_HPP_
