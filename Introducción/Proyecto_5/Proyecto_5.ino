int analogPin = A0, dt = 500, analogVal;
float V2;
void setup() {
  // put your setup code here, to run once:
  pinMode(analogPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogVal = analogRead(analogPin);
  V2 = (5. * analogVal) / 1023.; // Con el punto entiende coma con cero
  Serial.println(V2);
  delay(dt);
}
