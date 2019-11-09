#include<stdio.h>
#include<conio.h>

int basamak_sayisi(int sayi)
{
int basamak_sayaci=0;
if(sayi==0)
return 1;
while(sayi!=0 ){
basamak_sayaci++;
sayi/=10;
}              
return basamak_sayaci;              
}
int main()
{
int sayi;
printf("bir tamsayi giriniz..:");
scanf("%d",&sayi);
printf("%d sayisi %d basmakli\n",sayi,basamak_sayisi(sayi));    
getch();    
}
