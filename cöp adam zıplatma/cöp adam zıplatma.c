#include <stdio.h>
#include <time.h>

#define SIZE 15
#define WAITTIME 0.5
#define JUMPTIME 100
void initSpace(char arr[][SIZE],int size);
void initPos1(char arr[][SIZE],int size);
void initPos2(char arr[][SIZE],int size);
void initPos3(char arr[][SIZE],int size);
void initPos4(char arr[][SIZE],int size);
void initPos5(char arr[][SIZE],int size);
void printArr(char arr[][SIZE],int size);
void wait(double second);

int main()
{
    char pos1[SIZE][SIZE];
    char pos2[SIZE][SIZE];
    char pos3[SIZE][SIZE];
    char pos4[SIZE][SIZE];
    char pos5[SIZE][SIZE];
    int i;

    initPos1(pos1,SIZE);
    initPos2(pos2,SIZE);
    initPos3(pos3,SIZE);
    initPos4(pos4,SIZE);
    initPos5(pos5,SIZE);
    for(i=0;i<JUMPTIME;++i)
    {
        printArr(pos1,SIZE);
        printArr(pos2,SIZE);
        printArr(pos3,SIZE);
        printArr(pos4,SIZE);
        printArr(pos5,SIZE);
        printArr(pos4,SIZE);
        printArr(pos3,SIZE);
        printArr(pos2,SIZE);
        printArr(pos1,SIZE);
    }

    return 0;
}

void wait(double second)
{
    clock_t endwait;
    endwait=clock()+second*CLOCKS_PER_SEC;
    while(clock()<endwait);
}


void initSpace(char arr[][SIZE],int size)
{
    int i,j;
    for(i=0;i<SIZE;++i)
        for(j=0;j<SIZE;++j)
            arr[i][j]=' ';
}

void initPos1(char arr[][SIZE],int size)
{
    initSpace(arr,size);
    arr[6][5]='o';
    arr[7][4]='o';
    arr[8][5]='o';
    arr[7][6]='o';
    arr[9][4]='o';
    arr[9][6]='o';
    arr[9][5]='o';
    arr[10][3]='o';
    arr[10][5]='o';
    arr[10][7]='o';
    arr[11][5]='o';
    arr[12][5]='o';
    arr[13][4]='o';
    arr[13][6]='o';
    arr[14][3]='o';
    arr[14][7]='o';
}

void initPos2(char arr[][SIZE],int size)
{
    initSpace(arr,size);
    arr[6][5]='o';
    arr[7][4]='o';
    arr[8][5]='o';
    arr[7][6]='o';
    arr[9][4]='o';
    arr[9][6]='o';
    arr[9][5]='o';
    arr[9][3]='o';
    arr[10][5]='o';
    arr[9][7]='o';
    arr[11][5]='o';
    arr[12][5]='o';
    arr[13][4]='o';
    arr[13][6]='o';
    arr[14][3]='o';
    arr[14][7]='o';
}

void initPos3(char arr[][SIZE],int size)
{
    initSpace(arr,size);
    arr[6][5]='o';
    arr[7][4]='o';
    arr[8][5]='o';
    arr[7][6]='o';
    arr[9][4]='o';
    arr[9][6]='o';
    arr[9][5]='o';
    arr[8][3]='o';
    arr[10][5]='o';
    arr[8][7]='o';
    arr[11][5]='o';
    arr[12][5]='o';
    arr[13][4]='o';
    arr[13][6]='o';
    arr[14][3]='o';
    arr[14][7]='o';
}

void initPos4(char arr[][SIZE],int size)
{
    initSpace(arr,size);
    arr[7][5]='o';
    arr[8][4]='o';
    arr[8][6]='o';
    arr[9][5]='o';
    arr[10][2]='o';
    arr[10][3]='o';
    arr[10][4]='o';
    arr[10][5]='o';
    arr[10][6]='o';
    arr[10][7]='o';
    arr[10][8]='o';
    arr[11][5]='o';
    arr[12][5]='o';
    arr[13][3]='o';
    arr[13][4]='o';
    arr[13][5]='o';
    arr[13][6]='o';
    arr[13][7]='o';
    arr[14][3]='o';
    arr[14][7]='o';
}

void initPos5(char arr[][SIZE],int size)
{
    initSpace(arr,size);
    arr[1][5]='o';
    arr[2][4]='o';
    arr[3][5]='o';
    arr[2][6]='o';
    arr[4][4]='o';
    arr[4][6]='o';
    arr[4][5]='o';
    arr[5][3]='o';
    arr[5][5]='o';
    arr[5][7]='o';
    arr[6][5]='o';
    arr[7][5]='o';
    arr[8][4]='o';
    arr[8][6]='o';
    arr[9][3]='o';
    arr[9][7]='o';
}

void printArr(char arr[][SIZE],int size)
{
    int i,j;
    for(i=0;i<size;++i)
    {
        printf("          ");
        for(j=0;j<size;++j)
        {
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }
    wait(WAITTIME);
    system("clear");
}
