char  key_input=0;

void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop()
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
}
