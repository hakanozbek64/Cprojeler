#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int a[1000],i,sayici=0;
srand(time(0));
for(i=0;i<1000;i++)
{
a[i]=rand() % 10+1;
printf("%d     ",a[i]);
if (a[i]<=7)
{
printf("yazi\n");
sayici++;
}
else printf("tura\n");
}
printf("sonuc yuzde %d'dir....\n",sayici/10);
system("pause");
return 0;
}
