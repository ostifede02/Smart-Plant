#ifndef WIFI_H
#define WIFI_H

#include <Arduino.h>
#include <WiFi.h>

//  Bolzano network credentials
// #define WIFI_SSID "HUAWEI-B535-B105"
// #define WIFI_PASSWORD "D9MY17N3BB8"

// Federico's hotspot credentials
// #define WIFI_SSID "Aifon di Federico"
// #define WIFI_PASSWORD "87654321a"

// Camilla's wifi credentials
#define WIFI_SSID "Home&Life SuperWiFi-5CAD"
#define WIFI_PASSWORD "NF4KP3RJGR4HHGQL"


void connectToWifi();
void WiFiEvent(WiFiEvent_t event);



#endif