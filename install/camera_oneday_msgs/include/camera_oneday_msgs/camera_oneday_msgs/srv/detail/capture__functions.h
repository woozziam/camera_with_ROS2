// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from camera_oneday_msgs:srv/Capture.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_ONEDAY_MSGS__SRV__DETAIL__CAPTURE__FUNCTIONS_H_
#define CAMERA_ONEDAY_MSGS__SRV__DETAIL__CAPTURE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "camera_oneday_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "camera_oneday_msgs/srv/detail/capture__struct.h"

/// Initialize srv/Capture message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * camera_oneday_msgs__srv__Capture_Request
 * )) before or use
 * camera_oneday_msgs__srv__Capture_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_oneday_msgs
bool
camera_oneday_msgs__srv__Capture_Request__init(camera_oneday_msgs__srv__Capture_Request * msg);

/// Finalize srv/Capture message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_oneday_msgs
void
camera_oneday_msgs__srv__Capture_Request__fini(camera_oneday_msgs__srv__Capture_Request * msg);

/// Create srv/Capture message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * camera_oneday_msgs__srv__Capture_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_oneday_msgs
camera_oneday_msgs__srv__Capture_Request *
camera_oneday_msgs__srv__Capture_Request__create();

/// Destroy srv/Capture message.
/**
 * It calls
 * camera_oneday_msgs__srv__Capture_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_oneday_msgs
void
camera_oneday_msgs__srv__Capture_Request__destroy(camera_oneday_msgs__srv__Capture_Request * msg);

/// Check for srv/Capture message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_oneday_msgs
bool
camera_oneday_msgs__srv__Capture_Request__are_equal(const camera_oneday_msgs__srv__Capture_Request * lhs, const camera_oneday_msgs__srv__Capture_Request * rhs);

/// Copy a srv/Capture message.
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
ROSIDL_GENERATOR_C_PUBLIC_camera_oneday_msgs
bool
camera_oneday_msgs__srv__Capture_Request__copy(
  const camera_oneday_msgs__srv__Capture_Request * input,
  camera_oneday_msgs__srv__Capture_Request * output);

/// Initialize array of srv/Capture messages.
/**
 * It allocates the memory for the number of elements and calls
 * camera_oneday_msgs__srv__Capture_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_oneday_msgs
bool
camera_oneday_msgs__srv__Capture_Request__Sequence__init(camera_oneday_msgs__srv__Capture_Request__Sequence * array, size_t size);

/// Finalize array of srv/Capture messages.
/**
 * It calls
 * camera_oneday_msgs__srv__Capture_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_oneday_msgs
void
camera_oneday_msgs__srv__Capture_Request__Sequence__fini(camera_oneday_msgs__srv__Capture_Request__Sequence * array);

/// Create array of srv/Capture messages.
/**
 * It allocates the memory for the array and calls
 * camera_oneday_msgs__srv__Capture_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_oneday_msgs
camera_oneday_msgs__srv__Capture_Request__Sequence *
camera_oneday_msgs__srv__Capture_Request__Sequence__create(size_t size);

/// Destroy array of srv/Capture messages.
/**
 * It calls
 * camera_oneday_msgs__srv__Capture_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_oneday_msgs
void
camera_oneday_msgs__srv__Capture_Request__Sequence__destroy(camera_oneday_msgs__srv__Capture_Request__Sequence * array);

/// Check for srv/Capture message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_oneday_msgs
bool
camera_oneday_msgs__srv__Capture_Request__Sequence__are_equal(const camera_oneday_msgs__srv__Capture_Request__Sequence * lhs, const camera_oneday_msgs__srv__Capture_Request__Sequence * rhs);

/// Copy an array of srv/Capture messages.
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
ROSIDL_GENERATOR_C_PUBLIC_camera_oneday_msgs
bool
camera_oneday_msgs__srv__Capture_Request__Sequence__copy(
  const camera_oneday_msgs__srv__Capture_Request__Sequence * input,
  camera_oneday_msgs__srv__Capture_Request__Sequence * output);

/// Initialize srv/Capture message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * camera_oneday_msgs__srv__Capture_Response
 * )) before or use
 * camera_oneday_msgs__srv__Capture_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_oneday_msgs
bool
camera_oneday_msgs__srv__Capture_Response__init(camera_oneday_msgs__srv__Capture_Response * msg);

/// Finalize srv/Capture message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_oneday_msgs
void
camera_oneday_msgs__srv__Capture_Response__fini(camera_oneday_msgs__srv__Capture_Response * msg);

/// Create srv/Capture message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * camera_oneday_msgs__srv__Capture_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_oneday_msgs
camera_oneday_msgs__srv__Capture_Response *
camera_oneday_msgs__srv__Capture_Response__create();

/// Destroy srv/Capture message.
/**
 * It calls
 * camera_oneday_msgs__srv__Capture_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_oneday_msgs
void
camera_oneday_msgs__srv__Capture_Response__destroy(camera_oneday_msgs__srv__Capture_Response * msg);

/// Check for srv/Capture message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_oneday_msgs
bool
camera_oneday_msgs__srv__Capture_Response__are_equal(const camera_oneday_msgs__srv__Capture_Response * lhs, const camera_oneday_msgs__srv__Capture_Response * rhs);

/// Copy a srv/Capture message.
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
ROSIDL_GENERATOR_C_PUBLIC_camera_oneday_msgs
bool
camera_oneday_msgs__srv__Capture_Response__copy(
  const camera_oneday_msgs__srv__Capture_Response * input,
  camera_oneday_msgs__srv__Capture_Response * output);

/// Initialize array of srv/Capture messages.
/**
 * It allocates the memory for the number of elements and calls
 * camera_oneday_msgs__srv__Capture_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_oneday_msgs
bool
camera_oneday_msgs__srv__Capture_Response__Sequence__init(camera_oneday_msgs__srv__Capture_Response__Sequence * array, size_t size);

/// Finalize array of srv/Capture messages.
/**
 * It calls
 * camera_oneday_msgs__srv__Capture_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_oneday_msgs
void
camera_oneday_msgs__srv__Capture_Response__Sequence__fini(camera_oneday_msgs__srv__Capture_Response__Sequence * array);

/// Create array of srv/Capture messages.
/**
 * It allocates the memory for the array and calls
 * camera_oneday_msgs__srv__Capture_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_oneday_msgs
camera_oneday_msgs__srv__Capture_Response__Sequence *
camera_oneday_msgs__srv__Capture_Response__Sequence__create(size_t size);

/// Destroy array of srv/Capture messages.
/**
 * It calls
 * camera_oneday_msgs__srv__Capture_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_oneday_msgs
void
camera_oneday_msgs__srv__Capture_Response__Sequence__destroy(camera_oneday_msgs__srv__Capture_Response__Sequence * array);

/// Check for srv/Capture message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_oneday_msgs
bool
camera_oneday_msgs__srv__Capture_Response__Sequence__are_equal(const camera_oneday_msgs__srv__Capture_Response__Sequence * lhs, const camera_oneday_msgs__srv__Capture_Response__Sequence * rhs);

/// Copy an array of srv/Capture messages.
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
ROSIDL_GENERATOR_C_PUBLIC_camera_oneday_msgs
bool
camera_oneday_msgs__srv__Capture_Response__Sequence__copy(
  const camera_oneday_msgs__srv__Capture_Response__Sequence * input,
  camera_oneday_msgs__srv__Capture_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CAMERA_ONEDAY_MSGS__SRV__DETAIL__CAPTURE__FUNCTIONS_H_
