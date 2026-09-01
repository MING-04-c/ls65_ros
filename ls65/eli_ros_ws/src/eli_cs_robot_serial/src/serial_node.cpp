#include <array>
#include <atomic>
#include <cerrno>
#include <chrono>
#include <cstring>
#include <fcntl.h>
#include <fstream>
#include <memory>
#include <mutex>
#include <string>
#include <thread>
#include <vector>
#include <unistd.h>
#include <termios.h>

#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <std_msgs/msg/float64.hpp>
#include <std_msgs/msg/int64.hpp>
#include <std_msgs/msg/u_int8_multi_array.hpp>

#include "eli_cs_robot_serial/srv/write_serial.hpp"
#include "eli_cs_robot_serial/srv/send_file.hpp"

class SerialNode final : public rclcpp::Node
{
public:
  SerialNode() : Node("serial_node")
  {
    device_ = declare_parameter<std::string>("device", "/dev/ttyUSB0");
    baudrate_ = declare_parameter<int>("baudrate", 115200);
    line_mode_ = declare_parameter<bool>("line_mode", true);
    publish_text_ = declare_parameter<bool>("publish_text", true);
    append_newline_ = declare_parameter<bool>("append_newline", true);
    reconnect_period_ = declare_parameter<double>("reconnect_period", 2.0);
    const auto text_topic = declare_parameter<std::string>("text_topic", "/serial/rx");
    const auto bytes_topic = declare_parameter<std::string>("bytes_topic", "/serial/rx_bytes");
    const auto write_service = declare_parameter<std::string>("write_service", "/serial/write");
    const auto send_file_service = declare_parameter<std::string>("send_file_service", "/serial/send_file");
    const auto tx_string_topic = declare_parameter<std::string>("tx_string_topic", "/serial/tx");
    const auto tx_float_topic = declare_parameter<std::string>("tx_float_topic", "/serial/tx_float");
    const auto tx_int_topic = declare_parameter<std::string>("tx_int_topic", "/serial/tx_int");

    text_pub_ = create_publisher<std_msgs::msg::String>(text_topic, 10);
    bytes_pub_ = create_publisher<std_msgs::msg::UInt8MultiArray>(bytes_topic, 10);
    tx_string_sub_ = create_subscription<std_msgs::msg::String>(
      tx_string_topic, 10, [this](const std_msgs::msg::String::SharedPtr message) {
        write_text(message->data);
      });
    tx_float_sub_ = create_subscription<std_msgs::msg::Float64>(
      tx_float_topic, 10, [this](const std_msgs::msg::Float64::SharedPtr message) {
        write_text(std::to_string(message->data));
      });
    tx_int_sub_ = create_subscription<std_msgs::msg::Int64>(
      tx_int_topic, 10, [this](const std_msgs::msg::Int64::SharedPtr message) {
        write_text(std::to_string(message->data));
      });
    write_srv_ = create_service<eli_cs_robot_serial::srv::WriteSerial>(
      write_service,
      [this](
        const std::shared_ptr<eli_cs_robot_serial::srv::WriteSerial::Request> request,
        std::shared_ptr<eli_cs_robot_serial::srv::WriteSerial::Response> response)
      {
        write_serial(request, response);
      });
    send_file_srv_ = create_service<eli_cs_robot_serial::srv::SendFile>(send_file_service,
      [this](const std::shared_ptr<eli_cs_robot_serial::srv::SendFile::Request> request,
        std::shared_ptr<eli_cs_robot_serial::srv::SendFile::Response> response) {
        send_file(request, response);
      });
    reader_ = std::thread([this]() { read_loop(); });
    RCLCPP_INFO(get_logger(), "Serial node ready: %s @ %d", device_.c_str(), baudrate_);
  }

  ~SerialNode() override
  {
    running_ = false;
    close_port();
    if (reader_.joinable()) reader_.join();
  }

private:
  static speed_t baud(int value)
  {
    switch (value) {
      case 9600: return B9600;
      case 19200: return B19200;
      case 38400: return B38400;
      case 57600: return B57600;
      case 115200: return B115200;
      case 230400: return B230400;
      case 460800: return B460800;
      case 921600: return B921600;
      default: return 0;
    }
  }

  bool open_port()
  {
    const auto speed = baud(baudrate_);
    if (speed == 0) {
      RCLCPP_ERROR(get_logger(), "Unsupported baudrate: %d", baudrate_);
      return false;
    }
    const int fd = ::open(device_.c_str(), O_RDWR | O_NOCTTY | O_NONBLOCK);
    if (fd < 0) {
      RCLCPP_WARN_THROTTLE(get_logger(), *get_clock(), 5000,
        "Cannot open %s: %s", device_.c_str(), std::strerror(errno));
      return false;
    }
    termios tty{};
    if (tcgetattr(fd, &tty) != 0) { ::close(fd); return false; }
    cfmakeraw(&tty);
    cfsetispeed(&tty, speed);
    cfsetospeed(&tty, speed);
    tty.c_cflag |= CLOCAL | CREAD;
    tty.c_cflag &= ~(CSTOPB | CRTSCTS | PARENB | CSIZE);
    tty.c_cflag |= CS8;
    tty.c_cc[VMIN] = 0;
    tty.c_cc[VTIME] = 1;
    if (tcsetattr(fd, TCSANOW, &tty) != 0) { ::close(fd); return false; }
    std::lock_guard<std::mutex> lock(mutex_);
    fd_ = fd;
    RCLCPP_INFO(get_logger(), "Opened %s", device_.c_str());
    return true;
  }

  void close_port()
  {
    std::lock_guard<std::mutex> lock(mutex_);
    if (fd_ >= 0) { ::close(fd_); fd_ = -1; }
  }

  void write_serial(
    const std::shared_ptr<eli_cs_robot_serial::srv::WriteSerial::Request> request,
    const std::shared_ptr<eli_cs_robot_serial::srv::WriteSerial::Response> response)
  {
    std::lock_guard<std::mutex> lock(mutex_);
    if (fd_ < 0) { response->success = false; response->message = "Serial port is not open"; return; }
    const auto data = append_newline_ && (request->data.empty() || request->data.back() != '\n')
      ? request->data + "\n" : request->data;
    const auto size = data.size();
    const auto count = ::write(fd_, data.data(), size);
    response->success = count == static_cast<ssize_t>(size);
    response->message = response->success ? "Written " + std::to_string(size) + " bytes" :
      std::string("Write failed: ") + std::strerror(errno);
  }

  void write_text(const std::string &value)
  {
    std::lock_guard<std::mutex> lock(mutex_);
    if (fd_ < 0) {
      RCLCPP_WARN_THROTTLE(get_logger(), *get_clock(), 5000, "Serial port is not open");
      return;
    }
    const auto data = append_newline_ && (value.empty() || value.back() != '\n')
      ? value + "\n" : value;
    const auto count = ::write(fd_, data.data(), data.size());
    if (count != static_cast<ssize_t>(data.size())) {
      RCLCPP_WARN(get_logger(), "Serial write failed: %s", std::strerror(errno));
    }
  }

  void send_file(const std::shared_ptr<eli_cs_robot_serial::srv::SendFile::Request> request,
    const std::shared_ptr<eli_cs_robot_serial::srv::SendFile::Response> response)
  {
    std::ifstream file(request->path, std::ios::binary);
    if (!file) { response->success = false; response->message = "Cannot open file: " + request->path; return; }
    std::array<char, 4096> buffer{}; uint64_t total = 0;
    while (file && running_) {
      file.read(buffer.data(), static_cast<std::streamsize>(buffer.size()));
      const auto count = file.gcount(); if (count <= 0) break;
      std::lock_guard<std::mutex> lock(mutex_);
      if (fd_ < 0) { response->success = false; response->bytes_sent = total; response->message = "Serial port closed during transfer"; return; }
      const auto written = ::write(fd_, buffer.data(), static_cast<size_t>(count));
      if (written != count) { response->success = false; response->bytes_sent = total; response->message = "Serial file write failed"; return; }
      total += static_cast<uint64_t>(written);
    }
    response->success = true; response->bytes_sent = total; response->message = "Sent file successfully";
  }

  void publish(const std::vector<uint8_t> &data)
  {
    if (data.empty()) return;
    std_msgs::msg::UInt8MultiArray bytes;
    bytes.data = data;
    bytes_pub_->publish(bytes);
    if (publish_text_) {
      std_msgs::msg::String text;
      text.data.assign(data.begin(), data.end());
      text_pub_->publish(text);
    }
  }

  void read_loop()
  {
    std::array<uint8_t, 512> buffer{};
    std::vector<uint8_t> line;
    while (running_ && rclcpp::ok()) {
      bool opened = false;
      {
        std::lock_guard<std::mutex> lock(mutex_);
        opened = fd_ >= 0;
        if (opened) {
          const auto count = ::read(fd_, buffer.data(), buffer.size());
          if (count > 0) {
            if (!line_mode_) {
              publish(std::vector<uint8_t>(buffer.begin(), buffer.begin() + count));
            } else {
              for (ssize_t i = 0; i < count; ++i) {
                const auto byte = buffer[static_cast<size_t>(i)];
                if (byte == '\n') { publish(line); line.clear(); }
                else if (byte != '\r') line.push_back(byte);
              }
            }
          } else if (count < 0 && errno != EAGAIN && errno != EWOULDBLOCK) {
            ::close(fd_); fd_ = -1;
          }
        }
      }
      if (!opened) {
        open_port();
        std::this_thread::sleep_for(std::chrono::duration<double>(reconnect_period_));
      } else std::this_thread::sleep_for(std::chrono::milliseconds(2));
    }
  }

  std::string device_;
  int baudrate_;
  bool line_mode_;
  bool publish_text_;
  bool append_newline_;
  double reconnect_period_;
  int fd_{-1};
  std::atomic<bool> running_{true};
  std::mutex mutex_;
  std::thread reader_;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr text_pub_;
  rclcpp::Publisher<std_msgs::msg::UInt8MultiArray>::SharedPtr bytes_pub_;
  rclcpp::Service<eli_cs_robot_serial::srv::WriteSerial>::SharedPtr write_srv_;
  rclcpp::Service<eli_cs_robot_serial::srv::SendFile>::SharedPtr send_file_srv_;
  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr tx_string_sub_;
  rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr tx_float_sub_;
  rclcpp::Subscription<std_msgs::msg::Int64>::SharedPtr tx_int_sub_;
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<SerialNode>());
  rclcpp::shutdown();
  return 0;
}
