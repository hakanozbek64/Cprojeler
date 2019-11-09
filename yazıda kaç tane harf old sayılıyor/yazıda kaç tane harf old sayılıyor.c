#include<stdio.h>
#include<conio.h>
#define SIZE 500
int main()
{
char a[SIZE];
int k;
int sayici[26]={0};
printf("yazi giriniz..:");
gets(a);
for(k=0;a[k]!='\0';k++)
if(isalpha(a[k]))
sayici[toupper(a[k])-'A']++;
for(k=0;k<26;k++)
if(sayici[k])
printf("%3d tane %c\n",sayici[k],'A'+k);    
getch();    
}
