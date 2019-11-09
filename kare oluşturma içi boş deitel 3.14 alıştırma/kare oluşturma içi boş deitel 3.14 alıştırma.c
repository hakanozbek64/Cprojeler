#include<stdio.h>
#include<conio.h>
 
int main()
{
  int x,i,j,k;
  
  printf("bir sayi giriniz..:");    
  scanf("%d",&x);
  
  for(i=0;i<x;i++)
  { 
      if(i==0)
      { 
        for(j=0;j<x;j++)
        printf("*");
        printf("\n"); 
      } 
    
      if(i>=1 && i<(x-1))
      {
        for(k=0;k<x;k++)              
        { 
         if(k==0)
          printf("*");
         if(k<(x) && k>1)
          printf(" ");
         if(k==(x-1)) 
          printf("*");     
        }
       printf("\n");
      }
        
      if(i==(x-1))
      {
        for(j=0;j<x;j++)
        printf("*");
        printf("\n"); 
      }
  }      
getch();     
}
