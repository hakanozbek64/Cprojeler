#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3][3];
    int b[3][3];
    int c[3][3];
    int i,j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\nA[%d][%d] matrisinin degerlerini giriniz> ",i+1,j+1);
            scanf("%d",& a[i][j]);
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\nB[%d][%d] matrisinin degerleri giriniz>",i+1,j+1);
            scanf("%d",& b[i][j]);
        }
    }
    printf("\nA matrisi:\n\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("\nB matrisi:\n\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%d\t",b[i][j]);
        printf("\n");
    }
    {
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
                c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\nGirmis oldugunuz matrislerin toplami asagidadir.\n\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%d\t",c[i][j]);
        printf("\n");
    }
   getch();
    return 0;
}
