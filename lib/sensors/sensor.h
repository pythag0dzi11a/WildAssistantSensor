#include<DHT.h>
#include<stdio.h>

#ifndef SENSOR_H
#define SENSOR_H

int getLight(int dataPin);
int getDHT11Humidity(int dataPin);
int getDHT11Temperature(int dataPin);
int getSoilHumidity(int ENABLE_SENSOR,int ANALOG_PIN);

#endif