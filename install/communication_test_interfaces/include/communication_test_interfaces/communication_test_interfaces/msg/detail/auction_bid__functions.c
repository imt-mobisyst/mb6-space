// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from communication_test_interfaces:msg/AuctionBid.idl
// generated code does not contain a copyright notice
#include "communication_test_interfaces/msg/detail/auction_bid__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
communication_test_interfaces__msg__AuctionBid__init(communication_test_interfaces__msg__AuctionBid * msg)
{
  if (!msg) {
    return false;
  }
  // robot_id
  // distance
  return true;
}

void
communication_test_interfaces__msg__AuctionBid__fini(communication_test_interfaces__msg__AuctionBid * msg)
{
  if (!msg) {
    return;
  }
  // robot_id
  // distance
}

bool
communication_test_interfaces__msg__AuctionBid__are_equal(const communication_test_interfaces__msg__AuctionBid * lhs, const communication_test_interfaces__msg__AuctionBid * rhs)
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
communication_test_interfaces__msg__AuctionBid__copy(
  const communication_test_interfaces__msg__AuctionBid * input,
  communication_test_interfaces__msg__AuctionBid * output)
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

communication_test_interfaces__msg__AuctionBid *
communication_test_interfaces__msg__AuctionBid__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_test_interfaces__msg__AuctionBid * msg = (communication_test_interfaces__msg__AuctionBid *)allocator.allocate(sizeof(communication_test_interfaces__msg__AuctionBid), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(communication_test_interfaces__msg__AuctionBid));
  bool success = communication_test_interfaces__msg__AuctionBid__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
communication_test_interfaces__msg__AuctionBid__destroy(communication_test_interfaces__msg__AuctionBid * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    communication_test_interfaces__msg__AuctionBid__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
communication_test_interfaces__msg__AuctionBid__Sequence__init(communication_test_interfaces__msg__AuctionBid__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_test_interfaces__msg__AuctionBid * data = NULL;

  if (size) {
    data = (communication_test_interfaces__msg__AuctionBid *)allocator.zero_allocate(size, sizeof(communication_test_interfaces__msg__AuctionBid), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = communication_test_interfaces__msg__AuctionBid__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        communication_test_interfaces__msg__AuctionBid__fini(&data[i - 1]);
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
communication_test_interfaces__msg__AuctionBid__Sequence__fini(communication_test_interfaces__msg__AuctionBid__Sequence * array)
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
      communication_test_interfaces__msg__AuctionBid__fini(&array->data[i]);
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

communication_test_interfaces__msg__AuctionBid__Sequence *
communication_test_interfaces__msg__AuctionBid__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_test_interfaces__msg__AuctionBid__Sequence * array = (communication_test_interfaces__msg__AuctionBid__Sequence *)allocator.allocate(sizeof(communication_test_interfaces__msg__AuctionBid__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = communication_test_interfaces__msg__AuctionBid__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
communication_test_interfaces__msg__AuctionBid__Sequence__destroy(communication_test_interfaces__msg__AuctionBid__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    communication_test_interfaces__msg__AuctionBid__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
communication_test_interfaces__msg__AuctionBid__Sequence__are_equal(const communication_test_interfaces__msg__AuctionBid__Sequence * lhs, const communication_test_interfaces__msg__AuctionBid__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!communication_test_interfaces__msg__AuctionBid__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
communication_test_interfaces__msg__AuctionBid__Sequence__copy(
  const communication_test_interfaces__msg__AuctionBid__Sequence * input,
  communication_test_interfaces__msg__AuctionBid__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(communication_test_interfaces__msg__AuctionBid);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    communication_test_interfaces__msg__AuctionBid * data =
      (communication_test_interfaces__msg__AuctionBid *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!communication_test_interfaces__msg__AuctionBid__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          communication_test_interfaces__msg__AuctionBid__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!communication_test_interfaces__msg__AuctionBid__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
