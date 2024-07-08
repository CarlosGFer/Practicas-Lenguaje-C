#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct persona{
    char nombre[20];
    int edad;
    char sexo
} per1, per2;

//struct persona per1;
//struct persona per2;

struct persona cambio(struct persona p);

int main(){
    strcpy(per1.nombre, "Jose Garcia");
    per1.edad = 43;
    per1.sexo = 'M';

    strcpy(per2.nombre, "Laura Perez");
    per2.edad = 36;
    per2.sexo = 'F';

    printf("\nDatos persona 1 antes de la funcion:\n");
    printf("Nombre = %s\n", per1.nombre);
    printf("Edad = %d\n", per1.edad);
    printf("Sexo = %c\n\n", per1.sexo);

    printf("Datos persona 2 antes de la funcion:\n");
    printf("Nombre = %s\n", per2.nombre);
    printf("Edad = %d\n", per2.edad);
    printf("Sexo = %c\n\n", per2.sexo);

    per2 = cambio(per1);

    printf("\nDatos persona 1 despues de la funcion:\n");
    printf("Nombre = %s\n", per1.nombre);
    printf("Edad = %d\n", per1.edad);
    printf("Sexo = %c\n\n", per1.sexo);

    printf("Datos persona 2 despues de la funcion:\n");
    printf("Nombre = %s\n", per2.nombre);
    printf("Edad = %d\n", per2.edad);
    printf("Sexo = %c\n\n", per2.sexo);

    system("pause");
    return 0;
}

struct persona cambio(struct persona p){
    strcpy(p.nombre, "Miguel Lopez");
    p.edad = 59;
    p.sexo = 'M';
    return p;
}