#include<stdio.h>
#include<conio.h>
#include<time.h>
int zarolayi(int);
main()
{
int a;
printf("zar tahmini icin sayi giriniz...:");
scanf("%d",&a);
zarolayi(a);
getch();
return 0;

}
int zarolayi(int a)
{
     int x,sayici;
srand(time(0));
for(sayici=1;sayici<=a;sayici++)
{  
x=rand()%2+1;             
if(x==1)
printf("yazi\n");
if(x==2)
printf("tura\n");
}
}
