void setup() {
  pinMode(10, OUTPUT);
  Serial.begin(9600);
  digitalWrite(10, LOW);
}

void loop() {
  if(Serial.available())
    if(Serial.read() == 'X')
      digitalWrite(10, !digitalRead(10));
}
