#define led 3
#define pot A0

void setup() {
  
}

void loop() {
  int deger=analogRead(pot);
  deger=deger/4; 
  // üstteki gibi yazmak yerine deger=map(deger, 0,1023, 0,255); şeklinde oranlamasını sağlayabiliriz.
  analogWrite(led,deger);

}
