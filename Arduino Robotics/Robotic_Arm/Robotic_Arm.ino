//Author: Keerthan R Varma
//Robotic Arm Control

#include <Servo.h>

Servo myservo; 
Servo ser1;
Servo ser2;
Servo ser3;

int con1 = 0; 
int con2 = 1;
int con3 = 2;
int con4 = 3;
int val; 
int val1;
int val2;
int val3;

void setup()
{
myservo.attach(7); 
ser1.attach(6);
ser2.attach(5);
ser3.attach(4);
}

void loop()
{
val = analogRead(con1); 
val = map(val, 0, 1023, 0, 179); 
val1 = analogRead(con2);
val1 = map(val1, 0, 1023, 0, 179);
val2 = analogRead(con3);
val2 = map(val2, 0, 1023, 0, 179);
val3 = analogRead(con4);
val3 = map(val3, 0, 1023, 0, 179);

myservo.write(val);
ser1.write(val1);
ser2.write(val2);
ser3.write(val3);
delay(15); 
}
