// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from multibot_interfaces:msg/AuctionBid.idl
// generated code does not contain a copyright notice

#ifndef MULTIBOT_INTERFACES__MSG__DETAIL__AUCTION_BID__FUNCTIONS_H_
#define MULTIBOT_INTERFACES__MSG__DETAIL__AUCTION_BID__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "multibot_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "multibot_interfaces/msg/detail/auction_bid__struct.h"

/// Initialize msg/AuctionBid message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * multibot_interfaces__msg__AuctionBid
 * )) before or use
 * multibot_interfaces__msg__AuctionBid__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_multibot_interfaces
bool
multibot_interfaces__msg__AuctionBid__init(multibot_interfaces__msg__AuctionBid * msg);

/// Finalize msg/AuctionBid message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_multibot_interfaces
void
multibot_interfaces__msg__AuctionBid__fini(multibot_interfaces__msg__AuctionBid * msg);

/// Create msg/AuctionBid message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * multibot_interfaces__msg__AuctionBid__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_multibot_interfaces
multibot_interfaces__msg__AuctionBid *
multibot_interfaces__msg__AuctionBid__create();

/// Destroy msg/AuctionBid message.
/**
 * It calls
 * multibot_interfaces__msg__AuctionBid__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_multibot_interfaces
void
multibot_interfaces__msg__AuctionBid__destroy(multibot_interfaces__msg__AuctionBid * msg);

/// Check for msg/AuctionBid message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_multibot_interfaces
bool
multibot_interfaces__msg__AuctionBid__are_equal(const multibot_interfaces__msg__AuctionBid * lhs, const multibot_interfaces__msg__AuctionBid * rhs);

/// Copy a msg/AuctionBid message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_multibot_interfaces
bool
multibot_interfaces__msg__AuctionBid__copy(
  const multibot_interfaces__msg__AuctionBid * input,
  multibot_interfaces__msg__AuctionBid * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_multibot_interfaces
const rosidl_type_hash_t *
multibot_interfaces__msg__AuctionBid__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_multibot_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
multibot_interfaces__msg__AuctionBid__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_multibot_interfaces
const rosidl_runtime_c__type_description__TypeSource *
multibot_interfaces__msg__AuctionBid__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_multibot_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
multibot_interfaces__msg__AuctionBid__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/AuctionBid messages.
/**
 * It allocates the memory for the number of elements and calls
 * multibot_interfaces__msg__AuctionBid__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_multibot_interfaces
bool
multibot_interfaces__msg__AuctionBid__Sequence__init(multibot_interfaces__msg__AuctionBid__Sequence * array, size_t size);

/// Finalize array of msg/AuctionBid messages.
/**
 * It calls
 * multibot_interfaces__msg__AuctionBid__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_multibot_interfaces
void
multibot_interfaces__msg__AuctionBid__Sequence__fini(multibot_interfaces__msg__AuctionBid__Sequence * array);

/// Create array of msg/AuctionBid messages.
/**
 * It allocates the memory for the array and calls
 * multibot_interfaces__msg__AuctionBid__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_multibot_interfaces
multibot_interfaces__msg__AuctionBid__Sequence *
multibot_interfaces__msg__AuctionBid__Sequence__create(size_t size);

/// Destroy array of msg/AuctionBid messages.
/**
 * It calls
 * multibot_interfaces__msg__AuctionBid__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_multibot_interfaces
void
multibot_interfaces__msg__AuctionBid__Sequence__destroy(multibot_interfaces__msg__AuctionBid__Sequence * array);

/// Check for msg/AuctionBid message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_multibot_interfaces
bool
multibot_interfaces__msg__AuctionBid__Sequence__are_equal(const multibot_interfaces__msg__AuctionBid__Sequence * lhs, const multibot_interfaces__msg__AuctionBid__Sequence * rhs);

/// Copy an array of msg/AuctionBid messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_multibot_interfaces
bool
multibot_interfaces__msg__AuctionBid__Sequence__copy(
  const multibot_interfaces__msg__AuctionBid__Sequence * input,
  multibot_interfaces__msg__AuctionBid__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MULTIBOT_INTERFACES__MSG__DETAIL__AUCTION_BID__FUNCTIONS_H_
