//etrafta herhangi bir ışık bulunmadığında 10. pine bağlı ledi yakar. ışık açıldığında ise ledi kapatır
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
if(deger>1000){
  digitalWrite(Led, HIGH);
  

}
else{digitalWrite(Led,LOW);}


}
