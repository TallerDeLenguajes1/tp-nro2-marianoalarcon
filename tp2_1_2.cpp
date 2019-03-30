#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define N 4
#define M 5
int main(void)
{   
	srand(time(NULL));
	int f,c;
	double mt[N][M];
	printf("SE MODIFICO EN LA RAMA OPCION\n");
	for(f = 0;f<N; f++)
	{
	 	for(c = 0;c<M; c++)
		{
			mt[f][c]=rand() % 15+0; 
		}
	}

	for(f = 0;f<N; f++)
	{
	 	for(c = 0;c<M; c++)
		{
			printf("%.1f | ", *(*(mt+f)+c));
		}
	printf("\n");
	}


	return 0;
}
