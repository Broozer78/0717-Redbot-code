#include <RedBot.h>

RedBotMotors motors; 

void setup()
{
  //third motor
  //pin setup
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);

  //up
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  delay(500);

  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  
  //down
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);
  delay(300);
  
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);

  //main program
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




