#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Autor: Rojas Ulises Martin

int main(int argc, char *argv[]) {
	
	int NUMEROS[10];
	NUMEROS[0] = 23;
	NUMEROS[1] = -14;
	NUMEROS[2] =  7;
	NUMEROS[3] = 39;
	NUMEROS[4] = -42;
	NUMEROS[5] = 11;
	NUMEROS[6] = -7;
	NUMEROS[7] = 4;
	NUMEROS[8] = -25;
	NUMEROS[9] = 18;
	
	//Ingresar numero buscado
	int buscado = 0;
	printf("Ingrese el numero buscado: ");
	scanf("%d", &buscado);
	
	//Buscar numero
	bool b = false;
	for(int i=0; i<10; i++){
		if(NUMEROS[i] == buscado){	
			b = true;
		}
	}
	if(b){
		printf("El elemento %d existe en el vector", buscado);
	} else {
		printf("El elemento %d no existe en el vector", buscado);
	}
	
	return 0;
}