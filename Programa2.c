#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define len 536870912
/*Programa 2: Lectura en desorden e impresion de su posicion*/
int main() {
	clock_t start = clock();
	int *array;
	array  = (int*) malloc(len*sizeof(int));
	printf("Len es %i \n", len);
	int cont;
	int random;
	cont = 0;
	random = rand()%536870912;
	while(cont < len){
		array[random] = random;
		random = rand()%536870912;
		cont = cont + 1;
	}
	printf("Tiempo transcurrido: %f", ((double)clock() - start) / CLOCKS_PER_SEC);
	
	return 1;
}
