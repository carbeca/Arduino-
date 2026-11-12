int AIN1=4;
int AIN2=5;

void setup() {
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
}

void loop() {
//AVANZAR
analogwrite(AIN1,150);
analogwrite(AIN2,0);
delay(2000);

//PARAR
analogwrite(AIN1, 0);
analogwrite(AIN2, 0);
delay(1000);

//RETROCEDER
analogwrite(AIN1, 0);
analogwrite(AIN2, 150);
delay(2000); 

//PARAR
analogwrite(AIN1, 0);
analogwrite(AIN2, 0);
delay(1000);

}
