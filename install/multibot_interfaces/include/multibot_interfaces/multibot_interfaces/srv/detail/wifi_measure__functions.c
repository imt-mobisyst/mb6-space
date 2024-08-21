// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from multibot_interfaces:srv/WifiMeasure.idl
// generated code does not contain a copyright notice
#include "multibot_interfaces/srv/detail/wifi_measure__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
multibot_interfaces__srv__WifiMeasure_Request__init(multibot_interfaces__srv__WifiMeasure_Request * msg)
{
  if (!msg) {
    return false;
  }
  // publish
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    multibot_interfaces__srv__WifiMeasure_Request__fini(msg);
    return false;
  }
  return true;
}

void
multibot_interfaces__srv__WifiMeasure_Request__fini(multibot_interfaces__srv__WifiMeasure_Request * msg)
{
  if (!msg) {
    return;
  }
  // publish
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
}

bool
multibot_interfaces__srv__WifiMeasure_Request__are_equal(const multibot_interfaces__srv__WifiMeasure_Request * lhs, const multibot_interfaces__srv__WifiMeasure_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // publish
  if (lhs->publish != rhs->publish) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  return true;
}

bool
multibot_interfaces__srv__WifiMeasure_Request__copy(
  const multibot_interfaces__srv__WifiMeasure_Request * input,
  multibot_interfaces__srv__WifiMeasure_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // publish
  output->publish = input->publish;
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  return true;
}

multibot_interfaces__srv__WifiMeasure_Request *
multibot_interfaces__srv__WifiMeasure_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multibot_interfaces__srv__WifiMeasure_Request * msg = (multibot_interfaces__srv__WifiMeasure_Request *)allocator.allocate(sizeof(multibot_interfaces__srv__WifiMeasure_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(multibot_interfaces__srv__WifiMeasure_Request));
  bool success = multibot_interfaces__srv__WifiMeasure_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
multibot_interfaces__srv__WifiMeasure_Request__destroy(multibot_interfaces__srv__WifiMeasure_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    multibot_interfaces__srv__WifiMeasure_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
multibot_interfaces__srv__WifiMeasure_Request__Sequence__init(multibot_interfaces__srv__WifiMeasure_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multibot_interfaces__srv__WifiMeasure_Request * data = NULL;

  if (size) {
    data = (multibot_interfaces__srv__WifiMeasure_Request *)allocator.zero_allocate(size, sizeof(multibot_interfaces__srv__WifiMeasure_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = multibot_interfaces__srv__WifiMeasure_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        multibot_interfaces__srv__WifiMeasure_Request__fini(&data[i - 1]);
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
multibot_interfaces__srv__WifiMeasure_Request__Sequence__fini(multibot_interfaces__srv__WifiMeasure_Request__Sequence * array)
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
      multibot_interfaces__srv__WifiMeasure_Request__fini(&array->data[i]);
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

multibot_interfaces__srv__WifiMeasure_Request__Sequence *
multibot_interfaces__srv__WifiMeasure_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multibot_interfaces__srv__WifiMeasure_Request__Sequence * array = (multibot_interfaces__srv__WifiMeasure_Request__Sequence *)allocator.allocate(sizeof(multibot_interfaces__srv__WifiMeasure_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = multibot_interfaces__srv__WifiMeasure_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
multibot_interfaces__srv__WifiMeasure_Request__Sequence__destroy(multibot_interfaces__srv__WifiMeasure_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    multibot_interfaces__srv__WifiMeasure_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
multibot_interfaces__srv__WifiMeasure_Request__Sequence__are_equal(const multibot_interfaces__srv__WifiMeasure_Request__Sequence * lhs, const multibot_interfaces__srv__WifiMeasure_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!multibot_interfaces__srv__WifiMeasure_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
multibot_interfaces__srv__WifiMeasure_Request__Sequence__copy(
  const multibot_interfaces__srv__WifiMeasure_Request__Sequence * input,
  multibot_interfaces__srv__WifiMeasure_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(multibot_interfaces__srv__WifiMeasure_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    multibot_interfaces__srv__WifiMeasure_Request * data =
      (multibot_interfaces__srv__WifiMeasure_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!multibot_interfaces__srv__WifiMeasure_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          multibot_interfaces__srv__WifiMeasure_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!multibot_interfaces__srv__WifiMeasure_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
multibot_interfaces__srv__WifiMeasure_Response__init(multibot_interfaces__srv__WifiMeasure_Response * msg)
{
  if (!msg) {
    return false;
  }
  // signal_quality
  // signal_dbm
  return true;
}

void
multibot_interfaces__srv__WifiMeasure_Response__fini(multibot_interfaces__srv__WifiMeasure_Response * msg)
{
  if (!msg) {
    return;
  }
  // signal_quality
  // signal_dbm
}

bool
multibot_interfaces__srv__WifiMeasure_Response__are_equal(const multibot_interfaces__srv__WifiMeasure_Response * lhs, const multibot_interfaces__srv__WifiMeasure_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // signal_quality
  if (lhs->signal_quality != rhs->signal_quality) {
    return false;
  }
  // signal_dbm
  if (lhs->signal_dbm != rhs->signal_dbm) {
    return false;
  }
  return true;
}

bool
multibot_interfaces__srv__WifiMeasure_Response__copy(
  const multibot_interfaces__srv__WifiMeasure_Response * input,
  multibot_interfaces__srv__WifiMeasure_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // signal_quality
  output->signal_quality = input->signal_quality;
  // signal_dbm
  output->signal_dbm = input->signal_dbm;
  return true;
}

multibot_interfaces__srv__WifiMeasure_Response *
multibot_interfaces__srv__WifiMeasure_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multibot_interfaces__srv__WifiMeasure_Response * msg = (multibot_interfaces__srv__WifiMeasure_Response *)allocator.allocate(sizeof(multibot_interfaces__srv__WifiMeasure_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(multibot_interfaces__srv__WifiMeasure_Response));
  bool success = multibot_interfaces__srv__WifiMeasure_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
multibot_interfaces__srv__WifiMeasure_Response__destroy(multibot_interfaces__srv__WifiMeasure_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    multibot_interfaces__srv__WifiMeasure_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
multibot_interfaces__srv__WifiMeasure_Response__Sequence__init(multibot_interfaces__srv__WifiMeasure_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multibot_interfaces__srv__WifiMeasure_Response * data = NULL;

  if (size) {
    data = (multibot_interfaces__srv__WifiMeasure_Response *)allocator.zero_allocate(size, sizeof(multibot_interfaces__srv__WifiMeasure_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = multibot_interfaces__srv__WifiMeasure_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        multibot_interfaces__srv__WifiMeasure_Response__fini(&data[i - 1]);
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
multibot_interfaces__srv__WifiMeasure_Response__Sequence__fini(multibot_interfaces__srv__WifiMeasure_Response__Sequence * array)
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
      multibot_interfaces__srv__WifiMeasure_Response__fini(&array->data[i]);
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

multibot_interfaces__srv__WifiMeasure_Response__Sequence *
multibot_interfaces__srv__WifiMeasure_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multibot_interfaces__srv__WifiMeasure_Response__Sequence * array = (multibot_interfaces__srv__WifiMeasure_Response__Sequence *)allocator.allocate(sizeof(multibot_interfaces__srv__WifiMeasure_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = multibot_interfaces__srv__WifiMeasure_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
multibot_interfaces__srv__WifiMeasure_Response__Sequence__destroy(multibot_interfaces__srv__WifiMeasure_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    multibot_interfaces__srv__WifiMeasure_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
multibot_interfaces__srv__WifiMeasure_Response__Sequence__are_equal(const multibot_interfaces__srv__WifiMeasure_Response__Sequence * lhs, const multibot_interfaces__srv__WifiMeasure_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!multibot_interfaces__srv__WifiMeasure_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
multibot_interfaces__srv__WifiMeasure_Response__Sequence__copy(
  const multibot_interfaces__srv__WifiMeasure_Response__Sequence * input,
  multibot_interfaces__srv__WifiMeasure_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(multibot_interfaces__srv__WifiMeasure_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    multibot_interfaces__srv__WifiMeasure_Response * data =
      (multibot_interfaces__srv__WifiMeasure_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!multibot_interfaces__srv__WifiMeasure_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          multibot_interfaces__srv__WifiMeasure_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!multibot_interfaces__srv__WifiMeasure_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "multibot_interfaces/srv/detail/wifi_measure__functions.h"

bool
multibot_interfaces__srv__WifiMeasure_Event__init(multibot_interfaces__srv__WifiMeasure_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    multibot_interfaces__srv__WifiMeasure_Event__fini(msg);
    return false;
  }
  // request
  if (!multibot_interfaces__srv__WifiMeasure_Request__Sequence__init(&msg->request, 0)) {
    multibot_interfaces__srv__WifiMeasure_Event__fini(msg);
    return false;
  }
  // response
  if (!multibot_interfaces__srv__WifiMeasure_Response__Sequence__init(&msg->response, 0)) {
    multibot_interfaces__srv__WifiMeasure_Event__fini(msg);
    return false;
  }
  return true;
}

void
multibot_interfaces__srv__WifiMeasure_Event__fini(multibot_interfaces__srv__WifiMeasure_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  multibot_interfaces__srv__WifiMeasure_Request__Sequence__fini(&msg->request);
  // response
  multibot_interfaces__srv__WifiMeasure_Response__Sequence__fini(&msg->response);
}

bool
multibot_interfaces__srv__WifiMeasure_Event__are_equal(const multibot_interfaces__srv__WifiMeasure_Event * lhs, const multibot_interfaces__srv__WifiMeasure_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!multibot_interfaces__srv__WifiMeasure_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!multibot_interfaces__srv__WifiMeasure_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
multibot_interfaces__srv__WifiMeasure_Event__copy(
  const multibot_interfaces__srv__WifiMeasure_Event * input,
  multibot_interfaces__srv__WifiMeasure_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!multibot_interfaces__srv__WifiMeasure_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!multibot_interfaces__srv__WifiMeasure_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

multibot_interfaces__srv__WifiMeasure_Event *
multibot_interfaces__srv__WifiMeasure_Event__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multibot_interfaces__srv__WifiMeasure_Event * msg = (multibot_interfaces__srv__WifiMeasure_Event *)allocator.allocate(sizeof(multibot_interfaces__srv__WifiMeasure_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(multibot_interfaces__srv__WifiMeasure_Event));
  bool success = multibot_interfaces__srv__WifiMeasure_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
multibot_interfaces__srv__WifiMeasure_Event__destroy(multibot_interfaces__srv__WifiMeasure_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    multibot_interfaces__srv__WifiMeasure_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
multibot_interfaces__srv__WifiMeasure_Event__Sequence__init(multibot_interfaces__srv__WifiMeasure_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multibot_interfaces__srv__WifiMeasure_Event * data = NULL;

  if (size) {
    data = (multibot_interfaces__srv__WifiMeasure_Event *)allocator.zero_allocate(size, sizeof(multibot_interfaces__srv__WifiMeasure_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = multibot_interfaces__srv__WifiMeasure_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        multibot_interfaces__srv__WifiMeasure_Event__fini(&data[i - 1]);
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
multibot_interfaces__srv__WifiMeasure_Event__Sequence__fini(multibot_interfaces__srv__WifiMeasure_Event__Sequence * array)
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
      multibot_interfaces__srv__WifiMeasure_Event__fini(&array->data[i]);
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

multibot_interfaces__srv__WifiMeasure_Event__Sequence *
multibot_interfaces__srv__WifiMeasure_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multibot_interfaces__srv__WifiMeasure_Event__Sequence * array = (multibot_interfaces__srv__WifiMeasure_Event__Sequence *)allocator.allocate(sizeof(multibot_interfaces__srv__WifiMeasure_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = multibot_interfaces__srv__WifiMeasure_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
multibot_interfaces__srv__WifiMeasure_Event__Sequence__destroy(multibot_interfaces__srv__WifiMeasure_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    multibot_interfaces__srv__WifiMeasure_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
multibot_interfaces__srv__WifiMeasure_Event__Sequence__are_equal(const multibot_interfaces__srv__WifiMeasure_Event__Sequence * lhs, const multibot_interfaces__srv__WifiMeasure_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!multibot_interfaces__srv__WifiMeasure_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
multibot_interfaces__srv__WifiMeasure_Event__Sequence__copy(
  const multibot_interfaces__srv__WifiMeasure_Event__Sequence * input,
  multibot_interfaces__srv__WifiMeasure_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(multibot_interfaces__srv__WifiMeasure_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    multibot_interfaces__srv__WifiMeasure_Event * data =
      (multibot_interfaces__srv__WifiMeasure_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!multibot_interfaces__srv__WifiMeasure_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          multibot_interfaces__srv__WifiMeasure_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!multibot_interfaces__srv__WifiMeasure_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
