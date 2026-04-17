## Secure FOTA Firmware Libraries for ESP32 and ESP8266

This repository provides a production-grade Firmware Over-The-Air (FOTA) implementation designed for secure, scalable, and verifiable firmware updates in IoT ecosystems. It focuses on the client-side logic required for robust delivery and cryptographic integrity.

------------------------------
## Core Capabilities

* Remote Firmware Upgrades: Seamless FOTA execution for ESP32 and ESP8266 platforms.
* Identity Management: Token-based device authentication and validation.
* Cryptographic Security: PKI integration for public key-based update verification.
* Integrity Assurance: Automated checks to ensure firmware authenticity and prevent tampering.
* Upgrade Lifecycle Testing: Standardised multi-version testing chain (v1 through v5).
* Automated Pipelines: CI/CD integration via GitHub Actions for build and release management.

------------------------------
## Project Organization

```
ESP/
├── ESP32/
│   ├── src/                  # Core FOTA client implementation
│   ├── examples/            # Versioned firmware samples (v1–v5)
│   ├── build_test_bins.py   # Automated OTA chain builder
│   └── platformio.ini       # Multi-board environment configuration
├── ESP8266/
│   ├── src/                  # ESP8266 specific implementation
│   ├── examples/            # Versioned samples
│   └── platformio.ini       # Board configuration
└── README.md
```

------------------------------
## Requirements

* PlatformIO: Industry-standard IDE for embedded development.
* Python 3.10+: Required for build scripts and binary manipulation.
* Hardware: ESP32 or ESP8266 development boards.

------------------------------
## Getting Started## Installation
Clone the repository and navigate to the project root:

```
git clone https://github.com/YOUR_USERNAME/fota-firmware-libs.git
cd fota-firmware-libs
```

## Compilation
For ESP32:

```
cd ESP/ESP32
pio run -e esp32dev
```
For ESP8266:
```
cd ESP/ESP8266
pio run
```
## Deployment
Flash the firmware and monitor serial output:
```
pio run -e esp32dev -t upload
pio device monitor
```
------------------------------
## OTA Upgrade Chain Testing
The project includes a pipeline to verify sequential upgrades. This ensures that the transition between different firmware versions remains stable.
```
cd ESP/ESP32
python build_test_bins.py
```
This script generates five sequential binaries in the tests/ directory. The recommended workflow involves flashing v1 manually and using a FOTA backend to push subsequent versions (v2 through v5) to the device.
------------------------------
## Security Framework
Security is integrated into the core architecture:

* Verification: All incoming binaries undergo integrity checks.
* Validation: Public key signatures must match to authorize installation.
* Authentication: Communication with backends requires valid device tokens.
* Tamper Protection: Rejection of unsigned or incorrectly signed payloads.

------------------------------
## Configuration
Customization is handled via FotaUserConfig.h within the examples. This file defines:

* Firmware versioning metadata.
* API endpoints for the update server.
* Security tokens and verification parameters.

------------------------------
## Roadmap

* Enhanced Signing: Integration of CI-based firmware signing.
* Backend Integration: Native support for major remote FOTA providers.
* Advanced Deployment: Support for staged rollouts and canary releases.
* Delta Updates: Implementation of binary diffing to reduce bandwidth usage.
* Fleet Management: Tools for managing large-scale device clusters.

------------------------------
## License
This project is released under the MIT License.
