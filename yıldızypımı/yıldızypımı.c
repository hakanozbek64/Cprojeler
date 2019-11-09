#include<stdio.h>
#include<conio.h>
int main()
{
int r,i,k;
printf("Sayi giriniz");
scanf("%d",&r);
for(i=0;i<r;i++){
for(k=0;k<i;k++){
printf("*");; }
printf("\n");
}
for(i=r;0<i;i--){
for(k=i;0<k;k--){
printf("*"); }
printf("\n");
}
getch();
return 0; 
}
