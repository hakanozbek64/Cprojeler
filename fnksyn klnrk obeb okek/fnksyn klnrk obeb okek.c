#include<stdio.h>
#include<conio.h>
int obeb(int sayi1,int sayi2)
{
int i;
//int min=(sayi1<sayi2)?sayi1:sayi2; böyle yapilrsa sayi1+sayi2 yerine min yazılır
for(i=sayi1+sayi2;i>=1;i--)
if(sayi1%i==0 && sayi2%i==0)
return i;
return 1;              
}
int okek(int sayi1,int sayi2)
{
int i;
//int max=(sayi1>sayi2)?sayi1:sayi2; böyle yapilrsa 1 yerine mzx yazılır
for(i=1;i<=sayi1*sayi2;i++)
if(i%sayi1==0 && i%sayi2==0)
return i;
return sayi1*sayi2;
}
int main()
{
int sayi1,sayi2;
int n=5;
while(n--)// burdaki while n=0 olunca otomatikmen döngüden çıkacaktır ve döngü 5 defa dönmüş olacaktır
{   
printf("iki sayi giriniz..:");
scanf("%d%d",&sayi1,&sayi2);
printf("obeb=%d\n",obeb(sayi1,sayi2));
printf("okek=%d\n",okek(sayi1,sayi2));
}  
getch();
}
