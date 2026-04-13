float  object_distance=21
void setup()
{
  Serial.begin(115200);
  pinMode(13, OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,INPUT);
  digitalWrite(13,LOW);

}


void loop()
{
  digitalWrite(13,HIGH);
  echo_time_us = ultrasonic_distance_6_7( );
  sound_speed = (object_distance / (echo_time_us / 2)) * 10000;
  Serial.print("聲波速率==");
  Serial.print(sound_speed);
  Serial.println("m/s");
  digitalWrite(13,LOW);
  delay(1000);

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
  return sonic_duration;
}
