#include<stdio.h>
#include<conio.h>
#define SIZE 500
int main()
{
char a[SIZE];
int x,k,index=0;
printf("yazi giriniz.:");
gets(a);
printf("yazi %s\n",a);
printf("silinecek harfi giriniz.:");
x=getchar();
for(k=0;a[k]!='\0';k++)
{
if(a[k]!=x)
a[index++]=a[k];
}
a[index]='\0';
printf("yazi %s",a);
getch();    
}
