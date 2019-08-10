void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  digitalWrite(13,LOW);
    

}


char s;
int c=0;
void loop() {
  if(Serial.available()>0)
  {
    s = Serial.read();
    Serial.println(s);
    if (s == '1') {
      if(c==0){
              digitalWrite(13,HIGH);
              Serial.println("on");
              c=1;
          }
      else    {
              digitalWrite(13,LOW);
              Serial.println("off");
              c=0;
          }

    }
  }
}
