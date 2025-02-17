
#include <RedBot.h> 

RedBotMotors motors; 
RedBotBumper bumper = RedBotBumper(3);
int bumpState;
int bumpTime = 0;

void setup()
{
  motors.drive(150);
  delay(2500);
  motors.brake();
  motors.pivot(150, 375);
  motors.drive(150);
  delay(1700);
  motors.brake();
  motors.pivot(150, 375);
  motors.drive(150);
  delay(2200);
  motors.brake();
  motors.pivot(-150, 375);
  motors.drive(150);
  delay(1000);
  motors.brake();
  motors.pivot(-150, 375);
  motors.drive(150);
  delay(750);
  motors.brake();
  delay(30);
  motors.drive(225);
  delay(7500);
  motors.brake();
  motors.pivot(150, 375);
  motors.drive(150);
  delay(750);
  motors.brake();
}

void loop()
{
  
}




