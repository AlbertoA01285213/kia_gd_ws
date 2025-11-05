#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ur_ros_rtde_tutorials::tutorial_plugins_lib" for configuration ""
set_property(TARGET ur_ros_rtde_tutorials::tutorial_plugins_lib APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(ur_ros_rtde_tutorials::tutorial_plugins_lib PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtutorial_plugins_lib.so"
  IMPORTED_SONAME_NOCONFIG "libtutorial_plugins_lib.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS ur_ros_rtde_tutorials::tutorial_plugins_lib )
list(APPEND _IMPORT_CHECK_FILES_FOR_ur_ros_rtde_tutorials::tutorial_plugins_lib "${_IMPORT_PREFIX}/lib/libtutorial_plugins_lib.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
