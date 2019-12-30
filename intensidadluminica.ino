int valorPot=0;
int valorPot2=0;
int valorPot3=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(5, OUTPUT);
  Serial.begin(6, OUTPUT);
  Serial.begin(9, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  valorPot=analogRead(0);
  valorPot2=analogRead(1);
  valorPot3=analogRead(2);
  
  valorPot=map(valorPot,0,1023,0,50);
  valorPot2=map(valorPot2,0,1023,0,0);
  valorPot3=map(valorPot3,0,1023,0,255);
  
  analogWrite(5,valorPot);
  analogWrite(6,valorPot2);
  analogWrite(9,valorPot3);
  delay(10);
  
}
