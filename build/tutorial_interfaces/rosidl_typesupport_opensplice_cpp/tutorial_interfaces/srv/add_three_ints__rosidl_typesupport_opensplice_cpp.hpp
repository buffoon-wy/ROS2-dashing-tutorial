// generated from rosidl_typesupport_opensplice_cpp/resource/idl__rosidl_typesupport_cpp.hpp.em
// generated code does not contain a copyright notice
#ifndef TUTORIAL_INTERFACES__SRV__ADD_THREE_INTS__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define TUTORIAL_INTERFACES__SRV__ADD_THREE_INTS__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
// generated from
// rosidl_typesupport_opensplice_cpp/resource/srv__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#include "tutorial_interfaces/srv/add_three_ints__struct.hpp"
#include "tutorial_interfaces/srv/dds_opensplice/ccpp_AddThreeInts_.h"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "tutorial_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace tutorial_interfaces
{
namespace srv
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tutorial_interfaces
extern void register_type__AddThreeInts_Request(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tutorial_interfaces
extern void convert_ros_message_to_dds(
  const tutorial_interfaces::srv::AddThreeInts_Request & ros_message,
  tutorial_interfaces::srv::dds_::AddThreeInts_Request_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tutorial_interfaces
extern void publish__AddThreeInts_Request(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tutorial_interfaces
extern void convert_dds_message_to_ros(
  const tutorial_interfaces::srv::dds_::AddThreeInts_Request_ & dds_message,
  tutorial_interfaces::srv::AddThreeInts_Request & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tutorial_interfaces
extern bool take__AddThreeInts_Request(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tutorial_interfaces
const char *
serialize__AddThreeInts_Request(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tutorial_interfaces
const char *
deserialize__AddThreeInts_Request(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace srv
}  // namespace tutorial_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tutorial_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  tutorial_interfaces, srv,
  AddThreeInts_Request)();

#ifdef __cplusplus
}
#endif

// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

// already included above
// #include "tutorial_interfaces/srv/add_three_ints__struct.hpp"
// already included above
// #include "tutorial_interfaces/srv/dds_opensplice/ccpp_AddThreeInts_.h"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "tutorial_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace tutorial_interfaces
{
namespace srv
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tutorial_interfaces
extern void register_type__AddThreeInts_Response(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tutorial_interfaces
extern void convert_ros_message_to_dds(
  const tutorial_interfaces::srv::AddThreeInts_Response & ros_message,
  tutorial_interfaces::srv::dds_::AddThreeInts_Response_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tutorial_interfaces
extern void publish__AddThreeInts_Response(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tutorial_interfaces
extern void convert_dds_message_to_ros(
  const tutorial_interfaces::srv::dds_::AddThreeInts_Response_ & dds_message,
  tutorial_interfaces::srv::AddThreeInts_Response & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tutorial_interfaces
extern bool take__AddThreeInts_Response(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tutorial_interfaces
const char *
serialize__AddThreeInts_Response(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_tutorial_interfaces
const char *
deserialize__AddThreeInts_Response(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace srv
}  // namespace tutorial_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tutorial_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  tutorial_interfaces, srv,
  AddThreeInts_Response)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "tutorial_interfaces/srv/add_three_ints__struct.hpp"
// already included above
// #include "tutorial_interfaces/srv/dds_opensplice/ccpp_AddThreeInts_.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "tutorial_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tutorial_interfaces
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  tutorial_interfaces, srv,
  AddThreeInts)();

#ifdef __cplusplus
}
#endif
#endif  // TUTORIAL_INTERFACES__SRV__ADD_THREE_INTS__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
