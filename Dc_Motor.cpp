const int m1 = 9;
const int m2 = 10;
const int m3 = 5;
const int m4 = 6;

void setup() {
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
}

void loop() {
digitalWrite(m1,HIGH);
digitalWrite(m2,LOW);
digitalWrite(m3,LOW);
digitalWrite(m4,LOW);

delay(1000);

digitalWrite(m1,LOW);
digitalWrite(m2,HIGH);
digitalWrite(m3,LOW);
digitalWrite(m4,LOW);

delay(1000);

digitalWrite(m1,LOW);
digitalWrite(m2,LOW);
digitalWrite(m3,HIGH);
digitalWrite(m4,LOW);

delay(1000);

digitalWrite(m1,LOW);
digitalWrite(m2,LOW);
digitalWrite(m3,LOW);
digitalWrite(m4,HIGH);
  
delay(1000);
}