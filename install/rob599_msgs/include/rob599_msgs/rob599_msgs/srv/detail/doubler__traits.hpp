// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rob599_msgs:srv/Doubler.idl
// generated code does not contain a copyright notice

#ifndef ROB599_MSGS__SRV__DETAIL__DOUBLER__TRAITS_HPP_
#define ROB599_MSGS__SRV__DETAIL__DOUBLER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rob599_msgs/srv/detail/doubler__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rob599_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Doubler_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: number
  {
    out << "number: ";
    rosidl_generator_traits::value_to_yaml(msg.number, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Doubler_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number: ";
    rosidl_generator_traits::value_to_yaml(msg.number, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Doubler_Request & msg, bool use_flow_style = false)
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

}  // namespace rob599_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rob599_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rob599_msgs::srv::Doubler_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rob599_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rob599_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rob599_msgs::srv::Doubler_Request & msg)
{
  return rob599_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rob599_msgs::srv::Doubler_Request>()
{
  return "rob599_msgs::srv::Doubler_Request";
}

template<>
inline const char * name<rob599_msgs::srv::Doubler_Request>()
{
  return "rob599_msgs/srv/Doubler_Request";
}

template<>
struct has_fixed_size<rob599_msgs::srv::Doubler_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rob599_msgs::srv::Doubler_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rob599_msgs::srv::Doubler_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rob599_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Doubler_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: doubled
  {
    out << "doubled: ";
    rosidl_generator_traits::value_to_yaml(msg.doubled, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Doubler_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: doubled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "doubled: ";
    rosidl_generator_traits::value_to_yaml(msg.doubled, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Doubler_Response & msg, bool use_flow_style = false)
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

}  // namespace rob599_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rob599_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rob599_msgs::srv::Doubler_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rob599_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rob599_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rob599_msgs::srv::Doubler_Response & msg)
{
  return rob599_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rob599_msgs::srv::Doubler_Response>()
{
  return "rob599_msgs::srv::Doubler_Response";
}

template<>
inline const char * name<rob599_msgs::srv::Doubler_Response>()
{
  return "rob599_msgs/srv/Doubler_Response";
}

template<>
struct has_fixed_size<rob599_msgs::srv::Doubler_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rob599_msgs::srv::Doubler_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rob599_msgs::srv::Doubler_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rob599_msgs::srv::Doubler>()
{
  return "rob599_msgs::srv::Doubler";
}

template<>
inline const char * name<rob599_msgs::srv::Doubler>()
{
  return "rob599_msgs/srv/Doubler";
}

template<>
struct has_fixed_size<rob599_msgs::srv::Doubler>
  : std::integral_constant<
    bool,
    has_fixed_size<rob599_msgs::srv::Doubler_Request>::value &&
    has_fixed_size<rob599_msgs::srv::Doubler_Response>::value
  >
{
};

template<>
struct has_bounded_size<rob599_msgs::srv::Doubler>
  : std::integral_constant<
    bool,
    has_bounded_size<rob599_msgs::srv::Doubler_Request>::value &&
    has_bounded_size<rob599_msgs::srv::Doubler_Response>::value
  >
{
};

template<>
struct is_service<rob599_msgs::srv::Doubler>
  : std::true_type
{
};

template<>
struct is_service_request<rob599_msgs::srv::Doubler_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rob599_msgs::srv::Doubler_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROB599_MSGS__SRV__DETAIL__DOUBLER__TRAITS_HPP_
