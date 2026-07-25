void setup() {
  // Solo se ejecuta una vez
  pinMode(13, OUTPUT);
}

void loop() {
  // se ejecuta repetidamente
  digitalWrite(13, HIGH);
  delay(13);
  digitalWrite(13, LOW);
  delay(13);
}
