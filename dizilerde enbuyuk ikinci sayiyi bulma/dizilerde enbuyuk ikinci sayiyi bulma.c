#include <stdio.h>
#include<conio.h>
#define SIZE 10
int main()
{
int a[SIZE] = {12, 34, 3, 56, 2, 23, 7, 18, 91, 4};
int k;
int max1 = a[0];
int max2 = a[1];
if (a[1] > a[0]) {
max1 = a[1];
max2 = a[0];
}
for (k = 2; k < SIZE; ++k)
if (a[k] > max1) {
max2 = max1;
max1 = a[k];
}
else if (a[k] > max2)
max2 = a[k];
printf("en buyuk ikinci deger = %d\n", max2);
getch();
}
