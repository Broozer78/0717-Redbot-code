#include <RedBot.h>

RedBotMotors motors; 

void setup()
{
  Serial.begin(9600);
  //third motor
  //pin setup
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(3, INPUT);


  
  
}

void loop()
{
  /*
  //up
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  delay(450);

  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  
  //down
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);
  delay(300);
  
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
*/

//button press to start
  if(digitalRead(3)==LOW)
  {
    
    //main program
    motors.drive(150);
    delay(2000);
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH);
    delay(400);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    motors.brake();
    motors.pivot(150, 375);
    motors.drive(150);
    delay(1700);
    motors.brake();
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
    delay(300);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
    motors.pivot(150, 375);
    motors.drive(150);
    delay(2300);
    motors.brake();
    motors.pivot(-150, 375);
    motors.drive(150);
    delay(1000);
    motors.brake();
    motors.pivot(-150, 375);
    motors.drive(150);
    delay(750);
    motors.brake();
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH);
    delay(400);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    delay(30);
    motors.drive(225);
    delay(7500);
    motors.brake();
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
    delay(300);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
    motors.pivot(150, 375);
    motors.drive(150);
    delay(750);
    motors.brake();
    
    Serial.println("Button is Pressed");
    delay(100);
  }
}




