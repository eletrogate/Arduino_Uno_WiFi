void setup() {
  pinMode(16, INPUT);
  Serial.begin(9600);
}

void loop() {
  if(!digitalRead(16))  {
    delay(50);
      if(!digitalRead(16))  {
        Serial.write('X');  
        while(!digitalRead(16)); }
  }
}
