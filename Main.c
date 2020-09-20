#include <stdio.h>

int main(){

    char nombre[100];
    unsigned int edad;

    printf("Hola mundo\n");
    printf("Nombre: \n");
    fgets(nombre, sizeof(nombre), stdin);
    printf("Hola %s", nombre);
    printf("Edad: ");
    scanf("%u", &edad);
    printf("\nVas a cumplir  %u", edad + 1);
    
    return 0;
}
