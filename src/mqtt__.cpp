#include "mqtt__.h"
#include "wifi__.h"

AsyncMqttClient mqttClient;
TimerHandle_t mqttReconnectTimer;
TimerHandle_t wifiReconnectTimer;

void connectToMqtt()
{
  Serial.println("Connecting to MQTT...");
  mqttClient.connect();
  Serial.println("Connected");
}


void onMqttConnect(bool sessionPresent)
{
  return;
}


void onMqttDisconnect(AsyncMqttClientDisconnectReason reason)
{
  Serial.println("Disconnected from MQTT.");

  if (WiFi.isConnected()) {
    xTimerStart(mqttReconnectTimer, 0);
  }
}


void onMqttSubscribe(uint16_t packetId, uint8_t qos) 
{
  return;
}


void onMqttUnsubscribe(uint16_t packetId)
{
  return;
}


void onMqttMessage(char* topic, char* payload, AsyncMqttClientMessageProperties properties, size_t len, size_t index, size_t total) 
{
  return;
}


void onMqttPublish(uint16_t packetId)
{
  return;
}