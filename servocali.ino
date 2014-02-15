#include <Servo.h> 

Servo myservo;

void setup()
{
  myservo.attach(9); // attach the servo to the pin 9 
  Serial.begin(9600);
}

void loop()
{
  for (int i=0; i<=180; i++)
  {
    Serial.print("current setting: ");
    Serial. println(i);
    myservo.write(i);
    if (i>70 and i <110)
    {
      delay(3000); // if we are near the value, delay is longer, so it's easier to notice
    } else {
      delay(1000);
    }
  }
}
