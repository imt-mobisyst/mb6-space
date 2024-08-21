// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from multibot_interfaces:srv/WifiMeasure.idl
// generated code does not contain a copyright notice

#ifndef MULTIBOT_INTERFACES__SRV__DETAIL__WIFI_MEASURE__STRUCT_HPP_
#define MULTIBOT_INTERFACES__SRV__DETAIL__WIFI_MEASURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__multibot_interfaces__srv__WifiMeasure_Request __attribute__((deprecated))
#else
# define DEPRECATED__multibot_interfaces__srv__WifiMeasure_Request __declspec(deprecated)
#endif

namespace multibot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct WifiMeasure_Request_
{
  using Type = WifiMeasure_Request_<ContainerAllocator>;

  explicit WifiMeasure_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->publish = false;
    }
  }

  explicit WifiMeasure_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->publish = false;
    }
  }

  // field types and members
  using _publish_type =
    bool;
  _publish_type publish;
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;

  // setters for named parameter idiom
  Type & set__publish(
    const bool & _arg)
  {
    this->publish = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    multibot_interfaces::srv::WifiMeasure_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const multibot_interfaces::srv::WifiMeasure_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<multibot_interfaces::srv::WifiMeasure_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<multibot_interfaces::srv::WifiMeasure_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      multibot_interfaces::srv::WifiMeasure_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<multibot_interfaces::srv::WifiMeasure_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      multibot_interfaces::srv::WifiMeasure_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<multibot_interfaces::srv::WifiMeasure_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<multibot_interfaces::srv::WifiMeasure_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<multibot_interfaces::srv::WifiMeasure_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__multibot_interfaces__srv__WifiMeasure_Request
    std::shared_ptr<multibot_interfaces::srv::WifiMeasure_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__multibot_interfaces__srv__WifiMeasure_Request
    std::shared_ptr<multibot_interfaces::srv::WifiMeasure_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WifiMeasure_Request_ & other) const
  {
    if (this->publish != other.publish) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    return true;
  }
  bool operator!=(const WifiMeasure_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WifiMeasure_Request_

// alias to use template instance with default allocator
using WifiMeasure_Request =
  multibot_interfaces::srv::WifiMeasure_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace multibot_interfaces


#ifndef _WIN32
# define DEPRECATED__multibot_interfaces__srv__WifiMeasure_Response __attribute__((deprecated))
#else
# define DEPRECATED__multibot_interfaces__srv__WifiMeasure_Response __declspec(deprecated)
#endif

namespace multibot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct WifiMeasure_Response_
{
  using Type = WifiMeasure_Response_<ContainerAllocator>;

  explicit WifiMeasure_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->signal_quality = 0.0f;
      this->signal_dbm = 0.0f;
    }
  }

  explicit WifiMeasure_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->signal_quality = 0.0f;
      this->signal_dbm = 0.0f;
    }
  }

  // field types and members
  using _signal_quality_type =
    float;
  _signal_quality_type signal_quality;
  using _signal_dbm_type =
    float;
  _signal_dbm_type signal_dbm;

  // setters for named parameter idiom
  Type & set__signal_quality(
    const float & _arg)
  {
    this->signal_quality = _arg;
    return *this;
  }
  Type & set__signal_dbm(
    const float & _arg)
  {
    this->signal_dbm = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    multibot_interfaces::srv::WifiMeasure_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const multibot_interfaces::srv::WifiMeasure_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<multibot_interfaces::srv::WifiMeasure_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<multibot_interfaces::srv::WifiMeasure_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      multibot_interfaces::srv::WifiMeasure_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<multibot_interfaces::srv::WifiMeasure_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      multibot_interfaces::srv::WifiMeasure_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<multibot_interfaces::srv::WifiMeasure_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<multibot_interfaces::srv::WifiMeasure_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<multibot_interfaces::srv::WifiMeasure_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__multibot_interfaces__srv__WifiMeasure_Response
    std::shared_ptr<multibot_interfaces::srv::WifiMeasure_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__multibot_interfaces__srv__WifiMeasure_Response
    std::shared_ptr<multibot_interfaces::srv::WifiMeasure_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WifiMeasure_Response_ & other) const
  {
    if (this->signal_quality != other.signal_quality) {
      return false;
    }
    if (this->signal_dbm != other.signal_dbm) {
      return false;
    }
    return true;
  }
  bool operator!=(const WifiMeasure_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WifiMeasure_Response_

// alias to use template instance with default allocator
using WifiMeasure_Response =
  multibot_interfaces::srv::WifiMeasure_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace multibot_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__multibot_interfaces__srv__WifiMeasure_Event __attribute__((deprecated))
#else
# define DEPRECATED__multibot_interfaces__srv__WifiMeasure_Event __declspec(deprecated)
#endif

namespace multibot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct WifiMeasure_Event_
{
  using Type = WifiMeasure_Event_<ContainerAllocator>;

  explicit WifiMeasure_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit WifiMeasure_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<multibot_interfaces::srv::WifiMeasure_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<multibot_interfaces::srv::WifiMeasure_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<multibot_interfaces::srv::WifiMeasure_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<multibot_interfaces::srv::WifiMeasure_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<multibot_interfaces::srv::WifiMeasure_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<multibot_interfaces::srv::WifiMeasure_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<multibot_interfaces::srv::WifiMeasure_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<multibot_interfaces::srv::WifiMeasure_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    multibot_interfaces::srv::WifiMeasure_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const multibot_interfaces::srv::WifiMeasure_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<multibot_interfaces::srv::WifiMeasure_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<multibot_interfaces::srv::WifiMeasure_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      multibot_interfaces::srv::WifiMeasure_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<multibot_interfaces::srv::WifiMeasure_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      multibot_interfaces::srv::WifiMeasure_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<multibot_interfaces::srv::WifiMeasure_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<multibot_interfaces::srv::WifiMeasure_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<multibot_interfaces::srv::WifiMeasure_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__multibot_interfaces__srv__WifiMeasure_Event
    std::shared_ptr<multibot_interfaces::srv::WifiMeasure_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__multibot_interfaces__srv__WifiMeasure_Event
    std::shared_ptr<multibot_interfaces::srv::WifiMeasure_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WifiMeasure_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const WifiMeasure_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WifiMeasure_Event_

// alias to use template instance with default allocator
using WifiMeasure_Event =
  multibot_interfaces::srv::WifiMeasure_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace multibot_interfaces

namespace multibot_interfaces
{

namespace srv
{

struct WifiMeasure
{
  using Request = multibot_interfaces::srv::WifiMeasure_Request;
  using Response = multibot_interfaces::srv::WifiMeasure_Response;
  using Event = multibot_interfaces::srv::WifiMeasure_Event;
};

}  // namespace srv

}  // namespace multibot_interfaces

#endif  // MULTIBOT_INTERFACES__SRV__DETAIL__WIFI_MEASURE__STRUCT_HPP_
