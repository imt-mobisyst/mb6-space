// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from multibot_interfaces:msg/AuctionBid.idl
// generated code does not contain a copyright notice
#include "multibot_interfaces/msg/detail/auction_bid__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
multibot_interfaces__msg__AuctionBid__init(multibot_interfaces__msg__AuctionBid * msg)
{
  if (!msg) {
    return false;
  }
  // robot_id
  // distance
  return true;
}

void
multibot_interfaces__msg__AuctionBid__fini(multibot_interfaces__msg__AuctionBid * msg)
{
  if (!msg) {
    return;
  }
  // robot_id
  // distance
}

bool
multibot_interfaces__msg__AuctionBid__are_equal(const multibot_interfaces__msg__AuctionBid * lhs, const multibot_interfaces__msg__AuctionBid * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_id
  if (lhs->robot_id != rhs->robot_id) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  return true;
}

bool
multibot_interfaces__msg__AuctionBid__copy(
  const multibot_interfaces__msg__AuctionBid * input,
  multibot_interfaces__msg__AuctionBid * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_id
  output->robot_id = input->robot_id;
  // distance
  output->distance = input->distance;
  return true;
}

multibot_interfaces__msg__AuctionBid *
multibot_interfaces__msg__AuctionBid__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multibot_interfaces__msg__AuctionBid * msg = (multibot_interfaces__msg__AuctionBid *)allocator.allocate(sizeof(multibot_interfaces__msg__AuctionBid), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(multibot_interfaces__msg__AuctionBid));
  bool success = multibot_interfaces__msg__AuctionBid__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
multibot_interfaces__msg__AuctionBid__destroy(multibot_interfaces__msg__AuctionBid * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    multibot_interfaces__msg__AuctionBid__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
multibot_interfaces__msg__AuctionBid__Sequence__init(multibot_interfaces__msg__AuctionBid__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multibot_interfaces__msg__AuctionBid * data = NULL;

  if (size) {
    data = (multibot_interfaces__msg__AuctionBid *)allocator.zero_allocate(size, sizeof(multibot_interfaces__msg__AuctionBid), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = multibot_interfaces__msg__AuctionBid__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        multibot_interfaces__msg__AuctionBid__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
multibot_interfaces__msg__AuctionBid__Sequence__fini(multibot_interfaces__msg__AuctionBid__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      multibot_interfaces__msg__AuctionBid__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

multibot_interfaces__msg__AuctionBid__Sequence *
multibot_interfaces__msg__AuctionBid__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multibot_interfaces__msg__AuctionBid__Sequence * array = (multibot_interfaces__msg__AuctionBid__Sequence *)allocator.allocate(sizeof(multibot_interfaces__msg__AuctionBid__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = multibot_interfaces__msg__AuctionBid__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
multibot_interfaces__msg__AuctionBid__Sequence__destroy(multibot_interfaces__msg__AuctionBid__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    multibot_interfaces__msg__AuctionBid__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
multibot_interfaces__msg__AuctionBid__Sequence__are_equal(const multibot_interfaces__msg__AuctionBid__Sequence * lhs, const multibot_interfaces__msg__AuctionBid__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!multibot_interfaces__msg__AuctionBid__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
multibot_interfaces__msg__AuctionBid__Sequence__copy(
  const multibot_interfaces__msg__AuctionBid__Sequence * input,
  multibot_interfaces__msg__AuctionBid__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(multibot_interfaces__msg__AuctionBid);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    multibot_interfaces__msg__AuctionBid * data =
      (multibot_interfaces__msg__AuctionBid *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!multibot_interfaces__msg__AuctionBid__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          multibot_interfaces__msg__AuctionBid__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!multibot_interfaces__msg__AuctionBid__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
