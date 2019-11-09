#include<stdio.h>
#include<conio.h>
 void harf_bulma(char *s);
 void aranacak_harf(char *,char );
 
 int main()
 {
 char e[100];
 char m;
 printf("yazi giriniz>>>");
 gets(e);
 printf("aranacak harfi giriniz>>>");
 scanf("%c",&m);
 
 aranacak_harf(e,m);
 
 harf_bulma(e);    
     
 getch();    
 }
 
 void  harf_bulma(char *s) 
 {
 int i,t=0,y=0;
 for(i=0;s[i]!='\0';i++) 
   if(s[i]!=' ')
      t++;
   else
    y++;
 printf("yazi da %d kadar harf bulunmakta ve %d kadar bosluk bulunmaktadir",t,y);
      
 }
 
 void aranacak_harf(char *s,char o)
 {
 int i,a=0;
 for(i=0;s[i]!='\0';i++)
  if(s[i]==o)
     a++;
   
  printf("aranan harf %d kadar yazi icinde bulunuyor!!\n",a);
        
      
 }
