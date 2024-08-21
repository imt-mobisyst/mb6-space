// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from multibot_interfaces:msg/AuctionBid.idl
// generated code does not contain a copyright notice

#ifndef MULTIBOT_INTERFACES__MSG__DETAIL__AUCTION_BID__TRAITS_HPP_
#define MULTIBOT_INTERFACES__MSG__DETAIL__AUCTION_BID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "multibot_interfaces/msg/detail/auction_bid__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace multibot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const AuctionBid & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_id
  {
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AuctionBid & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << "\n";
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AuctionBid & msg, bool use_flow_style = false)
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

}  // namespace multibot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use multibot_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const multibot_interfaces::msg::AuctionBid & msg,
  std::ostream & out, size_t indentation = 0)
{
  multibot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use multibot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const multibot_interfaces::msg::AuctionBid & msg)
{
  return multibot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<multibot_interfaces::msg::AuctionBid>()
{
  return "multibot_interfaces::msg::AuctionBid";
}

template<>
inline const char * name<multibot_interfaces::msg::AuctionBid>()
{
  return "multibot_interfaces/msg/AuctionBid";
}

template<>
struct has_fixed_size<multibot_interfaces::msg::AuctionBid>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<multibot_interfaces::msg::AuctionBid>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<multibot_interfaces::msg::AuctionBid>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MULTIBOT_INTERFACES__MSG__DETAIL__AUCTION_BID__TRAITS_HPP_
