// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ur_ros_rtde_msgs:srv/StartDataRecording.idl
// generated code does not contain a copyright notice

#ifndef UR_ROS_RTDE_MSGS__SRV__DETAIL__START_DATA_RECORDING__STRUCT_HPP_
#define UR_ROS_RTDE_MSGS__SRV__DETAIL__START_DATA_RECORDING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ur_ros_rtde_msgs__srv__StartDataRecording_Request __attribute__((deprecated))
#else
# define DEPRECATED__ur_ros_rtde_msgs__srv__StartDataRecording_Request __declspec(deprecated)
#endif

namespace ur_ros_rtde_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StartDataRecording_Request_
{
  using Type = StartDataRecording_Request_<ContainerAllocator>;

  explicit StartDataRecording_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->filename = "";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->filename = "";
    }
  }

  explicit StartDataRecording_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : filename(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->filename = "";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->filename = "";
    }
  }

  // field types and members
  using _filename_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _filename_type filename;
  using _variables_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _variables_type variables;

  // setters for named parameter idiom
  Type & set__filename(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->filename = _arg;
    return *this;
  }
  Type & set__variables(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->variables = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ur_ros_rtde_msgs::srv::StartDataRecording_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ur_ros_rtde_msgs::srv::StartDataRecording_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ur_ros_rtde_msgs::srv::StartDataRecording_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ur_ros_rtde_msgs::srv::StartDataRecording_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ur_ros_rtde_msgs::srv::StartDataRecording_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ur_ros_rtde_msgs::srv::StartDataRecording_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ur_ros_rtde_msgs::srv::StartDataRecording_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ur_ros_rtde_msgs::srv::StartDataRecording_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ur_ros_rtde_msgs::srv::StartDataRecording_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ur_ros_rtde_msgs::srv::StartDataRecording_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ur_ros_rtde_msgs__srv__StartDataRecording_Request
    std::shared_ptr<ur_ros_rtde_msgs::srv::StartDataRecording_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ur_ros_rtde_msgs__srv__StartDataRecording_Request
    std::shared_ptr<ur_ros_rtde_msgs::srv::StartDataRecording_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StartDataRecording_Request_ & other) const
  {
    if (this->filename != other.filename) {
      return false;
    }
    if (this->variables != other.variables) {
      return false;
    }
    return true;
  }
  bool operator!=(const StartDataRecording_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StartDataRecording_Request_

// alias to use template instance with default allocator
using StartDataRecording_Request =
  ur_ros_rtde_msgs::srv::StartDataRecording_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ur_ros_rtde_msgs


#ifndef _WIN32
# define DEPRECATED__ur_ros_rtde_msgs__srv__StartDataRecording_Response __attribute__((deprecated))
#else
# define DEPRECATED__ur_ros_rtde_msgs__srv__StartDataRecording_Response __declspec(deprecated)
#endif

namespace ur_ros_rtde_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StartDataRecording_Response_
{
  using Type = StartDataRecording_Response_<ContainerAllocator>;

  explicit StartDataRecording_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit StartDataRecording_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
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

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ur_ros_rtde_msgs::srv::StartDataRecording_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ur_ros_rtde_msgs::srv::StartDataRecording_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ur_ros_rtde_msgs::srv::StartDataRecording_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ur_ros_rtde_msgs::srv::StartDataRecording_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ur_ros_rtde_msgs::srv::StartDataRecording_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ur_ros_rtde_msgs::srv::StartDataRecording_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ur_ros_rtde_msgs::srv::StartDataRecording_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ur_ros_rtde_msgs::srv::StartDataRecording_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ur_ros_rtde_msgs::srv::StartDataRecording_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ur_ros_rtde_msgs::srv::StartDataRecording_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ur_ros_rtde_msgs__srv__StartDataRecording_Response
    std::shared_ptr<ur_ros_rtde_msgs::srv::StartDataRecording_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ur_ros_rtde_msgs__srv__StartDataRecording_Response
    std::shared_ptr<ur_ros_rtde_msgs::srv::StartDataRecording_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StartDataRecording_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const StartDataRecording_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StartDataRecording_Response_

// alias to use template instance with default allocator
using StartDataRecording_Response =
  ur_ros_rtde_msgs::srv::StartDataRecording_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ur_ros_rtde_msgs

namespace ur_ros_rtde_msgs
{

namespace srv
{

struct StartDataRecording
{
  using Request = ur_ros_rtde_msgs::srv::StartDataRecording_Request;
  using Response = ur_ros_rtde_msgs::srv::StartDataRecording_Response;
};

}  // namespace srv

}  // namespace ur_ros_rtde_msgs

#endif  // UR_ROS_RTDE_MSGS__SRV__DETAIL__START_DATA_RECORDING__STRUCT_HPP_
