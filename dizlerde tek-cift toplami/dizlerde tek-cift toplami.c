#include<stdio.h>
#include<conio.h>
#include<time.h>
#define SIZE 10
int main(){
int a[SIZE];
int teklerin_toplami=0;
int ciftlerin_toplami=0;
int teklerin_sayisi=0;
int k;
srand(time(0));
for(k=0;k<SIZE;k++){
a[k]=rand()%1000;
printf("%d\n",a[k]);}
for(k=0;k<SIZE;k++)
if(a[k]%2){
teklerin_toplami+=a[k];
teklerin_sayisi++;
}               
else 
ciftlerin_toplami+=a[k];
if(teklerin_sayisi){
printf("teklerin sayisi %d\n",teklerin_sayisi); 
printf("teklerin ort %.2f\n",(float)teklerin_toplami/teklerin_sayisi);                   
}
else
printf("dizide tek sayi yok!!");
if(SIZE-teklerin_sayisi){
printf("ciftlerin saayisi %d\n",SIZE-teklerin_sayisi);
printf("ciftlerin ort %.2f\n",(float)ciftlerin_toplami/(SIZE-teklerin_sayisi));    
}
else 
printf("cift sayi yok!!");
getch();
}
