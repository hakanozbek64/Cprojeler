#include<stdio.h>
#include<conio.h>
#include<time.h>
#define SIZE 10
int main()
{
int a[SIZE];
int k,i,max;
srand(time(0));
for(k=0;k<SIZE;k++)
{
a[k]=rand()%100;
printf("%d\n",a[k]);
}
for(i=0;i<SIZE;i++)
for(k=0;k<SIZE;k++)
if(a[k]>a[k+1])
{
max=a[k];
a[k]=a[k+1];
a[k+1]=max;
}
printf("\n\n");
for(k=0;k<SIZE;k++)
printf("%d   ",a[k]);

getch();
}
