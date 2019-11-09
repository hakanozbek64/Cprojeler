#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
 int main()
 {
  char e[30];
  int r=0,i,sifre,x;
  srand(time(0));
  
   puts("metin giriniz>>"); 
   gets(e);
  
   for(i=0;e[i]!='\0';i++)
   {
   printf("%c",e[i]);
   r++;
   }
   
   printf("\ngirdiniz metinin harf sayisi=%d\n",r);
   printf("%d\n",strlen(e));
   
   printf("kullanici sifreniz uretildi\n");
   sifre=rand()%18965;
   printf("sifreniz:%d\n",sifre); 
   printf("kullanici adiniz:");
   x=rand()%3+1;
   for(i=0;e[i]!='\0';i=i+x) 
   { 
   printf("%c",e[i]);
   }
 
 getch();
 return 0;    
 }
   
 
 
                
  
 
 
