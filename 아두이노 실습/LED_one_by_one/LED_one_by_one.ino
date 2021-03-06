int pin[] = {2,3,4,5};
int state = 0;

void setup()
{
  for(int i = 0; i<4; i++){
    pinMode(pin[i], OUTPUT);
    digitalWrite(pin[i], LOW);
  }
}

void loop()
{
  for(int i = 0; i < 4; i++){
    if(state == i){
      digitalWrite(pin[i], HIGH);
    } else{
      digitalWrite(pin[i], LOW);
    }
  }
  state = (state + 1)%4;
  delay(500);
}
