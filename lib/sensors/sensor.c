#include <sensor.h>

// 这个函数读取dataPin所接光线传感器上的数据，返回一个0到255的值。
int getLight(int dataPin)
{
    pinMode(dataPin, INPUT);
    int rawLightIntensity = analogRead(dataPin);
    lightIntensity = map(rawLightIntensity,0,5000,0,255) 
    return lightIntensity;
}

// 下面两个函数读取dataPin上DHT11传感器温度和湿度数据，温度返回值是摄氏度，适度返回值是百分比。
float getDHT11Humidity(int dataPin)
{
    DHT dht(dataPin, DHT11);
    float humidity = dht.readHumidity();
    return humidity;
}

float getDHT11Temperature(int dataPin){
    DHT dht(dataPin, DHT11);
    float temperature = dht.readTemperature();
    return temperature;
}

// 这个函数用来读取土壤适度值
int getSoilHumidity(int ENABLE_SENSOR,int ANALOG_PIN)
{
    static int soilHumidity = 0;
    digitalWrite(ENABLE_SENSOR, HIGH);

    delay(100); // 用delay是因为方便，具体影响再看

    soilHumidity = analogRead(ANALOG_PIN);
    digitalWrite(ENABLE_SENSOR, LOW);

    return soilHumidity;
}

// 这个函数用来读取dataPin上所接热敏电阻的返回数据，返回数据为0到255上值。 
{
    pinMode(dataPin, INPUT);
    int rawTemperature = analogRead(dataPin);
    tamperature = map(rawTemperature,0,5000,0,255) 
    return temperature;
}