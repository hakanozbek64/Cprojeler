#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int change_case(int ch)
{
if(isupper(ch))
return tolower(ch);
else
return toupper;    
}
int main()
{
char c;
printf("bir karakter giriniz..:");
c=getchar();
c=change_case(c);
putchar(c);          
getch();    
}
