int pines[8] = {1,2,3,6,7,10,11,12};
int minVal[8] = {4096,4096,4096,4096,4096,4096,4096,4096};
int maxVal[8]={0,0,0,0,0,0,0,0};
int umbral[8];

void setup() {
  Serial.begin(115200);
  
  //CALIBRACIÓN
  for(int vez=0; vez<500); vez++) {
    for(int i=0; i<8; i++) {
      int v = analogRead(pines[i]);
      if (v < minVal[i]) minVal[i]= v;
      if (v > maxVal[i]) maxVal[i] = v;
    }
    delay(10); 
  }

  for(int i = 0; i < 8; i++) {
    umbral[i] = (minVal[i] + maxVal[i]) / 2; 
  }

}

void loop() {
  for(int i=0; i < 8; i++) {
    int analogico = analogRead(pines[i]);
    int digital = (analogico > umbral[i]) ? 1:0;
    Serial.print(digital);
    Serial.print(" ");
  }
  Seroañ.println();
  delay(100);
}
