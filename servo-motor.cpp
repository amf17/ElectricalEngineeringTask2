
#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int angle =90;    // initial angle  for servo
int angleStep =5;

#define LEFT 7   // pin 12 is connected to left button
#define RIGHT  5  // pin 2 is connected to right button

void setup() {
  // Servo button demo by Robojax.com
  Serial.begin(9600);          //  setup serial
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  pinMode(LEFT,INPUT_PULLUP); // assign pin 12 ass input for Left button
  pinMode(RIGHT,INPUT_PULLUP);// assing pin 2 as input for right button
  myservo.write(0);// send servo to the middle at 90 degrees
 Serial.println("Robojax Servo Button ");
}

void loop() {
  // Servo button demo by Robojax.com
  while(digitalRead(RIGHT) == LOW){

      myservo.write(180); // move the servo to desired angle
      Serial.print("Moved to: ");
      Serial.print(angle);   // print the angle
      Serial.println(" degree");
       }
    
    
  delay(100); // waits for the servo to get there
  // while
 // Servo button demo by Robojax.com

  while(digitalRead(LEFT) == LOW){

    // Servo button demo by Robojax.com

      myservo.write(0); // move the servo to desired angle
      Serial.print("Moved to: ");
      Serial.print(angle);   // print the angle
      Serial.println(" degree");
       }
    
    
  delay(100); // waits for the servo to get there
  

  
}