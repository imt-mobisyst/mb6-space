// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from multibot_interfaces:msg/AuctionBid.idl
// generated code does not contain a copyright notice

#ifndef MULTIBOT_INTERFACES__MSG__DETAIL__AUCTION_BID__STRUCT_H_
#define MULTIBOT_INTERFACES__MSG__DETAIL__AUCTION_BID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/AuctionBid in the package multibot_interfaces.
typedef struct multibot_interfaces__msg__AuctionBid
{
  int8_t robot_id;
  float distance;
} multibot_interfaces__msg__AuctionBid;

// Struct for a sequence of multibot_interfaces__msg__AuctionBid.
typedef struct multibot_interfaces__msg__AuctionBid__Sequence
{
  multibot_interfaces__msg__AuctionBid * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} multibot_interfaces__msg__AuctionBid__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MULTIBOT_INTERFACES__MSG__DETAIL__AUCTION_BID__STRUCT_H_
