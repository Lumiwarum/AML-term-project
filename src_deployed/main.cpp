#include <Arduino.h>
#include <Wire.h>
#include <MPU6050.h>
#include "model.h"

MPU6050 mpu;
Eloquent::ML::Port::RandomForest classifier;

float data[60];
int step = 0;
int counter_for_print = 0;
void update_samples()
{
  int16_t ax, ay, az, gx, gy, gz;
  mpu.getAcceleration(&ax, &ay, &az);
  mpu.getRotation(&gx, &gy, &gz);
  data[step]=ax;
  data[step+10]=ay;
  data[step+20]=az;
  data[step+30]=gx;
  data[step+40]=gy;
  data[step+50]=gz;
  step = (step+1) % 10;
}

void setup() {
  Serial.begin(9600);
  Serial.flush();
  Wire.begin();
  mpu.initialize();
}

void classify() {
    int predicted = classifier.predict(data);
    Serial.print("Predicted class: ");
    switch (predicted) {
 case 0:
    Serial.println("Rest");
    break;
 case 1:
    Serial.println("Clokwise circle");
    break;
 case 2:
    Serial.println("CounterClokwise circle");
    break;
 case 3:
    Serial.println("Stabbing");
    break;
 default:
    Serial.println("ERROR");
}

}

void loop() {
  update_samples();

  
  counter_for_print = (counter_for_print+1) %10 ;
  if (counter_for_print == 0){
    Serial.print(millis()); Serial.print(", ");
    classify();
  }
  
  delay(10);
}


