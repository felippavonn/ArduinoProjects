int blueLed = 9;
int brillo1 = 50; //recomendado variables en inglés
int brillo2 = 100;
int brillo3 = 150;
int brillo4 = 200;
int brillo5 = 255;

void setup() {
  // put your setup code here, to run once:
  pinMode(blueLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(blueLed, brillo1);
  delay(100);
    analogWrite(blueLed, brillo2);
    delay(100);
      analogWrite(blueLed, brillo3);
      delay(100);
        analogWrite(blueLed, brillo4);
        delay(100);
         analogWrite(blueLed, brillo5);
          delay(100);
}
