#include <Blynk.h>

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>

#include <BlynkSimpleEsp8266.h>

#include <Servo.h>

// You should get Auth Token in the Blynk App.

// Go to the Project Settings (nut icon).

char auth[] = "e9-B48q3_pkRadML0nOnFsXmha6Ml5-9";

// Your WiFi credentials.

// Set password to "" for open networks.

char ssid[] = "JACKY-2.4G";

char pass[] = "JJXE9397";

Servo servo;

int servoAngle = 168;
int servoAngle2 = 110;
int button;

BLYNK_READ(V0) 
{
  Blynk.virtualWrite(V0, servoAngle);
}

void ON_PC()
{
  servo.write(servoAngle);
  delay(500);
  servo.write(servoAngle2);
  delay(500);
}

BLYNK_WRITE(V1) // Button Widget writes to Virtual Pin V1
{
  button = param.asInt();
  if(button == 1) {     // if Button sends 1
    ON_PC();             // start the function
  }
}


void setup() {

//Debug console Serial.begin(115200);

Blynk.begin(auth, ssid, pass);

// You can also specify server:

//Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 8442);

//Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8442);

servo.attach(2); // 2 means D4 pin of ESP8266

}

void loop()

{

Blynk.run(); // You can inject your own code or combine it with other sketches.


}
