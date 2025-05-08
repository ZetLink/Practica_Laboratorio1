#include <stdio.h>
#include <stdlib.h>

#define N 4

//Autor: Rojas Ulises Martin

int main(int argc, char *argv[]) {
	
	float precios[N];
	
	precios[0] = 13.25;
	precios[1] = 18.20;
	precios[2] = 43.99;
	precios[3] = 106.45;
	precios[4] = 81.93;
	
	float promedio, mayor = 0, menor = 0, sum;
	//Proemdio de precios
	for(int i=0; i<N; i++){
		sum = sum + precios[i];
		//Buscar mayor
		if (mayor == 0){
			mayor = precios[i];
		} else if(precios[i] > mayor) {
			mayor = precios[i];
		}
		//Buscar menor
		if (menor == 0){
			menor = precios[i];
		} else if(precios[i] < menor) {
			menor = precios[i];
		}
	}
	promedio = sum / N;
	
	//Mostrar datos
	printf("\n Promedio de precios: %.2f", promedio);
	printf("\n Mayor precio: %.2f", mayor);
	printf("\n Menor precio: %.2f", menor);
	
	return 0;
}