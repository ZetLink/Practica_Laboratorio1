#include <stdio.h>
#include <stdlib.h>

struct Persona {
    char nombre[50];
    int edad;
    float sueldo;
};

int main(int argc, char *argv[]) {
	
    struct Persona persona1 = {"Ariel Parra", 25, 7500.84};
    struct Persona persona2 = {"Mariela Diaz", 17, 18700.95};
    struct Persona persona3 = {"Juan Perez", 5, 0.00};

    printf("Apellido y Nombre\tEdad\tSueldo\n");
    printf("------------------\t----\t--------\n");
    printf("%-18s\t%d\t%.2f\n", persona1.nombre, persona1.edad, persona1.sueldo);
    printf("%-18s\t%d\t%.2f\n", persona2.nombre, persona2.edad, persona2.sueldo);
    printf("%-18s\t%d\t%.2f\n", persona3.nombre, persona3.edad, persona3.sueldo);
	
	return 0;
}