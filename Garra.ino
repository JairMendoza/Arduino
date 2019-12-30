#include <Stepper.h>      // incluye libreria stepper 
#include <SoftwareSerial.h>
Stepper motor1(2048, A0, A2, A1, A3);///////////MOTOR A PASOS
char estado;
void setup() 
{
  motor1.setSpeed(15);       // en RPM (valores de 1, 2 o 3 para 28BYJ-48)
  // Inicializa os pinos do DIP Switch como INPUT_PULLUP
 // motor2.setSpeed(15);  
  Serial.begin(9600);
}

void loop() 
{ 
   // if(Serial.available()>0)
    { 
     // estado=Serial.read();
    } 
    //if(estado=='1')
  //{ 
    //motor2.step(-6400);// cantidad de pasos
    //delay(1000);
    motor1.step(-700);// cantidad de pasos
    delay(5000);
    motor1.step(500);// cantidad de pasos
    delay(5000);
    //motor2.step(6390);// cantidad de pasos
    //delay(1000);
    //motor2.step(6400);// cantidad de pasos
    //delay(1000);
    //motor1.step(690);// cantidad de pasos
    //delay(1000);
    //motor2.step(6390);// cantidad de pasos
    //delay(1000);
  //}//
}
