// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from camera_oneday_msgs:srv/Capture.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "camera_oneday_msgs/srv/detail/capture__rosidl_typesupport_introspection_c.h"
#include "camera_oneday_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "camera_oneday_msgs/srv/detail/capture__functions.h"
#include "camera_oneday_msgs/srv/detail/capture__struct.h"


// Include directives for member types
// Member `topic_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void camera_oneday_msgs__srv__Capture_Request__rosidl_typesupport_introspection_c__Capture_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  camera_oneday_msgs__srv__Capture_Request__init(message_memory);
}

void camera_oneday_msgs__srv__Capture_Request__rosidl_typesupport_introspection_c__Capture_Request_fini_function(void * message_memory)
{
  camera_oneday_msgs__srv__Capture_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember camera_oneday_msgs__srv__Capture_Request__rosidl_typesupport_introspection_c__Capture_Request_message_member_array[1] = {
  {
    "topic_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_oneday_msgs__srv__Capture_Request, topic_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers camera_oneday_msgs__srv__Capture_Request__rosidl_typesupport_introspection_c__Capture_Request_message_members = {
  "camera_oneday_msgs__srv",  // message namespace
  "Capture_Request",  // message name
  1,  // number of fields
  sizeof(camera_oneday_msgs__srv__Capture_Request),
  camera_oneday_msgs__srv__Capture_Request__rosidl_typesupport_introspection_c__Capture_Request_message_member_array,  // message members
  camera_oneday_msgs__srv__Capture_Request__rosidl_typesupport_introspection_c__Capture_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  camera_oneday_msgs__srv__Capture_Request__rosidl_typesupport_introspection_c__Capture_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t camera_oneday_msgs__srv__Capture_Request__rosidl_typesupport_introspection_c__Capture_Request_message_type_support_handle = {
  0,
  &camera_oneday_msgs__srv__Capture_Request__rosidl_typesupport_introspection_c__Capture_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_camera_oneday_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_oneday_msgs, srv, Capture_Request)() {
  if (!camera_oneday_msgs__srv__Capture_Request__rosidl_typesupport_introspection_c__Capture_Request_message_type_support_handle.typesupport_identifier) {
    camera_oneday_msgs__srv__Capture_Request__rosidl_typesupport_introspection_c__Capture_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &camera_oneday_msgs__srv__Capture_Request__rosidl_typesupport_introspection_c__Capture_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "camera_oneday_msgs/srv/detail/capture__rosidl_typesupport_introspection_c.h"
// already included above
// #include "camera_oneday_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "camera_oneday_msgs/srv/detail/capture__functions.h"
// already included above
// #include "camera_oneday_msgs/srv/detail/capture__struct.h"


// Include directives for member types
// Member `file_path`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void camera_oneday_msgs__srv__Capture_Response__rosidl_typesupport_introspection_c__Capture_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  camera_oneday_msgs__srv__Capture_Response__init(message_memory);
}

void camera_oneday_msgs__srv__Capture_Response__rosidl_typesupport_introspection_c__Capture_Response_fini_function(void * message_memory)
{
  camera_oneday_msgs__srv__Capture_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember camera_oneday_msgs__srv__Capture_Response__rosidl_typesupport_introspection_c__Capture_Response_message_member_array[1] = {
  {
    "file_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_oneday_msgs__srv__Capture_Response, file_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers camera_oneday_msgs__srv__Capture_Response__rosidl_typesupport_introspection_c__Capture_Response_message_members = {
  "camera_oneday_msgs__srv",  // message namespace
  "Capture_Response",  // message name
  1,  // number of fields
  sizeof(camera_oneday_msgs__srv__Capture_Response),
  camera_oneday_msgs__srv__Capture_Response__rosidl_typesupport_introspection_c__Capture_Response_message_member_array,  // message members
  camera_oneday_msgs__srv__Capture_Response__rosidl_typesupport_introspection_c__Capture_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  camera_oneday_msgs__srv__Capture_Response__rosidl_typesupport_introspection_c__Capture_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t camera_oneday_msgs__srv__Capture_Response__rosidl_typesupport_introspection_c__Capture_Response_message_type_support_handle = {
  0,
  &camera_oneday_msgs__srv__Capture_Response__rosidl_typesupport_introspection_c__Capture_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_camera_oneday_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_oneday_msgs, srv, Capture_Response)() {
  if (!camera_oneday_msgs__srv__Capture_Response__rosidl_typesupport_introspection_c__Capture_Response_message_type_support_handle.typesupport_identifier) {
    camera_oneday_msgs__srv__Capture_Response__rosidl_typesupport_introspection_c__Capture_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &camera_oneday_msgs__srv__Capture_Response__rosidl_typesupport_introspection_c__Capture_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "camera_oneday_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "camera_oneday_msgs/srv/detail/capture__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers camera_oneday_msgs__srv__detail__capture__rosidl_typesupport_introspection_c__Capture_service_members = {
  "camera_oneday_msgs__srv",  // service namespace
  "Capture",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // camera_oneday_msgs__srv__detail__capture__rosidl_typesupport_introspection_c__Capture_Request_message_type_support_handle,
  NULL  // response message
  // camera_oneday_msgs__srv__detail__capture__rosidl_typesupport_introspection_c__Capture_Response_message_type_support_handle
};

static rosidl_service_type_support_t camera_oneday_msgs__srv__detail__capture__rosidl_typesupport_introspection_c__Capture_service_type_support_handle = {
  0,
  &camera_oneday_msgs__srv__detail__capture__rosidl_typesupport_introspection_c__Capture_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_oneday_msgs, srv, Capture_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_oneday_msgs, srv, Capture_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_camera_oneday_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_oneday_msgs, srv, Capture)() {
  if (!camera_oneday_msgs__srv__detail__capture__rosidl_typesupport_introspection_c__Capture_service_type_support_handle.typesupport_identifier) {
    camera_oneday_msgs__srv__detail__capture__rosidl_typesupport_introspection_c__Capture_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)camera_oneday_msgs__srv__detail__capture__rosidl_typesupport_introspection_c__Capture_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_oneday_msgs, srv, Capture_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_oneday_msgs, srv, Capture_Response)()->data;
  }

  return &camera_oneday_msgs__srv__detail__capture__rosidl_typesupport_introspection_c__Capture_service_type_support_handle;
}
