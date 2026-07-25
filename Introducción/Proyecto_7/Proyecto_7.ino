int rojo = 6, amarillo = 5, i=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(rojo, OUTPUT);
  pinMode(amarillo, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(i=0;i<3;i++) {
    digitalWrite(amarillo, HIGH);
    delay(200);
    digitalWrite(amarillo, LOW);
    delay(200);
    digitalWrite(rojo, HIGH);
    delay(200);
    digitalWrite(rojo, LOW);
    delay(200);
  }
  delay(1000);
}
