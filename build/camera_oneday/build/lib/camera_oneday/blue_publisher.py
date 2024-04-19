import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2

class BluePublisher(Node):
    def __init__(self):
        super().__init__('blue_publisher')
        self.subscription = self.create_subscription(
            Image,
            '/camera',
            self.image_callback,
            10
        )
        self.publisher = self.create_publisher(
            Image,
            '/blue',
            10
        )
        time_period = 0.01
        self.timer = self.create_timer(time_period,
                                       self.time_callback)

        self.cv_bridge = CvBridge()

        self.filtered_image = None

    def image_callback(self, msg):
        
        image = self.cv_bridge.imgmsg_to_cv2(msg, "bgr8")
        image = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)
        copied_image = image.copy()
        copied_image[:, :, 0] = 0
        copied_image[:, :, 1] = 0
        self.filtered_image = copied_image
        self.filtered_image = cv2.cvtColor(self.filtered_image, cv2.COLOR_RGB2BGR)
        
    def time_callback(self):
        if self.filtered_image is not None:
            
            img = self.cv_bridge.cv2_to_imgmsg(self.filtered_image, "bgr8")
            self.publisher.publish(img)

def main():
    rclpy.init()
    rgb_node = BluePublisher()
    rclpy.spin(rgb_node)
    rgb_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__' :
    main()