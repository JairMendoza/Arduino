#include "binary.h"
#include <Stepper.h>      // incluye libreria stepper 
Stepper motor1(2048, 6, 8, 7, 9);   // pasos completos
int config = 0;
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
  motor1.setSpeed(3);       // en RPM (valores de 1, 2 o 3 para 28BYJ-48)
  // Inicializa os pinos do DIP Switch como INPUT_PULLUP
  pinMode(A0, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
}
 
void loop() 
{
  config = bin2int(4, A0,12,11,10);
  if (config == B1000)
  {
    motor1.step(512);// cantidad de pasos
    delay(5000);
  }
  if(config == B0100)
  {
    motor1.step(1024);// cantidad de pasos
    delay(5000);
  }
   if(config == B0010)
  {
    motor1.step(1536);// cantidad de pasos
    delay(5000);
  }
   if(config == B0001)
  {
    motor1.step(2048);// cantidad de pasos
    delay(5000);
  }
  
}
