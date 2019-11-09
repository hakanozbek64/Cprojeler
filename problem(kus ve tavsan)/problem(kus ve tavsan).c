#include<stdio.h>
#include<conio.h>
 
 int main()
 {
 float tavsanlar,kuslar;
 int yilsayisi=0;
 tavsanlar=1042;
 kuslar=2272;
 while(tavsanlar<kuslar)
 {
  tavsanlar=tavsanlar+((tavsanlar/100)*3.18);                       
  kuslar=kuslar+((kuslar/100)*1.2);     
  yilsayisi++;                
 }    
 printf("%d yil sonra tavsan sayisi kus sayisini gecer!!!",yilsayisi);    
 
 
 getch();    
 }
