// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from communication_test_interfaces:msg/AuctionBid.idl
// generated code does not contain a copyright notice

#include "communication_test_interfaces/msg/detail/auction_bid__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_communication_test_interfaces
const rosidl_type_hash_t *
communication_test_interfaces__msg__AuctionBid__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x67, 0xed, 0x3e, 0xd4, 0x60, 0xa5, 0xf0, 0x75,
      0x50, 0x6d, 0x0a, 0x60, 0x31, 0xc1, 0xcc, 0x27,
      0xd2, 0x28, 0x65, 0xeb, 0xab, 0x77, 0x85, 0x71,
      0xdd, 0x2b, 0x51, 0xf7, 0xf0, 0xa2, 0xfb, 0x69,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char communication_test_interfaces__msg__AuctionBid__TYPE_NAME[] = "communication_test_interfaces/msg/AuctionBid";

// Define type names, field names, and default values
static char communication_test_interfaces__msg__AuctionBid__FIELD_NAME__robot_id[] = "robot_id";
static char communication_test_interfaces__msg__AuctionBid__FIELD_NAME__distance[] = "distance";

static rosidl_runtime_c__type_description__Field communication_test_interfaces__msg__AuctionBid__FIELDS[] = {
  {
    {communication_test_interfaces__msg__AuctionBid__FIELD_NAME__robot_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {communication_test_interfaces__msg__AuctionBid__FIELD_NAME__distance, 8, 8},
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
communication_test_interfaces__msg__AuctionBid__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {communication_test_interfaces__msg__AuctionBid__TYPE_NAME, 44, 44},
      {communication_test_interfaces__msg__AuctionBid__FIELDS, 2, 2},
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
communication_test_interfaces__msg__AuctionBid__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {communication_test_interfaces__msg__AuctionBid__TYPE_NAME, 44, 44},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 30, 30},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
communication_test_interfaces__msg__AuctionBid__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *communication_test_interfaces__msg__AuctionBid__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
