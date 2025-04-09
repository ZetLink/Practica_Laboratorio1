#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int num1, num2, temp;
	
	printf("Ingrese el primer numero: ");
	scanf("%d", &num1);
	printf("Ingrese el segundo numero: ");
	scanf("%d", &num2);
	
	printf("Valores originales: num1: %d num2: %d\n", num1, num2);
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("Valores intercambiados: num1: %d num2: %d\n", num1, num2);
	
	return 0;
}