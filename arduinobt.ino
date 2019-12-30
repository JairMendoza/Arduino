void setup() 
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
      digitalWrite(13,LOW);

 }

void loop() {
  while(Serial.available())
  {
    char dato=Serial.read();
    if(dato=='1')
    {
      digitalWrite(13,HIGH);
      }
    else
    {
      digitalWrite(13,LOW);
    }
    }

}
