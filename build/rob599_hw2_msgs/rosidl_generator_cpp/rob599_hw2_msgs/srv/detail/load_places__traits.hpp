// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rob599_hw2_msgs:srv/LoadPlaces.idl
// generated code does not contain a copyright notice

#ifndef ROB599_HW2_MSGS__SRV__DETAIL__LOAD_PLACES__TRAITS_HPP_
#define ROB599_HW2_MSGS__SRV__DETAIL__LOAD_PLACES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rob599_hw2_msgs/srv/detail/load_places__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rob599_hw2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const LoadPlaces_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: load
  {
    out << "load: ";
    rosidl_generator_traits::value_to_yaml(msg.load, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoadPlaces_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: load
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "load: ";
    rosidl_generator_traits::value_to_yaml(msg.load, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoadPlaces_Request & msg, bool use_flow_style = false)
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

}  // namespace rob599_hw2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rob599_hw2_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rob599_hw2_msgs::srv::LoadPlaces_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rob599_hw2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rob599_hw2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rob599_hw2_msgs::srv::LoadPlaces_Request & msg)
{
  return rob599_hw2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rob599_hw2_msgs::srv::LoadPlaces_Request>()
{
  return "rob599_hw2_msgs::srv::LoadPlaces_Request";
}

template<>
inline const char * name<rob599_hw2_msgs::srv::LoadPlaces_Request>()
{
  return "rob599_hw2_msgs/srv/LoadPlaces_Request";
}

template<>
struct has_fixed_size<rob599_hw2_msgs::srv::LoadPlaces_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rob599_hw2_msgs::srv::LoadPlaces_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rob599_hw2_msgs::srv::LoadPlaces_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rob599_hw2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const LoadPlaces_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoadPlaces_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoadPlaces_Response & msg, bool use_flow_style = false)
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

}  // namespace rob599_hw2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rob599_hw2_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rob599_hw2_msgs::srv::LoadPlaces_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rob599_hw2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rob599_hw2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rob599_hw2_msgs::srv::LoadPlaces_Response & msg)
{
  return rob599_hw2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rob599_hw2_msgs::srv::LoadPlaces_Response>()
{
  return "rob599_hw2_msgs::srv::LoadPlaces_Response";
}

template<>
inline const char * name<rob599_hw2_msgs::srv::LoadPlaces_Response>()
{
  return "rob599_hw2_msgs/srv/LoadPlaces_Response";
}

template<>
struct has_fixed_size<rob599_hw2_msgs::srv::LoadPlaces_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rob599_hw2_msgs::srv::LoadPlaces_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rob599_hw2_msgs::srv::LoadPlaces_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rob599_hw2_msgs::srv::LoadPlaces>()
{
  return "rob599_hw2_msgs::srv::LoadPlaces";
}

template<>
inline const char * name<rob599_hw2_msgs::srv::LoadPlaces>()
{
  return "rob599_hw2_msgs/srv/LoadPlaces";
}

template<>
struct has_fixed_size<rob599_hw2_msgs::srv::LoadPlaces>
  : std::integral_constant<
    bool,
    has_fixed_size<rob599_hw2_msgs::srv::LoadPlaces_Request>::value &&
    has_fixed_size<rob599_hw2_msgs::srv::LoadPlaces_Response>::value
  >
{
};

template<>
struct has_bounded_size<rob599_hw2_msgs::srv::LoadPlaces>
  : std::integral_constant<
    bool,
    has_bounded_size<rob599_hw2_msgs::srv::LoadPlaces_Request>::value &&
    has_bounded_size<rob599_hw2_msgs::srv::LoadPlaces_Response>::value
  >
{
};

template<>
struct is_service<rob599_hw2_msgs::srv::LoadPlaces>
  : std::true_type
{
};

template<>
struct is_service_request<rob599_hw2_msgs::srv::LoadPlaces_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rob599_hw2_msgs::srv::LoadPlaces_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROB599_HW2_MSGS__SRV__DETAIL__LOAD_PLACES__TRAITS_HPP_
