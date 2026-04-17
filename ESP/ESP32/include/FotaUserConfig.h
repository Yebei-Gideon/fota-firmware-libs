#pragma once

// ─────────────────────────────
// WiFi Configuration (DEV ONLY)
// ─────────────────────────────
#ifndef WIFI_SSID
#define WIFI_SSID "YOUR_WIFI_SSID"
#endif

#ifndef WIFI_PASS
#define WIFI_PASS "YOUR_WIFI_PASSWORD"
#endif

// ─────────────────────────────
// FOTA Backend
// ─────────────────────────────
#ifndef FOTA_SERVER_URL
#define FOTA_SERVER_URL "https://secure-iot-fota-platform.onrender.com"
#endif

#ifndef FOTA_CURRENT_VERSION
#define FOTA_CURRENT_VERSION "1.0.0"
#endif

#ifndef FOTA_DEVICE_ID
#define FOTA_DEVICE_ID "DEVICE_001"
#endif

#ifndef FOTA_HARDWARE_MODEL
#define FOTA_HARDWARE_MODEL "ESP32_DEVKIT"
#endif

// ─────────────────────────────
// Security Settings
// ─────────────────────────────
#ifndef FOTA_VERIFY_SIGNATURE
#define FOTA_VERIFY_SIGNATURE 1
#endif

#ifndef FOTA_AUTO_FETCH_PUBLIC_KEY
#define FOTA_AUTO_FETCH_PUBLIC_KEY 1
#endif
