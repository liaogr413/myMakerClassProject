unsigned int  VRX=0;
unsigned int  VRY=0;
bool  SW=0;
bool  XClick=0;
void setup()
{
  Serial.begin(115200);
  pinMode(A0, INPUT);
  pinMode(9, OUTPUT);
}
void loop()
{
  VRX = analogRead(A0);
  Serial.print(",X==");
  Serial.print(VRX);
  VRX = (map(VRX,0,1023,0,255));
  analogWrite(9,VRX);
  Serial.print(",PWM==");
  Serial.println(VRX);
  delay(100);
}
