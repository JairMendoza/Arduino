const int ledr=11;
  const int ledg=10;
  const int ledb=9;
  int x;
  int y;
void setup() 
{
  // put your setup code here, to run once:
  pinMode(ledr,OUTPUT);
  pinMode(ledg,OUTPUT);
  pinMode(ledb,OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  /*for(x=0;x<256;x++)
  {
    if(y==0)
    {
    analogWrite(ledr,x);
    delay(2);
    }
    if(y==1)
    {
      analogWrite(ledg,x);
      delay(2); 
    }
    if(y==2)
    {
      analogWrite(ledb,x);
      delay(2);
    }
  } 
  for(x=255;x>=0;x--)
  {
    if(y==0)
    {
    analogWrite(ledr,x);
    delay(2);
    }
    if(y==1)
    {
      analogWrite(ledg,x);
      delay(2); 
    }
    if(y==2)
    {
      analogWrite(ledb,x);
      delay(2);
    }
  }
  y++;
  if(y>=3)
  {
    y=0;
  }*/
}
