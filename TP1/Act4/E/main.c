#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int celsius, fahrenheit;
	
	printf("Ingrese los grados Celsius: ");
	scanf("%d", &celsius);
	
	fahrenheit = celsius * 9 / 5 + 32;
	
	printf("%d grados Celsius equivalen a %d grados Fahrenheit\n", celsius, fahrenheit);
	
	return 0;
}