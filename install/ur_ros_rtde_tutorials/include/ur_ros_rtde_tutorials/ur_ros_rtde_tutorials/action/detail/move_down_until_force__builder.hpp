// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ur_ros_rtde_tutorials:action/MoveDownUntilForce.idl
// generated code does not contain a copyright notice

#ifndef UR_ROS_RTDE_TUTORIALS__ACTION__DETAIL__MOVE_DOWN_UNTIL_FORCE__BUILDER_HPP_
#define UR_ROS_RTDE_TUTORIALS__ACTION__DETAIL__MOVE_DOWN_UNTIL_FORCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ur_ros_rtde_tutorials/action/detail/move_down_until_force__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ur_ros_rtde_tutorials
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_tutorials::action::MoveDownUntilForce_Goal>()
{
  return ::ur_ros_rtde_tutorials::action::MoveDownUntilForce_Goal(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace ur_ros_rtde_tutorials


namespace ur_ros_rtde_tutorials
{

namespace action
{

namespace builder
{

class Init_MoveDownUntilForce_Result_result
{
public:
  Init_MoveDownUntilForce_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ur_ros_rtde_tutorials::action::MoveDownUntilForce_Result result(::ur_ros_rtde_tutorials::action::MoveDownUntilForce_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_tutorials::action::MoveDownUntilForce_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_tutorials::action::MoveDownUntilForce_Result>()
{
  return ur_ros_rtde_tutorials::action::builder::Init_MoveDownUntilForce_Result_result();
}

}  // namespace ur_ros_rtde_tutorials


namespace ur_ros_rtde_tutorials
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_tutorials::action::MoveDownUntilForce_Feedback>()
{
  return ::ur_ros_rtde_tutorials::action::MoveDownUntilForce_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace ur_ros_rtde_tutorials


namespace ur_ros_rtde_tutorials
{

namespace action
{

namespace builder
{

class Init_MoveDownUntilForce_SendGoal_Request_goal
{
public:
  explicit Init_MoveDownUntilForce_SendGoal_Request_goal(::ur_ros_rtde_tutorials::action::MoveDownUntilForce_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ur_ros_rtde_tutorials::action::MoveDownUntilForce_SendGoal_Request goal(::ur_ros_rtde_tutorials::action::MoveDownUntilForce_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_tutorials::action::MoveDownUntilForce_SendGoal_Request msg_;
};

class Init_MoveDownUntilForce_SendGoal_Request_goal_id
{
public:
  Init_MoveDownUntilForce_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveDownUntilForce_SendGoal_Request_goal goal_id(::ur_ros_rtde_tutorials::action::MoveDownUntilForce_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveDownUntilForce_SendGoal_Request_goal(msg_);
  }

private:
  ::ur_ros_rtde_tutorials::action::MoveDownUntilForce_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_tutorials::action::MoveDownUntilForce_SendGoal_Request>()
{
  return ur_ros_rtde_tutorials::action::builder::Init_MoveDownUntilForce_SendGoal_Request_goal_id();
}

}  // namespace ur_ros_rtde_tutorials


namespace ur_ros_rtde_tutorials
{

namespace action
{

namespace builder
{

class Init_MoveDownUntilForce_SendGoal_Response_stamp
{
public:
  explicit Init_MoveDownUntilForce_SendGoal_Response_stamp(::ur_ros_rtde_tutorials::action::MoveDownUntilForce_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ur_ros_rtde_tutorials::action::MoveDownUntilForce_SendGoal_Response stamp(::ur_ros_rtde_tutorials::action::MoveDownUntilForce_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_tutorials::action::MoveDownUntilForce_SendGoal_Response msg_;
};

class Init_MoveDownUntilForce_SendGoal_Response_accepted
{
public:
  Init_MoveDownUntilForce_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveDownUntilForce_SendGoal_Response_stamp accepted(::ur_ros_rtde_tutorials::action::MoveDownUntilForce_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveDownUntilForce_SendGoal_Response_stamp(msg_);
  }

private:
  ::ur_ros_rtde_tutorials::action::MoveDownUntilForce_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_tutorials::action::MoveDownUntilForce_SendGoal_Response>()
{
  return ur_ros_rtde_tutorials::action::builder::Init_MoveDownUntilForce_SendGoal_Response_accepted();
}

}  // namespace ur_ros_rtde_tutorials


namespace ur_ros_rtde_tutorials
{

namespace action
{

namespace builder
{

class Init_MoveDownUntilForce_GetResult_Request_goal_id
{
public:
  Init_MoveDownUntilForce_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ur_ros_rtde_tutorials::action::MoveDownUntilForce_GetResult_Request goal_id(::ur_ros_rtde_tutorials::action::MoveDownUntilForce_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_tutorials::action::MoveDownUntilForce_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_tutorials::action::MoveDownUntilForce_GetResult_Request>()
{
  return ur_ros_rtde_tutorials::action::builder::Init_MoveDownUntilForce_GetResult_Request_goal_id();
}

}  // namespace ur_ros_rtde_tutorials


namespace ur_ros_rtde_tutorials
{

namespace action
{

namespace builder
{

class Init_MoveDownUntilForce_GetResult_Response_result
{
public:
  explicit Init_MoveDownUntilForce_GetResult_Response_result(::ur_ros_rtde_tutorials::action::MoveDownUntilForce_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ur_ros_rtde_tutorials::action::MoveDownUntilForce_GetResult_Response result(::ur_ros_rtde_tutorials::action::MoveDownUntilForce_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_tutorials::action::MoveDownUntilForce_GetResult_Response msg_;
};

class Init_MoveDownUntilForce_GetResult_Response_status
{
public:
  Init_MoveDownUntilForce_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveDownUntilForce_GetResult_Response_result status(::ur_ros_rtde_tutorials::action::MoveDownUntilForce_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveDownUntilForce_GetResult_Response_result(msg_);
  }

private:
  ::ur_ros_rtde_tutorials::action::MoveDownUntilForce_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_tutorials::action::MoveDownUntilForce_GetResult_Response>()
{
  return ur_ros_rtde_tutorials::action::builder::Init_MoveDownUntilForce_GetResult_Response_status();
}

}  // namespace ur_ros_rtde_tutorials


namespace ur_ros_rtde_tutorials
{

namespace action
{

namespace builder
{

class Init_MoveDownUntilForce_FeedbackMessage_feedback
{
public:
  explicit Init_MoveDownUntilForce_FeedbackMessage_feedback(::ur_ros_rtde_tutorials::action::MoveDownUntilForce_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ur_ros_rtde_tutorials::action::MoveDownUntilForce_FeedbackMessage feedback(::ur_ros_rtde_tutorials::action::MoveDownUntilForce_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_tutorials::action::MoveDownUntilForce_FeedbackMessage msg_;
};

class Init_MoveDownUntilForce_FeedbackMessage_goal_id
{
public:
  Init_MoveDownUntilForce_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveDownUntilForce_FeedbackMessage_feedback goal_id(::ur_ros_rtde_tutorials::action::MoveDownUntilForce_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveDownUntilForce_FeedbackMessage_feedback(msg_);
  }

private:
  ::ur_ros_rtde_tutorials::action::MoveDownUntilForce_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_tutorials::action::MoveDownUntilForce_FeedbackMessage>()
{
  return ur_ros_rtde_tutorials::action::builder::Init_MoveDownUntilForce_FeedbackMessage_goal_id();
}

}  // namespace ur_ros_rtde_tutorials

#endif  // UR_ROS_RTDE_TUTORIALS__ACTION__DETAIL__MOVE_DOWN_UNTIL_FORCE__BUILDER_HPP_
