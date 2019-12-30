#include <Stepper.h>      // incluye libreria stepper 
#include <SoftwareSerial.h>
Stepper motor1(2048, A0, A2, A1, A3);///////////MOTOR A PASOS

void setup() 
{
  motor1.setSpeed(15);       // en RPM (valores de 1, 2 o 3 para 28BYJ-48)
  // Inicializa os pinos do DIP Switch como INPUT_PULLUP
}

void loop() 
{
    motor1.step(600);// cantidad de pasos
    delay(3000);
    //motor1.step(600);// cantidad de pasos
    //delay(1000);
    
}
