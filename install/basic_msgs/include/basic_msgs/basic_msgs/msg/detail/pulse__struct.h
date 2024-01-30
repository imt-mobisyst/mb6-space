// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from basic_msgs:msg/Pulse.idl
// generated code does not contain a copyright notice

#ifndef BASIC_MSGS__MSG__DETAIL__PULSE__STRUCT_H_
#define BASIC_MSGS__MSG__DETAIL__PULSE__STRUCT_H_

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

/// Struct defined in msg/Pulse in the package basic_msgs.
typedef struct basic_msgs__msg__Pulse
{
  builtin_interfaces__msg__Time stamp;
  rosidl_runtime_c__String system_name;
  rosidl_runtime_c__String description;
} basic_msgs__msg__Pulse;

// Struct for a sequence of basic_msgs__msg__Pulse.
typedef struct basic_msgs__msg__Pulse__Sequence
{
  basic_msgs__msg__Pulse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} basic_msgs__msg__Pulse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASIC_MSGS__MSG__DETAIL__PULSE__STRUCT_H_
