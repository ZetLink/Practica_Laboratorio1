#include <stdio.h>
#include <stdlib.h>

#define LONGITUD 16
#define ANCHO 18

int main() {
    int perimetro;

    perimetro = 2 * (LONGITUD + ANCHO);

    printf("El perimetro es: %d\n", perimetro);

    return 0;
}
