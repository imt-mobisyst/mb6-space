// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from multibot_interfaces:srv/WifiMeasure.idl
// generated code does not contain a copyright notice

#include "multibot_interfaces/srv/detail/wifi_measure__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_multibot_interfaces
const rosidl_type_hash_t *
multibot_interfaces__srv__WifiMeasure__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x89, 0x6b, 0x06, 0xb0, 0xaa, 0xa5, 0xf7, 0x84,
      0x13, 0x27, 0x33, 0x18, 0xab, 0x91, 0xdb, 0x1e,
      0x28, 0x30, 0xe3, 0x55, 0xfb, 0x45, 0xa7, 0xc2,
      0xf9, 0x47, 0x35, 0x7d, 0x0d, 0x80, 0x24, 0x8c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_multibot_interfaces
const rosidl_type_hash_t *
multibot_interfaces__srv__WifiMeasure_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xae, 0xf5, 0xc5, 0x75, 0x19, 0x25, 0xd7, 0xc3,
      0x14, 0x29, 0x43, 0x43, 0x4b, 0xd6, 0xbb, 0x2f,
      0x63, 0x7d, 0xe5, 0x9b, 0x28, 0x7d, 0xb9, 0x01,
      0x7c, 0xbf, 0x36, 0x0e, 0x80, 0x20, 0xc4, 0xdd,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_multibot_interfaces
const rosidl_type_hash_t *
multibot_interfaces__srv__WifiMeasure_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4c, 0x5a, 0x67, 0xfd, 0x19, 0xf9, 0x0a, 0x03,
      0x8f, 0xc4, 0x5b, 0xff, 0x7c, 0x57, 0x56, 0x4a,
      0x1f, 0xc4, 0xeb, 0x39, 0xb1, 0xe0, 0xe2, 0x1d,
      0x0b, 0x0c, 0x8a, 0x11, 0xfa, 0xba, 0x64, 0xf0,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_multibot_interfaces
const rosidl_type_hash_t *
multibot_interfaces__srv__WifiMeasure_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7f, 0x49, 0x5c, 0xff, 0x0a, 0x0e, 0x6f, 0x0f,
      0x72, 0xb0, 0x63, 0xa3, 0x28, 0xbf, 0x84, 0x9e,
      0x14, 0xbd, 0xc3, 0x9f, 0x85, 0x3d, 0xa4, 0x11,
      0x3e, 0x42, 0xc9, 0x3f, 0x16, 0xfc, 0xa9, 0x6c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/point__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char multibot_interfaces__srv__WifiMeasure__TYPE_NAME[] = "multibot_interfaces/srv/WifiMeasure";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char multibot_interfaces__srv__WifiMeasure_Event__TYPE_NAME[] = "multibot_interfaces/srv/WifiMeasure_Event";
static char multibot_interfaces__srv__WifiMeasure_Request__TYPE_NAME[] = "multibot_interfaces/srv/WifiMeasure_Request";
static char multibot_interfaces__srv__WifiMeasure_Response__TYPE_NAME[] = "multibot_interfaces/srv/WifiMeasure_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char multibot_interfaces__srv__WifiMeasure__FIELD_NAME__request_message[] = "request_message";
static char multibot_interfaces__srv__WifiMeasure__FIELD_NAME__response_message[] = "response_message";
static char multibot_interfaces__srv__WifiMeasure__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field multibot_interfaces__srv__WifiMeasure__FIELDS[] = {
  {
    {multibot_interfaces__srv__WifiMeasure__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {multibot_interfaces__srv__WifiMeasure_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {multibot_interfaces__srv__WifiMeasure__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {multibot_interfaces__srv__WifiMeasure_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {multibot_interfaces__srv__WifiMeasure__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {multibot_interfaces__srv__WifiMeasure_Event__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription multibot_interfaces__srv__WifiMeasure__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {multibot_interfaces__srv__WifiMeasure_Event__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {multibot_interfaces__srv__WifiMeasure_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {multibot_interfaces__srv__WifiMeasure_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
multibot_interfaces__srv__WifiMeasure__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {multibot_interfaces__srv__WifiMeasure__TYPE_NAME, 35, 35},
      {multibot_interfaces__srv__WifiMeasure__FIELDS, 3, 3},
    },
    {multibot_interfaces__srv__WifiMeasure__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = multibot_interfaces__srv__WifiMeasure_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = multibot_interfaces__srv__WifiMeasure_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = multibot_interfaces__srv__WifiMeasure_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char multibot_interfaces__srv__WifiMeasure_Request__FIELD_NAME__publish[] = "publish";
static char multibot_interfaces__srv__WifiMeasure_Request__FIELD_NAME__position[] = "position";

static rosidl_runtime_c__type_description__Field multibot_interfaces__srv__WifiMeasure_Request__FIELDS[] = {
  {
    {multibot_interfaces__srv__WifiMeasure_Request__FIELD_NAME__publish, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {multibot_interfaces__srv__WifiMeasure_Request__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription multibot_interfaces__srv__WifiMeasure_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
multibot_interfaces__srv__WifiMeasure_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {multibot_interfaces__srv__WifiMeasure_Request__TYPE_NAME, 43, 43},
      {multibot_interfaces__srv__WifiMeasure_Request__FIELDS, 2, 2},
    },
    {multibot_interfaces__srv__WifiMeasure_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char multibot_interfaces__srv__WifiMeasure_Response__FIELD_NAME__signal_quality[] = "signal_quality";
static char multibot_interfaces__srv__WifiMeasure_Response__FIELD_NAME__signal_dbm[] = "signal_dbm";

static rosidl_runtime_c__type_description__Field multibot_interfaces__srv__WifiMeasure_Response__FIELDS[] = {
  {
    {multibot_interfaces__srv__WifiMeasure_Response__FIELD_NAME__signal_quality, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {multibot_interfaces__srv__WifiMeasure_Response__FIELD_NAME__signal_dbm, 10, 10},
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
multibot_interfaces__srv__WifiMeasure_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {multibot_interfaces__srv__WifiMeasure_Response__TYPE_NAME, 44, 44},
      {multibot_interfaces__srv__WifiMeasure_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char multibot_interfaces__srv__WifiMeasure_Event__FIELD_NAME__info[] = "info";
static char multibot_interfaces__srv__WifiMeasure_Event__FIELD_NAME__request[] = "request";
static char multibot_interfaces__srv__WifiMeasure_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field multibot_interfaces__srv__WifiMeasure_Event__FIELDS[] = {
  {
    {multibot_interfaces__srv__WifiMeasure_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {multibot_interfaces__srv__WifiMeasure_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {multibot_interfaces__srv__WifiMeasure_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {multibot_interfaces__srv__WifiMeasure_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {multibot_interfaces__srv__WifiMeasure_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription multibot_interfaces__srv__WifiMeasure_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {multibot_interfaces__srv__WifiMeasure_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {multibot_interfaces__srv__WifiMeasure_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
multibot_interfaces__srv__WifiMeasure_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {multibot_interfaces__srv__WifiMeasure_Event__TYPE_NAME, 41, 41},
      {multibot_interfaces__srv__WifiMeasure_Event__FIELDS, 3, 3},
    },
    {multibot_interfaces__srv__WifiMeasure_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = multibot_interfaces__srv__WifiMeasure_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = multibot_interfaces__srv__WifiMeasure_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool publish\n"
  "geometry_msgs/Point position\n"
  "---\n"
  "float32 signal_quality\n"
  "float32 signal_dbm";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
multibot_interfaces__srv__WifiMeasure__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {multibot_interfaces__srv__WifiMeasure__TYPE_NAME, 35, 35},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 87, 87},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
multibot_interfaces__srv__WifiMeasure_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {multibot_interfaces__srv__WifiMeasure_Request__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
multibot_interfaces__srv__WifiMeasure_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {multibot_interfaces__srv__WifiMeasure_Response__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
multibot_interfaces__srv__WifiMeasure_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {multibot_interfaces__srv__WifiMeasure_Event__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
multibot_interfaces__srv__WifiMeasure__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *multibot_interfaces__srv__WifiMeasure__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *multibot_interfaces__srv__WifiMeasure_Event__get_individual_type_description_source(NULL);
    sources[4] = *multibot_interfaces__srv__WifiMeasure_Request__get_individual_type_description_source(NULL);
    sources[5] = *multibot_interfaces__srv__WifiMeasure_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
multibot_interfaces__srv__WifiMeasure_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *multibot_interfaces__srv__WifiMeasure_Request__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
multibot_interfaces__srv__WifiMeasure_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *multibot_interfaces__srv__WifiMeasure_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
multibot_interfaces__srv__WifiMeasure_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *multibot_interfaces__srv__WifiMeasure_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *multibot_interfaces__srv__WifiMeasure_Request__get_individual_type_description_source(NULL);
    sources[4] = *multibot_interfaces__srv__WifiMeasure_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}