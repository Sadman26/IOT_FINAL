#include<Ultrasonic.h>
const int trig=9;
const int echo=10;
Ultrasonic sensor(trig,echo);
void setup(){
    Serial.begin(9600);
}
void setup()
{
    float distance=sensor.distanceInCentimeters();
    Serial.print(distance);
}