#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 10

//Autor: Rojas Ulises Martin

int main(int argc, char *argv[]) {
	
	int numeros[N];
	
	numeros[0] = 23;
	numeros[1] = -14;
	numeros[2] =  7;
	numeros[3] = 39;
	numeros[4] = -42;
	numeros[5] = 11;
	numeros[6] = -7;
	numeros[7] = 4;
	numeros[8] = -25;
	numeros[9] = 11;

//  Cargar vector	
//	for(int i=0; i<N; i++){
//		printf("Ingrese valor: ");
//		scanf("%d", &numeros[i]);
//	}
	
	int contador = 0, buscado;
	bool b = false;
	printf("Numero buscado: ");
	scanf("%d", &buscado);
	for(int i=0; i<N; i++){
		if(numeros[i] == buscado){
			contador++;
			b = true;
		}
	}
	if(b){
		printf("El elemento %d existe en el vector | Cantidad de veces repetido: %d", buscado, contador);
	} else {
		printf("No existe");
	}
	
	return 0;
}