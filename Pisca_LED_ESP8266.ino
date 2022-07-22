void setup() {
  pinMode(16, OUTPUT);
  digitalWrite(16, HIGH);
}

void loop() {
  digitalWrite(16, !digitalRead(16));
  delay(500);
}
