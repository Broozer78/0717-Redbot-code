
#include <RedBot.h> 

RedBotMotors motors;

void setup()
{

  //pin setup
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);

  //motors.pivot(150, 375);
  motors.drive(150);
  delay(2850);
  motors.brake();
  motors.pivot(150, 375);
  motors.drive(150);
  delay(2100);
  motors.brake();
  motors.pivot(150, 475);
  motors.drive(150);
  delay(2350);
  motors.brake();
  motors.pivot(-150, 450);
  motors.drive(150);
  delay(1000);
  motors.brake();
  motors.pivot(-150, 375);
 // motors.drive(150);
  //delay(1000);
  //motors.brake();
  //motors.pivot(-150, 400);


  motors.drive(255);
  delay(6000);
  motors.brake();
  motors.pivot(150, 375);
  motors.drive(150);
  delay(500);
  motors.brake();
}

void up()
{
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  delay(500);

  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH); 
}

void down()
{
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);
  delay(300);
  
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
}

void loop(){}





