#include <stdio.h>
#include<conio.h>
#define SIZE 10
int main()
{
int a[SIZE] = {2, 3, 1, 7, 9, 12, 4, 8, 19, 10};
int k;
int searched_val;
do{
printf("aranacak degeri girin : ");
scanf("%d", &searched_val);
for (k = 0; k < SIZE; ++k)

if (a[k] == searched_val)
break;
if (k < SIZE)
printf("a[%d] = %d\n", k, a[k]);
else
printf("aranan deger dizide yok!\n");
}
while(a[k]!=searched_val);
getch();
}
