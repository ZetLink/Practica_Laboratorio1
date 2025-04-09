#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int segundos;
	float minutos, horas;
	
	printf("Ingrese los segundos: ");
	scanf("%d", &segundos);
	
	minutos = segundos / 60.00;
	horas = segundos / 3600.00;
	
	printf("%d segundos equivalen a %.2f minutos y %.2f horas\n", segundos, minutos, horas);
	
	return 0;
}