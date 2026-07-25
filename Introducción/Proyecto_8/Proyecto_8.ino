int blink, i, ledPin = 8, dt = 300, n = 100;
float radius, pi = 3.1415, area;
String msg1 = "Por favor ingresa un número de parpadeos: ";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg1);
  while(Serial.available() == 0) {
    //VACÍO
  }
  blink = Serial.parseInt(); //parse = analizar
 
  for (i=0; i<blink; i++) { 
    digitalWrite(ledPin, HIGH);
    delay(dt);
    digitalWrite(ledPin, LOW);
    delay(dt);
  }
}
