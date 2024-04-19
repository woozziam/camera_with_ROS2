// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from camera_oneday_msgs:srv/Record.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_ONEDAY_MSGS__SRV__DETAIL__RECORD__STRUCT_HPP_
#define CAMERA_ONEDAY_MSGS__SRV__DETAIL__RECORD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__camera_oneday_msgs__srv__Record_Request __attribute__((deprecated))
#else
# define DEPRECATED__camera_oneday_msgs__srv__Record_Request __declspec(deprecated)
#endif

namespace camera_oneday_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Record_Request_
{
  using Type = Record_Request_<ContainerAllocator>;

  explicit Record_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start = false;
      this->topic_name = "";
    }
  }

  explicit Record_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : topic_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start = false;
      this->topic_name = "";
    }
  }

  // field types and members
  using _start_type =
    bool;
  _start_type start;
  using _topic_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _topic_name_type topic_name;

  // setters for named parameter idiom
  Type & set__start(
    const bool & _arg)
  {
    this->start = _arg;
    return *this;
  }
  Type & set__topic_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->topic_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    camera_oneday_msgs::srv::Record_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const camera_oneday_msgs::srv::Record_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<camera_oneday_msgs::srv::Record_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<camera_oneday_msgs::srv::Record_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      camera_oneday_msgs::srv::Record_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<camera_oneday_msgs::srv::Record_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      camera_oneday_msgs::srv::Record_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<camera_oneday_msgs::srv::Record_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<camera_oneday_msgs::srv::Record_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<camera_oneday_msgs::srv::Record_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__camera_oneday_msgs__srv__Record_Request
    std::shared_ptr<camera_oneday_msgs::srv::Record_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__camera_oneday_msgs__srv__Record_Request
    std::shared_ptr<camera_oneday_msgs::srv::Record_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Record_Request_ & other) const
  {
    if (this->start != other.start) {
      return false;
    }
    if (this->topic_name != other.topic_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const Record_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Record_Request_

// alias to use template instance with default allocator
using Record_Request =
  camera_oneday_msgs::srv::Record_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace camera_oneday_msgs


#ifndef _WIN32
# define DEPRECATED__camera_oneday_msgs__srv__Record_Response __attribute__((deprecated))
#else
# define DEPRECATED__camera_oneday_msgs__srv__Record_Response __declspec(deprecated)
#endif

namespace camera_oneday_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Record_Response_
{
  using Type = Record_Response_<ContainerAllocator>;

  explicit Record_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->file_path = "";
    }
  }

  explicit Record_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : file_path(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->file_path = "";
    }
  }

  // field types and members
  using _file_path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _file_path_type file_path;

  // setters for named parameter idiom
  Type & set__file_path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->file_path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    camera_oneday_msgs::srv::Record_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const camera_oneday_msgs::srv::Record_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<camera_oneday_msgs::srv::Record_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<camera_oneday_msgs::srv::Record_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      camera_oneday_msgs::srv::Record_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<camera_oneday_msgs::srv::Record_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      camera_oneday_msgs::srv::Record_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<camera_oneday_msgs::srv::Record_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<camera_oneday_msgs::srv::Record_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<camera_oneday_msgs::srv::Record_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__camera_oneday_msgs__srv__Record_Response
    std::shared_ptr<camera_oneday_msgs::srv::Record_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__camera_oneday_msgs__srv__Record_Response
    std::shared_ptr<camera_oneday_msgs::srv::Record_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Record_Response_ & other) const
  {
    if (this->file_path != other.file_path) {
      return false;
    }
    return true;
  }
  bool operator!=(const Record_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Record_Response_

// alias to use template instance with default allocator
using Record_Response =
  camera_oneday_msgs::srv::Record_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace camera_oneday_msgs

namespace camera_oneday_msgs
{

namespace srv
{

struct Record
{
  using Request = camera_oneday_msgs::srv::Record_Request;
  using Response = camera_oneday_msgs::srv::Record_Response;
};

}  // namespace srv

}  // namespace camera_oneday_msgs

#endif  // CAMERA_ONEDAY_MSGS__SRV__DETAIL__RECORD__STRUCT_HPP_
