// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from multibot_msgs:srv/WifiMeasure.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "multibot_msgs/srv/detail/wifi_measure__rosidl_typesupport_introspection_c.h"
#include "multibot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "multibot_msgs/srv/detail/wifi_measure__functions.h"
#include "multibot_msgs/srv/detail/wifi_measure__struct.h"


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/point.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void multibot_msgs__srv__WifiMeasure_Request__rosidl_typesupport_introspection_c__WifiMeasure_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  multibot_msgs__srv__WifiMeasure_Request__init(message_memory);
}

void multibot_msgs__srv__WifiMeasure_Request__rosidl_typesupport_introspection_c__WifiMeasure_Request_fini_function(void * message_memory)
{
  multibot_msgs__srv__WifiMeasure_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember multibot_msgs__srv__WifiMeasure_Request__rosidl_typesupport_introspection_c__WifiMeasure_Request_message_member_array[2] = {
  {
    "publish",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multibot_msgs__srv__WifiMeasure_Request, publish),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multibot_msgs__srv__WifiMeasure_Request, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers multibot_msgs__srv__WifiMeasure_Request__rosidl_typesupport_introspection_c__WifiMeasure_Request_message_members = {
  "multibot_msgs__srv",  // message namespace
  "WifiMeasure_Request",  // message name
  2,  // number of fields
  sizeof(multibot_msgs__srv__WifiMeasure_Request),
  multibot_msgs__srv__WifiMeasure_Request__rosidl_typesupport_introspection_c__WifiMeasure_Request_message_member_array,  // message members
  multibot_msgs__srv__WifiMeasure_Request__rosidl_typesupport_introspection_c__WifiMeasure_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  multibot_msgs__srv__WifiMeasure_Request__rosidl_typesupport_introspection_c__WifiMeasure_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t multibot_msgs__srv__WifiMeasure_Request__rosidl_typesupport_introspection_c__WifiMeasure_Request_message_type_support_handle = {
  0,
  &multibot_msgs__srv__WifiMeasure_Request__rosidl_typesupport_introspection_c__WifiMeasure_Request_message_members,
  get_message_typesupport_handle_function,
  &multibot_msgs__srv__WifiMeasure_Request__get_type_hash,
  &multibot_msgs__srv__WifiMeasure_Request__get_type_description,
  &multibot_msgs__srv__WifiMeasure_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_multibot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multibot_msgs, srv, WifiMeasure_Request)() {
  multibot_msgs__srv__WifiMeasure_Request__rosidl_typesupport_introspection_c__WifiMeasure_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!multibot_msgs__srv__WifiMeasure_Request__rosidl_typesupport_introspection_c__WifiMeasure_Request_message_type_support_handle.typesupport_identifier) {
    multibot_msgs__srv__WifiMeasure_Request__rosidl_typesupport_introspection_c__WifiMeasure_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &multibot_msgs__srv__WifiMeasure_Request__rosidl_typesupport_introspection_c__WifiMeasure_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "multibot_msgs/srv/detail/wifi_measure__rosidl_typesupport_introspection_c.h"
// already included above
// #include "multibot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "multibot_msgs/srv/detail/wifi_measure__functions.h"
// already included above
// #include "multibot_msgs/srv/detail/wifi_measure__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void multibot_msgs__srv__WifiMeasure_Response__rosidl_typesupport_introspection_c__WifiMeasure_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  multibot_msgs__srv__WifiMeasure_Response__init(message_memory);
}

void multibot_msgs__srv__WifiMeasure_Response__rosidl_typesupport_introspection_c__WifiMeasure_Response_fini_function(void * message_memory)
{
  multibot_msgs__srv__WifiMeasure_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember multibot_msgs__srv__WifiMeasure_Response__rosidl_typesupport_introspection_c__WifiMeasure_Response_message_member_array[2] = {
  {
    "signal_quality",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multibot_msgs__srv__WifiMeasure_Response, signal_quality),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "signal_dbm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multibot_msgs__srv__WifiMeasure_Response, signal_dbm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers multibot_msgs__srv__WifiMeasure_Response__rosidl_typesupport_introspection_c__WifiMeasure_Response_message_members = {
  "multibot_msgs__srv",  // message namespace
  "WifiMeasure_Response",  // message name
  2,  // number of fields
  sizeof(multibot_msgs__srv__WifiMeasure_Response),
  multibot_msgs__srv__WifiMeasure_Response__rosidl_typesupport_introspection_c__WifiMeasure_Response_message_member_array,  // message members
  multibot_msgs__srv__WifiMeasure_Response__rosidl_typesupport_introspection_c__WifiMeasure_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  multibot_msgs__srv__WifiMeasure_Response__rosidl_typesupport_introspection_c__WifiMeasure_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t multibot_msgs__srv__WifiMeasure_Response__rosidl_typesupport_introspection_c__WifiMeasure_Response_message_type_support_handle = {
  0,
  &multibot_msgs__srv__WifiMeasure_Response__rosidl_typesupport_introspection_c__WifiMeasure_Response_message_members,
  get_message_typesupport_handle_function,
  &multibot_msgs__srv__WifiMeasure_Response__get_type_hash,
  &multibot_msgs__srv__WifiMeasure_Response__get_type_description,
  &multibot_msgs__srv__WifiMeasure_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_multibot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multibot_msgs, srv, WifiMeasure_Response)() {
  if (!multibot_msgs__srv__WifiMeasure_Response__rosidl_typesupport_introspection_c__WifiMeasure_Response_message_type_support_handle.typesupport_identifier) {
    multibot_msgs__srv__WifiMeasure_Response__rosidl_typesupport_introspection_c__WifiMeasure_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &multibot_msgs__srv__WifiMeasure_Response__rosidl_typesupport_introspection_c__WifiMeasure_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "multibot_msgs/srv/detail/wifi_measure__rosidl_typesupport_introspection_c.h"
// already included above
// #include "multibot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "multibot_msgs/srv/detail/wifi_measure__functions.h"
// already included above
// #include "multibot_msgs/srv/detail/wifi_measure__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "multibot_msgs/srv/wifi_measure.h"
// Member `request`
// Member `response`
// already included above
// #include "multibot_msgs/srv/detail/wifi_measure__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__WifiMeasure_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  multibot_msgs__srv__WifiMeasure_Event__init(message_memory);
}

void multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__WifiMeasure_Event_fini_function(void * message_memory)
{
  multibot_msgs__srv__WifiMeasure_Event__fini(message_memory);
}

size_t multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__size_function__WifiMeasure_Event__request(
  const void * untyped_member)
{
  const multibot_msgs__srv__WifiMeasure_Request__Sequence * member =
    (const multibot_msgs__srv__WifiMeasure_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__get_const_function__WifiMeasure_Event__request(
  const void * untyped_member, size_t index)
{
  const multibot_msgs__srv__WifiMeasure_Request__Sequence * member =
    (const multibot_msgs__srv__WifiMeasure_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__get_function__WifiMeasure_Event__request(
  void * untyped_member, size_t index)
{
  multibot_msgs__srv__WifiMeasure_Request__Sequence * member =
    (multibot_msgs__srv__WifiMeasure_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__fetch_function__WifiMeasure_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const multibot_msgs__srv__WifiMeasure_Request * item =
    ((const multibot_msgs__srv__WifiMeasure_Request *)
    multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__get_const_function__WifiMeasure_Event__request(untyped_member, index));
  multibot_msgs__srv__WifiMeasure_Request * value =
    (multibot_msgs__srv__WifiMeasure_Request *)(untyped_value);
  *value = *item;
}

void multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__assign_function__WifiMeasure_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  multibot_msgs__srv__WifiMeasure_Request * item =
    ((multibot_msgs__srv__WifiMeasure_Request *)
    multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__get_function__WifiMeasure_Event__request(untyped_member, index));
  const multibot_msgs__srv__WifiMeasure_Request * value =
    (const multibot_msgs__srv__WifiMeasure_Request *)(untyped_value);
  *item = *value;
}

bool multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__resize_function__WifiMeasure_Event__request(
  void * untyped_member, size_t size)
{
  multibot_msgs__srv__WifiMeasure_Request__Sequence * member =
    (multibot_msgs__srv__WifiMeasure_Request__Sequence *)(untyped_member);
  multibot_msgs__srv__WifiMeasure_Request__Sequence__fini(member);
  return multibot_msgs__srv__WifiMeasure_Request__Sequence__init(member, size);
}

size_t multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__size_function__WifiMeasure_Event__response(
  const void * untyped_member)
{
  const multibot_msgs__srv__WifiMeasure_Response__Sequence * member =
    (const multibot_msgs__srv__WifiMeasure_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__get_const_function__WifiMeasure_Event__response(
  const void * untyped_member, size_t index)
{
  const multibot_msgs__srv__WifiMeasure_Response__Sequence * member =
    (const multibot_msgs__srv__WifiMeasure_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__get_function__WifiMeasure_Event__response(
  void * untyped_member, size_t index)
{
  multibot_msgs__srv__WifiMeasure_Response__Sequence * member =
    (multibot_msgs__srv__WifiMeasure_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__fetch_function__WifiMeasure_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const multibot_msgs__srv__WifiMeasure_Response * item =
    ((const multibot_msgs__srv__WifiMeasure_Response *)
    multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__get_const_function__WifiMeasure_Event__response(untyped_member, index));
  multibot_msgs__srv__WifiMeasure_Response * value =
    (multibot_msgs__srv__WifiMeasure_Response *)(untyped_value);
  *value = *item;
}

void multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__assign_function__WifiMeasure_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  multibot_msgs__srv__WifiMeasure_Response * item =
    ((multibot_msgs__srv__WifiMeasure_Response *)
    multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__get_function__WifiMeasure_Event__response(untyped_member, index));
  const multibot_msgs__srv__WifiMeasure_Response * value =
    (const multibot_msgs__srv__WifiMeasure_Response *)(untyped_value);
  *item = *value;
}

bool multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__resize_function__WifiMeasure_Event__response(
  void * untyped_member, size_t size)
{
  multibot_msgs__srv__WifiMeasure_Response__Sequence * member =
    (multibot_msgs__srv__WifiMeasure_Response__Sequence *)(untyped_member);
  multibot_msgs__srv__WifiMeasure_Response__Sequence__fini(member);
  return multibot_msgs__srv__WifiMeasure_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__WifiMeasure_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multibot_msgs__srv__WifiMeasure_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(multibot_msgs__srv__WifiMeasure_Event, request),  // bytes offset in struct
    NULL,  // default value
    multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__size_function__WifiMeasure_Event__request,  // size() function pointer
    multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__get_const_function__WifiMeasure_Event__request,  // get_const(index) function pointer
    multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__get_function__WifiMeasure_Event__request,  // get(index) function pointer
    multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__fetch_function__WifiMeasure_Event__request,  // fetch(index, &value) function pointer
    multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__assign_function__WifiMeasure_Event__request,  // assign(index, value) function pointer
    multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__resize_function__WifiMeasure_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(multibot_msgs__srv__WifiMeasure_Event, response),  // bytes offset in struct
    NULL,  // default value
    multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__size_function__WifiMeasure_Event__response,  // size() function pointer
    multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__get_const_function__WifiMeasure_Event__response,  // get_const(index) function pointer
    multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__get_function__WifiMeasure_Event__response,  // get(index) function pointer
    multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__fetch_function__WifiMeasure_Event__response,  // fetch(index, &value) function pointer
    multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__assign_function__WifiMeasure_Event__response,  // assign(index, value) function pointer
    multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__resize_function__WifiMeasure_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__WifiMeasure_Event_message_members = {
  "multibot_msgs__srv",  // message namespace
  "WifiMeasure_Event",  // message name
  3,  // number of fields
  sizeof(multibot_msgs__srv__WifiMeasure_Event),
  multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__WifiMeasure_Event_message_member_array,  // message members
  multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__WifiMeasure_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__WifiMeasure_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__WifiMeasure_Event_message_type_support_handle = {
  0,
  &multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__WifiMeasure_Event_message_members,
  get_message_typesupport_handle_function,
  &multibot_msgs__srv__WifiMeasure_Event__get_type_hash,
  &multibot_msgs__srv__WifiMeasure_Event__get_type_description,
  &multibot_msgs__srv__WifiMeasure_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_multibot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multibot_msgs, srv, WifiMeasure_Event)() {
  multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__WifiMeasure_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__WifiMeasure_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multibot_msgs, srv, WifiMeasure_Request)();
  multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__WifiMeasure_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multibot_msgs, srv, WifiMeasure_Response)();
  if (!multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__WifiMeasure_Event_message_type_support_handle.typesupport_identifier) {
    multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__WifiMeasure_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__WifiMeasure_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "multibot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "multibot_msgs/srv/detail/wifi_measure__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers multibot_msgs__srv__detail__wifi_measure__rosidl_typesupport_introspection_c__WifiMeasure_service_members = {
  "multibot_msgs__srv",  // service namespace
  "WifiMeasure",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // multibot_msgs__srv__detail__wifi_measure__rosidl_typesupport_introspection_c__WifiMeasure_Request_message_type_support_handle,
  NULL,  // response message
  // multibot_msgs__srv__detail__wifi_measure__rosidl_typesupport_introspection_c__WifiMeasure_Response_message_type_support_handle
  NULL  // event_message
  // multibot_msgs__srv__detail__wifi_measure__rosidl_typesupport_introspection_c__WifiMeasure_Response_message_type_support_handle
};


static rosidl_service_type_support_t multibot_msgs__srv__detail__wifi_measure__rosidl_typesupport_introspection_c__WifiMeasure_service_type_support_handle = {
  0,
  &multibot_msgs__srv__detail__wifi_measure__rosidl_typesupport_introspection_c__WifiMeasure_service_members,
  get_service_typesupport_handle_function,
  &multibot_msgs__srv__WifiMeasure_Request__rosidl_typesupport_introspection_c__WifiMeasure_Request_message_type_support_handle,
  &multibot_msgs__srv__WifiMeasure_Response__rosidl_typesupport_introspection_c__WifiMeasure_Response_message_type_support_handle,
  &multibot_msgs__srv__WifiMeasure_Event__rosidl_typesupport_introspection_c__WifiMeasure_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    multibot_msgs,
    srv,
    WifiMeasure
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    multibot_msgs,
    srv,
    WifiMeasure
  ),
  &multibot_msgs__srv__WifiMeasure__get_type_hash,
  &multibot_msgs__srv__WifiMeasure__get_type_description,
  &multibot_msgs__srv__WifiMeasure__get_type_description_sources,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multibot_msgs, srv, WifiMeasure_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multibot_msgs, srv, WifiMeasure_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multibot_msgs, srv, WifiMeasure_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_multibot_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multibot_msgs, srv, WifiMeasure)() {
  if (!multibot_msgs__srv__detail__wifi_measure__rosidl_typesupport_introspection_c__WifiMeasure_service_type_support_handle.typesupport_identifier) {
    multibot_msgs__srv__detail__wifi_measure__rosidl_typesupport_introspection_c__WifiMeasure_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)multibot_msgs__srv__detail__wifi_measure__rosidl_typesupport_introspection_c__WifiMeasure_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multibot_msgs, srv, WifiMeasure_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multibot_msgs, srv, WifiMeasure_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multibot_msgs, srv, WifiMeasure_Event)()->data;
  }

  return &multibot_msgs__srv__detail__wifi_measure__rosidl_typesupport_introspection_c__WifiMeasure_service_type_support_handle;
}
