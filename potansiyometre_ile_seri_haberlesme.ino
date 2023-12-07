#define potpin A0
int deger=0;
void setup() {
  Serial.begin(9600);
  Serial.println("Pot değer okuma:");
}

void loop() {
  deger = analogRead(potpin);
  Serial.println(deger);
  delay(300);
}
