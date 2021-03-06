void setup() {
  pinMode(13, OUTPUT);
  pinMode(8, INPUT);
}

void loop() {
  int value = digitalRead(8);

  if (value == HIGH) {
    digitalWrite(13, HIGH);
  }
  else {
    digitalWrite(13, LOW);
  }
}
