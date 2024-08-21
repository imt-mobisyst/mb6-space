// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from multibot_interfaces:msg/AuctionBid.idl
// generated code does not contain a copyright notice

#include "multibot_interfaces/msg/detail/auction_bid__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_multibot_interfaces
const rosidl_type_hash_t *
multibot_interfaces__msg__AuctionBid__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7e, 0xc3, 0x07, 0x5d, 0xf5, 0xa0, 0x99, 0x4e,
      0x3a, 0x2e, 0x7c, 0x2f, 0xd9, 0x18, 0x96, 0x0b,
      0x21, 0xfa, 0x67, 0xc8, 0x4f, 0xb0, 0x3f, 0x2e,
      0x2d, 0x46, 0xae, 0x5f, 0xb5, 0xcc, 0xa4, 0x52,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char multibot_interfaces__msg__AuctionBid__TYPE_NAME[] = "multibot_interfaces/msg/AuctionBid";

// Define type names, field names, and default values
static char multibot_interfaces__msg__AuctionBid__FIELD_NAME__robot_id[] = "robot_id";
static char multibot_interfaces__msg__AuctionBid__FIELD_NAME__distance[] = "distance";

static rosidl_runtime_c__type_description__Field multibot_interfaces__msg__AuctionBid__FIELDS[] = {
  {
    {multibot_interfaces__msg__AuctionBid__FIELD_NAME__robot_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {multibot_interfaces__msg__AuctionBid__FIELD_NAME__distance, 8, 8},
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
multibot_interfaces__msg__AuctionBid__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {multibot_interfaces__msg__AuctionBid__TYPE_NAME, 34, 34},
      {multibot_interfaces__msg__AuctionBid__FIELDS, 2, 2},
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
multibot_interfaces__msg__AuctionBid__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {multibot_interfaces__msg__AuctionBid__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 30, 30},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
multibot_interfaces__msg__AuctionBid__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *multibot_interfaces__msg__AuctionBid__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
