#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
 
 void dizi_uret(int *,int);
 
 int main()
 {
 int *e;
 int t;

 printf("uretmek istediginiz dizinin eleman sayisini girin>>>");
 scanf("%d",&t);
 e=(int *)malloc(t*sizeof(int));
 
 dizi_uret(e,t);
 free(e);  
 getch();    
 }
 
 void dizi_uret(int *e,int t)
 {
 int s;
 printf("%d tane sayi giriniz>>",t);
 for(s=0;s<t;s++) 
  scanf("%d",&e[s]);
  
 
 for(s=0;s<t;s++)      
  printf("e[%d]=%d\n",s,e[s]);
 
 
 }
