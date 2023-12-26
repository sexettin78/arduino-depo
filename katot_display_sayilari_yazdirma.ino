int a = 5; // Pinleri tanımlıyoruz
int b = 6;
int c = 7;
int d = 9;
int e = 10;
int f = 11;
int g = 12;
int h = 13;

 
/*
 NOKTALI KISIM ALTA GELECEK ŞEKİLDE 
 ÜSTTE EN SAĞ  = 5
 SAĞIN BİR SOLU = 6
 SAĞIN ÜÇ SOLU (İKİ SOLU TOPRAKLAMA) = 9
 EN SOL = 10

 ALTTA EN SAĞ = 7 
 SAĞIN BİR SOLU = 13
 SAĞIN ÜÇ SOLU (İKİ SOLU TOPRAKLAMA) = 12
 EN SOL = 11

ORTALARI 220 OHM DİRENÇ İLE DESTEKLEMEYİ UNUTMAYIN. (BEN 220 OHM KULLANDIM 2 TANE)
KIRMIZI - KIRMIZI - KAHVERENGİ - ALTIN RENKLERİNDE DİRENÇ.

*/


void setup()
{
pinMode(a, OUTPUT); // Pinlerin çıkış pini olduğunu belirtiyoruz.
pinMode(b, OUTPUT);
pinMode(c, OUTPUT);
pinMode(d, OUTPUT);
pinMode(e, OUTPUT);
pinMode(f, OUTPUT);
pinMode(g, OUTPUT);
pinMode(h, OUTPUT);
}
void loop() {
sondur();

// 0 yazımı
digitalWrite(a,LOW);
digitalWrite(b,LOW);
digitalWrite(d,LOW);
digitalWrite(f,LOW);
digitalWrite(g,LOW);
digitalWrite(h,LOW);

delay(1100);
sondur();

// 1 yazımı
digitalWrite(a,LOW);
digitalWrite(h,LOW);

delay(1100);
sondur();

// 2 yazımı
digitalWrite(a,LOW);
digitalWrite(b,LOW);
digitalWrite(e,LOW);
digitalWrite(f,LOW);
digitalWrite(g,LOW);

delay(1100);
sondur();

// 3 yazımı
digitalWrite(a,LOW);
digitalWrite(b,LOW);
digitalWrite(e,LOW);
digitalWrite(g,LOW);
digitalWrite(h,LOW);

delay(1100);
sondur();

// 4 yapımı
digitalWrite(a,LOW);
digitalWrite(d,LOW);
digitalWrite(e,LOW);
digitalWrite(h,LOW);

delay(1100);
sondur();

// 5 yapımı
digitalWrite(b,LOW);
digitalWrite(d,LOW);
digitalWrite(e,LOW);
digitalWrite(g,LOW);
digitalWrite(h,LOW);

delay(1100);
sondur();

// 6 yapımı
digitalWrite(b,LOW);
digitalWrite(d,LOW);
digitalWrite(e,LOW);
digitalWrite(f,LOW);
digitalWrite(g,LOW);
digitalWrite(h,LOW);

delay(1100);
sondur();

// 7 yapımı
digitalWrite(a,LOW);
digitalWrite(b,LOW);
digitalWrite(h,LOW);

delay(1100);
sondur();

// 8 yapımı
digitalWrite(a,LOW);
digitalWrite(b,LOW);
digitalWrite(d,LOW);
digitalWrite(e,LOW);
digitalWrite(f,LOW);
digitalWrite(g,LOW);
digitalWrite(h,LOW);

delay(1100);
sondur();

// 9 yapımı
digitalWrite(a,LOW);
digitalWrite(b,LOW);
digitalWrite(d,LOW);
digitalWrite(e,LOW);
digitalWrite(g,LOW);
digitalWrite(h,LOW);

delay(1100);
sondur();


}

void sondur(){
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(h,HIGH);
delay(1000);
}