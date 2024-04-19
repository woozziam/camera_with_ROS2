# Vision Processing Package with ROS2
### 카메라 영상 ROS2 비전 처리 패키지를 구성해보자!
> ROS2 Topic Node와 Service를 이용한 카메라 영상처리 패키지 구현
---
<img src="https://github.com/woozziam/camera_with_ROS2/assets/157275402/05b7d461-678e-415a-9310-559cd492d34d" width="720" height="480">

<img src="https://github.com/woozziam/camera_with_ROS2/assets/157275402/fc9a4d95-c599-4f49-a2c1-4f6458dd2b90" width="720" height="480">

#### 뭘까용??

<img src="https://github.com/woozziam/camera_with_ROS2/assets/157275402/a27b69a6-a70a-43f9-b5dc-c0e2713e996b" width="720" height="480">

#### 짠!

---

#### 패키지 구성도
<pre><code>
.
├── camera_oneday
│   ├── camera_oneday
│   │   ├── binary_publisher.py
│   │   ├── blue_publisher.py
│   │   ├── blur_publisher.py
│   │   ├── camera_server.py
│   │   ├── canny_publisher.py
│   │   ├── cartoon_publisher.py
│   │   ├── combined_publisher.py
│   │   ├── control_publisher.py
│   │   ├── edge_publisher.py
│   │   ├── green_publisher.py
│   │   ├── img_publisher.py
│   │   ├── __init__.py
│   │   ├── optical_publisher.py
│   │   └── red_publisher.py
│   ├── launch
│   │   └── camera.launch.py
│   ├── package.xml
│   ├── param
│   │   ├── binary.yaml
│   │   ├── filter.yaml
│   │   └── size.yaml
│   ├── setup.cfg
│   ├── setup.py
│   └── test
└── camera_oneday_msgs
    ├── CMakeLists.txt
    ├── package.xml
    └── srv
        ├── Capture.srv
        └── Record.srv
</code></pre>

#### 설치방법
##### ...은 추후에 올릴께요


#### 사용방법

##### 터미널 총 4개 준비

##### Termial 1

<pre><code>ros2 launch camera_oneday camera.launch.py</code></pre>

##### Termial 2

<pre><code>rqt</code></pre>

##### Termial 3

<pre><code>ros2 run camera_oneday camera_server</code></pre>

##### Termial 4

<pre><code>ros2 service call /capture camera_oneday_msgs/srv/Capture "{topic_name: '/camera'}"</code></pre>

###### topic_name은 위 패키지 구성도의 camera_server.py에서 확인 가능
###### ['/camera', '/red', '/blue', '/green', '/binary', '/blur', '/canny', '/canny_and_image', '/cartoon', '/control', '/edge', '/optical']

#### 노드 구성

<img src="https://github.com/woozziam/camera_with_ROS2/assets/157275402/8c6f61af-c7c4-4eae-8403-613396787b2a" width="720" height="480">

#### 각 토픽별로 노드가 존재
##### 여기에서 server를 실행시키면...?

<img src="https://github.com/woozziam/camera_with_ROS2/assets/157275402/716ec3d0-efe0-4731-ae94-cceed270625b" width="720" height="480">
