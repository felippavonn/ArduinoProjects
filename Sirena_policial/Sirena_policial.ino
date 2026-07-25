int rojo = 3, azul = 4, sirena = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(sirena, OUTPUT);
  pinMode(rojo, OUTPUT);
  pinMode(azul, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(rojo, HIGH);
  digitalWrite(azul, LOW);
  digitalWrite(sirena, HIGH);
  delay(200);
  digitalWrite(rojo, LOW);
  digitalWrite(azul, HIGH);
  digitalWrite(sirena, LOW);
  delay(200);
}
