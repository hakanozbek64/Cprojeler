#include<stdio.h>
#include<conio.h>
main()
{
int tur,i,a[10],hold;
printf("10 tane sayi giriniz..:");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
for(tur=1;tur<10;tur++)
for(i=0;i<9;i++)
if(a[i]>a[i+1])
{
hold=a[i];
a[i]=a[i+1];
a[i+1]=hold;
}
printf("buyukten kucuge  ");
for(i=0;i<10;i++){
printf("%d  ",a[i]);
}
for(tur=1;tur<10;tur++)
for(i=0;i<9;i++)
if(a[i]<a[i+1])
{
hold=a[i];
a[i]=a[i+1];
a[i+1]=hold;
}
printf("\n\nkucukten buyuge ");
for(i=0;i<10;i++){
printf("%d  ",a[i]);
}

getch();
return 0;
}
