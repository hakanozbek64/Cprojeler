#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#define SIZE 10
int main()
{
int a[SIZE];
int toplam = 0;
int k, min;
srand(time(0));
for (k = 0; k < SIZE; ++k)
a[k] = rand() % 10;
for (k = 0; k < SIZE; ++k)
printf("%d ", a[k]);
min = a[0];
for (k = 1; k < SIZE; ++k)
if (min <a[k])
min = a[k];
printf("\nen kucuk eleman = %d\n", min);
getch();
}
