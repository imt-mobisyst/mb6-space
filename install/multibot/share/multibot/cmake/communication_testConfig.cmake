# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_multibot_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED multibot_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(multibot_FOUND FALSE)
  elseif(NOT multibot_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(multibot_FOUND FALSE)
  endif()
  return()
endif()
set(_multibot_CONFIG_INCLUDED TRUE)

# output package information
if(NOT multibot_FIND_QUIETLY)
  message(STATUS "Found multibot: 0.0.0 (${multibot_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'multibot' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT multibot_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(multibot_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${multibot_DIR}/${_extra}")
endforeach()
