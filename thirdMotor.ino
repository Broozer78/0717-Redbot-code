#include <RedBot.h>
RedBotMotors motors;

void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
  analogWrite(11, 50);
  delay(500);
  analogWrite(11, 0);

}

void loop() {
  // put your main code here, to run repeatedly:

}
