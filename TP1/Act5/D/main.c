#include <stdio.h>
#include <stdlib.h>

#define EDAD1 7
#define EDAD2 8

int main(int argc, char *argv[]) {
	
	printf("====================================================================\n");
	printf("| El archivo con los errores explicados se encuentra en main.c.bak |\n");
	printf("====================================================================\n");
	printf("\n");
	
	float resultado;
	resultado = (EDAD1 + EDAD2) / 2.0f;
	printf("El promedio de las edades es %f\n", resultado);
	return (EXIT_SUCCESS);
}