#include<DHTStable.h>//it works
#define pinx 9;
#define DHTTYPE DHT22;
DHTStable sensor(pinx,DHTTYPE);
//lets see what i can do with these codes
void setup()
{
    Serial.begin(9600);
    sensor.begin();
}
void loop()
{
    float tmp=sensor.readTemperature();
    Serial.print(tmp);

