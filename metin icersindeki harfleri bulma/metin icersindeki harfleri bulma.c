#include <string.h>
#include <stdio.h>
#include <stdlib.h>
 
void harfara(char metin[32], char harf)
{
     int i,sayac=0,a;
     
     for(i=0;metin[i]!='\0';i++)
     {
      if(metin[i]==harf )
       sayac=sayac+1;
     }
     printf("\nAradiginiz harf:%c\n\nMetin icerisindeki sayisi:%d\n\n",harf,sayac);
}
   main()
{
      char metin[32];
      char harf;
      
      puts("Metni giriniz:");
      gets(metin);
      
      puts("Aramak istediginiz harfi giriniz:");
      scanf("%c",&harf);
      
      harfara(metin, harf);
      
      system("PAUSE");
}
