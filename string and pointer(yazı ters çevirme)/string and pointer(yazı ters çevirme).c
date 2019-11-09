#include<stdio.h>
#include<conio.h> 
  void harfdonusumu(char *);
  
  int main()
  {
   char string[5]={0};
   printf("metin giriniz>>>");
   gets(string);
      
   printf("cevrilmeden onceki string=%s\n",string);    
   harfdonusumu(string);
   printf("cevrildikten sonraki string=%s\n",string);
   
  getch();    
  }
  
  void harfdonusumu(char *sptr)
  {
   while(*sptr!='\0')
    {
      if(islower(*sptr))
       *sptr=toupper(*sptr);
      else
       *sptr=tolower(*sptr);  
        sptr++;               
    }
       
  }
