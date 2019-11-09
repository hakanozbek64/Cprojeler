#include<stdio.h>
#include<conio.h>
#define SIZE 100
int main(){
char a[SIZE];
int k;
int uzunluk;
printf("yazi giriniz.:");
gets(a);
printf("girilen yazi= %s\n",a);
//puts(a);
for(k=0;a[k]!='\0';k++)
uzunluk++;
printf("%s yazisinin uzunlugu=%d\n",a,uzunluk);
getch();    
}
