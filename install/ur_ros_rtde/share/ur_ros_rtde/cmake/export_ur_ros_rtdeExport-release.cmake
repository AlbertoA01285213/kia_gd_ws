#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ur_ros_rtde::base_commands_lib" for configuration "Release"
set_property(TARGET ur_ros_rtde::base_commands_lib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(ur_ros_rtde::base_commands_lib PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libbase_commands_lib.so"
  IMPORTED_SONAME_RELEASE "libbase_commands_lib.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS ur_ros_rtde::base_commands_lib )
list(APPEND _IMPORT_CHECK_FILES_FOR_ur_ros_rtde::base_commands_lib "${_IMPORT_PREFIX}/lib/libbase_commands_lib.so" )

# Import target "ur_ros_rtde::base_dashboard_commands_lib" for configuration "Release"
set_property(TARGET ur_ros_rtde::base_dashboard_commands_lib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(ur_ros_rtde::base_dashboard_commands_lib PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libbase_dashboard_commands_lib.so"
  IMPORTED_SONAME_RELEASE "libbase_dashboard_commands_lib.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS ur_ros_rtde::base_dashboard_commands_lib )
list(APPEND _IMPORT_CHECK_FILES_FOR_ur_ros_rtde::base_dashboard_commands_lib "${_IMPORT_PREFIX}/lib/libbase_dashboard_commands_lib.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
