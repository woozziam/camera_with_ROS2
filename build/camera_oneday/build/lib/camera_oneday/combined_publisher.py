import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2

class CombinedPublisher(Node):
    def __init__(self):
        super().__init__('combined_publisher')
        self.subscription = self.create_subscription(
            Image,
            '/camera',
            self.camera_image_callback,
            10
        )

        self.subscription = self.create_subscription(
            Image,
            '/canny',
            self.canny_image_callback,
            10
        )

        self.publisher = self.create_publisher(
            Image,
            '/canny_and_image',
            10
        )
        time_period = 0.01
        self.timer = self.create_timer(time_period,
                                       self.time_callback)

        self.cv_bridge = CvBridge()

        self.camera_image = None
        self.canny_image = None

    def camera_image_callback(self, msg):

        self.camera_image = self.cv_bridge.imgmsg_to_cv2(msg, "bgr8")

    def canny_image_callback(self, msg):

        self.canny_image = self.cv_bridge.imgmsg_to_cv2(msg, "mono8")

    def time_callback(self):
        if self.camera_image is not None and self.canny_image is not None:
            canny_image_colored = cv2.cvtColor(self.canny_image, cv2.COLOR_GRAY2BGR)
            combined_image = cv2.addWeighted(self.camera_image, 0.5, canny_image_colored, 0.5, 0)
            img_msg = self.cv_bridge.cv2_to_imgmsg(combined_image, "bgr8")
            self.publisher.publish(img_msg)

def main():
    rclpy.init()
    combined_node = CombinedPublisher()
    rclpy.spin(combined_node)
    combined_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__' :
    main()