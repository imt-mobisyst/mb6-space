// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from communication_test_interfaces:msg/AuctionBid.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_TEST_INTERFACES__MSG__DETAIL__AUCTION_BID__STRUCT_HPP_
#define COMMUNICATION_TEST_INTERFACES__MSG__DETAIL__AUCTION_BID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__communication_test_interfaces__msg__AuctionBid __attribute__((deprecated))
#else
# define DEPRECATED__communication_test_interfaces__msg__AuctionBid __declspec(deprecated)
#endif

namespace communication_test_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AuctionBid_
{
  using Type = AuctionBid_<ContainerAllocator>;

  explicit AuctionBid_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0;
      this->distance = 0.0f;
    }
  }

  explicit AuctionBid_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0;
      this->distance = 0.0f;
    }
  }

  // field types and members
  using _robot_id_type =
    int8_t;
  _robot_id_type robot_id;
  using _distance_type =
    float;
  _distance_type distance;

  // setters for named parameter idiom
  Type & set__robot_id(
    const int8_t & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    communication_test_interfaces::msg::AuctionBid_<ContainerAllocator> *;
  using ConstRawPtr =
    const communication_test_interfaces::msg::AuctionBid_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<communication_test_interfaces::msg::AuctionBid_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<communication_test_interfaces::msg::AuctionBid_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      communication_test_interfaces::msg::AuctionBid_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<communication_test_interfaces::msg::AuctionBid_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      communication_test_interfaces::msg::AuctionBid_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<communication_test_interfaces::msg::AuctionBid_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<communication_test_interfaces::msg::AuctionBid_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<communication_test_interfaces::msg::AuctionBid_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__communication_test_interfaces__msg__AuctionBid
    std::shared_ptr<communication_test_interfaces::msg::AuctionBid_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__communication_test_interfaces__msg__AuctionBid
    std::shared_ptr<communication_test_interfaces::msg::AuctionBid_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AuctionBid_ & other) const
  {
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const AuctionBid_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AuctionBid_

// alias to use template instance with default allocator
using AuctionBid =
  communication_test_interfaces::msg::AuctionBid_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace communication_test_interfaces

#endif  // COMMUNICATION_TEST_INTERFACES__MSG__DETAIL__AUCTION_BID__STRUCT_HPP_
