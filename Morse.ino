  int buttonstate;

void setup() {

    Serial.begin(9600);
    pinMode(7,INPUT);
    pinMode(8,OUTPUT);//Led en pin 8
    

}

void loop() {
  Serial.println(buttonstate);
  buttonstate = digitalRead(7);
  if(buttonstate == HIGH){
    digitalWrite(8,HIGH);
  }else{
    digitalWrite(8,LOW);
  }
  
  }

