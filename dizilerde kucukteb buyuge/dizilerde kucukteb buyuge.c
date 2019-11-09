#include <stdio.h>
#include<conio.h>
#define SIZE 10
int main()
{
int a[SIZE] = {2, 3, 1, 7, 9, 12, 4, 8, 19, 10};
int i, k, temp;
for (i = 0; i < SIZE - 1; ++i)
for (k = 0; k < SIZE -1 - i; ++k)
if (a[k] > a[k + 1]) {
temp = a[k];
a[k] = a[k + 1];
a[k + 1] = temp;
}
for (k = 0; k < SIZE; ++k)
printf("%d ", a[k]);
getch();
}
