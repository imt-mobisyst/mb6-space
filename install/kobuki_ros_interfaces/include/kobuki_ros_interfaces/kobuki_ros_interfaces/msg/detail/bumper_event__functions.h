// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from kobuki_ros_interfaces:msg/BumperEvent.idl
// generated code does not contain a copyright notice

#ifndef KOBUKI_ROS_INTERFACES__MSG__DETAIL__BUMPER_EVENT__FUNCTIONS_H_
#define KOBUKI_ROS_INTERFACES__MSG__DETAIL__BUMPER_EVENT__FUNCTIONS_H_

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
#include "kobuki_ros_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "kobuki_ros_interfaces/msg/detail/bumper_event__struct.h"

/// Initialize msg/BumperEvent message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kobuki_ros_interfaces__msg__BumperEvent
 * )) before or use
 * kobuki_ros_interfaces__msg__BumperEvent__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__msg__BumperEvent__init(kobuki_ros_interfaces__msg__BumperEvent * msg);

/// Finalize msg/BumperEvent message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__msg__BumperEvent__fini(kobuki_ros_interfaces__msg__BumperEvent * msg);

/// Create msg/BumperEvent message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kobuki_ros_interfaces__msg__BumperEvent__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
kobuki_ros_interfaces__msg__BumperEvent *
kobuki_ros_interfaces__msg__BumperEvent__create();

/// Destroy msg/BumperEvent message.
/**
 * It calls
 * kobuki_ros_interfaces__msg__BumperEvent__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__msg__BumperEvent__destroy(kobuki_ros_interfaces__msg__BumperEvent * msg);

/// Check for msg/BumperEvent message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__msg__BumperEvent__are_equal(const kobuki_ros_interfaces__msg__BumperEvent * lhs, const kobuki_ros_interfaces__msg__BumperEvent * rhs);

/// Copy a msg/BumperEvent message.
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
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__msg__BumperEvent__copy(
  const kobuki_ros_interfaces__msg__BumperEvent * input,
  kobuki_ros_interfaces__msg__BumperEvent * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
const rosidl_type_hash_t *
kobuki_ros_interfaces__msg__BumperEvent__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
kobuki_ros_interfaces__msg__BumperEvent__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
const rosidl_runtime_c__type_description__TypeSource *
kobuki_ros_interfaces__msg__BumperEvent__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
kobuki_ros_interfaces__msg__BumperEvent__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/BumperEvent messages.
/**
 * It allocates the memory for the number of elements and calls
 * kobuki_ros_interfaces__msg__BumperEvent__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__msg__BumperEvent__Sequence__init(kobuki_ros_interfaces__msg__BumperEvent__Sequence * array, size_t size);

/// Finalize array of msg/BumperEvent messages.
/**
 * It calls
 * kobuki_ros_interfaces__msg__BumperEvent__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__msg__BumperEvent__Sequence__fini(kobuki_ros_interfaces__msg__BumperEvent__Sequence * array);

/// Create array of msg/BumperEvent messages.
/**
 * It allocates the memory for the array and calls
 * kobuki_ros_interfaces__msg__BumperEvent__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
kobuki_ros_interfaces__msg__BumperEvent__Sequence *
kobuki_ros_interfaces__msg__BumperEvent__Sequence__create(size_t size);

/// Destroy array of msg/BumperEvent messages.
/**
 * It calls
 * kobuki_ros_interfaces__msg__BumperEvent__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
void
kobuki_ros_interfaces__msg__BumperEvent__Sequence__destroy(kobuki_ros_interfaces__msg__BumperEvent__Sequence * array);

/// Check for msg/BumperEvent message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__msg__BumperEvent__Sequence__are_equal(const kobuki_ros_interfaces__msg__BumperEvent__Sequence * lhs, const kobuki_ros_interfaces__msg__BumperEvent__Sequence * rhs);

/// Copy an array of msg/BumperEvent messages.
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
ROSIDL_GENERATOR_C_PUBLIC_kobuki_ros_interfaces
bool
kobuki_ros_interfaces__msg__BumperEvent__Sequence__copy(
  const kobuki_ros_interfaces__msg__BumperEvent__Sequence * input,
  kobuki_ros_interfaces__msg__BumperEvent__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // KOBUKI_ROS_INTERFACES__MSG__DETAIL__BUMPER_EVENT__FUNCTIONS_H_