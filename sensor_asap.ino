
#define sensor A0
#define fan 8

void setup() {
  Serial.begin(9600);
  
  pinMode(sensor,INPUT);
  pinMode(fan, OUTPUT);

  

}

void loop() {
  Serial.println(analogRead(sensor));
  delay(100);

  if (analogRead(sensor)>=200){
    
    digitalWrite(fan,HIGH);
  }
  else{
    digitalWrite(fan,LOW);
  }

}
