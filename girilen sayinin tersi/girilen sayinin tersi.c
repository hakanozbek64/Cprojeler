//ÝÜ elektrik-elektronik mühendisliði c dersi ödevi girilen sayiyi tersten yazdýrma

#include<stdio.h>
#include<stdlib.h>
    
    int tersten(int x)
{
   int a,b,c,d;
    
     if(x<10)
     x=a;
  
   if ( x>=10 && x<100 )
{
     a = (x%10)*10;
     b = x/10;
     x=a+b;
     }
  
    else if ( (x>=100)&&(x<1000) )
{
     a = (x%10)*100;
     b = ((x-(x%10))%100);
     c = x/100;
     x=a+b+c;
     }

    else if ( x>=1000)
{
     a = (x%10)*1000;
     b = ((x-(x%10))%100)*10;
     c = ((x-((x-(x%10))%100))%1000)/10;
     d = x/1000;
     x=a+b+c+d;
    }

      return x;  
}

    int main()
  {
  
    int x;
  
    printf("0 ile 10000 arasinda bir sayi giriniz:");  
    scanf("%d",&x);
  
    if (tersten(x)<10000)
    printf("girdiginiz sayinin tersi:%d\n",tersten(x));

      else
      printf("girdiginiz sayi 10.000 dan buyuk\n");
  
    system("pause");
       return 0;
  }
//recep celikkaya
