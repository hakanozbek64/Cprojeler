#include<stdio.h>
#include<ctype.h>
#include<conio.h>
main()
{
int ch;
printf("bir karakter giriniz:::");
ch=getchar();
if(isupper(ch))
 printf("buyuk harf !\n");
else 
printf("kucuk harf");    
getch();
return 0;      
}
