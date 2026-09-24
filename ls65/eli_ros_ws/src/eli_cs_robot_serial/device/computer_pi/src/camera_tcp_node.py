#!/usr/bin/env python3
"""Receive MASC Camera TCP Protocol v1 and publish JPEG frames in ROS 2."""

import json
import os
import socket
import struct
import tempfile
import time

MAX_HEADER_LENGTH = 65_536
MAX_PAYLOAD_LENGTH = 32 * 1024 * 1024


class CameraProtocolError(Exception):
    pass


def read_exact(connection, length, should_continue=lambda: True):
    data = bytearray()
    while len(data) < length:
        try:
            chunk = connection.recv(min(length - len(data), 64 * 1024))
        except socket.timeout:
            if not should_continue():
                raise InterruptedError("ROS is shutting down")
            continue
        if not chunk:
            raise EOFError("camera TCP connection closed")
        data.extend(chunk)
    return bytes(data)


def read_frame(connection, should_continue=lambda: True):
    if read_exact(connection, 4, should_continue) != b"MIMG":
        raise CameraProtocolError("invalid frame magic")
    header_length = struct.unpack("!I", read_exact(connection, 4, should_continue))[0]
    if not 0 < header_length <= MAX_HEADER_LENGTH:
        raise CameraProtocolError(f"invalid header length: {header_length}")
    try:
        header = json.loads(read_exact(connection, header_length, should_continue).decode("utf-8"))
    except (UnicodeError, json.JSONDecodeError) as exc:
        raise CameraProtocolError("invalid JSON header") from exc
    if not isinstance(header, dict) or header.get("version") != 1 or header.get("type") != "image":
        raise CameraProtocolError("unsupported camera frame")
    if header.get("encoding") != "jpeg":
        raise CameraProtocolError("unsupported image encoding")
    length = header.get("payload_length")
    if type(length) is not int or not 0 < length <= MAX_PAYLOAD_LENGTH:
        raise CameraProtocolError(f"invalid JPEG length: {length}")
    stamp_ns = header.get("stamp_ns")
    if type(stamp_ns) is not int or stamp_ns < 0:
        raise CameraProtocolError("invalid image timestamp")
    if not isinstance(header.get("frame_id"), str):
        raise CameraProtocolError("invalid frame_id")
    jpeg = read_exact(connection, length, should_continue)
    if not jpeg.startswith(b"\xff\xd8") or not jpeg.endswith(b"\xff\xd9"):
        raise CameraProtocolError("invalid JPEG payload")
    return header, jpeg


def atomic_write(path, data):
    directory = os.path.dirname(os.path.abspath(path))
    os.makedirs(directory, exist_ok=True)
    fd, temporary = tempfile.mkstemp(prefix=".camera-", dir=directory)
    try:
        with os.fdopen(fd, "wb") as output:
            output.write(data)
        os.replace(temporary, path)
    finally:
        if os.path.exists(temporary):
            os.unlink(temporary)


def main():
    import rclpy
    from rclpy.node import Node
    from rclpy.qos import qos_profile_sensor_data
    from sensor_msgs.msg import CompressedImage

    rclpy.init()
    node = Node("computer_pi_camera_tcp_node")
    try:
        host = node.declare_parameter("host", "169.254.199.100").value
        port = node.declare_parameter("port", 9002).value
        local_ip = node.declare_parameter("local_ip", "169.254.199.250").value
        topic = node.declare_parameter(
            "compressed_topic", "/computer_pi/camera/image/compressed"
        ).value
        latest_file = node.declare_parameter(
            "latest_file", "/tmp/computer_pi_camera/latest.jpg"
        ).value
        reconnect_period = node.declare_parameter("reconnect_period", 2.0).value
        if not 1 <= port <= 65535 or reconnect_period <= 0:
            raise ValueError("port must be 1–65535 and reconnect_period must be positive")
        publisher = node.create_publisher(
            CompressedImage, topic, qos_profile_sensor_data
        )
        source_address = (local_ip, 0) if local_ip else None
        node.get_logger().info(
            f"Receiving camera JPEG from {host}:{port} on {local_ip or 'automatic'}"
        )
        while rclpy.ok():
            try:
                with socket.create_connection(
                    (host, port), timeout=3.0, source_address=source_address
                ) as connection:
                    connection.settimeout(1.0)
                    node.get_logger().info("Camera TCP connected")
                    while rclpy.ok():
                        header, jpeg = read_frame(connection, rclpy.ok)
                        message = CompressedImage()
                        message.header.stamp.sec, message.header.stamp.nanosec = divmod(
                            header["stamp_ns"], 1_000_000_000
                        )
                        message.header.frame_id = header["frame_id"]
                        message.format = "jpeg"
                        message.data = jpeg
                        publisher.publish(message)
                        if latest_file:
                            atomic_write(latest_file, jpeg)
                            metadata_file = os.path.splitext(latest_file)[0] + ".json"
                            atomic_write(
                                metadata_file,
                                json.dumps(header, ensure_ascii=False).encode("utf-8"),
                            )
            except (OSError, EOFError, CameraProtocolError) as exc:
                if rclpy.ok():
                    node.get_logger().warn(f"Camera TCP disconnected: {exc}")
            except InterruptedError:
                break
            if rclpy.ok():
                time.sleep(reconnect_period)
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == "__main__":
    main()
