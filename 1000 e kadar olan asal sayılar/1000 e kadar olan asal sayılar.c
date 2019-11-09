#include <stdio.h>
int main()
{
int e,i,c,d;
printf("bir sayi giriniz>>");
scanf("%d",&e);
for(i=2;i<e;i++)
{
   d=1;
    for (c=2;c<i;c++)
      {
        if (i%c==0)
          d=0;
              }
if (d==1)
printf("%d\n",i);
}
system("pause");   
return 0;
}
