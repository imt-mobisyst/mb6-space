// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from multibot_interfaces:msg/AuctionBid.idl
// generated code does not contain a copyright notice

#ifndef MULTIBOT_INTERFACES__MSG__DETAIL__AUCTION_BID__BUILDER_HPP_
#define MULTIBOT_INTERFACES__MSG__DETAIL__AUCTION_BID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "multibot_interfaces/msg/detail/auction_bid__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace multibot_interfaces
{

namespace msg
{

namespace builder
{

class Init_AuctionBid_distance
{
public:
  explicit Init_AuctionBid_distance(::multibot_interfaces::msg::AuctionBid & msg)
  : msg_(msg)
  {}
  ::multibot_interfaces::msg::AuctionBid distance(::multibot_interfaces::msg::AuctionBid::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::multibot_interfaces::msg::AuctionBid msg_;
};

class Init_AuctionBid_robot_id
{
public:
  Init_AuctionBid_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AuctionBid_distance robot_id(::multibot_interfaces::msg::AuctionBid::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_AuctionBid_distance(msg_);
  }

private:
  ::multibot_interfaces::msg::AuctionBid msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::multibot_interfaces::msg::AuctionBid>()
{
  return multibot_interfaces::msg::builder::Init_AuctionBid_robot_id();
}

}  // namespace multibot_interfaces

#endif  // MULTIBOT_INTERFACES__MSG__DETAIL__AUCTION_BID__BUILDER_HPP_
