int azul = 8, verde = 9, rojo = 10;
String msg1 = "Bienvenido, porfavor ingrese que led quiere encender.";
String rta;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(rojo, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println();
  Serial.println(msg1);
  while (Serial.available() == 0) {
  }
  rta = Serial.readString();
  rta.trim();
  rta.toLowerCase(); // Así 'Rojo', 'ROJO', 'roJo' funcionan igual
  if(rta == "rojo") {
    digitalWrite(rojo, HIGH);
  }
  else if (rta == "verde") {
    digitalWrite(verde, HIGH);
  }
  else if (rta == "azul") {
    digitalWrite(azul, HIGH);
  }
  else if (rta == "apagar rojo") {
    digitalWrite(rojo, LOW);
  }
  else if (rta == "apagar azul") {
    digitalWrite(azul, LOW);
  }
  else if (rta == "apagar verde") {
    digitalWrite(verde, LOW);
  }
  else if (rta == "stop") {
    digitalWrite(azul, LOW);
    digitalWrite(rojo, LOW);
    digitalWrite(verde, LOW);
  }
}
