char s;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  if(Serial.available())
  {
    s = Serial.read();
  }
  if (s == 'R')
  {
    digitalWrite(13,1);
    digitalWrite(12,0);
    digitalWrite(11,0);
  }
  if (s == 'Y')
  {
    digitalWrite(13,0);
    digitalWrite(12,1);
    digitalWrite(11,0);
  }
  if (s == 'G')
  {
    digitalWrite(13,0);
    digitalWrite(12,0);
    digitalWrite(11,1);
  }
  if (s == 'X')
  {
    digitalWrite(13,0);
    digitalWrite(12,0);
    digitalWrite(11,0);
    
  }
  if (s == 'A')
  {
    digitalWrite(13,1);
    digitalWrite(12,0);
    digitalWrite(11,0);
    delay(1000);
    digitalWrite(13,0);
    digitalWrite(12,1);
    digitalWrite(11,0);
    delay(1000);
    digitalWrite(13,0);
    digitalWrite(12,0);
    digitalWrite(11,1);
    delay(1000);
  }
}
  
  
