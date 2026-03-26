// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from multibot_msgs:msg/Pulse.idl
// generated code does not contain a copyright notice

#ifndef MULTIBOT_MSGS__MSG__DETAIL__PULSE__STRUCT_H_
#define MULTIBOT_MSGS__MSG__DETAIL__PULSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'system_name'
// Member 'description'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Pulse in the package multibot_msgs.
typedef struct multibot_msgs__msg__Pulse
{
  builtin_interfaces__msg__Time stamp;
  rosidl_runtime_c__String system_name;
  rosidl_runtime_c__String description;
} multibot_msgs__msg__Pulse;

// Struct for a sequence of multibot_msgs__msg__Pulse.
typedef struct multibot_msgs__msg__Pulse__Sequence
{
  multibot_msgs__msg__Pulse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} multibot_msgs__msg__Pulse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MULTIBOT_MSGS__MSG__DETAIL__PULSE__STRUCT_H_
