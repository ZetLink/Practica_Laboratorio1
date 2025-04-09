#include <stdio.h>
#include <stdlib.h>

#define NUM1 16
#define NUM2 18

int main(int argc, char *argv[]) {
	
	int suma, promedio;
	
	suma = NUM1 + NUM2;
	promedio = suma / 2;
	
	printf("La suma es: %d\n", suma);
	printf("El promedio es: %d\n", promedio);
	
	return 0;
}