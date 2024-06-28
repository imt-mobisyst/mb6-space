// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from communication_test_interfaces:srv/WifiMeasure.idl
// generated code does not contain a copyright notice
#include "communication_test_interfaces/srv/detail/wifi_measure__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
communication_test_interfaces__srv__WifiMeasure_Request__init(communication_test_interfaces__srv__WifiMeasure_Request * msg)
{
  if (!msg) {
    return false;
  }
  // publish
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    communication_test_interfaces__srv__WifiMeasure_Request__fini(msg);
    return false;
  }
  return true;
}

void
communication_test_interfaces__srv__WifiMeasure_Request__fini(communication_test_interfaces__srv__WifiMeasure_Request * msg)
{
  if (!msg) {
    return;
  }
  // publish
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
}

bool
communication_test_interfaces__srv__WifiMeasure_Request__are_equal(const communication_test_interfaces__srv__WifiMeasure_Request * lhs, const communication_test_interfaces__srv__WifiMeasure_Request * rhs)
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
communication_test_interfaces__srv__WifiMeasure_Request__copy(
  const communication_test_interfaces__srv__WifiMeasure_Request * input,
  communication_test_interfaces__srv__WifiMeasure_Request * output)
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

communication_test_interfaces__srv__WifiMeasure_Request *
communication_test_interfaces__srv__WifiMeasure_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_test_interfaces__srv__WifiMeasure_Request * msg = (communication_test_interfaces__srv__WifiMeasure_Request *)allocator.allocate(sizeof(communication_test_interfaces__srv__WifiMeasure_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(communication_test_interfaces__srv__WifiMeasure_Request));
  bool success = communication_test_interfaces__srv__WifiMeasure_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
communication_test_interfaces__srv__WifiMeasure_Request__destroy(communication_test_interfaces__srv__WifiMeasure_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    communication_test_interfaces__srv__WifiMeasure_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
communication_test_interfaces__srv__WifiMeasure_Request__Sequence__init(communication_test_interfaces__srv__WifiMeasure_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_test_interfaces__srv__WifiMeasure_Request * data = NULL;

  if (size) {
    data = (communication_test_interfaces__srv__WifiMeasure_Request *)allocator.zero_allocate(size, sizeof(communication_test_interfaces__srv__WifiMeasure_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = communication_test_interfaces__srv__WifiMeasure_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        communication_test_interfaces__srv__WifiMeasure_Request__fini(&data[i - 1]);
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
communication_test_interfaces__srv__WifiMeasure_Request__Sequence__fini(communication_test_interfaces__srv__WifiMeasure_Request__Sequence * array)
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
      communication_test_interfaces__srv__WifiMeasure_Request__fini(&array->data[i]);
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

communication_test_interfaces__srv__WifiMeasure_Request__Sequence *
communication_test_interfaces__srv__WifiMeasure_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_test_interfaces__srv__WifiMeasure_Request__Sequence * array = (communication_test_interfaces__srv__WifiMeasure_Request__Sequence *)allocator.allocate(sizeof(communication_test_interfaces__srv__WifiMeasure_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = communication_test_interfaces__srv__WifiMeasure_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
communication_test_interfaces__srv__WifiMeasure_Request__Sequence__destroy(communication_test_interfaces__srv__WifiMeasure_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    communication_test_interfaces__srv__WifiMeasure_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
communication_test_interfaces__srv__WifiMeasure_Request__Sequence__are_equal(const communication_test_interfaces__srv__WifiMeasure_Request__Sequence * lhs, const communication_test_interfaces__srv__WifiMeasure_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!communication_test_interfaces__srv__WifiMeasure_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
communication_test_interfaces__srv__WifiMeasure_Request__Sequence__copy(
  const communication_test_interfaces__srv__WifiMeasure_Request__Sequence * input,
  communication_test_interfaces__srv__WifiMeasure_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(communication_test_interfaces__srv__WifiMeasure_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    communication_test_interfaces__srv__WifiMeasure_Request * data =
      (communication_test_interfaces__srv__WifiMeasure_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!communication_test_interfaces__srv__WifiMeasure_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          communication_test_interfaces__srv__WifiMeasure_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!communication_test_interfaces__srv__WifiMeasure_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
communication_test_interfaces__srv__WifiMeasure_Response__init(communication_test_interfaces__srv__WifiMeasure_Response * msg)
{
  if (!msg) {
    return false;
  }
  // signal_quality
  // signal_dbm
  return true;
}

void
communication_test_interfaces__srv__WifiMeasure_Response__fini(communication_test_interfaces__srv__WifiMeasure_Response * msg)
{
  if (!msg) {
    return;
  }
  // signal_quality
  // signal_dbm
}

bool
communication_test_interfaces__srv__WifiMeasure_Response__are_equal(const communication_test_interfaces__srv__WifiMeasure_Response * lhs, const communication_test_interfaces__srv__WifiMeasure_Response * rhs)
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
communication_test_interfaces__srv__WifiMeasure_Response__copy(
  const communication_test_interfaces__srv__WifiMeasure_Response * input,
  communication_test_interfaces__srv__WifiMeasure_Response * output)
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

communication_test_interfaces__srv__WifiMeasure_Response *
communication_test_interfaces__srv__WifiMeasure_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_test_interfaces__srv__WifiMeasure_Response * msg = (communication_test_interfaces__srv__WifiMeasure_Response *)allocator.allocate(sizeof(communication_test_interfaces__srv__WifiMeasure_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(communication_test_interfaces__srv__WifiMeasure_Response));
  bool success = communication_test_interfaces__srv__WifiMeasure_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
communication_test_interfaces__srv__WifiMeasure_Response__destroy(communication_test_interfaces__srv__WifiMeasure_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    communication_test_interfaces__srv__WifiMeasure_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
communication_test_interfaces__srv__WifiMeasure_Response__Sequence__init(communication_test_interfaces__srv__WifiMeasure_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_test_interfaces__srv__WifiMeasure_Response * data = NULL;

  if (size) {
    data = (communication_test_interfaces__srv__WifiMeasure_Response *)allocator.zero_allocate(size, sizeof(communication_test_interfaces__srv__WifiMeasure_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = communication_test_interfaces__srv__WifiMeasure_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        communication_test_interfaces__srv__WifiMeasure_Response__fini(&data[i - 1]);
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
communication_test_interfaces__srv__WifiMeasure_Response__Sequence__fini(communication_test_interfaces__srv__WifiMeasure_Response__Sequence * array)
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
      communication_test_interfaces__srv__WifiMeasure_Response__fini(&array->data[i]);
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

communication_test_interfaces__srv__WifiMeasure_Response__Sequence *
communication_test_interfaces__srv__WifiMeasure_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_test_interfaces__srv__WifiMeasure_Response__Sequence * array = (communication_test_interfaces__srv__WifiMeasure_Response__Sequence *)allocator.allocate(sizeof(communication_test_interfaces__srv__WifiMeasure_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = communication_test_interfaces__srv__WifiMeasure_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
communication_test_interfaces__srv__WifiMeasure_Response__Sequence__destroy(communication_test_interfaces__srv__WifiMeasure_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    communication_test_interfaces__srv__WifiMeasure_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
communication_test_interfaces__srv__WifiMeasure_Response__Sequence__are_equal(const communication_test_interfaces__srv__WifiMeasure_Response__Sequence * lhs, const communication_test_interfaces__srv__WifiMeasure_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!communication_test_interfaces__srv__WifiMeasure_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
communication_test_interfaces__srv__WifiMeasure_Response__Sequence__copy(
  const communication_test_interfaces__srv__WifiMeasure_Response__Sequence * input,
  communication_test_interfaces__srv__WifiMeasure_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(communication_test_interfaces__srv__WifiMeasure_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    communication_test_interfaces__srv__WifiMeasure_Response * data =
      (communication_test_interfaces__srv__WifiMeasure_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!communication_test_interfaces__srv__WifiMeasure_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          communication_test_interfaces__srv__WifiMeasure_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!communication_test_interfaces__srv__WifiMeasure_Response__copy(
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
// #include "communication_test_interfaces/srv/detail/wifi_measure__functions.h"

bool
communication_test_interfaces__srv__WifiMeasure_Event__init(communication_test_interfaces__srv__WifiMeasure_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    communication_test_interfaces__srv__WifiMeasure_Event__fini(msg);
    return false;
  }
  // request
  if (!communication_test_interfaces__srv__WifiMeasure_Request__Sequence__init(&msg->request, 0)) {
    communication_test_interfaces__srv__WifiMeasure_Event__fini(msg);
    return false;
  }
  // response
  if (!communication_test_interfaces__srv__WifiMeasure_Response__Sequence__init(&msg->response, 0)) {
    communication_test_interfaces__srv__WifiMeasure_Event__fini(msg);
    return false;
  }
  return true;
}

void
communication_test_interfaces__srv__WifiMeasure_Event__fini(communication_test_interfaces__srv__WifiMeasure_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  communication_test_interfaces__srv__WifiMeasure_Request__Sequence__fini(&msg->request);
  // response
  communication_test_interfaces__srv__WifiMeasure_Response__Sequence__fini(&msg->response);
}

bool
communication_test_interfaces__srv__WifiMeasure_Event__are_equal(const communication_test_interfaces__srv__WifiMeasure_Event * lhs, const communication_test_interfaces__srv__WifiMeasure_Event * rhs)
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
  if (!communication_test_interfaces__srv__WifiMeasure_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!communication_test_interfaces__srv__WifiMeasure_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
communication_test_interfaces__srv__WifiMeasure_Event__copy(
  const communication_test_interfaces__srv__WifiMeasure_Event * input,
  communication_test_interfaces__srv__WifiMeasure_Event * output)
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
  if (!communication_test_interfaces__srv__WifiMeasure_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!communication_test_interfaces__srv__WifiMeasure_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

communication_test_interfaces__srv__WifiMeasure_Event *
communication_test_interfaces__srv__WifiMeasure_Event__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_test_interfaces__srv__WifiMeasure_Event * msg = (communication_test_interfaces__srv__WifiMeasure_Event *)allocator.allocate(sizeof(communication_test_interfaces__srv__WifiMeasure_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(communication_test_interfaces__srv__WifiMeasure_Event));
  bool success = communication_test_interfaces__srv__WifiMeasure_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
communication_test_interfaces__srv__WifiMeasure_Event__destroy(communication_test_interfaces__srv__WifiMeasure_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    communication_test_interfaces__srv__WifiMeasure_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
communication_test_interfaces__srv__WifiMeasure_Event__Sequence__init(communication_test_interfaces__srv__WifiMeasure_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_test_interfaces__srv__WifiMeasure_Event * data = NULL;

  if (size) {
    data = (communication_test_interfaces__srv__WifiMeasure_Event *)allocator.zero_allocate(size, sizeof(communication_test_interfaces__srv__WifiMeasure_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = communication_test_interfaces__srv__WifiMeasure_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        communication_test_interfaces__srv__WifiMeasure_Event__fini(&data[i - 1]);
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
communication_test_interfaces__srv__WifiMeasure_Event__Sequence__fini(communication_test_interfaces__srv__WifiMeasure_Event__Sequence * array)
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
      communication_test_interfaces__srv__WifiMeasure_Event__fini(&array->data[i]);
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

communication_test_interfaces__srv__WifiMeasure_Event__Sequence *
communication_test_interfaces__srv__WifiMeasure_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  communication_test_interfaces__srv__WifiMeasure_Event__Sequence * array = (communication_test_interfaces__srv__WifiMeasure_Event__Sequence *)allocator.allocate(sizeof(communication_test_interfaces__srv__WifiMeasure_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = communication_test_interfaces__srv__WifiMeasure_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
communication_test_interfaces__srv__WifiMeasure_Event__Sequence__destroy(communication_test_interfaces__srv__WifiMeasure_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    communication_test_interfaces__srv__WifiMeasure_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
communication_test_interfaces__srv__WifiMeasure_Event__Sequence__are_equal(const communication_test_interfaces__srv__WifiMeasure_Event__Sequence * lhs, const communication_test_interfaces__srv__WifiMeasure_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!communication_test_interfaces__srv__WifiMeasure_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
communication_test_interfaces__srv__WifiMeasure_Event__Sequence__copy(
  const communication_test_interfaces__srv__WifiMeasure_Event__Sequence * input,
  communication_test_interfaces__srv__WifiMeasure_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(communication_test_interfaces__srv__WifiMeasure_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    communication_test_interfaces__srv__WifiMeasure_Event * data =
      (communication_test_interfaces__srv__WifiMeasure_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!communication_test_interfaces__srv__WifiMeasure_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          communication_test_interfaces__srv__WifiMeasure_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!communication_test_interfaces__srv__WifiMeasure_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
