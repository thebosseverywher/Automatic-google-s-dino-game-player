#include<Servo.h>
int lrd = 0;
Servo serX;
void setup() {
  put your setup code here, to run once:
  pinMode(A0, INPUT);
  Serial.begin(9600);serX.attach(9);
  serX.write(90);
  pinMode(13,OUTPUT);
}

void loop() {
  put your main code here, to run repeatedly:
  lrd = analogRead(A0);
  Serial.println(lrd);
  if (lrd < 70){
    serX.write(125);
    delay(300);
    serX.write(90);

     }
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
  delay(500);
  }