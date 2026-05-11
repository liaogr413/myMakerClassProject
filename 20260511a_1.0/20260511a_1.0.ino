void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}
void loop()
{
  GoL(255);
  delay(10000);
  GoL(127);
  delay(10000);
  GoL(0);
  delay(2000);
  GoL(-127);
  delay(10000);
  GoL(-255);
  delay(10000);
  GoL(0);
  delay(2000);
}

void GoL(int speedL) 
{
  if (speedL > 0) 
  {
    if (speedL < 150) 
    {
      digitalWrite(2,HIGH);
      analogWrite(3,(255 - 150));
      delay(60);
    }
    digitalWrite(2,HIGH);
    analogWrite(3,(255 - speedL));
  } 
  else if (speedL == 0) 
  {
    digitalWrite(2,LOW);
    analogWrite(3,speedL);
  } 
  else if (speedL < 0) 
  {
    if (0 - speedL < 150) 
    {
      digitalWrite(2,LOW);
      analogWrite(3,150);
      delay(60);
    }
    digitalWrite(2,LOW);
    analogWrite(3,(0 - speedL));
  }
}
