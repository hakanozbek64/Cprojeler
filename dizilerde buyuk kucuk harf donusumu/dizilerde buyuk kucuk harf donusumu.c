#include<stdio.h>
#include<conio.h>
#define SIZE 100

  int main()
  {
  
  char a[SIZE];
  int k;
  
  printf("yazi giriniz..:");
   gets(a);

  for(k=0;a[k]!='\0';k++)
  {
   a[k]=isupper(a[k]) ? tolower(a[k]):toupper(a[k]) ;
     
  }
  printf("girilen sayi %d karakterlidir\ndonusumu=",k);
   for(k=0;a[k]!='\0';k++)
  
    printf("%s",a);
getch();    
}
