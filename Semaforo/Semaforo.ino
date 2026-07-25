int rojo = 3, amarillo = 4, verde = 5; 
void setup() {
  // put your setup code here, to run once:
  pinMode(rojo, OUTPUT);
    pinMode(amarillo, OUTPUT);
      pinMode(verde, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(rojo, HIGH);
  analogWrite(rojo, 100);
  delay(5000);
  digitalWrite(amarillo, HIGH);
  analogWrite(amarillo, 255);
  delay(2000);
  digitalWrite(rojo, LOW);
  digitalWrite(amarillo, LOW);
  digitalWrite(verde, HIGH);
  analogWrite(verde, 100);
  delay(5000);
  digitalWrite(amarillo, HIGH);
  analogWrite(amarillo, 255);
  digitalWrite(verde, LOW);
  delay(2000);
  digitalWrite(amarillo, LOW);
}
