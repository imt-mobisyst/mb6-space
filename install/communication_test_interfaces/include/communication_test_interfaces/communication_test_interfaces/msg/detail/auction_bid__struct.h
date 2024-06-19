// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from communication_test_interfaces:msg/AuctionBid.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION_TEST_INTERFACES__MSG__DETAIL__AUCTION_BID__STRUCT_H_
#define COMMUNICATION_TEST_INTERFACES__MSG__DETAIL__AUCTION_BID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/AuctionBid in the package communication_test_interfaces.
typedef struct communication_test_interfaces__msg__AuctionBid
{
  int8_t robot_id;
  float distance;
} communication_test_interfaces__msg__AuctionBid;

// Struct for a sequence of communication_test_interfaces__msg__AuctionBid.
typedef struct communication_test_interfaces__msg__AuctionBid__Sequence
{
  communication_test_interfaces__msg__AuctionBid * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication_test_interfaces__msg__AuctionBid__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION_TEST_INTERFACES__MSG__DETAIL__AUCTION_BID__STRUCT_H_
