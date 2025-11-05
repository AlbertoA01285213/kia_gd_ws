// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ur_ros_rtde_msgs:action/MoveUntilForce.idl
// generated code does not contain a copyright notice

#ifndef UR_ROS_RTDE_MSGS__ACTION__DETAIL__MOVE_UNTIL_FORCE__BUILDER_HPP_
#define UR_ROS_RTDE_MSGS__ACTION__DETAIL__MOVE_UNTIL_FORCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ur_ros_rtde_msgs/action/detail/move_until_force__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ur_ros_rtde_msgs
{

namespace action
{

namespace builder
{

class Init_MoveUntilForce_Goal_deceleration
{
public:
  explicit Init_MoveUntilForce_Goal_deceleration(::ur_ros_rtde_msgs::action::MoveUntilForce_Goal & msg)
  : msg_(msg)
  {}
  ::ur_ros_rtde_msgs::action::MoveUntilForce_Goal deceleration(::ur_ros_rtde_msgs::action::MoveUntilForce_Goal::_deceleration_type arg)
  {
    msg_.deceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::MoveUntilForce_Goal msg_;
};

class Init_MoveUntilForce_Goal_speed
{
public:
  explicit Init_MoveUntilForce_Goal_speed(::ur_ros_rtde_msgs::action::MoveUntilForce_Goal & msg)
  : msg_(msg)
  {}
  Init_MoveUntilForce_Goal_deceleration speed(::ur_ros_rtde_msgs::action::MoveUntilForce_Goal::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_MoveUntilForce_Goal_deceleration(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::MoveUntilForce_Goal msg_;
};

class Init_MoveUntilForce_Goal_acceleration
{
public:
  explicit Init_MoveUntilForce_Goal_acceleration(::ur_ros_rtde_msgs::action::MoveUntilForce_Goal & msg)
  : msg_(msg)
  {}
  Init_MoveUntilForce_Goal_speed acceleration(::ur_ros_rtde_msgs::action::MoveUntilForce_Goal::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_MoveUntilForce_Goal_speed(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::MoveUntilForce_Goal msg_;
};

class Init_MoveUntilForce_Goal_force_th
{
public:
  explicit Init_MoveUntilForce_Goal_force_th(::ur_ros_rtde_msgs::action::MoveUntilForce_Goal & msg)
  : msg_(msg)
  {}
  Init_MoveUntilForce_Goal_acceleration force_th(::ur_ros_rtde_msgs::action::MoveUntilForce_Goal::_force_th_type arg)
  {
    msg_.force_th = std::move(arg);
    return Init_MoveUntilForce_Goal_acceleration(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::MoveUntilForce_Goal msg_;
};

class Init_MoveUntilForce_Goal_forces_to_consider
{
public:
  explicit Init_MoveUntilForce_Goal_forces_to_consider(::ur_ros_rtde_msgs::action::MoveUntilForce_Goal & msg)
  : msg_(msg)
  {}
  Init_MoveUntilForce_Goal_force_th forces_to_consider(::ur_ros_rtde_msgs::action::MoveUntilForce_Goal::_forces_to_consider_type arg)
  {
    msg_.forces_to_consider = std::move(arg);
    return Init_MoveUntilForce_Goal_force_th(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::MoveUntilForce_Goal msg_;
};

class Init_MoveUntilForce_Goal_tool_position_movement
{
public:
  Init_MoveUntilForce_Goal_tool_position_movement()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveUntilForce_Goal_forces_to_consider tool_position_movement(::ur_ros_rtde_msgs::action::MoveUntilForce_Goal::_tool_position_movement_type arg)
  {
    msg_.tool_position_movement = std::move(arg);
    return Init_MoveUntilForce_Goal_forces_to_consider(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::MoveUntilForce_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_msgs::action::MoveUntilForce_Goal>()
{
  return ur_ros_rtde_msgs::action::builder::Init_MoveUntilForce_Goal_tool_position_movement();
}

}  // namespace ur_ros_rtde_msgs


namespace ur_ros_rtde_msgs
{

namespace action
{

namespace builder
{

class Init_MoveUntilForce_Result_result
{
public:
  Init_MoveUntilForce_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ur_ros_rtde_msgs::action::MoveUntilForce_Result result(::ur_ros_rtde_msgs::action::MoveUntilForce_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::MoveUntilForce_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_msgs::action::MoveUntilForce_Result>()
{
  return ur_ros_rtde_msgs::action::builder::Init_MoveUntilForce_Result_result();
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
auto build<::ur_ros_rtde_msgs::action::MoveUntilForce_Feedback>()
{
  return ::ur_ros_rtde_msgs::action::MoveUntilForce_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace ur_ros_rtde_msgs


namespace ur_ros_rtde_msgs
{

namespace action
{

namespace builder
{

class Init_MoveUntilForce_SendGoal_Request_goal
{
public:
  explicit Init_MoveUntilForce_SendGoal_Request_goal(::ur_ros_rtde_msgs::action::MoveUntilForce_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ur_ros_rtde_msgs::action::MoveUntilForce_SendGoal_Request goal(::ur_ros_rtde_msgs::action::MoveUntilForce_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::MoveUntilForce_SendGoal_Request msg_;
};

class Init_MoveUntilForce_SendGoal_Request_goal_id
{
public:
  Init_MoveUntilForce_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveUntilForce_SendGoal_Request_goal goal_id(::ur_ros_rtde_msgs::action::MoveUntilForce_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveUntilForce_SendGoal_Request_goal(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::MoveUntilForce_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_msgs::action::MoveUntilForce_SendGoal_Request>()
{
  return ur_ros_rtde_msgs::action::builder::Init_MoveUntilForce_SendGoal_Request_goal_id();
}

}  // namespace ur_ros_rtde_msgs


namespace ur_ros_rtde_msgs
{

namespace action
{

namespace builder
{

class Init_MoveUntilForce_SendGoal_Response_stamp
{
public:
  explicit Init_MoveUntilForce_SendGoal_Response_stamp(::ur_ros_rtde_msgs::action::MoveUntilForce_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ur_ros_rtde_msgs::action::MoveUntilForce_SendGoal_Response stamp(::ur_ros_rtde_msgs::action::MoveUntilForce_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::MoveUntilForce_SendGoal_Response msg_;
};

class Init_MoveUntilForce_SendGoal_Response_accepted
{
public:
  Init_MoveUntilForce_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveUntilForce_SendGoal_Response_stamp accepted(::ur_ros_rtde_msgs::action::MoveUntilForce_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveUntilForce_SendGoal_Response_stamp(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::MoveUntilForce_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_msgs::action::MoveUntilForce_SendGoal_Response>()
{
  return ur_ros_rtde_msgs::action::builder::Init_MoveUntilForce_SendGoal_Response_accepted();
}

}  // namespace ur_ros_rtde_msgs


namespace ur_ros_rtde_msgs
{

namespace action
{

namespace builder
{

class Init_MoveUntilForce_GetResult_Request_goal_id
{
public:
  Init_MoveUntilForce_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ur_ros_rtde_msgs::action::MoveUntilForce_GetResult_Request goal_id(::ur_ros_rtde_msgs::action::MoveUntilForce_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::MoveUntilForce_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_msgs::action::MoveUntilForce_GetResult_Request>()
{
  return ur_ros_rtde_msgs::action::builder::Init_MoveUntilForce_GetResult_Request_goal_id();
}

}  // namespace ur_ros_rtde_msgs


namespace ur_ros_rtde_msgs
{

namespace action
{

namespace builder
{

class Init_MoveUntilForce_GetResult_Response_result
{
public:
  explicit Init_MoveUntilForce_GetResult_Response_result(::ur_ros_rtde_msgs::action::MoveUntilForce_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ur_ros_rtde_msgs::action::MoveUntilForce_GetResult_Response result(::ur_ros_rtde_msgs::action::MoveUntilForce_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::MoveUntilForce_GetResult_Response msg_;
};

class Init_MoveUntilForce_GetResult_Response_status
{
public:
  Init_MoveUntilForce_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveUntilForce_GetResult_Response_result status(::ur_ros_rtde_msgs::action::MoveUntilForce_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveUntilForce_GetResult_Response_result(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::MoveUntilForce_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_msgs::action::MoveUntilForce_GetResult_Response>()
{
  return ur_ros_rtde_msgs::action::builder::Init_MoveUntilForce_GetResult_Response_status();
}

}  // namespace ur_ros_rtde_msgs


namespace ur_ros_rtde_msgs
{

namespace action
{

namespace builder
{

class Init_MoveUntilForce_FeedbackMessage_feedback
{
public:
  explicit Init_MoveUntilForce_FeedbackMessage_feedback(::ur_ros_rtde_msgs::action::MoveUntilForce_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ur_ros_rtde_msgs::action::MoveUntilForce_FeedbackMessage feedback(::ur_ros_rtde_msgs::action::MoveUntilForce_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::MoveUntilForce_FeedbackMessage msg_;
};

class Init_MoveUntilForce_FeedbackMessage_goal_id
{
public:
  Init_MoveUntilForce_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveUntilForce_FeedbackMessage_feedback goal_id(::ur_ros_rtde_msgs::action::MoveUntilForce_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveUntilForce_FeedbackMessage_feedback(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::MoveUntilForce_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_msgs::action::MoveUntilForce_FeedbackMessage>()
{
  return ur_ros_rtde_msgs::action::builder::Init_MoveUntilForce_FeedbackMessage_goal_id();
}

}  // namespace ur_ros_rtde_msgs

#endif  // UR_ROS_RTDE_MSGS__ACTION__DETAIL__MOVE_UNTIL_FORCE__BUILDER_HPP_
