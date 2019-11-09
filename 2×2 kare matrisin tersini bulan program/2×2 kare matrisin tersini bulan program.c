#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a[2][2] = {2, 4, 4, 2};
    float b[2][2], c[2][2];
    int i, j, m;
    float p, r;

    printf("MATRIS :\n\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%3.0f", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if (i == j)
                b[i][j] = 1;
            else
                b[i][j] = 0;
        }
    }

    for (i = 0; i < 2; i++)
    {
        p = a[i][i];
        for (j = 0; j < 2; j++)
        {
            a[i][j] = a[i][j] / p;
            b[i][j] = b[i][j] / p;
        }

        for (m = 0; m < 2; m++)
        {
            if (m != i)
            {
                r = a[m][i];
                for (j = 0; j < 2; j++)
                {
                    a[m][j] = a[m][j] - (a[i][j] * r);
                    b[m][j] = b[m][j] - (a[i][j] * r);

                }
            }

        }
    }

    printf("\n\n\nMatrisin Tersi : \n\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)

            printf(" %f ", b[i][j]);
        printf("\n");

    }
  getch();
    return 0;
}
