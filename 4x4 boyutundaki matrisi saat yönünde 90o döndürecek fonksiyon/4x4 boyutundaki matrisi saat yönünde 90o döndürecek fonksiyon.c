#include<stdio.h>
#include<conio.h>

void elemanlari_goster( int [][4] );
void saat_yonunde_cevir( int [][4] );

  int main()
{
	int matris[4][4] = {
		{12, 34, 22, 98},
		{88, 54, 67, 11},
		{90, 91, 92, 93},
		{38, 39, 40, 41} };
	elemanlari_goster( matris );
	printf("\n");
	saat_yonunde_cevir( matris );
	
  getch();
}
void elemanlari_goster( int dizi[][4] )
{
	int i, j;
	for( i = 0; i < 4; i++ ) {
		for( j = 0; j < 4; j++ )
			printf( "%d ", dizi[i][j] );
		printf( "\n" );
	}
}
void saat_yonunde_cevir( int dizi[][4] )
{
	int i, j;
	for( i = 0; i < 4; i++ ) {
		for( j = 0; j < 4 ; j++ )
			printf( "%d ", dizi[3-j][i] );
		printf( "\n" );
	}
}
