cmake_minimum_required(VERSION 3.20)
project(demo_cpp_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)#直接查找到对应的头文件和库文件
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
add_executable(_cpp_node src/cpp_node.cpp)#正确添加文件路径

# 查找 ROS 2 的 C++ 客户端库，并打印找到的头文件与库文件位置。
message(STATUS ${rclcpp_INCLUDE_DIRS})
message(STATUS ${rclcpp_LIBRARIES})

# 告诉编译器去哪里找 rclcpp 头文件，并把程序与 rclcpp 库链接起来。
target_include_directories(cpp_node PUBLIC ${rclcpp_INCLUDE_DIRS})#头文件包含
target_link_libraries(cpp_node ${rclcpp_LIBRARIES})#库文件链接


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
