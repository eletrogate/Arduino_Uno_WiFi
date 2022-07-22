void setup() {
  pinMode(10, OUTPUT);
  digitalWrite(10, HIGH);
}

void loop() {
  digitalWrite(10, !digitalRead(10));
  delay(500);
}
