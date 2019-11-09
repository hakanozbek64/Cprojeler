#include<stdio.h>
#include<conio.h>
#define SIZE 5
int fact(int );
int main()
{
int k;
for(k=0;k<SIZE;k++)
printf("%2d!=%-10d\n",k,fact(k));
getch();    
}

int fact(int number)
{
int i;
int result=1;
if(number==0 || number==1)
return 1;
for(i=2;i<=number;i++)
result*=i;    
return result;
}
