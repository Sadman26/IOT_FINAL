#include<MAX30105.h>
#include<Wire.h>
MAX30105 sensor;
void setup()
{
    Serial.begin(9600);
    Wire.begin();
    sensor.begin(Wire,I2P_SPEED_FAST);
    sensor.setup();
    sensor.setAmplitudeRed(0x0A);
    sensor.setAmplitudeGreen(0);
}
void loop()
{
    int hrt=sensor.getHeartRate();
    Serial.print(hrt);
    delay(300);
}