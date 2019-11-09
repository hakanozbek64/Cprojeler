#include<stdio.h>
#include<time.h>
#include<conio.h>
main()
{
srand(time(0));
int a,b,c,sayac=0,oran;
a=rand()%10;
b=rand()%10;
c=a*b;
printf("%d kere %d kactir...:",a,b);
do{     
printf("");
scanf("%d",&c);
if(c==(b*a))
printf("\ndogru!!\n\n");
else if(c!=(b*a)){ 
printf("\nyanlis tekrar dusunun!!!\n\ntekrar giriniz..:");  } 
sayac++;  
}
while(c!=(b*a));
if(c==(b*a)){
oran=100/sayac;
printf("%d inci denemede dogru bildiniz basari oraniniz..yuzde %d dir\n\n",sayac,oran);}
if(oran<=75){
printf("daha cok calismalisin!!");
}getch();
return 0;
} 
//
