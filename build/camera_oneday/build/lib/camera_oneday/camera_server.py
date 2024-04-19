import rclpy as rp
from rclpy.node import Node
import cv2
from camera_oneday_msgs.srv import Capture, Record
from datetime import datetime
from sensor_msgs.msg import Image
from cv_bridge import CvBridge

class CameraService(Node):
    def __init__(self):
        super().__init__('camera_service')
        self.bridge = CvBridge()
        self.image_topics = ['/camera', '/red', '/blue', '/green', '/binary', '/blur', '/canny', '/canny_and_image', '/cartoon', '/control', '/edge', '/optical']
        self.images = {}
        
        for topic in self.image_topics:
            self.create_subscription(Image, topic, self.create_image_callback(topic), 10)
        
        self.capture_service = self.create_service(Capture, 'capture', self.capture_callback)
        self.record_service = self.create_service(Record, 'record', self.record_callback)
        self.is_recording = False
        self.recordings = {}
        self.writer = None

    def capture_callback(self, request, response):
        topic_name = request.topic_name
        if topic_name in self.images:
            cv_image = self.bridge.imgmsg_to_cv2(self.images[topic_name], "bgr8")
            now = datetime.now().strftime('%Y%m%d_%H%M%S')
            filename = f"{now}.png"
            cv2.imwrite(filename, cv_image)
            response.file_path = filename
        else:
            response.file_path = ''
        return response


    def create_image_callback(self, topic):
        def image_callback(msg):
            self.images[topic] = msg
            if topic in self.recordings and self.recordings[topic]['is_recording']:
                self.capture_frame(topic, msg)
            self.image_width = msg.width
            self.image_height = msg.height
        return image_callback

    def record_callback(self, request, response):
        topic_name = request.topic_name
        if request.start:
            if topic_name not in self.recordings or not self.recordings[topic_name]['is_recording']:
                self.start_recording(topic_name)
                response.file_path = self.recordings[topic_name]['filename']
        else:
            if topic_name in self.recordings and self.recordings[topic_name]['is_recording']:
                self.stop_recording(topic_name)
                response.file_path = self.recordings[topic_name]['filename']
        return response
    
    def start_recording(self, topic_name):
        now = datetime.now().strftime('%Y%m%d_%H%M%S')
        filename = f"{topic_name}_{now}.avi"
       
        w = self.image_width
        h = self.image_height
        fourcc = cv2.VideoWriter_fourcc(*'XVID')
        writer = cv2.VideoWriter(filename, fourcc, 20.0, (w, h))
        self.recordings[topic_name] = {'is_recording': True, 'writer': writer, 'filename': filename}
        self.get_logger().info(f'Recording started for {topic_name}')

    def stop_recording(self, topic_name):
        if topic_name in self.recordings:
            recording_info = self.recordings[topic_name]
            if recording_info['is_recording']:
                recording_info['writer'].release()
                recording_info['is_recording'] = False
                self.get_logger().info(f'Recording stopped for {topic_name}')

    def capture_frame(self, topic_name, msg):
        if topic_name in self.recordings and self.recordings[topic_name]['is_recording']:
            cv_image = self.bridge.imgmsg_to_cv2(msg, "bgr8")
            self.recordings[topic_name]['writer'].write(cv_image)
        
def main(args=None):
    rp.init(args=args)
    camera_service = CameraService()
    rp.spin(camera_service)
    camera_service.destroy_node()
    rp.shutdown()

if __name__ == '__main__':
    main()