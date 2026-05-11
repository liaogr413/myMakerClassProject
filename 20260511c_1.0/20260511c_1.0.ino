void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}
void loop()
{
  Go(255, 255);
  delay(10000);
  Go(0, 0);
  delay(2000);
  Go(-255, -255);
  delay(10000);
  Go(0, 0);
  delay(2000);
  Go(255, 0);
  delay(10000);
  Go(0, 0);
  delay(2000);
  Go(0, 255);
  delay(10000);
  Go(0, 0);
  delay(2000);
}
void Go(int speedL, int speedR) 
{
  if (speedL > 0) 
  {
    digitalWrite(2,HIGH);
    analogWrite(3,(255 - speedL));
  } 
  else if (speedL == 0) 
  {
    digitalWrite(2,LOW);
    analogWrite(3,0);
  } 
  else if (speedL < 0) 
  {
    digitalWrite(2,LOW);
    analogWrite(3,(0 - speedL));
  }
  if (speedR > 0) 
  {
    digitalWrite(4,HIGH);
    analogWrite(5,(255 - speedR));
  } 
  else if (speedR == 0) 
  {
    digitalWrite(4,LOW);
    analogWrite(5,0);
  } 
  else if (speedR < 0) 
  {
    digitalWrite(4,LOW);
    analogWrite(5,(0 - speedR));
  }
}
