#include <stdio.h>
#include <stdlib.h>

//Autor: Rojas Ulises Martin

int main(int argc, char *argv[]) {
	
	//Cargar estatica de cantidad y precio
	int cantidad[5];
	cantidad[0] = 2;
	cantidad[1] = 3;
	cantidad[2] = 4;
	cantidad[3] = 1;
	cantidad[4] = 3;
	cantidad[5] = 7;
	float precio[5];
	precio[0] = 4.50;
	precio[1] = 15.99;
	precio[2] = 2.25;
	precio[3] = 7.10;
	precio[4] = 22.00;
	precio[5] = 2.75;
	
	//Generar total a pagar
	float sumaTotal = 0;
	float totalPagar[5];
	for(int i=0; i<6; i++){
		totalPagar[i] = cantidad[i] * precio[i];
		sumaTotal = sumaTotal + totalPagar[i];
	}
	
	//Mostrar total a pagar
	printf("\n Cantidad\t Precio\t\t Total a pagar\n");
	for(int i=0; i<6; i++){
		printf("\n %d\t\t %.2f\t\t %.2f", cantidad[i], precio[i], totalPagar[i]);
	}
	printf("\n\n Total: %.2f", sumaTotal);
	
	return 0;
}