// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from multibot_interfaces:srv/WifiMeasure.idl
// generated code does not contain a copyright notice

#ifndef MULTIBOT_INTERFACES__SRV__DETAIL__WIFI_MEASURE__STRUCT_H_
#define MULTIBOT_INTERFACES__SRV__DETAIL__WIFI_MEASURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in srv/WifiMeasure in the package multibot_interfaces.
typedef struct multibot_interfaces__srv__WifiMeasure_Request
{
  bool publish;
  geometry_msgs__msg__Point position;
} multibot_interfaces__srv__WifiMeasure_Request;

// Struct for a sequence of multibot_interfaces__srv__WifiMeasure_Request.
typedef struct multibot_interfaces__srv__WifiMeasure_Request__Sequence
{
  multibot_interfaces__srv__WifiMeasure_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} multibot_interfaces__srv__WifiMeasure_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/WifiMeasure in the package multibot_interfaces.
typedef struct multibot_interfaces__srv__WifiMeasure_Response
{
  float signal_quality;
  float signal_dbm;
} multibot_interfaces__srv__WifiMeasure_Response;

// Struct for a sequence of multibot_interfaces__srv__WifiMeasure_Response.
typedef struct multibot_interfaces__srv__WifiMeasure_Response__Sequence
{
  multibot_interfaces__srv__WifiMeasure_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} multibot_interfaces__srv__WifiMeasure_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  multibot_interfaces__srv__WifiMeasure_Event__request__MAX_SIZE = 1
};
// response
enum
{
  multibot_interfaces__srv__WifiMeasure_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/WifiMeasure in the package multibot_interfaces.
typedef struct multibot_interfaces__srv__WifiMeasure_Event
{
  service_msgs__msg__ServiceEventInfo info;
  multibot_interfaces__srv__WifiMeasure_Request__Sequence request;
  multibot_interfaces__srv__WifiMeasure_Response__Sequence response;
} multibot_interfaces__srv__WifiMeasure_Event;

// Struct for a sequence of multibot_interfaces__srv__WifiMeasure_Event.
typedef struct multibot_interfaces__srv__WifiMeasure_Event__Sequence
{
  multibot_interfaces__srv__WifiMeasure_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} multibot_interfaces__srv__WifiMeasure_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MULTIBOT_INTERFACES__SRV__DETAIL__WIFI_MEASURE__STRUCT_H_
