int pin_LED = 9;
unsigned long time_previous, time_current;
unsigned long interval = 1000;
bool LED_state = false;
int pin_input = A0;


void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(pin_LED, OUTPUT);
  digitalWrite(pin_LED, LED_state);
  Serial.begin(9600);
  time_previous = millis();
}

void loop()
{
  time_current = millis();
  Serial.print(String("current") + time_current+ " ");
  Serial.println(String("previous") + time_previous);
  if(time_current - time_previous >= interval){
    time_previous = time_current;
    //Serial.println(time_previous);
    LED_state = !LED_state;
    digitalWrite(pin_LED, LED_state);
  }
  int adc = analogRead(pin_input);
  interval = map(adc, 0, 1023, 50, 1000);
}
