#define pot A0
int bekleme_suresi=0;
void setup() {
   pinMode(3,OUTPUT); 
   pinMode(4,OUTPUT); 
   pinMode(5,OUTPUT); 
   pinMode(6,OUTPUT); 
}

void loop() {

int deger=analogRead(pot);
bekleme_suresi=deger;   

digitalWrite(3,HIGH); 
delay(bekleme_suresi); 
digitalWrite(3,LOW);
delay(bekleme_suresi);

digitalWrite(4,HIGH); 
delay(bekleme_suresi); 
digitalWrite(4,LOW);
delay(bekleme_suresi);

digitalWrite(6,HIGH); 
delay(bekleme_suresi); 
digitalWrite(6,LOW);
delay(bekleme_suresi);

digitalWrite(5,HIGH); 
delay(bekleme_suresi); 
digitalWrite(5,LOW);
delay(bekleme_suresi);


}
