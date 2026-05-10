void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}
void loop()
{
  forward(191);
  delay_second2(10);
  stop_func();
  delay_second2(2);
  back(191);
  delay_second2(10);
  stop_func();
  delay_second2(2);
  left(191);
  delay_second2(10);
  stop_func();
  delay_second2(2);
  right(191);
  delay_second2(10);
  stop_func();
  delay_second2(2);
}
//75%出力
//本版本改用函式積木+局域變數
//定義前進
void forward(int Forward_pwm) 
{
  digitalWrite(2,HIGH);
  analogWrite(3,(255 - Forward_pwm));
  digitalWrite(4,HIGH);
  analogWrite(5,(255 - Forward_pwm));
}
//定義後退
//stop疑似撞名，加上func表自定義函式
void stop_func() 
{
  digitalWrite(2,LOW);
  analogWrite(3,0);
  digitalWrite(4,LOW);
  analogWrite(5,0);
}
//定義右轉
void right(int right_pwm) 
{
  digitalWrite(2,HIGH);
  analogWrite(3,(255 - right_pwm));
  digitalWrite(4,LOW);
  analogWrite(5,0);
}
//定義左轉
void left(int left_pwm) 
{
  digitalWrite(2,LOW);
  analogWrite(3,0);
  digitalWrite(4,HIGH);
  analogWrite(5,(255 - left_pwm));
}
//定義倒車
void back(int back_pwm) 
{
  digitalWrite(2,LOW);
  analogWrite(3,back_pwm);
  digitalWrite(4,LOW);
  analogWrite(5,back_pwm);
}
//懶得算毫秒
void delay_second2(int delay_second) 
{
  delay((delay_second * 1000));
}
