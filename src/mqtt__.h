#ifndef MQTT_H
#define MQTT_H

#include <Arduino.h>
#include <AsyncMqttClient.h>

//  Mosquitto MQTT Broker
#define MQTT_HOST "test.mosquitto.org"
#define MQTT_PORT 1883


//MQTT Topics
#define MQTT_PUB_BONSAI_HUMIDITY_VAL "bonsai/umidita/val"

extern AsyncMqttClient mqttClient;
extern TimerHandle_t mqttReconnectTimer;
extern TimerHandle_t wifiReconnectTimer;

void connectToMqtt();
void onMqttConnect(bool sessionPresent);
void onMqttDisconnect(AsyncMqttClientDisconnectReason reason);
void onMqttSubscribe(uint16_t packetId, uint8_t qos);
void onMqttUnsubscribe(uint16_t packetId);
void onMqttMessage(char* topic, char* payload, AsyncMqttClientMessageProperties properties, size_t len, size_t index, size_t total);
void onMqttPublish(uint16_t packetId);


#endif