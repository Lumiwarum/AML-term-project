#include <Arduino.h>
#include <Wire.h>
#include <MPU6050.h>

MPU6050 mpu;

void setup() {
  Serial.begin(9600);
  Serial.flush();
  Wire.begin();
  mpu.initialize();
}

void loop() {
  // read accelerometer and gyroscope data
  int16_t ax, ay, az, gx, gy, gz;
  mpu.getAcceleration(&ax, &ay, &az);
  mpu.getRotation(&gx, &gy, &gz);

  Serial.print(millis()); Serial.print(", ");
  // print the data to serial monitor
  Serial.print(ax); Serial.print(", ");
  Serial.print(ay); Serial.print(", ");
  Serial.print(az); Serial.print(", ");

  Serial.print(gx); Serial.print(", ");
  Serial.print(gy); Serial.print(", ");
  Serial.println(gz); 

  delay(10); // wait for a bit before reading again
}