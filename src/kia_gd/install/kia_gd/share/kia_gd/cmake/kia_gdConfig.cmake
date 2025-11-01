# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_kia_gd_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED kia_gd_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(kia_gd_FOUND FALSE)
  elseif(NOT kia_gd_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(kia_gd_FOUND FALSE)
  endif()
  return()
endif()
set(_kia_gd_CONFIG_INCLUDED TRUE)

# output package information
if(NOT kia_gd_FIND_QUIETLY)
  message(STATUS "Found kia_gd: 0.0.0 (${kia_gd_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'kia_gd' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${kia_gd_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(kia_gd_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${kia_gd_DIR}/${_extra}")
endforeach()
