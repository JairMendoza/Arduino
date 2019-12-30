#include <Stepper.h>      // incluye libreria stepper 
Stepper motor1(2048, 6, 8, 7, 9);   // pasos completos
Stepper motor2(2048, 2, 4, 3, 5);
void setup() 
{
  motor1.setSpeed(3);       // en RPM (valores de 1, 2 o 3 para 28BYJ-48)
  motor2.setSpeed(3);       // en RPM (valores de 1, 2 o 3 para 28BYJ-48)
  // Inicializa os pinos do DIP Switch como INPUT_PULLUP
}
void loop() 
{
  //
  for(int i=0;i<=150;i++)
  {
    motor1.step(3);// cantidad de pasos
    motor2.step(-3);// cantidad de pasos
  }
  for(int i=0;i<=398;i++)
  {
    motor1.step(3);// cantidad de pasos
    motor2.step(3);// cantidad de pasos
  }
  for(int i=0;i<=150;i++)
  {
    motor1.step(3);// cantidad de pasos
    motor2.step(-3);// cantidad de pasos
  }
   for(int i=0;i<=398 ;i++)
  {
    motor1.step(3);// cantidad de pasos
    motor2.step(3);// cantidad de pasos
  }
    for(int i=0;i<=150;i++)
  {
    motor1.step(3);// cantidad de pasos
    motor2.step(-3);// cantidad de pasos
  }
   for(int i=0;i<=780 ;i++)
  {
    motor1.step(-3);// cantidad de pasos
    motor2.step(-3);// cantidad de pasos
  }
    for(int i=0;i<=150;i++)
  {
    motor1.step(-3);// cantidad de pasos
    motor2.step(3);// cantidad de pasos
  }
  for(int i=0;i<=398;i++)
  {
    motor1.step(3);// cantidad de pasos
    motor2.step(3);// cantidad de pasos
  }
    for(int i=0;i<=150;i++)
  {
    motor1.step(-3);// cantidad de pasos
    motor2.step(3);// cantidad de pasos
  }
   for(int i=0;i<=398;i++)
  {
    motor1.step(3);// cantidad de pasos
    motor2.step(3);// cantidad de pasos
  }
      for(int i=0;i<=170;i++)
  {
    motor1.step(-3);// cantidad de pasos
    motor2.step(3);// cantidad de pasos
  }
  delay(100000);


  
}  
