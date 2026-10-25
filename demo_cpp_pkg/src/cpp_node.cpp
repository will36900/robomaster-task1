#include <iostream>
#include "rclcpp/rclcpp.hpp"
using namespace std;
int main(int argc, char **argv)
{

    rclcpp::init(argc, argv);
    auto node = make_shared<rclcpp::Node>("my_node");//
    RCLCPP_INFO(node->get_logger(), "Hello ROS2 C++ Node!");
    rclcpp::spin(node);
    return 0;
}
