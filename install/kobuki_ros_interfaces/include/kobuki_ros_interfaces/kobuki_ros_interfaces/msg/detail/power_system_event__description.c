// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from kobuki_ros_interfaces:msg/PowerSystemEvent.idl
// generated code does not contain a copyright notice

#include "kobuki_ros_interfaces/msg/detail/power_system_event__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
const rosidl_type_hash_t *
kobuki_ros_interfaces__msg__PowerSystemEvent__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x57, 0x05, 0x9c, 0x88, 0x4e, 0xdb, 0xbe, 0xa9,
      0xd9, 0xac, 0xe3, 0x16, 0xe4, 0xae, 0x37, 0x4d,
      0x6d, 0xbb, 0x41, 0xb6, 0x92, 0xb9, 0xcb, 0x6d,
      0xe0, 0x67, 0x17, 0x8a, 0x4d, 0x48, 0x11, 0x59,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char kobuki_ros_interfaces__msg__PowerSystemEvent__TYPE_NAME[] = "kobuki_ros_interfaces/msg/PowerSystemEvent";

// Define type names, field names, and default values
static char kobuki_ros_interfaces__msg__PowerSystemEvent__FIELD_NAME__event[] = "event";

static rosidl_runtime_c__type_description__Field kobuki_ros_interfaces__msg__PowerSystemEvent__FIELDS[] = {
  {
    {kobuki_ros_interfaces__msg__PowerSystemEvent__FIELD_NAME__event, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
kobuki_ros_interfaces__msg__PowerSystemEvent__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {kobuki_ros_interfaces__msg__PowerSystemEvent__TYPE_NAME, 42, 42},
      {kobuki_ros_interfaces__msg__PowerSystemEvent__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Power system events\n"
  "# This message is generated by important changes in the power system:\n"
  "#  - plug/unplug to the docking base or adapter\n"
  "#  - transitions to low/critical battery levels\n"
  "#  - battery charge completed\n"
  "\n"
  "uint8 UNPLUGGED           = 0\n"
  "uint8 PLUGGED_TO_ADAPTER  = 1\n"
  "uint8 PLUGGED_TO_DOCKBASE = 2\n"
  "uint8 CHARGE_COMPLETED    = 3\n"
  "uint8 BATTERY_LOW         = 4\n"
  "uint8 BATTERY_CRITICAL    = 5\n"
  "\n"
  "uint8 event";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
kobuki_ros_interfaces__msg__PowerSystemEvent__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {kobuki_ros_interfaces__msg__PowerSystemEvent__TYPE_NAME, 42, 42},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 412, 412},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
kobuki_ros_interfaces__msg__PowerSystemEvent__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *kobuki_ros_interfaces__msg__PowerSystemEvent__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}