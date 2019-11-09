#include<stdio.h>
#include<conio.h>
#define BOYUT 10
 void kabarciksiralama(int *,const int);
 
 int main()
 {
 int a[BOYUT]={2,4,6,10,12,89,68,45,37};
 int i;
 
 printf("sayilarin ilk hali>>");
  for(i=0;i<BOYUT;i++)
   printf("%4d,a[i]");    
     
 kabarciksiralama(a,BOYUT);
 printf("siralama>>");
 
 for(i=0;i<BOYUT;i++)
   printf("%4d",a[i]);
   printf("\n");  
 
 getch();    
 }           
 
 void kabarciksiralama(int *dizi,const int boyut)
 {
    void yerdegistir(int *,int *);
    int tur,j;
    
    for(tur=0;tur<boyut-1;tur++)
     for(j=0;j<boyut-1;j++)
      if(dizi[j]>dizi[j+1])
       yerdegistir(&dizi[j],&dizi[j+1]);
   }    
         
  void yerdegistir(int *eleman1ptr,int *eleman2ptr)
  {
    int temp=*eleman1ptr;
    *eleman1ptr=*eleman2ptr;
    *eleman2ptr=temp;
   
  }     
       
       
       
       
        
     
    
      

    
