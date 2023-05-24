// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roboteq_interface:msg/DriverList.idl
// generated code does not contain a copyright notice

#ifndef ROBOTEQ_INTERFACE__MSG__DETAIL__DRIVER_LIST__BUILDER_HPP_
#define ROBOTEQ_INTERFACE__MSG__DETAIL__DRIVER_LIST__BUILDER_HPP_

#include "roboteq_interface/msg/detail/driver_list__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace roboteq_interface
{

namespace msg
{

namespace builder
{

class Init_DriverList_motors
{
public:
  Init_DriverList_motors()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::roboteq_interface::msg::DriverList motors(::roboteq_interface::msg::DriverList::_motors_type arg)
  {
    msg_.motors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roboteq_interface::msg::DriverList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::roboteq_interface::msg::DriverList>()
{
  return roboteq_interface::msg::builder::Init_DriverList_motors();
}

}  // namespace roboteq_interface

#endif  // ROBOTEQ_INTERFACE__MSG__DETAIL__DRIVER_LIST__BUILDER_HPP_
