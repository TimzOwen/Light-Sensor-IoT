//Light controller using LDR and light sensor
//By code ninja Owen
#define LED 11

void setup() {
 
 pinMode(11, OUTPUT);

}

void loop() {
  int value = analogRead(0);

  analogWrite(11, value/2);

}
