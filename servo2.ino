#include <Servo.h>
#include <Stepper.h>      // incluye libreria stepper 
#include <SoftwareSerial.h>
Stepper motor1(2048, A0, A2, A1, A3);///////////MOTOR A PASOS
//////////////////////////MOTORES DE LLANTAS
int PinIN1 = 7;
int PinIN2 = 6;
int PinIN3 = 4;
int PinIN4 = 5;
//////////////////////////MOTORES DE LLANTAS
// Cableado de TCS3200 a Arduino
/////////////////////////SENSOR DE COLOR
#define S0 8
#define S1 13
#define S2 12
#define S3 11
#define salidaSensor 10
// Para guardar las frecuencias de los fotodiodos
int frecuenciaRojo = 0;
int frecuenciaVerde = 0;
int frecuenciaAzul = 0;
//////////////////////////SENSOR DE COLOR
// Declaramos la variable para controlar el servo
Servo servoMotor;
int p=90;
void setup() 
{
  motor1.setSpeed(15);
  pinMode(PinIN1, OUTPUT);
  pinMode(PinIN2, OUTPUT);
  pinMode(PinIN3, OUTPUT);
  pinMode(PinIN4, OUTPUT);
  // Iniciamos el monitor serie para mostrar el resultado
  Serial.begin(9600);
  // Iniciamos el servo para que empiece a trabajar con el pin 9
  servoMotor.attach(9);
  // Definiendo las Salidas
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  // Definiendo salidaSensor como entrada
  pinMode(salidaSensor, INPUT);
  // Definiendo la escala de frecuencia a 20%
  digitalWrite(S0,HIGH);
  digitalWrite(S1,LOW);
  servoMotor.write(20);
}
 
void loop() 
{
  
  /*
  */
  //MotorHorario();
  //delay(2000);
  MotorAntihorario();
  //delay(20);
  //MotorStop();
  //Serial.println("Motor Detenido");
  //delay(2000);
  digitalWrite(S2,LOW);
  digitalWrite(S3,LOW);
  // Leyendo la frecuencia de salida del sensor
  frecuenciaRojo = pulseIn(salidaSensor, LOW);
  // Mostrando por serie el valor para el rojo (R = Red)
  Serial.print("R = ");
  Serial.print(frecuenciaRojo); 
  // Definiendo la lectura de los fotodiodos con filtro verde
  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  // Leyendo la frecuencia de salida del sensor
  frecuenciaVerde = pulseIn(salidaSensor, LOW);
  // Mostrando por serie el valor para el verde (G = Green)
  Serial.print(" G = ");
  Serial.print(frecuenciaVerde);
  // Definiendo la lectura de los fotodiodos con filtro azul
  digitalWrite(S2,LOW);
  digitalWrite(S3,HIGH);
  // Leyendo la frecuencia de salida del sensor
  frecuenciaAzul = pulseIn(salidaSensor, LOW);
  // Mostrando por serie el valor para el azul (B = Blue)
  Serial.print(" B = ");
  Serial.println(frecuenciaAzul);
  //delay(100);
  if(frecuenciaRojo<=109&&frecuenciaRojo>=98&&frecuenciaVerde<=181&&frecuenciaVerde>=174&&frecuenciaAzul<=155&&frecuenciaAzul>=141||frecuenciaRojo<=112&&frecuenciaRojo>=102&&frecuenciaVerde<=98&&frecuenciaVerde>=91&&frecuenciaAzul<=74&&frecuenciaAzul>=68)
  {
    MotorStop();
    for (int x = 20; x <= 100; x++)
    {
      // Desplazamos al ángulo correspondiente
      servoMotor.write(x);
      // Hacemos una pausa de 25ms
      delay(35);
    }
    delay(1000);
    motor1.step(600);// cantidad de pasos
    delay(1000);
    for (int r = 100; r >= 20; r--)
    {
      // Desplazamos al ángulo correspondiente
      servoMotor.write(r);
      // Hacemos una pausa de 25ms
      delay(35);
    }
    delay(1000);
    
    //motor1.step(690);// cantidad de pasos
    //delay(1000);
    //for (int i = 0; i <= 90; i++)
    //{
      // Desplazamos al ángulo correspondiente
    //  servoMotor.write(i);
      // Hacemos una pausa de 25ms
   //   delay(15);
    //}




for(int e=1;e>=0;e++)
{
    Serial.println("busqueda canasta");
      MotorAntihorario();
  delay(20);
  //MotorStop();
  //Serial.println("Motor Detenido");
  //delay(2000);
  digitalWrite(S2,LOW);
  digitalWrite(S3,LOW);
  // Leyendo la frecuencia de salida del sensor
  frecuenciaRojo = pulseIn(salidaSensor, LOW);
  // Mostrando por serie el valor para el rojo (R = Red)
  Serial.print("R = ");
  Serial.print(frecuenciaRojo); 
  // Definiendo la lectura de los fotodiodos con filtro verde
  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  // Leyendo la frecuencia de salida del sensor
  frecuenciaVerde = pulseIn(salidaSensor, LOW);
  // Mostrando por serie el valor para el verde (G = Green)
  Serial.print(" G = ");
  Serial.print(frecuenciaVerde);
  // Definiendo la lectura de los fotodiodos con filtro azul
  digitalWrite(S2,LOW);
  digitalWrite(S3,HIGH);
  // Leyendo la frecuencia de salida del sensor
  frecuenciaAzul = pulseIn(salidaSensor, LOW);
  // Mostrando por serie el valor para el azul (B = Blue)
  Serial.print(" B = ");
  Serial.println(frecuenciaAzul);
  delay(100);
  if(frecuenciaRojo<=14&&frecuenciaRojo>=9&&frecuenciaVerde<=19&&frecuenciaVerde>=16&&frecuenciaAzul<=34&&frecuenciaAzul>=31)
  {
    e=0;
    MotorStop();
    for (int i = 20; i <= 100; i++)
    {
      // Desplazamos al ángulo correspondiente
      servoMotor.write(i);
      // Hacemos una pausa de 25ms
      delay(35);
    }
    delay(1000);
    for (int x = 100; x >= 20; x--)
    {
      // Desplazamos al ángulo correspondiente
      servoMotor.write(x);
      // Hacemos una pausa de 25ms
      delay(35);
    }
    //delay(1000);
    //motor1.step(-690);// cantidad de pasos
    //delay(1000);
    motor1.step(-600);// cantidad de pasos
    delay(1000);
    
  }
  if(frecuenciaRojo<=154&&frecuenciaRojo>=126&&frecuenciaVerde<=158&&frecuenciaVerde>=117&&frecuenciaAzul<=121&&frecuenciaAzul>=91)
  {
   Serial.println("Bloqueo");
   MotorStop(); 
   delay(1000);
   MotorHorario;
   delay(500);
   MotorStop();
   delay(1000);
   vuelta();
   delay(2000);
   
  }
  
}



   
  }
  if(frecuenciaRojo<=154&&frecuenciaRojo>=126&&frecuenciaVerde<=158&&frecuenciaVerde>=117&&frecuenciaAzul<=121&&frecuenciaAzul>=91)
  {
   Serial.println("Bloqueo");
   MotorStop(); 
   delay(1000);
   MotorHorario;
   delay(500);
   MotorStop();
   delay(1000);
   vuelta();
   delay(2000);
   
  }
  //if(frecuenciaRojo<125&&frecuenciaRojo>96&&frecuenciaVerde<133&&frecuenciaVerde>95&&frecuenciaAzul<105&&frecuenciaAzul>80)
  //Serial.println("AZUL");
  //if(frecuenciaRojo<53&&frecuenciaRojo>48&&frecuenciaVerde<42&&frecuenciaVerde>37&&frecuenciaAzul<63&&frecuenciaAzul>58)
  //Serial.println("VERDE");





  /*

  delay(1000);
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  // Definiendo la lectura de los fotodiodos con filtro rojo
  
  */
}
void meter_cubo()
{
  MotorAntihorario();
  delay(20);
  //MotorStop();
  //Serial.println("Motor Detenido");
  //delay(2000);
  digitalWrite(S2,LOW);
  digitalWrite(S3,LOW);
  // Leyendo la frecuencia de salida del sensor
  frecuenciaRojo = pulseIn(salidaSensor, LOW);
  // Mostrando por serie el valor para el rojo (R = Red)
  Serial.print("R = ");
  Serial.print(frecuenciaRojo); 
  // Definiendo la lectura de los fotodiodos con filtro verde
  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  // Leyendo la frecuencia de salida del sensor
  frecuenciaVerde = pulseIn(salidaSensor, LOW);
  // Mostrando por serie el valor para el verde (G = Green)
  Serial.print(" G = ");
  Serial.print(frecuenciaVerde);
  // Definiendo la lectura de los fotodiodos con filtro azul
  digitalWrite(S2,LOW);
  digitalWrite(S3,HIGH);
  // Leyendo la frecuencia de salida del sensor
  frecuenciaAzul = pulseIn(salidaSensor, LOW);
  // Mostrando por serie el valor para el azul (B = Blue)
  Serial.print(" B = ");
  Serial.println(frecuenciaAzul);
  delay(100);
  if(frecuenciaRojo<95&&frecuenciaRojo>79&&frecuenciaVerde<100&&frecuenciaVerde>85&&frecuenciaAzul<98&&frecuenciaAzul>88)
  {
    MotorStop();
    for (int i = 0; i <= 90; i++)
    {
      // Desplazamos al ángulo correspondiente
      servoMotor.write(i);
      // Hacemos una pausa de 25ms
      delay(15);
    }
    delay(1000);
    //for (int x = 90; x >= 0; x--)
    //{
      // Desplazamos al ángulo correspondiente
    //  servoMotor.write(x);
      // Hacemos una pausa de 25ms
    //  delay(15);
    //}
    //delay(1000);
    //motor1.step(-690);// cantidad de pasos
    //delay(1000);
    motor1.step(690);// cantidad de pasos
    delay(1000);
    
  }
}
void MotorHorario()
{
  analogWrite (PinIN1, 150);
  analogWrite (PinIN2, 0);
  analogWrite (PinIN3, 150);
  analogWrite (PinIN4, 0);
}
void MotorAntihorario()
{
  analogWrite (PinIN1, 0);
  analogWrite (PinIN2, 150);
  analogWrite (PinIN3, 0);
  analogWrite (PinIN4, 150);
}

void MotorStop()
{
  analogWrite (PinIN1, 0);
  analogWrite (PinIN2, 0);
  analogWrite (PinIN3, 0);
  analogWrite (PinIN4, 0);
}
void vuelta()
{
  analogWrite (PinIN1, 0);
  analogWrite (PinIN2, 150);
  analogWrite (PinIN3, 0);
  analogWrite (PinIN4, 0);
}
