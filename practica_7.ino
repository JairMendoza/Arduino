
#include <Servo.h> 

Servo myservo; 
int Leda = 2;
int Ledb = 3;
int Ledc = 4;
int Ledd = 5;
int Lede = 6;
int Ledf = 7;
int Ledg = 8;
int estado=0;
String estado1;
char buffer[10];
const int pEcho=11;  
const int pTrig=10; 
int distancia;
int tiempo;
 

void setup(){
  Serial.begin(9600);
  pinMode(Leda, OUTPUT);
  pinMode(Ledb, OUTPUT);
  pinMode(Ledc, OUTPUT);
  pinMode(Ledd, OUTPUT);
  pinMode(Lede, OUTPUT);
  pinMode(Ledf, OUTPUT);
  pinMode(Ledg, OUTPUT);
  pinMode(pEcho, INPUT);   
  pinMode(pTrig, OUTPUT);
  pinMode(13,OUTPUT);
  myservo.attach(9); 
 

  
}


void loop(){
  
    digitalWrite(pTrig, LOW); 
    delayMicroseconds(2);   
    digitalWrite(pTrig, HIGH);  
    delayMicroseconds(10);
    digitalWrite(pTrig, LOW);

  // medimos el pulso de respuesta
  tiempo = pulseIn(pEcho, HIGH);  

  distancia = (tiempo/2)/29 ;
  
  //Serial.print("Distancia: "); // imprime la distancia en el Monitor Serie
   Serial.println(distancia);

 if(Serial.available()>0){
 estado = Serial.read();
 

 }
 
if (estado=='a')
{

    myservo.write(0); 
}
if (estado=='b')
{

    myservo.write(45); 
}
if (estado=='c')
{

    myservo.write(90); 
}
if (estado=='d')
{

    myservo.write(135); 
}
if (estado=='e')
{

    myservo.write(180); 
}
if (estado=='5')
{

   tone(13,330); 
   delay(10);
}
if (estado=='6')
{

   noTone(13); 
   delay(10);
}
}


  
