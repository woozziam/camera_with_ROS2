// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from camera_oneday_msgs:srv/Record.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_ONEDAY_MSGS__SRV__DETAIL__RECORD__BUILDER_HPP_
#define CAMERA_ONEDAY_MSGS__SRV__DETAIL__RECORD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "camera_oneday_msgs/srv/detail/record__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace camera_oneday_msgs
{

namespace srv
{

namespace builder
{

class Init_Record_Request_topic_name
{
public:
  explicit Init_Record_Request_topic_name(::camera_oneday_msgs::srv::Record_Request & msg)
  : msg_(msg)
  {}
  ::camera_oneday_msgs::srv::Record_Request topic_name(::camera_oneday_msgs::srv::Record_Request::_topic_name_type arg)
  {
    msg_.topic_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::camera_oneday_msgs::srv::Record_Request msg_;
};

class Init_Record_Request_start
{
public:
  Init_Record_Request_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Record_Request_topic_name start(::camera_oneday_msgs::srv::Record_Request::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_Record_Request_topic_name(msg_);
  }

private:
  ::camera_oneday_msgs::srv::Record_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_oneday_msgs::srv::Record_Request>()
{
  return camera_oneday_msgs::srv::builder::Init_Record_Request_start();
}

}  // namespace camera_oneday_msgs


namespace camera_oneday_msgs
{

namespace srv
{

namespace builder
{

class Init_Record_Response_file_path
{
public:
  Init_Record_Response_file_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::camera_oneday_msgs::srv::Record_Response file_path(::camera_oneday_msgs::srv::Record_Response::_file_path_type arg)
  {
    msg_.file_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::camera_oneday_msgs::srv::Record_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_oneday_msgs::srv::Record_Response>()
{
  return camera_oneday_msgs::srv::builder::Init_Record_Response_file_path();
}

}  // namespace camera_oneday_msgs

#endif  // CAMERA_ONEDAY_MSGS__SRV__DETAIL__RECORD__BUILDER_HPP_
