# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_elite_cs_series_sdk_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED elite_cs_series_sdk_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(elite_cs_series_sdk_FOUND FALSE)
  elseif(NOT elite_cs_series_sdk_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(elite_cs_series_sdk_FOUND FALSE)
  endif()
  return()
endif()
set(_elite_cs_series_sdk_CONFIG_INCLUDED TRUE)

# output package information
if(NOT elite_cs_series_sdk_FIND_QUIETLY)
  message(STATUS "Found elite_cs_series_sdk: 1.3.0 (${elite_cs_series_sdk_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'elite_cs_series_sdk' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${elite_cs_series_sdk_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(elite_cs_series_sdk_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${elite_cs_series_sdk_DIR}/${_extra}")
endforeach()
