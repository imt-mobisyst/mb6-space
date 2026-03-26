// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from multibot_msgs:msg/Pulse.idl
// generated code does not contain a copyright notice

#include "multibot_msgs/msg/detail/pulse__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_multibot_msgs
const rosidl_type_hash_t *
multibot_msgs__msg__Pulse__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x79, 0x1f, 0x39, 0x0f, 0x50, 0x15, 0xbb, 0x98,
      0xba, 0xac, 0xcd, 0xcf, 0x11, 0xc5, 0x96, 0x19,
      0xe0, 0x70, 0x08, 0x96, 0x03, 0x61, 0x25, 0x41,
      0x8f, 0xed, 0x6f, 0x7d, 0x53, 0x6e, 0x18, 0x41,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
#endif

static char multibot_msgs__msg__Pulse__TYPE_NAME[] = "multibot_msgs/msg/Pulse";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char multibot_msgs__msg__Pulse__FIELD_NAME__stamp[] = "stamp";
static char multibot_msgs__msg__Pulse__FIELD_NAME__system_name[] = "system_name";
static char multibot_msgs__msg__Pulse__FIELD_NAME__description[] = "description";

static rosidl_runtime_c__type_description__Field multibot_msgs__msg__Pulse__FIELDS[] = {
  {
    {multibot_msgs__msg__Pulse__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {multibot_msgs__msg__Pulse__FIELD_NAME__system_name, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {multibot_msgs__msg__Pulse__FIELD_NAME__description, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription multibot_msgs__msg__Pulse__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
multibot_msgs__msg__Pulse__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {multibot_msgs__msg__Pulse__TYPE_NAME, 23, 23},
      {multibot_msgs__msg__Pulse__FIELDS, 3, 3},
    },
    {multibot_msgs__msg__Pulse__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "builtin_interfaces/Time stamp\n"
  "string system_name\n"
  "string description";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
multibot_msgs__msg__Pulse__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {multibot_msgs__msg__Pulse__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 67, 67},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
multibot_msgs__msg__Pulse__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *multibot_msgs__msg__Pulse__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
