#include <stdio.h>
#include <conio.h>
main()
{
 int i,j=0,sayac=0,N; // i: a dizisinin j: b dizisinin indisi N ise girilen sayinin babamak sayýsý
 printf("Sayiniz kac basamakli olacak? : ");
 scanf("%d",&N);
 char a[N],b[N];
 printf("\nLutfen sayiyi giriniz: ");
 scanf("%s",a);//sayiyý string olarak aldýk
 for(i=N-1; i>=0; i--) //a disisini b dizisine tersten kopyaladýk
 {
 b[j]=a[i];
 j++;
 }
 j=0;// j yi sýfýrlýyoruz
 for(i=0; i<N; i++) // a dizisi ile b disinin elemanlarýný tek tek kerþýlaþtýrýyoruz ayný ise sayac 1 artýyor
 {
 if(a[i]==b[j])
 {
 sayac++;
 }
 j++;
 }
 if(sayac==N) //sayac basamak sayýsýna eþit ise dizi tamamen aynýdýr,aksi halde diziler farkllýdýr
 printf("Girilen sayi palindorime sayidir.");
 else printf("Girilen sayi palindorime sayi degildir.");
 getch();
 return 0;
}
