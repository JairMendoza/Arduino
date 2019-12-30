int led=13;
int estado=0;
void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);

}

void loop() {
  if(Serial.available()>0){
    estado=Serial.read();
  }
  if(estado=='1'){
    digitalWrite(led,HIGH);
  }
  if(estado=='2'){
    digitalWrite(led,LOW);
  }
}
