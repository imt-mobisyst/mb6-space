// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from multibot_msgs:msg/AuctionBid.idl
// generated code does not contain a copyright notice

#include "multibot_msgs/msg/detail/auction_bid__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_multibot_msgs
const rosidl_type_hash_t *
multibot_msgs__msg__AuctionBid__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1e, 0xfe, 0x2f, 0x9d, 0x04, 0x8c, 0xed, 0x45,
      0x66, 0x5e, 0x1b, 0xc7, 0xd3, 0x67, 0x53, 0xba,
      0xc1, 0x64, 0xa5, 0xa5, 0x0f, 0x56, 0xa9, 0xc1,
      0x6b, 0x1b, 0x0a, 0xd7, 0x5c, 0xb3, 0x27, 0x4f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char multibot_msgs__msg__AuctionBid__TYPE_NAME[] = "multibot_msgs/msg/AuctionBid";

// Define type names, field names, and default values
static char multibot_msgs__msg__AuctionBid__FIELD_NAME__robot_id[] = "robot_id";
static char multibot_msgs__msg__AuctionBid__FIELD_NAME__distance[] = "distance";

static rosidl_runtime_c__type_description__Field multibot_msgs__msg__AuctionBid__FIELDS[] = {
  {
    {multibot_msgs__msg__AuctionBid__FIELD_NAME__robot_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {multibot_msgs__msg__AuctionBid__FIELD_NAME__distance, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
multibot_msgs__msg__AuctionBid__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {multibot_msgs__msg__AuctionBid__TYPE_NAME, 28, 28},
      {multibot_msgs__msg__AuctionBid__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int8 robot_id\n"
  "float32 distance";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
multibot_msgs__msg__AuctionBid__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {multibot_msgs__msg__AuctionBid__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 30, 30},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
multibot_msgs__msg__AuctionBid__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *multibot_msgs__msg__AuctionBid__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
