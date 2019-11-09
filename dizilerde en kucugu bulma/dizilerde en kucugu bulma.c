#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE   10  
int main(){
int a[SIZE];
int i,min;
srand(time(0));
for(i=0;i<SIZE;i++)
{
a[i]=rand()%100;
printf("%d\n",a[i]);
}    
min=a[0];
for(i=1;i<SIZE;i++)
if(min>a[i])
min=a[i];
printf("en kucuk %d",min);
getch();    
}
