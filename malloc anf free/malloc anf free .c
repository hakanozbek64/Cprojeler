#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
int *p,i,j,enk;
int N;
printf("sayi giriniz");
scanf("%d",&N);
p=(int *)malloc(N*sizeof(int));
for(i=0;i<N;i++)
{
*(p+i)=rand()%59+1;
printf("%d\t",*(p+i));
}
printf("\n");
enk=*p;
for(i=1;i<N;i++)
{
if(*(p+i)<enk)
enk=*(p+i);
}
printf("enkucuk elemean=%d dir\n",enk);
free(p);  
system("PAUSE");	
return 0;
}
