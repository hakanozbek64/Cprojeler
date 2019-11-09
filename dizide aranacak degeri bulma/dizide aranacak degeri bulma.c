#include<stdio.h>
#include<conio.h>
#include<time.h>
#define SIZE 10
int main()
{
int a[SIZE];
int k,i;
int aranacak_deger;

srand(time(0));
for(k=0;k<SIZE;k++)
{
a[k]=rand()%1000;
printf("%d\n",a[k]);
}
do{
printf("aranacak degeri giriniz..:");
scanf("%d",&aranacak_deger);
for(k=0;k<SIZE;k++)
if(a[k]==aranacak_deger)
break;
if(k<SIZE)
printf("a[%d]=%d\n",k,a[k]);
else 
printf("aranan degr dizide yok!!\n"); }
while(aranacak_deger!=a[k]);
getch()   ;
}
