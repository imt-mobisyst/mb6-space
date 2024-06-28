// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from communication_test_interfaces:srv/WifiMeasure.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_TEST_INTERFACES__SRV__DETAIL__WIFI_MEASURE__TRAITS_HPP_
#define COMMUNICATION_TEST_INTERFACES__SRV__DETAIL__WIFI_MEASURE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "communication_test_interfaces/srv/detail/wifi_measure__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace communication_test_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const WifiMeasure_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: publish
  {
    out << "publish: ";
    rosidl_generator_traits::value_to_yaml(msg.publish, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WifiMeasure_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: publish
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "publish: ";
    rosidl_generator_traits::value_to_yaml(msg.publish, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WifiMeasure_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace communication_test_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use communication_test_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const communication_test_interfaces::srv::WifiMeasure_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  communication_test_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use communication_test_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const communication_test_interfaces::srv::WifiMeasure_Request & msg)
{
  return communication_test_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<communication_test_interfaces::srv::WifiMeasure_Request>()
{
  return "communication_test_interfaces::srv::WifiMeasure_Request";
}

template<>
inline const char * name<communication_test_interfaces::srv::WifiMeasure_Request>()
{
  return "communication_test_interfaces/srv/WifiMeasure_Request";
}

template<>
struct has_fixed_size<communication_test_interfaces::srv::WifiMeasure_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<communication_test_interfaces::srv::WifiMeasure_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<communication_test_interfaces::srv::WifiMeasure_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace communication_test_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const WifiMeasure_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: signal_quality
  {
    out << "signal_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_quality, out);
    out << ", ";
  }

  // member: signal_dbm
  {
    out << "signal_dbm: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_dbm, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WifiMeasure_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: signal_quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signal_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_quality, out);
    out << "\n";
  }

  // member: signal_dbm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signal_dbm: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_dbm, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WifiMeasure_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace communication_test_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use communication_test_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const communication_test_interfaces::srv::WifiMeasure_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  communication_test_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use communication_test_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const communication_test_interfaces::srv::WifiMeasure_Response & msg)
{
  return communication_test_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<communication_test_interfaces::srv::WifiMeasure_Response>()
{
  return "communication_test_interfaces::srv::WifiMeasure_Response";
}

template<>
inline const char * name<communication_test_interfaces::srv::WifiMeasure_Response>()
{
  return "communication_test_interfaces/srv/WifiMeasure_Response";
}

template<>
struct has_fixed_size<communication_test_interfaces::srv::WifiMeasure_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<communication_test_interfaces::srv::WifiMeasure_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<communication_test_interfaces::srv::WifiMeasure_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace communication_test_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const WifiMeasure_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WifiMeasure_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WifiMeasure_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace communication_test_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use communication_test_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const communication_test_interfaces::srv::WifiMeasure_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  communication_test_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use communication_test_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const communication_test_interfaces::srv::WifiMeasure_Event & msg)
{
  return communication_test_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<communication_test_interfaces::srv::WifiMeasure_Event>()
{
  return "communication_test_interfaces::srv::WifiMeasure_Event";
}

template<>
inline const char * name<communication_test_interfaces::srv::WifiMeasure_Event>()
{
  return "communication_test_interfaces/srv/WifiMeasure_Event";
}

template<>
struct has_fixed_size<communication_test_interfaces::srv::WifiMeasure_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<communication_test_interfaces::srv::WifiMeasure_Event>
  : std::integral_constant<bool, has_bounded_size<communication_test_interfaces::srv::WifiMeasure_Request>::value && has_bounded_size<communication_test_interfaces::srv::WifiMeasure_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<communication_test_interfaces::srv::WifiMeasure_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<communication_test_interfaces::srv::WifiMeasure>()
{
  return "communication_test_interfaces::srv::WifiMeasure";
}

template<>
inline const char * name<communication_test_interfaces::srv::WifiMeasure>()
{
  return "communication_test_interfaces/srv/WifiMeasure";
}

template<>
struct has_fixed_size<communication_test_interfaces::srv::WifiMeasure>
  : std::integral_constant<
    bool,
    has_fixed_size<communication_test_interfaces::srv::WifiMeasure_Request>::value &&
    has_fixed_size<communication_test_interfaces::srv::WifiMeasure_Response>::value
  >
{
};

template<>
struct has_bounded_size<communication_test_interfaces::srv::WifiMeasure>
  : std::integral_constant<
    bool,
    has_bounded_size<communication_test_interfaces::srv::WifiMeasure_Request>::value &&
    has_bounded_size<communication_test_interfaces::srv::WifiMeasure_Response>::value
  >
{
};

template<>
struct is_service<communication_test_interfaces::srv::WifiMeasure>
  : std::true_type
{
};

template<>
struct is_service_request<communication_test_interfaces::srv::WifiMeasure_Request>
  : std::true_type
{
};

template<>
struct is_service_response<communication_test_interfaces::srv::WifiMeasure_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COMMUNICATION_TEST_INTERFACES__SRV__DETAIL__WIFI_MEASURE__TRAITS_HPP_
