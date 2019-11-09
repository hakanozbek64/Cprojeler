#include<stdio.h>
#include<conio.h>
main()
{
int sayici=0;      
char ch;
printf("bir karakter giriniz.:");
scanf("%c",&ch);
//ch=getchar();

while(ch<='Z' || ch<='z'){
putchar(ch++);
sayici++;
printf("\n");
}
printf("\n%c den once %d sayi var\n",ch-1,sayici);
system("pause");
return 0;
}
