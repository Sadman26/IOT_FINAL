#include<Adafruit_PIR.h>
const int pinx=9;
const int led=10;
Adafruit_PIR sensor(pinx);
void setup()
{
    Serial.begin(9600);
    pinMode(led,OUTPUT);
    sensor.begin();
}
void loop(){
    if(sensor.motionDetected())
    {
        Serial.print('Motion Detected');
        digitalWrite(led,HIGH);
        delay(700);
        digitalWrite(led,LOW);
    }
}