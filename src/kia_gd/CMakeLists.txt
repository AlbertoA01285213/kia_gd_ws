cmake_minimum_required(VERSION 3.8)
project(kia_gd)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(visualization_msgs REQUIRED)

install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}
)

install(DIRECTORY
  urdf
  DESTINATION share/${PROJECT_NAME}
)

install(DIRECTORY
  meshes
  DESTINATION share/${PROJECT_NAME}
)

install(DIRECTORY
  data
  DESTINATION share/${PROJECT_NAME}
)

install(DIRECTORY
  rviz
  DESTINATION share/${PROJECT_NAME}
)

install(PROGRAMS scripts/controlador_ur5.py
  DESTINATION lib/${PROJECT_NAME}
  RENAME controlador_ur5
)

install(PROGRAMS scripts/controlador_kia.py
  DESTINATION lib/${PROJECT_NAME}
  RENAME controlador_kia
)

install(PROGRAMS scripts/recibidor_kia.py
  DESTINATION lib/${PROJECT_NAME}
  RENAME recibidor_kia
)

install(PROGRAMS scripts/mtconnect_bridge.py
  DESTINATION lib/${PROJECT_NAME}
  RENAME mtconnect_bridge
)

install(PROGRAMS scripts/dashboard.py
  DESTINATION lib/${PROJECT_NAME}
  RENAME dashboard
)

install(PROGRAMS scripts/ur_path_maker.py
  DESTINATION lib/${PROJECT_NAME}
  RENAME ur_path_maker
)

install(PROGRAMS scripts/urconnect.py
  DESTINATION lib/${PROJECT_NAME}
  RENAME urconnect
)

install(PROGRAMS scripts/gemelo_ur_relay.py
  DESTINATION lib/${PROJECT_NAME}
  RENAME gemelo_ur_relay
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
