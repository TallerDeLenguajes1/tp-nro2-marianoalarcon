#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Libreria para hacer uso de fn rand

#define F 15 //Se define constante para definir la cantidad de Filas de la Matriz
int main(void)
{   
	srand(time(NULL)); 
	int f,c;
	printf("PUNTO 3\n");
	int **mt; //Puntero doble a la matriz de "F"filas por "cantColumnas"columnas
	mt = (int **) malloc(sizeof(int)*F);
	int *arregloContadores = (int*) malloc(sizeof(int)*F);
	for(f = 0;f<F; f++)
	{
		int cantColumnas = rand() % 11+5;
		mt[f] = (int *) malloc(cantColumnas * sizeof(int));

		int cont=0;
	 	for(c = 0;c<cantColumnas; c++)
		{
			mt[f][c]=rand() % 900+100; 
			if(( *(*(mt+f)+c)  %2)==0){
				cont++;
			}
			printf("%d | ", *(*(mt+f)+c));
		}
		arregloContadores[f] = cont;
		printf("\n");
		printf("Cantidad de Numeros Pares de la Fila [%d] :  %d \n",f+1,cont);
	}
	printf("Punto 3 apartado C \n\n");
	for (int j = 0; j < F; j++)
	{
		printf("F[%d] = %d\n" ,j+1 ,arregloContadores[j]);
	}
	return 0;
}
