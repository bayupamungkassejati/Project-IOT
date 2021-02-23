
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

Servo servo;

char auth[] = "hz0SfghVW-0R5osMFuYxr6chuIBe0fwz"; //kode blynk dikirim lewat email
char ssid[] = "Rzl"; //Nama username wifi
char pass[] = "12345678912"; //Nama password wifi



void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  servo.attach(2); // NodeMCU D4 pin
 }

  

void loop()
{
  Blynk.run();
}


BLYNK_WRITE(V1)
{
  servo.write(0);
}

BLYNK_WRITE(V2)
{
  servo.write(75);
}
