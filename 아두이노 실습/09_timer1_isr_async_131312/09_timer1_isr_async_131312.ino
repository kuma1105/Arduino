#include <TimerOne.h>
 
void setup() { 
  Serial.begin(115200); 

  Timer1.initialize(1000); // 1000us = 1ms = 0.001s 1초에 1000번 호출
  Timer1.attachInterrupt( timerIsr ); 
}
 
void loop() {
  noInterrupts();
  Serial.println("| ");
  interrupts();
}

void timerIsr() {
  Serial.println(" ]");
}
