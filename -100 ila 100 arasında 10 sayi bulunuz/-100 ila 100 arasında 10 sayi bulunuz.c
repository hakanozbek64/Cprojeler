#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
 int a[50],i,k,max;
srand(time(0));
for(i=0;i<50;i++)
a[i]=rand()%200-100;
for(i=0;i<50;i++)
printf("%3d\n",a[i]);
for(i=0;i<50;i++)
{
if(-a[i]<0)
{
max=-a[i];
for(i=0;i<50;i++)
if(-a[i]<max)
max=-a[i];}}
printf("en buyuk negatif sayi %d'dir...\n",max);
system("pause");
return 0;
}
