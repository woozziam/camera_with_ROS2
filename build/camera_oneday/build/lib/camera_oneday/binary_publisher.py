import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2

class BinaryPublisher(Node):
    def __init__(self):
        super().__init__('binary_publisher')
        self.subscription = self.create_subscription(
            Image,
            '/camera',
            self.image_callback,
            10
        )
        self.publisher = self.create_publisher(
            Image,
            '/binary',
            10
        )
        time_period = 0.01
        self.timer = self.create_timer(time_period,
                                       self.time_callback)

        self.cv_bridge = CvBridge()

        self.filtered_image = None
        self.thresh = 100
        self.maxval = 255

    def image_callback(self, msg):
        
        image = self.cv_bridge.imgmsg_to_cv2(msg, "bgr8")
        gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
        ret, dst = cv2.threshold(gray, self.thresh, self.maxval, cv2.THRESH_BINARY)
        self.filtered_image = dst
        
    def time_callback(self):
        if self.filtered_image is not None:
            
            img = self.cv_bridge.cv2_to_imgmsg(self.filtered_image, "mono8")
            self.publisher.publish(img)

def main():
    rclpy.init()
    binary_node = BinaryPublisher()
    rclpy.spin(binary_node)
    binary_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__' :
    main()