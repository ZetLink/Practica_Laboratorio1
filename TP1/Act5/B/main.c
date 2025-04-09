#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float base = 15.0f;
	float altura = 10.0f;
	float superficie;
	superficie = (base * altura) / 2.0f;
	printf("La superficie es %.2f%\n", superficie);
	return (EXIT_SUCCESS);
}