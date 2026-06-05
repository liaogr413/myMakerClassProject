char  key_input=0;

void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(13,HIGH);
  
}

void loop()
{
  if (Serial.available() > 0) 
  {
    key_input = Serial.read();
  }
  if (key_input == 'Z') 
  {
    digitalWrite(13,HIGH);
  }
  if (key_input == 'z') 
  {
    digitalWrite(13,LOW);
  }
  if (key_input == 'F') 
  {
    Go(255, 255);
  }
  if (key_input == 'B') 
  {
    Go(-255, -255);
  }
  if (key_input == 'L') 
  {
    Go(0, 255);
  }
  if (key_input == 'R') 
  {
    Go(255, 0);
  }
  if (key_input == 'S') 
  {
    Go(0, 0);
  }

}
/**
 * 終極GO函式
 */
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
    analogWrite(3,(0 - speedR));
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
