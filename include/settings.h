#pragma once

#define APP_TITLE "ESP32CAM-RTSP"
#define APP_VERSION "1.0"

// SSID and password for the ESP32's own temporary configuration Access Point.
// This AP appears on first boot so you can connect and configure the device
// via the web portal. Change WIFI_PASSWORD to something unique before flashing.
#define WIFI_SSID "ESP32-CAM-RTSP"
#define WIFI_PASSWORD "password"
#define CONFIG_VERSION "1.7"

// Password required for OTA (over-the-air) firmware updates.
// Change this to a strong, unique value before deploying.
#define OTA_PASSWORD "ESP32CAM-RTSP"

#define RTSP_PORT 554

#define DEFAULT_FRAME_DURATION 200
#define DEFAULT_FRAME_SIZE "VGA (640x480)"
#define DEFAULT_JPEG_QUALITY (psramFound() ? 12 : 14)

#define DEFAULT_BRIGHTNESS 0
#define DEFAULT_CONTRAST 0
#define DEFAULT_SATURATION 0
#define DEFAULT_EFFECT "Normal"
#define DEFAULT_WHITE_BALANCE true
#define DEFAULT_WHITE_BALANCE_GAIN true
#define DEFAULT_WHITE_BALANCE_MODE "Auto"
#define DEFAULT_EXPOSURE_CONTROL true
#define DEFAULT_AEC2 true
#define DEFAULT_AE_LEVEL 0
#define DEFAULT_AEC_VALUE 300
#define DEFAULT_GAIN_CONTROL true
#define DEFAULT_AGC_GAIN 0
#define DEFAULT_GAIN_CEILING "2X"
#define DEFAULT_BPC false
#define DEFAULT_WPC true
#define DEFAULT_RAW_GAMMA true
#define DEFAULT_LENC true
#define DEFAULT_HORIZONTAL_MIRROR false
#define DEFAULT_VERTICAL_MIRROR false
#define DEFAULT_DCW true
#define DEFAULT_COLORBAR false

#define DEFAULT_LED_INTENSITY 0

// Auto reboot interval in seconds (default: 6 hours)
#ifndef AUTO_REBOOT_SECONDS
#define AUTO_REBOOT_SECONDS 21600
#endif