#include<stdio.h>
#include<conio.h>
int k;
char ch='e';
main()
{
int a,i;
while (ch=='e' || ch=='E')
{
printf("bir sayi giriniz\n");
scanf("%d",&a);
for(i=2;i<a;i++)
{
if (a%i==0)
{k=1;}
}
if (k==1) 
{printf("girdiginiz sayi asal degildir.\n"); }
else
{printf("girdiginiz sayi asaldir.\n");}

printf("devam etmek istiyor musunuz E/H\n");
ch=getch();
k=0;
}
}
