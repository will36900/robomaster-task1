#include "rclcpp/rclcpp.hpp"

#include <memory>
#include <string>

class PersonNode : public rclcpp::Node
{
public:
  PersonNode(const std::string & node_name, const std::string & name, int age)
  : Node(node_name), name_(name), age_(age)
  {
  }

  void eat(const std::string & food_name)
  {
    RCLCPP_INFO(
      get_logger(), "%s is eating %s (age: %d)",
      name_.c_str(), food_name.c_str(), age_);
  }

private:
  std::string name_;
  int age_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<PersonNode>("person_node", "John", 30);
  node->eat("apple");
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
