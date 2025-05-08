#include <stdio.h>
#include <stdlib.h>

#define N 12
//Autor: Rojas Ulises Martin

int main(int argc, char *argv[]) {
	
	float temperaturas[N];
	temperaturas[0] = 35.4;
	temperaturas[1] = 34.1;
	temperaturas[2] = 30.8;
	temperaturas[3] = 26.5;
	temperaturas[4] = 16.3;
	temperaturas[5] = 10.8;
	temperaturas[6] = 8.3;
	temperaturas[8] = 7.1;
	temperaturas[9] = 12.6;
	temperaturas[10] = 27.6;
	temperaturas[11] = 30.5;
	
	printf("\n Trimeste\t Mes\t Temperatura Promedio \n");
	for(int i=0; i<=N; i++){
		if (i == 3 || i == 4 || i == 5){
			printf("\n Segundo\t %d\t %.2f \n", i, temperaturas[i]);
		} else if (i == 9 || i == 10 || i == 11){
			printf("\n Cuarto\t\t %d\t %.2f \n", i, temperaturas[i]);
		}
	}
	
	return 0;
}