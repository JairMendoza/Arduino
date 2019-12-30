const int sensor=0;
const int ledrojo=6;
const int ledazul=5;
long milivolts ;
long temperatura;
int brillo;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledrojo,OUTPUT);
  pinMode(ledazul,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  milivolts=(analogRead(sensor)*5000l)/1023;
  temperatura=milivolts/10;
  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" Grados");
  delay (200);
  brillo=map(temperatura,10,40,255);
  brillo=constrain(brillo,0,255);
  analogWrite(ledazul,brillo);
  analogWrite(ledrojo,255-brillo);
 }
