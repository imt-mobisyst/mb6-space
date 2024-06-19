// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from communication_test_interfaces:msg/AuctionBid.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "communication_test_interfaces/msg/detail/auction_bid__rosidl_typesupport_introspection_c.h"
#include "communication_test_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "communication_test_interfaces/msg/detail/auction_bid__functions.h"
#include "communication_test_interfaces/msg/detail/auction_bid__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void communication_test_interfaces__msg__AuctionBid__rosidl_typesupport_introspection_c__AuctionBid_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  communication_test_interfaces__msg__AuctionBid__init(message_memory);
}

void communication_test_interfaces__msg__AuctionBid__rosidl_typesupport_introspection_c__AuctionBid_fini_function(void * message_memory)
{
  communication_test_interfaces__msg__AuctionBid__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember communication_test_interfaces__msg__AuctionBid__rosidl_typesupport_introspection_c__AuctionBid_message_member_array[2] = {
  {
    "robot_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication_test_interfaces__msg__AuctionBid, robot_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication_test_interfaces__msg__AuctionBid, distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers communication_test_interfaces__msg__AuctionBid__rosidl_typesupport_introspection_c__AuctionBid_message_members = {
  "communication_test_interfaces__msg",  // message namespace
  "AuctionBid",  // message name
  2,  // number of fields
  sizeof(communication_test_interfaces__msg__AuctionBid),
  communication_test_interfaces__msg__AuctionBid__rosidl_typesupport_introspection_c__AuctionBid_message_member_array,  // message members
  communication_test_interfaces__msg__AuctionBid__rosidl_typesupport_introspection_c__AuctionBid_init_function,  // function to initialize message memory (memory has to be allocated)
  communication_test_interfaces__msg__AuctionBid__rosidl_typesupport_introspection_c__AuctionBid_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t communication_test_interfaces__msg__AuctionBid__rosidl_typesupport_introspection_c__AuctionBid_message_type_support_handle = {
  0,
  &communication_test_interfaces__msg__AuctionBid__rosidl_typesupport_introspection_c__AuctionBid_message_members,
  get_message_typesupport_handle_function,
  &communication_test_interfaces__msg__AuctionBid__get_type_hash,
  &communication_test_interfaces__msg__AuctionBid__get_type_description,
  &communication_test_interfaces__msg__AuctionBid__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_communication_test_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication_test_interfaces, msg, AuctionBid)() {
  if (!communication_test_interfaces__msg__AuctionBid__rosidl_typesupport_introspection_c__AuctionBid_message_type_support_handle.typesupport_identifier) {
    communication_test_interfaces__msg__AuctionBid__rosidl_typesupport_introspection_c__AuctionBid_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &communication_test_interfaces__msg__AuctionBid__rosidl_typesupport_introspection_c__AuctionBid_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
