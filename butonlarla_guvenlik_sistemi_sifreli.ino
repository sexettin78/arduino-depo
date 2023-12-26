/* 
bu projede temel amaç soldaki butona 2, sağdaki butona 1 ve ortadaki butona da 1 kez basıldığında ledin yanması yani bir nevi şifrenin çözülmesidir.
Nereye bastığınızın sırası önemsizdir bu sıra önemliliğini koşullu ifadeler ile yapabilirsiniz.
*/
#define Butonsol 3
#define Butonorta 4
#define Butonsag 5
#define Led 2
#define Buzzer 7
int buton_durumusol=0;
int buton_durumuorta=0;
int buton_durumusag=0;
int kod1 = 0;
int kod2 = 0;
int kod3 = 0;

void setup() {
  pinMode(Butonsol, INPUT);
  pinMode(Butonorta, INPUT);
  pinMode(Butonsag, INPUT);
  pinMode(Led, OUTPUT);
  pinMode(Buzzer, OUTPUT);
  Serial.begin(9600);
}

 
void loop() {
  buton_durumusol = digitalRead(Butonsol);
  buton_durumuorta = digitalRead(Butonorta);
  buton_durumusag = digitalRead(Butonsag);

  if(buton_durumusol == 1){
    kod1 += 1;  
    Serial.println("kod1: " + String(kod1));
     tone(Buzzer, 300);
    delay(150);
    noTone(Buzzer);
      delay(500);
  }

  if(buton_durumuorta == 1){
    kod2 += 1; 
    Serial.println("kod2: " + String(kod2));
      tone(Buzzer, 300);
    delay(150);
    noTone(Buzzer);
      delay(500);
  }

  if(buton_durumusag == 1){
    kod3 += 1; 
    Serial.println("kod3: " + String(kod3));
    tone(Buzzer, 300);
    delay(150);
    noTone(Buzzer);
  delay(500);
  }
  
  if(kod1 == 3 || kod2 == 2 || kod3 == 2 ) {
    kod1 = 0;
    kod2 = 0;
    kod3 = 0;
  }
  
  if(kod1 == 2 && kod2 == 1 && kod3 == 1 ) {
    digitalWrite(Led, HIGH);
  } else {
    digitalWrite(Led, LOW);
  }
}
