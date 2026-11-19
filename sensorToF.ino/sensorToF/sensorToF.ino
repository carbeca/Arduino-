#include <Wire.h>
#include <VL53L1X.h>

VL53L1X sensor;

void setup() {
  Serial.begin(115200);
  Wire.begin(8, 9);
  
  sensor.setTimeout(500);
  if(!sensor.init()){
    Serial.println("No se detecta el sensor")
    while(1);
  }

  sensor.startContinuous(50);
}


void loop() {
  int mm = sensor.read();
  float cm= mm/10.0;

  Serial.print(cm);
  Serial.println("cm");
  delay(100);

}
