#include<Adafruit_Fingerprint.h>
Adafruit_Fingerprint finger(&Serial);
void setup()
{
    Serial.begin(9600);
    if(!finger.begin(57600))
    {
        Serial.print("Sensor not Found");
        while(1);
    }
    Serial.begin("Please Enter Finger");
}
void loop()
{
    if(finger.getImage())
    {
        int id=finger.fingerID();
        if(id==123){
            Serial.print("Access Granted");
        }
        Serial.print("Access Denied");
    }
}