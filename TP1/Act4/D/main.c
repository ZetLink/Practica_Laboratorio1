#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int num1, num2, num3;
	float promedio;
		
	printf("Ingrese el primer valor: ");
	scanf("%d", &num1);
	printf("Ingrese el segundo valor: ");
	scanf("%d", &num2);
	printf("Ingrese el tercer valor: ");
	scanf("%d", &num3);
	
	promedio = (num1 + num2 + num3) / 3;
	
	printf("\nValores originales: num1:%d - num2:%d - num3:%d\n", num1, num2, num3);
	printf("Promedio: %.2f\n", promedio);
	
	return 0;
}