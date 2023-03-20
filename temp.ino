#include<DHTStable.h>
#define pinx 9;
#define DHTTYPE DHT22;
DHTStable sensor(pinx,DHTTYPE);
void setup()
{
    Serial.begin(9600);
    sensor.begin();
}
void loop()
{
    float tmp=sensor.readTemperature();
    Serial.print(tmp);
}