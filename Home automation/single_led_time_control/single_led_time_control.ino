void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  digitalWrite(13,LOW);
    

}



void loop() {
  if(Serial.available()>0)
  {
    int s = Serial.read();
    if(s!=0){
      digitalWrite(13,HIGH);
      delay(s);
      }
     digitalWrite(13,LOW); 
     delay(10);
 
    }
}
