#include<stdio.h>
#include<conio.h>
int tersi(int sayi)
{
int toplam=0;
while(sayi){
toplam=toplam*10+sayi%10;
sayi/=10;
}
return toplam;
}
int main()
{
int sayi;
printf("sayi giriniz..:");
scanf("%d",&sayi);
printf("girilen sayi %d tersi %d",sayi,tersi(sayi));
getch();    
}
