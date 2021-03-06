int slide = 4;

void setup() {
  pinMode(8, OUTPUT);
  pinMode(slide, INPUT);
  Serial.begin(9600);
}

void loop() {
  int switch_ = digitalRead(slide);

  if (switch_ == 1){
    digitalWrite(8, HIGH);
    Serial.println("1");
    delay(100);
  }
  else{
    digitalWrite(8, LOW);
    Serial.println("0");
    delay(100);
  }
}
