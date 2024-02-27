# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_stiffness_test_rig_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED stiffness_test_rig_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(stiffness_test_rig_FOUND FALSE)
  elseif(NOT stiffness_test_rig_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(stiffness_test_rig_FOUND FALSE)
  endif()
  return()
endif()
set(_stiffness_test_rig_CONFIG_INCLUDED TRUE)

# output package information
if(NOT stiffness_test_rig_FIND_QUIETLY)
  message(STATUS "Found stiffness_test_rig: 0.0.0 (${stiffness_test_rig_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'stiffness_test_rig' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${stiffness_test_rig_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(stiffness_test_rig_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${stiffness_test_rig_DIR}/${_extra}")
endforeach()
