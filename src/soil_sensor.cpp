#include "soil_sensor.h"


float GetHumidityValue(void)
{
    float value;
    value = analogRead(SOIL_HUMIDITY_SENSOR_PIN);
    value /= 4095;
    value *= 100;
    value = 100 - value;

    return value;
}

String GetHumidityGrafic(void)
{
    String output = "[";
    static float values[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    for(int i=0; i < MAX_VALUES_GRAFIC -1; i++){
        values[i] = values[i+1];

        output += String(values[i]);
        output += ",";
    }
    values[MAX_VALUES_GRAFIC-1] = GetHumidityValue();

    output += values[MAX_VALUES_GRAFIC-1];
    output += "]";

    return output;
}