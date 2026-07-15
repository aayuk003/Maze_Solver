# 🤖 AI-Powered Autonomous Micromouse Maze Solver Robot

![License](https://img.shields.io/badge/License-MIT-blue.svg)
![Platform](https://img.shields.io/badge/Platform-ESP32-red)
![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)
![Framework](https://img.shields.io/badge/Framework-Arduino-green)
![Status](https://img.shields.io/badge/Status-In%20Development-orange)

An advanced autonomous Micromouse robot capable of exploring an unknown maze, generating a digital map, computing the shortest path using the Flood Fill algorithm, and completing high-speed optimized runs.

---

## 📌 Project Overview

This project is a competition-grade autonomous maze solver built around the ESP32 microcontroller. Unlike basic wall-following robots, it creates a map of the maze, stores discovered walls, calculates the shortest route, and performs an optimized speed run.

The system combines embedded systems, control theory, and path-planning algorithms to deliver accurate navigation.

---

## ✨ Features

- Autonomous maze exploration
- Flood Fill shortest path algorithm
- Digital maze mapping
- High-speed optimized run
- PID motor control
- Encoder-based odometry
- MPU6050 heading correction
- Multiple VL53L0X ToF wall sensors
- OLED status display
- Wi-Fi telemetry (planned)
- Battery monitoring
- Modular firmware architecture
- OTA firmware updates (planned)

---

## 🛠 Hardware

| Component | Quantity |
|-----------|----------|
| ESP32 DevKit V1 | 1 |
| TB6612FNG Motor Driver | 1 |
| N20 Encoder Motors | 2 |
| Wheel Encoders | 2 |
| VL53L0X ToF Sensors | 3–5 |
| MPU6050 IMU | 1 |
| OLED Display (0.96") | 1 |
| Li-ion Battery (2S) | 1 |
| Power Switch | 1 |
| RGB LED | 1 |
| Buzzer | 1 |

---

## 🧠 Software Stack

- C++
- Arduino Framework
- PlatformIO
- ESP32 FreeRTOS
- PID Control
- Flood Fill Algorithm
- I2C Communication
- SPI Communication
- Wi-Fi
- OTA Updates

---

## 📂 Repository Structure

```text
Micromouse-Maze-Solver/
│
├── include/
├── src/
├── lib/
├── docs/
├── cad/
├── pcb/
├── simulation/
├── images/
├── test/
├── platformio.ini
├── README.md
└── LICENSE
```

---

## 🚀 Roadmap

- [x] Project Planning
- [x] Hardware Selection
- [x] CAD Chassis Design
- [x] Circuit Schematic
- [x] PCB Design
- [ ] Motor Driver
- [ ] Encoder Driver
- [ ] PID Controller
- [ ] Sensor Integration
- [ ] Maze Mapping
- [ ] Flood Fill Algorithm
- [ ] Path Optimization
- [ ] OLED Interface
- [ ] Wi-Fi Dashboard
- [ ] Speed Run
- [ ] Testing
- [ ] Documentation

---

## 🧩 Algorithms

- Flood Fill
- PID Control
- Dead Reckoning
- Encoder Odometry
- Wall Detection
- Motion Planning

---

## 📷 Project Images

### CAD Design

(Add CAD render here)

### PCB

(Add PCB Image)

### Robot

(Add Robot Photo)

---

## 📈 Future Improvements

- SLAM
- ROS2 Integration
- LiDAR Navigation
- AI Reinforcement Learning
- Raspberry Pi Vision
- Camera-based Maze Detection
- Web Dashboard
- Mobile App Control

---

## 🤝 Contributing

Contributions are welcome.

1. Fork the repository.
2. Create a new branch.
3. Commit your changes.
4. Push the branch.
5. Open a Pull Request.

---

## 📄 License

This project is licensed under the MIT License.

See the LICENSE file for details.

---

## 👨‍💻 Author

**Ayush Pandey**

Embedded Systems | Robotics | IoT | AI | Computer Vision
