import rclpy
from rclpy.node import Node


class PythonNode(Node):

    def __init__(self):
        super().__init__('python_node')
        self.get_logger().info('Hello from Python ROS 2 node!')


def main(args=None):
    rclpy.init(args=args)

    node = PythonNode()
    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()