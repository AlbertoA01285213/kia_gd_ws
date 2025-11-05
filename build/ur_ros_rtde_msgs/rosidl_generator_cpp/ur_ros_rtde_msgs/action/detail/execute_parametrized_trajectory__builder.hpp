// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ur_ros_rtde_msgs:action/ExecuteParametrizedTrajectory.idl
// generated code does not contain a copyright notice

#ifndef UR_ROS_RTDE_MSGS__ACTION__DETAIL__EXECUTE_PARAMETRIZED_TRAJECTORY__BUILDER_HPP_
#define UR_ROS_RTDE_MSGS__ACTION__DETAIL__EXECUTE_PARAMETRIZED_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ur_ros_rtde_msgs/action/detail/execute_parametrized_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ur_ros_rtde_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteParametrizedTrajectory_Goal_deceleration
{
public:
  explicit Init_ExecuteParametrizedTrajectory_Goal_deceleration(::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Goal & msg)
  : msg_(msg)
  {}
  ::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Goal deceleration(::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Goal::_deceleration_type arg)
  {
    msg_.deceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Goal msg_;
};

class Init_ExecuteParametrizedTrajectory_Goal_times
{
public:
  explicit Init_ExecuteParametrizedTrajectory_Goal_times(::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Goal & msg)
  : msg_(msg)
  {}
  Init_ExecuteParametrizedTrajectory_Goal_deceleration times(::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Goal::_times_type arg)
  {
    msg_.times = std::move(arg);
    return Init_ExecuteParametrizedTrajectory_Goal_deceleration(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Goal msg_;
};

class Init_ExecuteParametrizedTrajectory_Goal_joint_velocities
{
public:
  explicit Init_ExecuteParametrizedTrajectory_Goal_joint_velocities(::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Goal & msg)
  : msg_(msg)
  {}
  Init_ExecuteParametrizedTrajectory_Goal_times joint_velocities(::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Goal::_joint_velocities_type arg)
  {
    msg_.joint_velocities = std::move(arg);
    return Init_ExecuteParametrizedTrajectory_Goal_times(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Goal msg_;
};

class Init_ExecuteParametrizedTrajectory_Goal_joint_positions
{
public:
  Init_ExecuteParametrizedTrajectory_Goal_joint_positions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteParametrizedTrajectory_Goal_joint_velocities joint_positions(::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Goal::_joint_positions_type arg)
  {
    msg_.joint_positions = std::move(arg);
    return Init_ExecuteParametrizedTrajectory_Goal_joint_velocities(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Goal>()
{
  return ur_ros_rtde_msgs::action::builder::Init_ExecuteParametrizedTrajectory_Goal_joint_positions();
}

}  // namespace ur_ros_rtde_msgs


namespace ur_ros_rtde_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteParametrizedTrajectory_Result_result
{
public:
  Init_ExecuteParametrizedTrajectory_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Result result(::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Result>()
{
  return ur_ros_rtde_msgs::action::builder::Init_ExecuteParametrizedTrajectory_Result_result();
}

}  // namespace ur_ros_rtde_msgs


namespace ur_ros_rtde_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteParametrizedTrajectory_Feedback_reached_waypoint
{
public:
  Init_ExecuteParametrizedTrajectory_Feedback_reached_waypoint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Feedback reached_waypoint(::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Feedback::_reached_waypoint_type arg)
  {
    msg_.reached_waypoint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_Feedback>()
{
  return ur_ros_rtde_msgs::action::builder::Init_ExecuteParametrizedTrajectory_Feedback_reached_waypoint();
}

}  // namespace ur_ros_rtde_msgs


namespace ur_ros_rtde_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteParametrizedTrajectory_SendGoal_Request_goal
{
public:
  explicit Init_ExecuteParametrizedTrajectory_SendGoal_Request_goal(::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Request goal(::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Request msg_;
};

class Init_ExecuteParametrizedTrajectory_SendGoal_Request_goal_id
{
public:
  Init_ExecuteParametrizedTrajectory_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteParametrizedTrajectory_SendGoal_Request_goal goal_id(::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecuteParametrizedTrajectory_SendGoal_Request_goal(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Request>()
{
  return ur_ros_rtde_msgs::action::builder::Init_ExecuteParametrizedTrajectory_SendGoal_Request_goal_id();
}

}  // namespace ur_ros_rtde_msgs


namespace ur_ros_rtde_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteParametrizedTrajectory_SendGoal_Response_stamp
{
public:
  explicit Init_ExecuteParametrizedTrajectory_SendGoal_Response_stamp(::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Response stamp(::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Response msg_;
};

class Init_ExecuteParametrizedTrajectory_SendGoal_Response_accepted
{
public:
  Init_ExecuteParametrizedTrajectory_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteParametrizedTrajectory_SendGoal_Response_stamp accepted(::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ExecuteParametrizedTrajectory_SendGoal_Response_stamp(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_SendGoal_Response>()
{
  return ur_ros_rtde_msgs::action::builder::Init_ExecuteParametrizedTrajectory_SendGoal_Response_accepted();
}

}  // namespace ur_ros_rtde_msgs


namespace ur_ros_rtde_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteParametrizedTrajectory_GetResult_Request_goal_id
{
public:
  Init_ExecuteParametrizedTrajectory_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult_Request goal_id(::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult_Request>()
{
  return ur_ros_rtde_msgs::action::builder::Init_ExecuteParametrizedTrajectory_GetResult_Request_goal_id();
}

}  // namespace ur_ros_rtde_msgs


namespace ur_ros_rtde_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteParametrizedTrajectory_GetResult_Response_result
{
public:
  explicit Init_ExecuteParametrizedTrajectory_GetResult_Response_result(::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult_Response result(::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult_Response msg_;
};

class Init_ExecuteParametrizedTrajectory_GetResult_Response_status
{
public:
  Init_ExecuteParametrizedTrajectory_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteParametrizedTrajectory_GetResult_Response_result status(::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ExecuteParametrizedTrajectory_GetResult_Response_result(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_GetResult_Response>()
{
  return ur_ros_rtde_msgs::action::builder::Init_ExecuteParametrizedTrajectory_GetResult_Response_status();
}

}  // namespace ur_ros_rtde_msgs


namespace ur_ros_rtde_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteParametrizedTrajectory_FeedbackMessage_feedback
{
public:
  explicit Init_ExecuteParametrizedTrajectory_FeedbackMessage_feedback(::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_FeedbackMessage feedback(::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_FeedbackMessage msg_;
};

class Init_ExecuteParametrizedTrajectory_FeedbackMessage_goal_id
{
public:
  Init_ExecuteParametrizedTrajectory_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteParametrizedTrajectory_FeedbackMessage_feedback goal_id(::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecuteParametrizedTrajectory_FeedbackMessage_feedback(msg_);
  }

private:
  ::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_ros_rtde_msgs::action::ExecuteParametrizedTrajectory_FeedbackMessage>()
{
  return ur_ros_rtde_msgs::action::builder::Init_ExecuteParametrizedTrajectory_FeedbackMessage_goal_id();
}

}  // namespace ur_ros_rtde_msgs

#endif  // UR_ROS_RTDE_MSGS__ACTION__DETAIL__EXECUTE_PARAMETRIZED_TRAJECTORY__BUILDER_HPP_
