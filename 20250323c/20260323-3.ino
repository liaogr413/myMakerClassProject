bool  buttonState=0;
unsigned long  debounceDelay=20;
unsigned long  clickCount=0;
bool  ledstate=0;
bool  buttonDown=1;
void setup()
{
  Serial.begin(115200);
  pinMode(11, OUTPUT);
  pinMode(2, INPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  digitalWrite(11,LOW);
}
void loop()
{
  buttonState = digitalRead(2);
  if (buttonState == buttonDown) {
    delay(20);
    while ((digitalRead(2) == buttonDown)) {
    }
    ledstate = !ledstate;
    clickCount = clickCount + 1;
    Serial.print("Click Count==");
    Serial.println(clickCount);
    if (clickCount % 5 == 1) {
      digitalWrite(9,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(11,LOW);
    } else if (clickCount % 5 == 2) {
      digitalWrite(9,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(11,LOW);
    } else if (clickCount % 5 == 3) {
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      digitalWrite(11,HIGH);
    } else if (clickCount % 5 == 4) {
      digitalWrite(9,HIGH);
      digitalWrite(11,HIGH);
      digitalWrite(10,HIGH);
    } else if (clickCount % 5 == 0) {
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      digitalWrite(11,LOW);
    }
  }
}
