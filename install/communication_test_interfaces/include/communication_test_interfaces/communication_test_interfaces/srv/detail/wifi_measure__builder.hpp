// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from communication_test_interfaces:srv/WifiMeasure.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_TEST_INTERFACES__SRV__DETAIL__WIFI_MEASURE__BUILDER_HPP_
#define COMMUNICATION_TEST_INTERFACES__SRV__DETAIL__WIFI_MEASURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "communication_test_interfaces/srv/detail/wifi_measure__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace communication_test_interfaces
{

namespace srv
{

namespace builder
{

class Init_WifiMeasure_Request_position
{
public:
  explicit Init_WifiMeasure_Request_position(::communication_test_interfaces::srv::WifiMeasure_Request & msg)
  : msg_(msg)
  {}
  ::communication_test_interfaces::srv::WifiMeasure_Request position(::communication_test_interfaces::srv::WifiMeasure_Request::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication_test_interfaces::srv::WifiMeasure_Request msg_;
};

class Init_WifiMeasure_Request_publish
{
public:
  Init_WifiMeasure_Request_publish()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WifiMeasure_Request_position publish(::communication_test_interfaces::srv::WifiMeasure_Request::_publish_type arg)
  {
    msg_.publish = std::move(arg);
    return Init_WifiMeasure_Request_position(msg_);
  }

private:
  ::communication_test_interfaces::srv::WifiMeasure_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication_test_interfaces::srv::WifiMeasure_Request>()
{
  return communication_test_interfaces::srv::builder::Init_WifiMeasure_Request_publish();
}

}  // namespace communication_test_interfaces


namespace communication_test_interfaces
{

namespace srv
{

namespace builder
{

class Init_WifiMeasure_Response_signal_dbm
{
public:
  explicit Init_WifiMeasure_Response_signal_dbm(::communication_test_interfaces::srv::WifiMeasure_Response & msg)
  : msg_(msg)
  {}
  ::communication_test_interfaces::srv::WifiMeasure_Response signal_dbm(::communication_test_interfaces::srv::WifiMeasure_Response::_signal_dbm_type arg)
  {
    msg_.signal_dbm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication_test_interfaces::srv::WifiMeasure_Response msg_;
};

class Init_WifiMeasure_Response_signal_quality
{
public:
  Init_WifiMeasure_Response_signal_quality()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WifiMeasure_Response_signal_dbm signal_quality(::communication_test_interfaces::srv::WifiMeasure_Response::_signal_quality_type arg)
  {
    msg_.signal_quality = std::move(arg);
    return Init_WifiMeasure_Response_signal_dbm(msg_);
  }

private:
  ::communication_test_interfaces::srv::WifiMeasure_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication_test_interfaces::srv::WifiMeasure_Response>()
{
  return communication_test_interfaces::srv::builder::Init_WifiMeasure_Response_signal_quality();
}

}  // namespace communication_test_interfaces


namespace communication_test_interfaces
{

namespace srv
{

namespace builder
{

class Init_WifiMeasure_Event_response
{
public:
  explicit Init_WifiMeasure_Event_response(::communication_test_interfaces::srv::WifiMeasure_Event & msg)
  : msg_(msg)
  {}
  ::communication_test_interfaces::srv::WifiMeasure_Event response(::communication_test_interfaces::srv::WifiMeasure_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::communication_test_interfaces::srv::WifiMeasure_Event msg_;
};

class Init_WifiMeasure_Event_request
{
public:
  explicit Init_WifiMeasure_Event_request(::communication_test_interfaces::srv::WifiMeasure_Event & msg)
  : msg_(msg)
  {}
  Init_WifiMeasure_Event_response request(::communication_test_interfaces::srv::WifiMeasure_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_WifiMeasure_Event_response(msg_);
  }

private:
  ::communication_test_interfaces::srv::WifiMeasure_Event msg_;
};

class Init_WifiMeasure_Event_info
{
public:
  Init_WifiMeasure_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WifiMeasure_Event_request info(::communication_test_interfaces::srv::WifiMeasure_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_WifiMeasure_Event_request(msg_);
  }

private:
  ::communication_test_interfaces::srv::WifiMeasure_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::communication_test_interfaces::srv::WifiMeasure_Event>()
{
  return communication_test_interfaces::srv::builder::Init_WifiMeasure_Event_info();
}

}  // namespace communication_test_interfaces

#endif  // COMMUNICATION_TEST_INTERFACES__SRV__DETAIL__WIFI_MEASURE__BUILDER_HPP_
