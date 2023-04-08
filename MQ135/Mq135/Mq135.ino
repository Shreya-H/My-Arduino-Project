#include <MQ135.h>

// define pins
#define SENSOR_PIN 20
//#define LED_PIN 2

// initialize MQ135 sensor
MQ135 gasSensor = MQ135(SENSOR_PIN);

void setup() {
  Serial.begin(9600);
  //pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // read the gas level from the sensor
  float gasValue = gasSensor.getPPM();
  Serial.print("Gas value: ");
  Serial.print(gasValue);
  Serial.println(" ppm");

  // turn on LED if gas level exceeds threshold
  /*if (gasValue > 1000) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }*/

  delay(1000); // wait for 1 second
}
