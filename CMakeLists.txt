cmake_minimum_required(VERSION 3.20)
project(chp2_ros_examples LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(rclcpp REQUIRED)

# Each root-level .cpp is a standalone example with its own main().
file(GLOB example_sources CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
foreach(source IN LISTS example_sources)
    get_filename_component(example_name "${source}" NAME_WE)
    add_executable("${example_name}" "${source}")
    target_link_libraries("${example_name}" PRIVATE rclcpp::rclcpp)
endforeach()
