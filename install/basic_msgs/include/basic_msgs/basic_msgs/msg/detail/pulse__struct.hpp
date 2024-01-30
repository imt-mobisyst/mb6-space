// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from basic_msgs:msg/Pulse.idl
// generated code does not contain a copyright notice

#ifndef BASIC_MSGS__MSG__DETAIL__PULSE__STRUCT_HPP_
#define BASIC_MSGS__MSG__DETAIL__PULSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__basic_msgs__msg__Pulse __attribute__((deprecated))
#else
# define DEPRECATED__basic_msgs__msg__Pulse __declspec(deprecated)
#endif

namespace basic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Pulse_
{
  using Type = Pulse_<ContainerAllocator>;

  explicit Pulse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->system_name = "";
      this->description = "";
    }
  }

  explicit Pulse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    system_name(_alloc),
    description(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->system_name = "";
      this->description = "";
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _system_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _system_name_type system_name;
  using _description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _description_type description;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__system_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->system_name = _arg;
    return *this;
  }
  Type & set__description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->description = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    basic_msgs::msg::Pulse_<ContainerAllocator> *;
  using ConstRawPtr =
    const basic_msgs::msg::Pulse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<basic_msgs::msg::Pulse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<basic_msgs::msg::Pulse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      basic_msgs::msg::Pulse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<basic_msgs::msg::Pulse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      basic_msgs::msg::Pulse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<basic_msgs::msg::Pulse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<basic_msgs::msg::Pulse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<basic_msgs::msg::Pulse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__basic_msgs__msg__Pulse
    std::shared_ptr<basic_msgs::msg::Pulse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__basic_msgs__msg__Pulse
    std::shared_ptr<basic_msgs::msg::Pulse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pulse_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->system_name != other.system_name) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pulse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pulse_

// alias to use template instance with default allocator
using Pulse =
  basic_msgs::msg::Pulse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace basic_msgs

#endif  // BASIC_MSGS__MSG__DETAIL__PULSE__STRUCT_HPP_
