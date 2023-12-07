int lm35Pin = A0;
int okunan_deger=0;
float sicaklik_gerilim=0;
float sicaklik = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  okunan_deger = analogRead(lm35Pin);
  sicaklik_gerilim = (5000/1023) * okunan_deger;
  sicaklik = sicaklik_gerilim / 10;
  
  Serial.println(sicaklik);
  delay(1500);

}
