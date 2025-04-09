#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float longitud, ancho, profundidad_prom, volumen;
	
	printf("---Ingrese los valores en metros---\n");
	printf("Longitud de la pileta: ");
	scanf("%f", &longitud);
	printf("Ancho de la pileta: ");
	scanf("%f", &ancho);
	printf("Profundidad promedio de la pileta: ");
	scanf("%f", &profundidad_prom);
	
	volumen = longitud * ancho * profundidad_prom;
	printf("El volumen de la pileta es: %.2f metros cubicos\n", volumen);
	
	return 0;
}