// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from basic_msgs:msg/Pulse.idl
// generated code does not contain a copyright notice

#ifndef BASIC_MSGS__MSG__DETAIL__PULSE__TRAITS_HPP_
#define BASIC_MSGS__MSG__DETAIL__PULSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "basic_msgs/msg/detail/pulse__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace basic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Pulse & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: system_name
  {
    out << "system_name: ";
    rosidl_generator_traits::value_to_yaml(msg.system_name, out);
    out << ", ";
  }

  // member: description
  {
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Pulse & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: system_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "system_name: ";
    rosidl_generator_traits::value_to_yaml(msg.system_name, out);
    out << "\n";
  }

  // member: description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Pulse & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace basic_msgs

namespace rosidl_generator_traits
{

[[deprecated("use basic_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const basic_msgs::msg::Pulse & msg,
  std::ostream & out, size_t indentation = 0)
{
  basic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use basic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const basic_msgs::msg::Pulse & msg)
{
  return basic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<basic_msgs::msg::Pulse>()
{
  return "basic_msgs::msg::Pulse";
}

template<>
inline const char * name<basic_msgs::msg::Pulse>()
{
  return "basic_msgs/msg/Pulse";
}

template<>
struct has_fixed_size<basic_msgs::msg::Pulse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<basic_msgs::msg::Pulse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<basic_msgs::msg::Pulse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BASIC_MSGS__MSG__DETAIL__PULSE__TRAITS_HPP_
