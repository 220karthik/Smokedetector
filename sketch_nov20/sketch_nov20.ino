void setup() {
  pinMode(A0,INPUT);
  pinMode(10,OUTPUT);
  digitalWrite(10,LOW);
Serial.begin(9600);
pinMode(10,OUTPUT);
}

void loop() {
 int value=analogRead(A0);
 Serial.println(value);
 delay(1000);
 if(value>300){
  digitalWrite(10,HIGH);
 }
 else{
  digitalWrite(10,LOW);
 }
}