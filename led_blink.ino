#define kirmizi_led 8 //boyle yazarak kirmizi_led yazabiliriz direkt. hani çoklu çalışmalarda karmaşıklığı önlemek için vs. böyle yazdıktan sonra 8 yazdığımız yerlere kirmizi_led yazmamız gerekiyor
void setup() {
  pinMode(8,OUTPUT); // 8.pini aktardık

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(8,HIGH); //5v veriyor 8.pine
delay(1000); // 500 milisaniye bekliyor
digitalWrite(8,LOW);
delay(1000);
}
