unsigned int  VRX=0;
unsigned int  VRY=0;
bool  SW=0;
bool  XClick=0;

void setup()
{
  Serial.begin(115200);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(2, INPUT_PULLUP);
  pinMode(9, OUTPUT);
  digitalWrite(9,LOW);
}
void loop()
{
  VRX = analogRead(A0);
  VRY = analogRead(A1);
  SW = digitalRead(2);
  Serial.print(",X==");
  Serial.print(VRX);
  if (VRX > 800 || VRX < 300) {
    XClick = 1;
  } else {
    XClick = 0;
  }
  if (XClick == 0) {
    digitalWrite(9,LOW);
    Serial.println("，LED OFF");
  }
  if (XClick == 1) {
    digitalWrite(9,HIGH);
    Serial.println("，LED ON");
  }
  delay(100);
}
