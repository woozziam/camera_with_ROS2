// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from camera_oneday_msgs:srv/Record.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_ONEDAY_MSGS__SRV__DETAIL__RECORD__TRAITS_HPP_
#define CAMERA_ONEDAY_MSGS__SRV__DETAIL__RECORD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "camera_oneday_msgs/srv/detail/record__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace camera_oneday_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Record_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: start
  {
    out << "start: ";
    rosidl_generator_traits::value_to_yaml(msg.start, out);
    out << ", ";
  }

  // member: topic_name
  {
    out << "topic_name: ";
    rosidl_generator_traits::value_to_yaml(msg.topic_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Record_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start: ";
    rosidl_generator_traits::value_to_yaml(msg.start, out);
    out << "\n";
  }

  // member: topic_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "topic_name: ";
    rosidl_generator_traits::value_to_yaml(msg.topic_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Record_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace camera_oneday_msgs

namespace rosidl_generator_traits
{

[[deprecated("use camera_oneday_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const camera_oneday_msgs::srv::Record_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  camera_oneday_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use camera_oneday_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const camera_oneday_msgs::srv::Record_Request & msg)
{
  return camera_oneday_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<camera_oneday_msgs::srv::Record_Request>()
{
  return "camera_oneday_msgs::srv::Record_Request";
}

template<>
inline const char * name<camera_oneday_msgs::srv::Record_Request>()
{
  return "camera_oneday_msgs/srv/Record_Request";
}

template<>
struct has_fixed_size<camera_oneday_msgs::srv::Record_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<camera_oneday_msgs::srv::Record_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<camera_oneday_msgs::srv::Record_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace camera_oneday_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Record_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: file_path
  {
    out << "file_path: ";
    rosidl_generator_traits::value_to_yaml(msg.file_path, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Record_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: file_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "file_path: ";
    rosidl_generator_traits::value_to_yaml(msg.file_path, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Record_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace camera_oneday_msgs

namespace rosidl_generator_traits
{

[[deprecated("use camera_oneday_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const camera_oneday_msgs::srv::Record_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  camera_oneday_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use camera_oneday_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const camera_oneday_msgs::srv::Record_Response & msg)
{
  return camera_oneday_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<camera_oneday_msgs::srv::Record_Response>()
{
  return "camera_oneday_msgs::srv::Record_Response";
}

template<>
inline const char * name<camera_oneday_msgs::srv::Record_Response>()
{
  return "camera_oneday_msgs/srv/Record_Response";
}

template<>
struct has_fixed_size<camera_oneday_msgs::srv::Record_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<camera_oneday_msgs::srv::Record_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<camera_oneday_msgs::srv::Record_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<camera_oneday_msgs::srv::Record>()
{
  return "camera_oneday_msgs::srv::Record";
}

template<>
inline const char * name<camera_oneday_msgs::srv::Record>()
{
  return "camera_oneday_msgs/srv/Record";
}

template<>
struct has_fixed_size<camera_oneday_msgs::srv::Record>
  : std::integral_constant<
    bool,
    has_fixed_size<camera_oneday_msgs::srv::Record_Request>::value &&
    has_fixed_size<camera_oneday_msgs::srv::Record_Response>::value
  >
{
};

template<>
struct has_bounded_size<camera_oneday_msgs::srv::Record>
  : std::integral_constant<
    bool,
    has_bounded_size<camera_oneday_msgs::srv::Record_Request>::value &&
    has_bounded_size<camera_oneday_msgs::srv::Record_Response>::value
  >
{
};

template<>
struct is_service<camera_oneday_msgs::srv::Record>
  : std::true_type
{
};

template<>
struct is_service_request<camera_oneday_msgs::srv::Record_Request>
  : std::true_type
{
};

template<>
struct is_service_response<camera_oneday_msgs::srv::Record_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CAMERA_ONEDAY_MSGS__SRV__DETAIL__RECORD__TRAITS_HPP_
