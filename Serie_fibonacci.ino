const int pinled1=11;
const int pinled2=10;
const int pinled3=9;
char estado;
#include<SoftwareSerial.h>
void setup() {
  // put your setup code here, to run once:
  pinMode(pinled1,OUTPUT);
  pinMode(pinled2,OUTPUT);
  pinMode(pinled3,OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  // put your main code here, to run repeatedly:
    if(Serial.available()>0)
    {
      estado=Serial.read();
    }  
  if(estado=='1')
  {
    analogWrite(pinled3,0);//APAGAR
    analogWrite(pinled2,0);//APAGAR
    analogWrite(pinled1,0);//APAGAR
    //delay(1000);
  }
  if(estado=='2')
  {
    for(int w=0;w<=32;w++)
    {
      delay(1000);
      if(w==1||w==2||w==3||w==5||w==8||w==13||w==21)
      {
        analogWrite(pinled3,255);//ROJO
        delay(1000);
        analogWrite(pinled3,0);//ROJO
      }
      estado=Serial.read();
      if(estado=='1')
      {
        w=32;
      }
    }
  }  
  if(estado=='3')
  {
    for(int r=0;r<=32;r++)
    {
      delay(1000);
      if(r==2||r==3||r==5||r==7||r==11||r==13||r==17||r==19||r==23||r==29||r==31)
      {
        analogWrite(pinled1,255);//VERDE
        delay(1000);
        analogWrite(pinled1,0);//VERDE
        //delay(1000);
      }
      estado=Serial.read();
      if(estado=='1')
      {
        r=32;
      }
    }
  }
  if(estado=='4')
  {
    for(int e=0;e<=32;e++)
    {
      delay(1000);
      if(e==0||e==2||e==4||e==6||e==8||e==10||e==12||e==14||e==16||e==18||e==20||e==22||e==24||e==26||e==28||e==30||e==32)
      {
        analogWrite(pinled2,255);//AZUL
        delay(1000);
        analogWrite(pinled2,0);//AZUL
        //delay(1000);
      }
      estado=Serial.read();
      if(estado=='1')
      {
        e=32;
      }
    }
  }
}
