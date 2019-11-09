#include<stdio.h>
#include<conio.h>
#include<stdlib.h> 
#include<time.h> 
int main(){
srand(time(NULL));
int tutulan=rand()%20;
printf("tutulan sayi=%d\n",tutulan);
int atilan,sayac=0;
do{
printf("Tahmin sayinizi giriniz:");
scanf("%d",&atilan);
if(atilan>tutulan)
printf("%d den kucuk\n",atilan);
else if(atilan<tutulan)
printf("%d den buyuk\n",atilan);
sayac++;
}while(atilan!=tutulan);
printf("%d. denemede buldunuz",sayac);
getch();
return 0;
}
