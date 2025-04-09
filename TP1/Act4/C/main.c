#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415

int main(int argc, char *argv[]) {
	
	float longitud, area, radio;
	
	printf("Introduce el radio de la circunferencia: ");
	scanf("%f", &radio);
	
	longitud = 2 * PI * radio;
	area = PI * radio * radio;
	
	printf("La longitud de la circunferencia es: %.2f\n", longitud);
    printf("El area del circulo es: %.2f\n", area);
	
	return 0;
}