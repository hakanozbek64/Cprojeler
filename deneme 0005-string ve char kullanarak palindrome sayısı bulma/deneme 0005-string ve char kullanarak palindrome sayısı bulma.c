#include <stdio.h>
#include <conio.h>
main()
{
 int i,j=0,sayac=0,N; // i: a dizisinin j: b dizisinin indisi N ise girilen sayinin babamak say�s�
 printf("Sayiniz kac basamakli olacak? : ");
 scanf("%d",&N);
 char a[N],b[N];
 printf("\nLutfen sayiyi giriniz: ");
 scanf("%s",a);//sayiy� string olarak ald�k
 for(i=N-1; i>=0; i--) //a disisini b dizisine tersten kopyalad�k
 {
 b[j]=a[i];
 j++;
 }
 j=0;// j yi s�f�rl�yoruz
 for(i=0; i<N; i++) // a dizisi ile b disinin elemanlar�n� tek tek ker��la�t�r�yoruz ayn� ise sayac 1 art�yor
 {
 if(a[i]==b[j])
 {
 sayac++;
 }
 j++;
 }
 if(sayac==N) //sayac basamak say�s�na e�it ise dizi tamamen ayn�d�r,aksi halde diziler farkll�d�r
 printf("Girilen sayi palindorime sayidir.");
 else printf("Girilen sayi palindorime sayi degildir.");
 getch();
 return 0;
}
