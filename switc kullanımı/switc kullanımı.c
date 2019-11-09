#include<stdio.h>
#include<conio.h>
void tarih(int,int,int);
int main()
{
int gun,ay,yil;
int n=5;
while(n-->0)
{
printf("\ngun ay yil olarak tarih girin..:");
scanf("%d%d%d",&gun,&ay,&yil);
tarih(gun,ay,yil)     ;       
}
getch();
}
void tarih(int gun,int ay,int yil)
{
printf("%d",gun);
switch(gun){
case 1:           
case 11:
case 21:
case 31: 
case 2:
case 12:
case 22: printf("inci"); break;
case 3:
case 13: printf("uncu"); break;
default : printf(".");        
}     
printf("   %d",ay);
switch(ay){
case 1: printf("ocak");   break;
case 2: printf("subat");  break;
case 3: printf("mart");   break; 
case 4: printf("nisan");  break;
case 5: printf("mayis");  break;
case 6: printf("haziran");break;
case 7: printf("temmuz"); break;
case 8: printf("agustos");break;
case 9: printf("eylul");  break;
case 10:printf("ekim");   break;
case 11: printf("kasim"); break;
case 12:printf("aralik"); break;
}
printf("    %d",yil);

}
