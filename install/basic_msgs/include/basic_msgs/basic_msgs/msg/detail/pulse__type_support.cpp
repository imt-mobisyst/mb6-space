// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from basic_msgs:msg/Pulse.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "basic_msgs/msg/detail/pulse__functions.h"
#include "basic_msgs/msg/detail/pulse__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace basic_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Pulse_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) basic_msgs::msg::Pulse(_init);
}

void Pulse_fini_function(void * message_memory)
{
  auto typed_message = static_cast<basic_msgs::msg::Pulse *>(message_memory);
  typed_message->~Pulse();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Pulse_message_member_array[3] = {
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(basic_msgs::msg::Pulse, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "system_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(basic_msgs::msg::Pulse, system_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "description",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(basic_msgs::msg::Pulse, description),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Pulse_message_members = {
  "basic_msgs::msg",  // message namespace
  "Pulse",  // message name
  3,  // number of fields
  sizeof(basic_msgs::msg::Pulse),
  Pulse_message_member_array,  // message members
  Pulse_init_function,  // function to initialize message memory (memory has to be allocated)
  Pulse_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Pulse_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Pulse_message_members,
  get_message_typesupport_handle_function,
  &basic_msgs__msg__Pulse__get_type_hash,
  &basic_msgs__msg__Pulse__get_type_description,
  &basic_msgs__msg__Pulse__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace basic_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<basic_msgs::msg::Pulse>()
{
  return &::basic_msgs::msg::rosidl_typesupport_introspection_cpp::Pulse_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, basic_msgs, msg, Pulse)() {
  return &::basic_msgs::msg::rosidl_typesupport_introspection_cpp::Pulse_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
