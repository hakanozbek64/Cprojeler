#include<stdio.h>
#include<conio.h>
 
 int main()
{
 int array[50][50];
 int i,j,satir,sutun;
 
 printf("satir sayisini giriniz..:"); 
 scanf("%d",&satir);
 printf("sutun sayisini giriniz..:");
 scanf("%d",&sutun);
 
 printf("\nDizinin degerlerini gir..:\n");
  for(i=0;i<satir;i++)
  {
    for(j=0;j<sutun;j++)
     {
     printf("\narray[%d][%d] icin deger..: ",i,j);
     scanf("%d",&array[i][j]);                     
     }
  }  
 printf("\ndizi %d satir ve %d sutundan olusan=array[%d][%d] cok boyutlu dizidir\n",satir,sutun,i,j );
 
 for(i=0;i<satir;i++)
 {
   for(j=0;j<sutun;j++)
   {
    printf("%2d",array[i][j]);               
   } 
  printf("\n\n"); 
 }
 printf("e-muhendisler.net//rclk");
  getch();     
}
