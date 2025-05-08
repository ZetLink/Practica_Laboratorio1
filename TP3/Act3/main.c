#include <stdio.h>
#include <stdlib.h>

//Autor: Rojas Ulises Martin

int main(int argc, char *argv[]) {
	
	int numero = 0;
	do {
		printf("Ingrese un numero de 4 digitos: ");
		scanf("%d", &numero);	
	} while (numero < 999 || numero > 10000);
	
	int digitos[3];
	digitos[0] = (int)(numero/1000);
	digitos[1] = (int)(numero/100) - (int)(numero/1000) * 10;
	digitos[2] = (int)(numero/10) - (int)(numero/100) * 10;
	digitos[3] = numero - (int)(numero/10) * 10;
	
	for(int i=0; i<4; i++){
		printf("\n %d \n", digitos[i]);
	}
	
	return 0;
}