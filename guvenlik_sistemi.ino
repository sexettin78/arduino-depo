#define LDR A0
#define Buzzer 11
#define Led 10
int deger;
void setup() {
  Serial.begin(9600);
  pinMode(Buzzer, OUTPUT);
  pinMode(Led,OUTPUT);
}

void loop() {
deger = analogRead(LDR);
Serial.println(deger);
if(deger<1000){
  digitalWrite(Led, HIGH);
  tone(Buzzer, 500);
  delay(100);
  digitalWrite(Led,LOW);
  noTone(Buzzer);
  delay(100);

}


}
