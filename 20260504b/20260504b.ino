void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}
    
void loop()
{
  Forward();
  delay(10000);
  Stop();
  delay(2000);
  Back();
  delay(10000);
  Stop();
  delay(2000);
  Left();
  delay(10000);
  Stop();
  delay(2000);
  Right();
  delay(10000);
  Stop();
  delay(2000);
}
//75%出力
// 定義倒車
void Back()
{
  digitalWrite(2,LOW);
  analogWrite(3,191);
  digitalWrite(4,LOW);
  analogWrite(5,191);
}
// 定義前進
void Forward()
{
  digitalWrite(2,HIGH);
  analogWrite(3,63);
  digitalWrite(4,HIGH);
  analogWrite(5,63);
}
// 定義停止
void Stop()
{
  digitalWrite(2,LOW);
  analogWrite(3,63);
  digitalWrite(4,LOW);
  analogWrite(5,63);
}
// 定義右轉
void Right() 
{
  digitalWrite(2,HIGH);
  analogWrite(3,63);
  digitalWrite(4,LOW);
  analogWrite(5,63);
}
// 定義左轉
void Left()
{
  digitalWrite(2,LOW);
  analogWrite(3,63);
  digitalWrite(4,HIGH);
  analogWrite(5,63);
}
