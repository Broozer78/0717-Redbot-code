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

//button press to start
  if(digitalRead(3)==LOW)
  {
    //main program
    //motors.pivot(150, 375);
    motors.drive(150);
    up();
    delay(2850);
    motors.brake();
    motors.pivot(150, 375);
    motors.drive(150);
    down();
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
    //motors.drive(150);
    //delay(1000);
    //motors.brake();
    //motors.pivot(-150, 400);
    up();

    motors.drive(255);
    delay(6000);
    motors.brake();
    motors.pivot(150, 375);
    motors.drive(150);
    delay(500);
    motors.brake();
    down();
    
    Serial.println("Button is Pressed");
    delay(100);
  }
}

void up()
{
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  delay(450);

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




