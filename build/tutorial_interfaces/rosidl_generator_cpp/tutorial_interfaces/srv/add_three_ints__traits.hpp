// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tutorial_interfaces:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__ADD_THREE_INTS__TRAITS_HPP_
#define TUTORIAL_INTERFACES__SRV__ADD_THREE_INTS__TRAITS_HPP_

#include "tutorial_interfaces/srv/add_three_ints__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::srv::AddThreeInts_Request>()
{
  return "tutorial_interfaces::srv::AddThreeInts_Request";
}

template<>
struct has_fixed_size<tutorial_interfaces::srv::AddThreeInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tutorial_interfaces::srv::AddThreeInts_Request>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::srv::AddThreeInts_Response>()
{
  return "tutorial_interfaces::srv::AddThreeInts_Response";
}

template<>
struct has_fixed_size<tutorial_interfaces::srv::AddThreeInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tutorial_interfaces::srv::AddThreeInts_Response>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::srv::AddThreeInts>()
{
  return "tutorial_interfaces::srv::AddThreeInts";
}

template<>
struct has_fixed_size<tutorial_interfaces::srv::AddThreeInts>
  : std::integral_constant<
    bool,
    has_fixed_size<tutorial_interfaces::srv::AddThreeInts_Request>::value &&
    has_fixed_size<tutorial_interfaces::srv::AddThreeInts_Response>::value
  >
{
};

template<>
struct has_bounded_size<tutorial_interfaces::srv::AddThreeInts>
  : std::integral_constant<
    bool,
    has_bounded_size<tutorial_interfaces::srv::AddThreeInts_Request>::value &&
    has_bounded_size<tutorial_interfaces::srv::AddThreeInts_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // TUTORIAL_INTERFACES__SRV__ADD_THREE_INTS__TRAITS_HPP_
