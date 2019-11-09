#include<stdio.h>
#include<conio.h>

 int main() 
 {
 int i,j,e=3;
 int sayi;
 char ch;
 printf("kenar uzunlugu ve karakter giriniz>>");
 scanf("%d %c",&sayi,&ch);
	

   	for(i = 1; i <= sayi; i++) 
    {
	 for(j = 1; j <= (sayi*2-1); j++)
	  if(j <= (sayi-i) || (j > (i + (sayi-1))))
		printf(" ");
	  else 
		printf("%c",ch);
		
 	 printf("\n");
    }
	
    for(i = (sayi-1); i >= 1; i--) 
    {
	 for(j = 1; j <= (sayi*2-1); j++)
	  if(j <=  (sayi-i) || (j > (i + (sayi-1))))
		printf(" ");
	 else 
	  printf("%c",ch);
		
	 printf("\n");
	}
	 printf("\n");
	
  
	
 getch();
 return 0;
 }
