// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from multibot_msgs:msg/Pulse.idl
// generated code does not contain a copyright notice

#ifndef MULTIBOT_MSGS__MSG__DETAIL__PULSE__BUILDER_HPP_
#define MULTIBOT_MSGS__MSG__DETAIL__PULSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "multibot_msgs/msg/detail/pulse__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace multibot_msgs
{

namespace msg
{

namespace builder
{

class Init_Pulse_description
{
public:
  explicit Init_Pulse_description(::multibot_msgs::msg::Pulse & msg)
  : msg_(msg)
  {}
  ::multibot_msgs::msg::Pulse description(::multibot_msgs::msg::Pulse::_description_type arg)
  {
    msg_.description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::multibot_msgs::msg::Pulse msg_;
};

class Init_Pulse_system_name
{
public:
  explicit Init_Pulse_system_name(::multibot_msgs::msg::Pulse & msg)
  : msg_(msg)
  {}
  Init_Pulse_description system_name(::multibot_msgs::msg::Pulse::_system_name_type arg)
  {
    msg_.system_name = std::move(arg);
    return Init_Pulse_description(msg_);
  }

private:
  ::multibot_msgs::msg::Pulse msg_;
};

class Init_Pulse_stamp
{
public:
  Init_Pulse_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pulse_system_name stamp(::multibot_msgs::msg::Pulse::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Pulse_system_name(msg_);
  }

private:
  ::multibot_msgs::msg::Pulse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::multibot_msgs::msg::Pulse>()
{
  return multibot_msgs::msg::builder::Init_Pulse_stamp();
}

}  // namespace multibot_msgs

#endif  // MULTIBOT_MSGS__MSG__DETAIL__PULSE__BUILDER_HPP_
