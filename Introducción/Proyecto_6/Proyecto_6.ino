float V2;
int readVal, analogPin = A2, ledPin = 10; 

void setup() {
  // put your setup code here, to run once:
  pinMode(analogPin, INPUT);
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(analogPin);
  V2 = (5. * readVal) / 1023.;

  if(V2 > 1.0) {
    digitalWrite(ledPin, HIGH);
  }

  Serial.println(V2); 
  delay(300) ;
}
