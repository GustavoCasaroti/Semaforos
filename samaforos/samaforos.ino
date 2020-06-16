int ver = 2;
int amar = 3;
int verde = 4;
int ped1 = 6;
int ped2 = 7;
void setup() {
pinMode(ver,OUTPUT);
pinMode(amar,OUTPUT);
pinMode(verde,OUTPUT);
pinMode(ped1,OUTPUT);
pinMode(ped2,OUTPUT);
}
void loop() {
digitalWrite(ver, HIGH);
digitalWrite(ped2, HIGH);
delay(5000);
digitalWrite(ped2, LOW);
digitalWrite(ver, LOW);
delay(50);
digitalWrite(verde, HIGH);
digitalWrite(ped1, HIGH);
delay(5000);
digitalWrite(ped1, LOW);
digitalWrite(verde, LOW);
delay(50);
digitalWrite(amar, HIGH);
delay(2000);
digitalWrite(amar, LOW);
delay(50);
}
