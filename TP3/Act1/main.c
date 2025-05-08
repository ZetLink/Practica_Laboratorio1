#include <stdio.h>
#include <stdlib.h>

//Autor: Rojas Ulises Martin

int main(int argc, char *argv[]) {
	
	int edades[8] = {0};
	
	//Carga vector
	for (int i=0; i<8; i++){
		printf("\n Ingrese la edad N%d: ", i+1);
		scanf("%d", &edades[i]);
	}
	
	//Mostrar vector
	printf("\n ---Edades ingresadas--- \n");
	for (int i=0; i<8; i++){
		printf("\n %d \n", edades[i]);
	}
	
	return 0;
}