#include "binary.h"
#include <Stepper.h>      // incluye libreria stepper 
Stepper motor1(2048, 6, 8, 7, 9);   // pasos completos
int config = 0;
char estado;
void setup() 
{
  motor1.setSpeed(3);       // en RPM (valores de 1, 2 o 3 para 28BYJ-48)
  // Inicializa os pinos do DIP Switch como INPUT_PULLUP
  pinMode(5, INPUT);
  
}
 
void loop() 
{
  estado=HardwareSerial.read;
  if (estado==1)
  {
    motor1.step(512);// cantidad de pasos
    delay(5000);
  }
}
