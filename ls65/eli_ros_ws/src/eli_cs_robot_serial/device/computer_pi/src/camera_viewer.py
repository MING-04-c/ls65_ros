#!/usr/bin/env python3
"""Show the latest JPEG frame received from the camera TCP node."""

import os

import cv2
import numpy as np
import rclpy
from rclpy.executors import ExternalShutdownException
from rclpy.node import Node
from rclpy.qos import qos_profile_sensor_data
from sensor_msgs.msg import CompressedImage


WINDOW_TITLE = "Computer Pi Camera"


def decode_image(data):
    encoded = np.frombuffer(data, dtype=np.uint8)
    return cv2.imdecode(encoded, cv2.IMREAD_COLOR)


class CameraViewer(Node):
    def __init__(self):
        super().__init__("computer_pi_camera_viewer")
        topic = self.declare_parameter(
            "compressed_topic", "/computer_pi/camera/image/compressed"
        ).value
        self.latest_image = None
        self.first_frame_logged = False
        self.subscription = self.create_subscription(
            CompressedImage, topic, self.on_image, qos_profile_sensor_data
        )

    def on_image(self, message):
        image = decode_image(message.data)
        if image is None:
            self.get_logger().warn("Received a JPEG frame that could not be decoded")
            return
        self.latest_image = image
        if not self.first_frame_logged:
            self.get_logger().info(
                f"Displaying camera frames: {image.shape[1]}x{image.shape[0]}"
            )
            self.first_frame_logged = True


def main():
    if not (os.environ.get("DISPLAY") or os.environ.get("WAYLAND_DISPLAY")):
        raise RuntimeError(
            "No graphical display available; launch with show_image:=false "
            "or start a desktop/X11 session"
        )
    rclpy.init()
    node = CameraViewer()
    cv2.namedWindow(WINDOW_TITLE, cv2.WINDOW_NORMAL | cv2.WINDOW_KEEPRATIO)
    cv2.resizeWindow(WINDOW_TITLE, 960, 720)
    waiting = np.zeros((720, 960, 3), dtype=np.uint8)
    cv2.putText(
        waiting, "Waiting for camera...", (90, 360),
        cv2.FONT_HERSHEY_SIMPLEX, 1.2, (230, 230, 230), 2,
    )
    try:
        while rclpy.ok():
            rclpy.spin_once(node, timeout_sec=0.01)
            cv2.imshow(
                WINDOW_TITLE,
                node.latest_image if node.latest_image is not None else waiting,
            )
            key = cv2.waitKey(1) & 0xFF
            if key in (ord("q"), 27):
                break
    except (KeyboardInterrupt, ExternalShutdownException):
        pass
    finally:
        cv2.destroyAllWindows()
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == "__main__":
    main()
