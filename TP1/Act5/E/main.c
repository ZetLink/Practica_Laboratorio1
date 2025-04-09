#include <stdio.h>
#include <stdlib.h>

#define EDAD1 7
#define EDAD2 8

int main(int argc, char *argv[]) {
	float promedio = (EDAD1+EDAD2)/2.0f;
	printf("El promedio de las edades es %.2f%\n", promedio);
	return (EXIT_SUCCESS);

}