const int pinled1=11;
const int pinled2=10;
const int pinled3=9;
char estado;
//#include<SoftwareSerial.h>
void setup() 
{
  // put your setup code here, to run once:
  pinMode(pinled1,OUTPUT);
  pinMode(pinled2,OUTPUT);
  pinMode(pinled3,OUTPUT);
  Serial.begin(9600);
}

void loop() 
{

  // put your main code here, to run repeatedly:
  //Verde Amarillo Y Rojo
  /*digitalWrite(pinled1,LOW);
  digitalWrite(pinled2,HIGH);
  delay(1000);
  digitalWrite(pinled1,HIGH);
  delay(1000);
  digitalWrite(pinled2,LOW);
  delay(1000);
  */
//COLORES
//BLANCO
 analogWrite(pinled1,255);//VERDE
 analogWrite(pinled2,200); //AZUL
 analogWrite(pinled3,255);//ROJO
 delay(1500);
 //ROJO
  analogWrite(pinled1,0);//VERDE
 analogWrite(pinled2,0); //AZUL
 analogWrite(pinled3,255);//ROJO
  delay(1500);
  //VERDE
  analogWrite(pinled1,255);//VERDE
 analogWrite(pinled2,0); //AZUL
 analogWrite(pinled3,0);//ROJO
delay(1500);
//Azul
 analogWrite(pinled1,0);//VERDE
 analogWrite(pinled2,255); //AZUL
 analogWrite(pinled3,0);//ROJO
delay(1500);
//Naranja
analogWrite(pinled1,30);//VERDE
 analogWrite(pinled2,0); //AZUL
 analogWrite(pinled3,200);//ROJO
delay(1500);
 //rosa
 analogWrite(pinled1,30);//VERDE
 analogWrite(pinled2,70); //AZUL
 analogWrite(pinled3,255);//ROJO
delay(1500);
//Purpura
analogWrite(pinled1,0);//VERDE
 analogWrite(pinled2,200); //AZUL
 analogWrite(pinled3,255);//ROJO
delay(1500);
//Amarillo
analogWrite(pinled1,100);//VERDE
 analogWrite(pinled2,0); //AZUL
 analogWrite(pinled3,255);//ROJO
delay(1500);
//cyan
analogWrite(pinled1,255);//VERDE
 analogWrite(pinled2,255); //AZUL
 analogWrite(pinled3,0);//ROJO
delay(1500);

}
