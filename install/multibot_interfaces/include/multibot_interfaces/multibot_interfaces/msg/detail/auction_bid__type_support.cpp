// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from multibot_interfaces:msg/AuctionBid.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "multibot_interfaces/msg/detail/auction_bid__functions.h"
#include "multibot_interfaces/msg/detail/auction_bid__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace multibot_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void AuctionBid_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) multibot_interfaces::msg::AuctionBid(_init);
}

void AuctionBid_fini_function(void * message_memory)
{
  auto typed_message = static_cast<multibot_interfaces::msg::AuctionBid *>(message_memory);
  typed_message->~AuctionBid();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AuctionBid_message_member_array[2] = {
  {
    "robot_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multibot_interfaces::msg::AuctionBid, robot_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "distance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multibot_interfaces::msg::AuctionBid, distance),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AuctionBid_message_members = {
  "multibot_interfaces::msg",  // message namespace
  "AuctionBid",  // message name
  2,  // number of fields
  sizeof(multibot_interfaces::msg::AuctionBid),
  AuctionBid_message_member_array,  // message members
  AuctionBid_init_function,  // function to initialize message memory (memory has to be allocated)
  AuctionBid_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AuctionBid_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AuctionBid_message_members,
  get_message_typesupport_handle_function,
  &multibot_interfaces__msg__AuctionBid__get_type_hash,
  &multibot_interfaces__msg__AuctionBid__get_type_description,
  &multibot_interfaces__msg__AuctionBid__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace multibot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<multibot_interfaces::msg::AuctionBid>()
{
  return &::multibot_interfaces::msg::rosidl_typesupport_introspection_cpp::AuctionBid_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, multibot_interfaces, msg, AuctionBid)() {
  return &::multibot_interfaces::msg::rosidl_typesupport_introspection_cpp::AuctionBid_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif