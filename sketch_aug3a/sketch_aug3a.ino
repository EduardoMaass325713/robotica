#define rele 3
#define sensor 2


bool irrigar = false;
void setup() {
  pinMode(rele,OUTPUT); 
  pinMode(sensor,INPUT);
  digitalWrite(sensor, HIGH);
}
void loop() {
  irrigar = digitalRead(sensor);
  if (irrigar)
  {
    digitalWrite(rele,LOW);
}
  else
  {
    digitalWrite(rele,HIGH);
  }
  delay(1000);
}


