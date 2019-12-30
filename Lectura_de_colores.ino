//
// Cableado de TCS3200 a Arduino
//
#define S0 8
#define S1 13
#define S2 12
#define S3 11
#define salidaSensor 10
 
// Para guardar las frecuencias de los fotodiodos
int frecuenciaRojo = 0;
int frecuenciaVerde = 0;
int frecuenciaAzul = 0;
 
void setup() 
{
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
  
   // Iniciar la comunicacion serie 
  Serial.begin(9600);
}
void loop() 
{
  // Definiendo la lectura de los fotodiodos con filtro rojo
  digitalWrite(S2,LOW);
  digitalWrite(S3,LOW);
  
  // Leyendo la frecuencia de salida del sensor
  frecuenciaRojo = pulseIn(salidaSensor, LOW);
  
  // Mostrando por serie el valor para el rojo (R = Red)
  Serial.print("R = ");
  Serial.print(frecuenciaRojo);
  //delay(300);
  
  // Definiendo la lectura de los fotodiodos con filtro verde
  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  
  // Leyendo la frecuencia de salida del sensor
  frecuenciaVerde = pulseIn(salidaSensor, LOW);
  
  // Mostrando por serie el valor para el verde (G = Green)
  Serial.print(" G = ");
  Serial.print(frecuenciaVerde);
  //delay(300);
 
  // Definiendo la lectura de los fotodiodos con filtro azul
  digitalWrite(S2,LOW);
  digitalWrite(S3,HIGH);
  
  // Leyendo la frecuencia de salida del sensor
  frecuenciaAzul = pulseIn(salidaSensor, LOW);
  
  // Mostrando por serie el valor para el azul (B = Blue)
  Serial.print(" B = ");
  Serial.println(frecuenciaAzul);
  delay(100);
  if(frecuenciaRojo<200&&frecuenciaRojo>150&&frecuenciaVerde<250&&frecuenciaVerde>200&&frecuenciaAzul<210&&frecuenciaAzul>160)
  Serial.println("ROJO");
  if(frecuenciaRojo<140&&frecuenciaRojo>135&&frecuenciaVerde<75&&frecuenciaVerde>70&&frecuenciaAzul<37&&frecuenciaAzul>32)
  Serial.println("AZUL");
  if(frecuenciaRojo<53&&frecuenciaRojo>48&&frecuenciaVerde<42&&frecuenciaVerde>37&&frecuenciaAzul<63&&frecuenciaAzul>58)
  Serial.println("VERDE");
}
