// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from basic_msgs:msg/Pulse.idl
// generated code does not contain a copyright notice

#ifndef BASIC_MSGS__MSG__DETAIL__PULSE__BUILDER_HPP_
#define BASIC_MSGS__MSG__DETAIL__PULSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "basic_msgs/msg/detail/pulse__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace basic_msgs
{

namespace msg
{

namespace builder
{

class Init_Pulse_description
{
public:
  explicit Init_Pulse_description(::basic_msgs::msg::Pulse & msg)
  : msg_(msg)
  {}
  ::basic_msgs::msg::Pulse description(::basic_msgs::msg::Pulse::_description_type arg)
  {
    msg_.description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::basic_msgs::msg::Pulse msg_;
};

class Init_Pulse_system_name
{
public:
  explicit Init_Pulse_system_name(::basic_msgs::msg::Pulse & msg)
  : msg_(msg)
  {}
  Init_Pulse_description system_name(::basic_msgs::msg::Pulse::_system_name_type arg)
  {
    msg_.system_name = std::move(arg);
    return Init_Pulse_description(msg_);
  }

private:
  ::basic_msgs::msg::Pulse msg_;
};

class Init_Pulse_stamp
{
public:
  Init_Pulse_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pulse_system_name stamp(::basic_msgs::msg::Pulse::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Pulse_system_name(msg_);
  }

private:
  ::basic_msgs::msg::Pulse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::basic_msgs::msg::Pulse>()
{
  return basic_msgs::msg::builder::Init_Pulse_stamp();
}

}  // namespace basic_msgs

#endif  // BASIC_MSGS__MSG__DETAIL__PULSE__BUILDER_HPP_
