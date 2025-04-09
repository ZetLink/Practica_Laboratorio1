#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415

int main(int argc, char *argv[]) {
	
	float longitud, area, radio, diametro;
	
	printf("Introduce el radio de la circunferencia: ");
	scanf("%f", &radio);
	
	longitud = 2 * PI * radio;
	area = PI * radio * radio;
	diametro = 2 * radio;
	
	printf("Longitud: %.2f\n", longitud);
    printf("Area: %.2f\n", area);
    printf("Diametro: %.2f\n", diametro);
	
	return 0;
}