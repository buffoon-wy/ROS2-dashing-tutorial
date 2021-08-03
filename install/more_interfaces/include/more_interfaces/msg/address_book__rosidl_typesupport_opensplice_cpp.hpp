// generated from rosidl_typesupport_opensplice_cpp/resource/idl__rosidl_typesupport_cpp.hpp.em
// generated code does not contain a copyright notice
#ifndef MORE_INTERFACES__MSG__ADDRESS_BOOK__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define MORE_INTERFACES__MSG__ADDRESS_BOOK__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#include "more_interfaces/msg/address_book__struct.hpp"
#include "more_interfaces/msg/dds_opensplice/ccpp_AddressBook_.h"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "more_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace more_interfaces
{
namespace msg
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_more_interfaces
extern void register_type__AddressBook(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_more_interfaces
extern void convert_ros_message_to_dds(
  const more_interfaces::msg::AddressBook & ros_message,
  more_interfaces::msg::dds_::AddressBook_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_more_interfaces
extern void publish__AddressBook(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_more_interfaces
extern void convert_dds_message_to_ros(
  const more_interfaces::msg::dds_::AddressBook_ & dds_message,
  more_interfaces::msg::AddressBook & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_more_interfaces
extern bool take__AddressBook(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_more_interfaces
const char *
serialize__AddressBook(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_more_interfaces
const char *
deserialize__AddressBook(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace msg
}  // namespace more_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_more_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  more_interfaces, msg,
  AddressBook)();

#ifdef __cplusplus
}
#endif
#endif  // MORE_INTERFACES__MSG__ADDRESS_BOOK__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
