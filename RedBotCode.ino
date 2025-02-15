
#include <RedBot.h> 

RedBotMotors motors; 
RedBotBumper bumper = RedBotBumper(3);
int bumpState;
int bumpTime = 0;

void setup()
{
  motors.drive(150);

  while (bumpTime < 3){
  motors.drive(150);
  bumpState = bumper.read();

  if (bumpState == LOW){
    if(bumpTime == 0){
      reverse();
      motors.pivot(150, 400);
    }
    if (bumpTime > 0){
      reverse();
      motors.pivot(-150, 400);
    }
    bumpTime++;
  }
  }

  motors.brake();
}

void loop()
{
  
}

void reverse()
{
  motors.drive(-150);
  delay(500);
  motors.brake();
  delay(100);  
}




