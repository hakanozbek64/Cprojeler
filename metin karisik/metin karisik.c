#include<stdio.h>
#include<conio.h>
 
 int main()
 {
 int i,sayici=0;
 char k,a[50];
 printf("metin giriniz>>");
 gets(a);
 printf("yerini ogrenemek istediginiz harfi giriniz>>");
 scanf("%c",&k);
 for(i=0;a[i]!='\0';i++)
  if(a[i]==k)
   {
   printf("a[%d]>>%c\n",i,k);  
   sayici++;
   }
  printf("%d kez bulundu\n",sayici); 
  
  printf("tersi>>");
  for(i;i>=0;i--)
   printf("%c",a[i]);
   
 getch();    
 }
