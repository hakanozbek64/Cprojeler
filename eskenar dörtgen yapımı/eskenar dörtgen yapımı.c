#include<stdio.h>
#include<conio.h>

 int main() 
 {
 int i,j,e=3;
	
  while(e--) //while dongusu kullanmamýn nedeni 3 defa eskenar dortgen yapmak istemem isterseniz while kafanýzý karýþtýrýyorsa silebilirsiniz
  {
   	for(i = 1; i <= 8; i++) 
    {
	 for(j = 1; j <= 15; j++)
	  if(j <= (8-i) || (j > (i + 7)))
		printf(" ");
	  else 
		printf("*");
		
 	 printf("\n");
    }
	
    for(i = 7; i >= 1; i--) 
    {
	 for(j = 1; j <= 15; j++)
	  if(j <=  (8-i) || (j > (i + 7)))
		printf(" ");
	 else 
	  printf("*");
		
	 printf("\n");
	}
	 printf("\n");
	
  }
	
 getch();
 return 0;
 }
