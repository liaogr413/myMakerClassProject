void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}


void loop()
{
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  delay(10000);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  delay(2000);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  delay(10000);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  // LEFT
  delay(2000);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  delay(10000);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  delay(2000);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  delay(10000);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  delay(2000);
  // RIGHT
}
