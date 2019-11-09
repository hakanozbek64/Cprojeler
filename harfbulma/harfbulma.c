#include<stdio.h>
#include<string.h>
#include<conio.h>
 
  int main()
  {
  char e[100];
  char t;
  int i,syc=0,a;
  printf("yazi giriniz>>");
  gets(e);
  printf("aramak istediginiz karakteri giriniz>>");
  scanf("%c",&t);
 
  for(i=0;e[i]!='\0';i++)
   if(e[i]==t)
    {
    a=1;
    syc++;
    }
  
   
  
  if(a==1)
   printf("aranan harf %c,%d kere bulundu ",t,syc);
  else
   printf("arana harf bulunamadi");
  getch();    
  }
  
