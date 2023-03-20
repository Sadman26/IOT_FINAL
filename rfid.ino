#include <SoftwareSerial.h>
SoftwareSerial rfid(10, 11);
void setup()
{
    Serial.begin(9600);
    rfid.begin(9600);
}
void loop()
{
    if (rfid.available())
    {
        String tag = " ";
        while (rfid.available())
        {
            char c = rfid.read();
            if (c == '\n')
            {
                break;
            }
            tag += c;
        }
        Serial.print(tag);
    }
}