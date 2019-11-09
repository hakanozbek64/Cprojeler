#include<stdio.h>
#include<conio.h>
int main()
{
int a,b=0,c=0,d=0; 
printf("sayi giriniz...:");
scanf("%d",&a);
while (a){
if(a%10==0)
{
d++;
} 
b=b*10+a%10;
a=a/10;
}
while(b){
printf("%d\n",(b%10));
b=b/10; 
}
while(d){
printf("0\n");
d--;
}

getch();
return 0; 
}
