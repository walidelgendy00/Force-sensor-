const int sensor =2;
const int IN1=6;
const int IN2=5;
int reading =0;

void setup()
{
  pinMode(sensor,OUTPUT);
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
 

}

void loop()
{
  if(digitalRead(sensor)==1)
{
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);}
 else
 {   digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);}


}