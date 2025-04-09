#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float pies, yardas, pulgadas, centimetros, metros;
	
	printf("Ingrese el valor en pies: ");
	scanf("%f", &pies);
	
	yardas = pies / 3;
	pulgadas = pies * 12;
	centimetros = pies * 30.48;
	metros = pies / 3.28;
	
	printf("%.2f pies equivalen a: %.2f yardas - %.2f pulgadas - %.2f centimetros - %.2f metros", pies, yardas, pulgadas, centimetros, metros);
	
	return 0;
}