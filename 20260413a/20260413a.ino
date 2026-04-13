float  distance=0;
void setup()
{
  Serial.begin(115200);
  pinMode(9, OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,INPUT);
  digitalWrite(9,LOW);
}
void loop()
{
  digitalWrite(9,HIGH);
  distance = ultrasonic_distance_6_7( );
  Serial.print("距離==");
  Serial.print(distance);
  Serial.println("cm");
  digitalWrite(9,LOW);
  delay(10);
}
float ultrasonic_distance_6_7() {
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  delayMicroseconds(5);
  digitalWrite(6, HIGH);
  delayMicroseconds(10);
  digitalWrite(6, LOW);
  unsigned long sonic_duration = pulseIn(7, HIGH);
  float distance_cm = (sonic_duration / 2.0) / 29.1;
  return distance_cm;
}
