#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD 2

int main(int argc, char *argv[]) {
	int edad1, edad2;
	printf("Ingrese la edad de la primera persona:");
	scanf("%d", &edad1);
	printf("Ingrese la edad de la segunda persona:");
	scanf("%d", &edad2);
	float promedio = (float)(edad1+edad2)/CANTIDAD;
	printf("El promedio de las edades es %.2f%\n", promedio);
	return (EXIT_SUCCESS);
}