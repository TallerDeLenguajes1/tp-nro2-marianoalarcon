#include <stdio.h>
#include <stdlib.h>

#define N 4
#define M 5
int main(void)
{
	int f,c;
	double mt[N][M];
	printf("SE MODIFICO EN LA RAMA OPCION2 \n");
	for(f = 0;f<N; f++)
	{
	 	for(c = 0;c<M; c++)
		{
			mt[f][c]=0;
		}
	}

	for(f = 0;f<N; f++)
	{
	 	for(c = 0;c<M; c++)
		{
			printf("%lf", mt[f][c]);
		}
	printf("\n");
	}


	return 0;
}
