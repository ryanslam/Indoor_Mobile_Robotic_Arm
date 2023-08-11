// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from roboteq_interface:msg/DriverList.idl
// generated code does not contain a copyright notice

#ifndef ROBOTEQ_INTERFACE__MSG__DETAIL__DRIVER_LIST__STRUCT_HPP_
#define ROBOTEQ_INTERFACE__MSG__DETAIL__DRIVER_LIST__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__roboteq_interface__msg__DriverList __attribute__((deprecated))
#else
# define DEPRECATED__roboteq_interface__msg__DriverList __declspec(deprecated)
#endif

namespace roboteq_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DriverList_
{
  using Type = DriverList_<ContainerAllocator>;

  explicit DriverList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit DriverList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _motors_type =
    std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other>;
  _motors_type motors;

  // setters for named parameter idiom
  Type & set__motors(
    const std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other> & _arg)
  {
    this->motors = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    roboteq_interface::msg::DriverList_<ContainerAllocator> *;
  using ConstRawPtr =
    const roboteq_interface::msg::DriverList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roboteq_interface::msg::DriverList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roboteq_interface::msg::DriverList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roboteq_interface::msg::DriverList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roboteq_interface::msg::DriverList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roboteq_interface::msg::DriverList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roboteq_interface::msg::DriverList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roboteq_interface::msg::DriverList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roboteq_interface::msg::DriverList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roboteq_interface__msg__DriverList
    std::shared_ptr<roboteq_interface::msg::DriverList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roboteq_interface__msg__DriverList
    std::shared_ptr<roboteq_interface::msg::DriverList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DriverList_ & other) const
  {
    if (this->motors != other.motors) {
      return false;
    }
    return true;
  }
  bool operator!=(const DriverList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DriverList_

// alias to use template instance with default allocator
using DriverList =
  roboteq_interface::msg::DriverList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace roboteq_interface

#endif  // ROBOTEQ_INTERFACE__MSG__DETAIL__DRIVER_LIST__STRUCT_HPP_
