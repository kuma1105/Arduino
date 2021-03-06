void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop() {
  int data = analogRead(A0);
  Serial.println(data);
  delay(100);
}
