/* GeekFactory - "INNOVATING TOGETHER"
   Distribucion de materiales para el desarrollo e innovacion tecnologica
   www.geekfactory.mx
 
   EJEMPLO BASICO PARA EL USO DEL LCD 16X2 CON ARDUINO. MUESTRA UN TEXTO QUE RECORRE
   LA PANTALLA DE UN LADO A OTRO. ESTE PROGRAMA SIRVE COMO PRUEBA DEL CORRECTO
   FUNCIONAMIENTO DE NUESTRO CONEXIONADO Y TAMBIEN ILUSTRA COMO REALIZAR OPERACIONES
   CON EL CURSOR, BORRAR LA PANTALLA Y MOSTRAR CADENAS DE TEXTO.
*/
#include  <LiquidCrystal.h>
 
// CONSTRUCTOR PARA LA PANTALLA LCD 16X2
// AQUI SE CONFIGURAN LOS PINES PARA LA COMUNICACION CON LA PANTALLA
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
 
void setup()
{
  // INDICAMOS QUE TENEMOS CONECTADA UNA PANTALLA DE 16X2
  lcd.begin(16, 2);
  // MOVER EL CURSOR A LA PRIMERA POSICION DE LA PANTALLA (0, 0)
  lcd.home();
  // IMPRIMIR "Hola Mundo" EN LA PRIMERA LINEA
  lcd.print("Hola Mundo");
  // MOVER EL CURSOR A LA SEGUNDA LINEA (1) PRIMERA COLUMNA (0)
  lcd.setCursor ( 0, 1 );
  // IMPRIMIR OTRA CADENA EN ESTA POSICION
  lcd.print("GEEKFACTORY");
  // ESPERAR UN SEGUNDO
  delay(1000);
}
 
void loop()
{
  // EN EL CICLO PRINCIPAL SOLAMENTE RECORREMOS EL MENSAJE DE UN LADO A OTRO
  // VARIABLE PARA CONTROL DE CICLOS
  int i;
 
  // DESPLAZAR LA PANTALLA A LA DERECHA 2 VECES
  for ( int i = 0; i < 5; i++ ) {
    lcd.scrollDisplayRight();
    delay (1000);
  }
  lcd.print("Hola Mundo");
  // DESPLAZAR LA PANTALLA A LA IZQUIERDA 2 VECES
  for ( int i = 0; i < 5; i++ ) {
    lcd.scrollDisplayLeft();
    delay (1000);
  }
}
