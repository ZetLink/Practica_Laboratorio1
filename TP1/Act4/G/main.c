#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int monto;
    int b20000, b10000, b2000, b1000, b500, b100;

    printf("Ingrese un monto de dinero: ");
    scanf("%d", &monto);

    b20000 = monto / 20000;
    monto %= 20000;
    b10000 = monto / 10000;
    monto %= 10000;
    b2000 = monto / 2000;
    monto %= 2000;
    b1000 = monto / 1000;
    monto %= 1000;
    b500 = monto / 500;
    monto %= 500;
    b100 = monto / 100;
    monto %= 100;

    printf("Cantidad de billetes:\n");
    printf("20000: %d\n", b20000);
    printf("10000: %d\n", b10000);
    printf("2000 : %d\n", b2000);
    printf("1000 : %d\n", b1000);
    printf("500  : %d\n", b500);
    printf("100  : %d\n", b100);
	
	return 0;
}