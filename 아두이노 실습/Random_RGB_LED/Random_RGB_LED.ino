void setup(){
  randomSeed(analogRead(A0));
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop(){
  analogWrite(11, random(256));
  analogWrite(10, random(256));
  analogWrite(9, random(256));
  delay(1000);
}
