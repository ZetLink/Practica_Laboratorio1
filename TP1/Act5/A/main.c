#include <stdio.h>
#include <stdlib.h>

#define ANCHO 15
#define LARGO 13

int main(int argc, char *argv[]) {
	
	printf("=====================================================\n");
	printf("| El archivo con errores se encuentra en main.c.bak |\n");
	printf("=====================================================\n");
	
	int area;
	area = LARGO * ANCHO;
	printf("\nEl area es %d\n", area);
	return (EXIT_SUCCESS);
}