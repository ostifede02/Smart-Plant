#ifndef SOIL_SENSOR
#define SOIL_SENSOR
#include <Arduino.h>


#define SOIL_HUMIDITY_SENSOR_PIN 36
#define MAX_VALUES_GRAFIC 20

float GetHumidityValue(void);
String GetHumidityGrafic(void);

#endif