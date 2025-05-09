#include <stdio.h>
#include <stdlib.h>

//Autor: Rojas Ulises Martin

int main(int argc, char *argv[]) {
	
	int NUMEROS[20];
	NUMEROS[0] = -12;
	NUMEROS[1] = 37;
	NUMEROS[2] =  8;
	NUMEROS[3] = -45;
	NUMEROS[4] = 21;
	NUMEROS[5] =  0;
	NUMEROS[6] = -27;
	NUMEROS[7] = 46;
	NUMEROS[8] = -3;
	NUMEROS[9] = 15;
	NUMEROS[10] = -50;
	NUMEROS[11] = 34;
	NUMEROS[12] = -8;
	NUMEROS[13] = 7;
	NUMEROS[14] = 49;
	NUMEROS[15] = -19;
	NUMEROS[16] = 24;
	NUMEROS[17] = -36;
	NUMEROS[18] = 2;
	NUMEROS[19] = -41;

	//Buscar cantidad
	int CPN, CN;
	for(int i=0; i<20; i++){
		if(NUMEROS[i] >= 0){
			CPN++;
		} else {
			CN++;
		}
	}
	
	//Definir nuevos vectores
	int POSITIVOS_NULOS[CPN];
	int NEGATIVOS[CN];
	int j = 0, k = 0;
	
	//Cargar los nuevos vectores
	for(int i=0; i<20; i++){
		if(NUMEROS[i] >= 0){
			POSITIVOS_NULOS[j] = NUMEROS[i];
			j++;
		} else {
			NEGATIVOS[k] = NUMEROS[i];
			k++;
		}
	}
	
	//Mostrar vectores
	printf("--- Vector NUMEROS --- \n");
	for(int i=0; i< 20; i++){
		printf("%d ", NUMEROS[i]);
	}
	printf("\n\n --- Vector POSITIVOS_NULOS --- \n");
	for(int i=0; i< CPN; i++){
		printf("%d ", POSITIVOS_NULOS[i]);
	}
	printf("\n\n --- Vector NEGATIVOS --- \n");
	for(int i=0; i< CN; i++){
		printf("%d ", NEGATIVOS[i]);
	}
	
	return 0;
}