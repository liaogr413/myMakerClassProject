unsigned int  VRX=0;
unsigned int  VRY=0;
bool  SW=0;

void setup()
{
  Serial.begin(115200);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(2, INPUT_PULLUP);

}


void loop()
{
  VRX = analogRead(A0);
  VRY = analogRead(A1);
  SW = digitalRead(2);
  Serial.print(",X==");
  Serial.print(VRX);
  Serial.print(",Y==");
  Serial.print(VRY);
  Serial.print(",SW==");
  Serial.print(SW);
  if (SW == 0) {
    Serial.println(",Button Down");
  } else {
    Serial.println(",Button Up");
  }
  delay(200);

}
