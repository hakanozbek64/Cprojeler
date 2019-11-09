#include<stdio.h>
#include<string.h>
#include<conio.h>


 int main()
 {
 char e[100],t[100];
 int sonuc;
 printf("yazi giriniz>>");
 gets(e);
 printf("2. yaziyi giriniz>>");
 gets(t);
 
 sonuc=strcmp(e,t);
 
 if(sonuc>0)
  printf("2. 1.den buyuk");
 else if(sonuc==0)
  printf("2. 1. esit");
 else
  printf("1. 2. den kucuk"); 
     
  getch();
  return 0;
 } 
 
