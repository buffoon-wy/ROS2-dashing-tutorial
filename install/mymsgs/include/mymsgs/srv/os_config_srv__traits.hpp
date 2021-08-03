// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mymsgs:srv/OSConfigSrv.idl
// generated code does not contain a copyright notice

#ifndef MYMSGS__SRV__OS_CONFIG_SRV__TRAITS_HPP_
#define MYMSGS__SRV__OS_CONFIG_SRV__TRAITS_HPP_

#include "mymsgs/srv/os_config_srv__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mymsgs::srv::OSConfigSrv_Request>()
{
  return "mymsgs::srv::OSConfigSrv_Request";
}

template<>
struct has_fixed_size<mymsgs::srv::OSConfigSrv_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mymsgs::srv::OSConfigSrv_Request>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mymsgs::srv::OSConfigSrv_Response>()
{
  return "mymsgs::srv::OSConfigSrv_Response";
}

template<>
struct has_fixed_size<mymsgs::srv::OSConfigSrv_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mymsgs::srv::OSConfigSrv_Response>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mymsgs::srv::OSConfigSrv>()
{
  return "mymsgs::srv::OSConfigSrv";
}

template<>
struct has_fixed_size<mymsgs::srv::OSConfigSrv>
  : std::integral_constant<
    bool,
    has_fixed_size<mymsgs::srv::OSConfigSrv_Request>::value &&
    has_fixed_size<mymsgs::srv::OSConfigSrv_Response>::value
  >
{
};

template<>
struct has_bounded_size<mymsgs::srv::OSConfigSrv>
  : std::integral_constant<
    bool,
    has_bounded_size<mymsgs::srv::OSConfigSrv_Request>::value &&
    has_bounded_size<mymsgs::srv::OSConfigSrv_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // MYMSGS__SRV__OS_CONFIG_SRV__TRAITS_HPP_
