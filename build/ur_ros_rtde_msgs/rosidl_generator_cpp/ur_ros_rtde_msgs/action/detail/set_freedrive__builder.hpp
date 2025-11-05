// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ur_ros_rtde_msgs:action/SetFreedrive.idl
// generated code does not contain a copyright notice

#ifndef UR_ROS_RTDE_MSGS__ACTION__DETAIL__SET_FREEDRIVE__BUILDER_HPP_
#define UR_ROS_RTDE_MSGS__ACTION__DETAIL__SET_FREEDRIVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ur_ros_rtde_msgs/action/detail/set_freedrive__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ur_ros_rtde_msgs
{

namespace action
{

namespace builder
{

class Init_SetFreedrive_Goal_feature
{
public:
  explicit Init_SetFreedrive_Goal_feature(::ur_ros_rtde_msgs::action::SetFreedrive_Goal & msg)
  : msg_(msg)
  {}
  ::ur_ros_rtde_msgs::action::SetFreedrive_Goal feature(::ur_ros_rtde_msgs::action::SetFreedrive_Goal::_feature_type arg)
  {
    msg_.feature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::SetFreedrive_Goal msg_;
};

class Init_SetFreedrive_Goal_free_axes
{
public:
  explicit Init_SetFreedrive_Goal_free_axes(::ur_ros_rtde_msgs::action::SetFreedrive_Goal & msg)
  : msg_(msg)
  {}
  Init_SetFreedrive_Goal_feature free_axes(::ur_ros_rtde_msgs::action::SetFreedrive_Goal::_free_axes_type arg)
  {
    msg_.free_axes = std::move(arg);
    return Init_SetFreedrive_Goal_feature(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::SetFreedrive_Goal msg_;
};

class Init_SetFreedrive_Goal_activated
{
public:
  Init_SetFreedrive_Goal_activated()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetFreedrive_Goal_free_axes activated(::ur_ros_rtde_msgs::action::SetFreedrive_Goal::_activated_type arg)
  {
    msg_.activated = std::move(arg);
    return Init_SetFreedrive_Goal_free_axes(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::SetFreedrive_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_msgs::action::SetFreedrive_Goal>()
{
  return ur_ros_rtde_msgs::action::builder::Init_SetFreedrive_Goal_activated();
}

}  // namespace ur_ros_rtde_msgs


namespace ur_ros_rtde_msgs
{

namespace action
{

namespace builder
{

class Init_SetFreedrive_Result_result
{
public:
  Init_SetFreedrive_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ur_ros_rtde_msgs::action::SetFreedrive_Result result(::ur_ros_rtde_msgs::action::SetFreedrive_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::SetFreedrive_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_msgs::action::SetFreedrive_Result>()
{
  return ur_ros_rtde_msgs::action::builder::Init_SetFreedrive_Result_result();
}

}  // namespace ur_ros_rtde_msgs


namespace ur_ros_rtde_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_msgs::action::SetFreedrive_Feedback>()
{
  return ::ur_ros_rtde_msgs::action::SetFreedrive_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace ur_ros_rtde_msgs


namespace ur_ros_rtde_msgs
{

namespace action
{

namespace builder
{

class Init_SetFreedrive_SendGoal_Request_goal
{
public:
  explicit Init_SetFreedrive_SendGoal_Request_goal(::ur_ros_rtde_msgs::action::SetFreedrive_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ur_ros_rtde_msgs::action::SetFreedrive_SendGoal_Request goal(::ur_ros_rtde_msgs::action::SetFreedrive_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::SetFreedrive_SendGoal_Request msg_;
};

class Init_SetFreedrive_SendGoal_Request_goal_id
{
public:
  Init_SetFreedrive_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetFreedrive_SendGoal_Request_goal goal_id(::ur_ros_rtde_msgs::action::SetFreedrive_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SetFreedrive_SendGoal_Request_goal(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::SetFreedrive_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_msgs::action::SetFreedrive_SendGoal_Request>()
{
  return ur_ros_rtde_msgs::action::builder::Init_SetFreedrive_SendGoal_Request_goal_id();
}

}  // namespace ur_ros_rtde_msgs


namespace ur_ros_rtde_msgs
{

namespace action
{

namespace builder
{

class Init_SetFreedrive_SendGoal_Response_stamp
{
public:
  explicit Init_SetFreedrive_SendGoal_Response_stamp(::ur_ros_rtde_msgs::action::SetFreedrive_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ur_ros_rtde_msgs::action::SetFreedrive_SendGoal_Response stamp(::ur_ros_rtde_msgs::action::SetFreedrive_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::SetFreedrive_SendGoal_Response msg_;
};

class Init_SetFreedrive_SendGoal_Response_accepted
{
public:
  Init_SetFreedrive_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetFreedrive_SendGoal_Response_stamp accepted(::ur_ros_rtde_msgs::action::SetFreedrive_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_SetFreedrive_SendGoal_Response_stamp(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::SetFreedrive_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_msgs::action::SetFreedrive_SendGoal_Response>()
{
  return ur_ros_rtde_msgs::action::builder::Init_SetFreedrive_SendGoal_Response_accepted();
}

}  // namespace ur_ros_rtde_msgs


namespace ur_ros_rtde_msgs
{

namespace action
{

namespace builder
{

class Init_SetFreedrive_GetResult_Request_goal_id
{
public:
  Init_SetFreedrive_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ur_ros_rtde_msgs::action::SetFreedrive_GetResult_Request goal_id(::ur_ros_rtde_msgs::action::SetFreedrive_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::SetFreedrive_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_msgs::action::SetFreedrive_GetResult_Request>()
{
  return ur_ros_rtde_msgs::action::builder::Init_SetFreedrive_GetResult_Request_goal_id();
}

}  // namespace ur_ros_rtde_msgs


namespace ur_ros_rtde_msgs
{

namespace action
{

namespace builder
{

class Init_SetFreedrive_GetResult_Response_result
{
public:
  explicit Init_SetFreedrive_GetResult_Response_result(::ur_ros_rtde_msgs::action::SetFreedrive_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ur_ros_rtde_msgs::action::SetFreedrive_GetResult_Response result(::ur_ros_rtde_msgs::action::SetFreedrive_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::SetFreedrive_GetResult_Response msg_;
};

class Init_SetFreedrive_GetResult_Response_status
{
public:
  Init_SetFreedrive_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetFreedrive_GetResult_Response_result status(::ur_ros_rtde_msgs::action::SetFreedrive_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SetFreedrive_GetResult_Response_result(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::SetFreedrive_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_msgs::action::SetFreedrive_GetResult_Response>()
{
  return ur_ros_rtde_msgs::action::builder::Init_SetFreedrive_GetResult_Response_status();
}

}  // namespace ur_ros_rtde_msgs


namespace ur_ros_rtde_msgs
{

namespace action
{

namespace builder
{

class Init_SetFreedrive_FeedbackMessage_feedback
{
public:
  explicit Init_SetFreedrive_FeedbackMessage_feedback(::ur_ros_rtde_msgs::action::SetFreedrive_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ur_ros_rtde_msgs::action::SetFreedrive_FeedbackMessage feedback(::ur_ros_rtde_msgs::action::SetFreedrive_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::SetFreedrive_FeedbackMessage msg_;
};

class Init_SetFreedrive_FeedbackMessage_goal_id
{
public:
  Init_SetFreedrive_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetFreedrive_FeedbackMessage_feedback goal_id(::ur_ros_rtde_msgs::action::SetFreedrive_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SetFreedrive_FeedbackMessage_feedback(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::SetFreedrive_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_msgs::action::SetFreedrive_FeedbackMessage>()
{
  return ur_ros_rtde_msgs::action::builder::Init_SetFreedrive_FeedbackMessage_goal_id();
}

}  // namespace ur_ros_rtde_msgs

#endif  // UR_ROS_RTDE_MSGS__ACTION__DETAIL__SET_FREEDRIVE__BUILDER_HPP_
