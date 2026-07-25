int blink, i, ledPin = 8, dt = 300, n = 100;
float radius, pi = 3.1415, area;
String msg1 = "Escribe el radio de tu circunferencia: ";
String msg2 = "El área es de: ";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println();
  Serial.println(msg1);
  while(Serial.available() == 0) {
    //VACÍO
  }
  radius = Serial.parseFloat();
  area = pi*radius*radius;
  Serial.print(msg2);
  Serial.println(area);
}