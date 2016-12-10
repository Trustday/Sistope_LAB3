#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define len 536870912
/*Programa 1: Lectura en orden e impresion de un random de 0 a 100*/
int main() {
	clock_t start = clock();
	int *array;
	array  = (int*) malloc(len*sizeof(int));
	printf("Len es %i \n", len);
	int cont;
	for (cont = 0; cont<len;cont = cont + 1){
		array[cont] = rand();
	}
	printf("Tiempo transcurrido: %f", ((double)clock() - start) / CLOCKS_PER_SEC);
	
	return 1;
}
