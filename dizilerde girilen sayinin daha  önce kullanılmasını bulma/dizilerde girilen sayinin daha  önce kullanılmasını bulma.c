#include<stdio.h>
#include<conio.h>
int main()
{
int a[20],i=0,girilensayi;
int n=20,sayac=0;
while(n--){
printf("bir sayi giriniz.:");
scanf("%d",&girilensayi);                                
a[i]=girilensayi;
while(i>0)
{
for(i=1;i<=sayac;i++)
if(girilensayi==a[i-1])
{
printf("ayni sayidan daa oncede girdiniz\n");
printf("%d\n",girilensayi);
}
i--;
break;
}
i++;
sayac++;
}
getch();    
}
