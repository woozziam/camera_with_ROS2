import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2

class CannyPublisher(Node):
    def __init__(self):
        super().__init__('canny_publisher')
        self.subscription = self.create_subscription(
            Image,
            '/camera',
            self.image_callback,
            10
        )

        self.publisher = self.create_publisher(
            Image,
            '/canny',
            10
        )
        time_period = 0.01
        self.timer = self.create_timer(time_period,
                                       self.time_callback)

        self.cv_bridge = CvBridge()

        self.processed_image = None

    def image_callback(self, msg):

        image = self.cv_bridge.imgmsg_to_cv2(msg, "bgr8")
        gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
        canny = cv2.Canny(gray, 100, 200)
        self.processed_image = canny

    def time_callback(self):
        if self.processed_image is not None:
            img = self.cv_bridge.cv2_to_imgmsg(self.processed_image, "mono8")
            self.publisher.publish(img)

def main():
    rclpy.init()
    canny_node = CannyPublisher()
    rclpy.spin(canny_node)
    canny_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__' :
    main()