#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct persona{
    char nombre[40];
    int edad;
    char sexo;
    char domicilio[60];
    char telefono[20];
};

struct paciente{
    char patologia[60];
    char admision[8];
    int habitacion;
    int cama;
    struct persona perpac[20];
};
struct paciente pac[20];

struct profesional{
    char especialidad[30];
    char residente;
    struct persona perpro[20];
};
struct profesional pro[20];

int main(){
    pac[0].habitacion = 304;
    pac[0].cama = 3;
    pac[0].perpac[0].edad = 43;
    strcpy(pac[0].perpac[0].nombre, "Julio Romero");
    strcpy(pac[0].perpac[0].domicilio, "Av. San Martin 5438 dpto 12");

    printf("\nPaciente = %s\n", pac[0].perpac[0].nombre);
    printf("Domicilio = %s\n", pac[0].perpac[0].domicilio);
    printf("Edad = %d\n", pac[0].perpac[0].edad);
    printf("Habitacion = %d\n", pac[0].habitacion);
    printf("Cama = %d\n", pac[0].cama);

    
    system("pause");
    return 0;
}