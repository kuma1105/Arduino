int data;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
}

void loop() { 
  // put your main code here, to run repeatedly:
  while(Serial.available()){
    data = Serial.read();
  }

  if(data == '1'){
    digitalWrite(13, HIGH);
  } else if (data == '0'){
    digitalWrite(13, LOW);
  }
}
