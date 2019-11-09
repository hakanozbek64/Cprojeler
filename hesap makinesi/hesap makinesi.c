#include <stdio.h>
int topla ( int sayi1, int sayi2 )
{
int sonuc;
sonuc = sayi1 + sayi2;
return sonuc;
}
int cikar ( int sayi1, int sayi2 )
{
int sonuc;
sonuc = sayi1 - sayi2;
return sonuc;
}
int bol ( int sayi1, int sayi2 )
{
int sonuc;
sonuc = sayi1 / sayi2;
return sonuc;
}
int carp ( int sayi1, int sayi2 )
{
int sonuc;
sonuc = sayi1 * sayi2;
return sonuc;
}
int main ()
{
int sayi1;
int sayi2;
int islemTuru = 0;
int sonuc;
 
printf("beta surumu\n\nC ' de hesap makinasi yapma\n\n\n");
 
printf ("Islem Yapilacak 1. sayi : ");
scanf ("%d", &sayi1);
printf ("Islem Yapilacak 2. sayi : ");
scanf ("%d", &sayi2);
printf ("Yapilacak islem icin operator secin ; \n\nToplama   [1]\nBolme     [2]\nCarpma    [3]\nCikarma   [4] \nSecilen islem : ");
scanf ("%d", &islemTuru);
switch (islemTuru)
{
case 1 :{
sonuc = topla ( sayi1, sayi2 );
printf ("Islem sonucu : %d \n", sonuc);
break;
}
case 2 :{
sonuc = bol ( sayi1, sayi2 );
printf ("Islem sonucu : %d \n", sonuc);
break;
}
case 3 :{
sonuc = carp ( sayi1, sayi2 );
printf ("Islem sonucu : %d \n", sonuc);
break;
}
case 4 :{
sonuc = cikar ( sayi1, sayi2 );
printf ("Islem sonucu : %d \n", sonuc);
break;
}
default :{
printf ("Hatali giris");
break;
}
}
 system("pause");
return 0;
}
