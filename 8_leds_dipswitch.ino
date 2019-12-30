#include "binary.h"
int config = 0;
const int pinled1=2;
const int pinled2=3;
const int pinled3=4;
const int pinled4=5;
const int pinled5=6;
const int pinled6=7;
const int pinled7=8;
const int pinled8=9;
int bin2int(int numvalues, ...)
{
    int total = 0;
    va_list values;
    va_start(values, numvalues);
 
    for(;numvalues > 0; numvalues--)
        if (!(digitalRead(va_arg(values, int))) )
            total += powint(2, numvalues-1);
 
    va_end(values);
    return total;
} 
int powint(int base, int exponent)
{
    int result = 1;
    for(;exponent > 0; exponent--)
        result *= base;
    return result;
}
void setup() 
{
  // Inicializa os pinos do DIP Switch como INPUT_PULLUP
  pinMode(A0, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(pinled1,OUTPUT);
  pinMode(pinled2,OUTPUT);
  pinMode(pinled3,OUTPUT);
  pinMode(pinled4,OUTPUT);
  pinMode(pinled5,OUTPUT);
  pinMode(pinled6,OUTPUT);
  pinMode(pinled7,OUTPUT);
  pinMode(pinled8,OUTPUT);
}
void loop() 
{
  config = bin2int(4, A0,12,11,10);
  if (config == B1000)
  {
    digitalWrite(pinled1,HIGH);
    digitalWrite(pinled2,HIGH);
    digitalWrite(pinled3,HIGH);
    digitalWrite(pinled4,HIGH);
    digitalWrite(pinled5,HIGH);
    digitalWrite(pinled6,HIGH);
    digitalWrite(pinled7,HIGH);
    digitalWrite(pinled8,HIGH);
    delay(1000);
    digitalWrite(pinled1,LOW);
    digitalWrite(pinled2,LOW);
    digitalWrite(pinled3,LOW);
    digitalWrite(pinled4,LOW);
    digitalWrite(pinled5,LOW);
    digitalWrite(pinled6,LOW);
    digitalWrite(pinled7,LOW);
    digitalWrite(pinled8,LOW);
    delay(1000);
  }
  if(config == B0100)
  {
    digitalWrite(pinled1,HIGH);
    digitalWrite(pinled2,LOW);
    digitalWrite(pinled3,HIGH);
    digitalWrite(pinled4,LOW);
    digitalWrite(pinled5,HIGH);
    digitalWrite(pinled6,LOW);
    digitalWrite(pinled7,HIGH);
    digitalWrite(pinled8,LOW);
    delay(1000);
    digitalWrite(pinled1,LOW);
    digitalWrite(pinled2,HIGH);
    digitalWrite(pinled3,LOW);
    digitalWrite(pinled4,HIGH);
    digitalWrite(pinled5,LOW);
    digitalWrite(pinled6,HIGH);
    digitalWrite(pinled7,LOW);
    digitalWrite(pinled8,HIGH);
    delay(1000);
  }
   if(config == B0010)
  {
    digitalWrite(pinled1,HIGH);
    digitalWrite(pinled2,HIGH);
    digitalWrite(pinled3,LOW);
    digitalWrite(pinled4,LOW);
    digitalWrite(pinled5,HIGH);
    digitalWrite(pinled6,HIGH);
    digitalWrite(pinled7,LOW);
    digitalWrite(pinled8,LOW);
    delay(1000);
    digitalWrite(pinled1,LOW);
    digitalWrite(pinled2,LOW);
    digitalWrite(pinled3,HIGH);
    digitalWrite(pinled4,HIGH);
    digitalWrite(pinled5,LOW);
    digitalWrite(pinled6,LOW);
    digitalWrite(pinled7,HIGH);
    digitalWrite(pinled8,HIGH);
    delay(1000);
  }
  if(config == B0001)
  {
    int z=0;
    for(z;z<=8;z++)
    {
      if(z==1)
      {
        digitalWrite(pinled1,HIGH);
        delay(100);
        digitalWrite(pinled1,LOW);
      }
      if(z==2)
      {
        digitalWrite(pinled2,HIGH);
        delay(100);
        digitalWrite(pinled2,LOW);
      }
      if(z==3)
      {
        digitalWrite(pinled3,HIGH);
        delay(100);
        digitalWrite(pinled3,LOW);
      }
      if(z==4)
      {
        digitalWrite(pinled4,HIGH);
        delay(100);
        digitalWrite(pinled4,LOW);
      }
      if(z==5)
      {
        digitalWrite(pinled5,HIGH);
        delay(100);
        digitalWrite(pinled5,LOW);
      }
      if(z==6)
      {
        digitalWrite(pinled6,HIGH);
        delay(100);
        digitalWrite(pinled6,LOW);
      }
      if(z==7)
      {
        digitalWrite(pinled7,HIGH);
        delay(100);
        digitalWrite(pinled7,LOW);
      }
      if(z==8)
      {
        digitalWrite(pinled8,HIGH);
        delay(100);
        digitalWrite(pinled8,LOW);
      }
    }
    if(z==8)
    z=0;
  }
  else
  {
    digitalWrite(pinled1,LOW);
    digitalWrite(pinled2,LOW);
    digitalWrite(pinled3,LOW);
    digitalWrite(pinled4,LOW);
    digitalWrite(pinled5,LOW);
    digitalWrite(pinled6,LOW);
    digitalWrite(pinled7,LOW);
    digitalWrite(pinled8,LOW);
  }
  
}
