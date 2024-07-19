#include <stdio.h>
#include <stdlib.h>

typedef struct Personas{
    char nombre[30];
    int edad;
    char sexo;
} persona;

int main(){
    int cantd = 0;      // Cantidad de registros en el sistema
    int selec;          // Opción seleccionada del menú
    int salir = 0;      // Colocada a 1 sale del programa
    persona *pt = NULL; // Puntero que apunta a la primer dirección de memoria reservada

    while(salir == 0){
        system("cls");
        printf("\n    Menu de opciones\n\n");
        printf("1 - Adicionar nueva persona\n");
        printf("2 - Presentar lista de personas\n");
        printf("0 - Salir del programa\n\n");
        printf("Seleccione una opcion:  ");
        scanf("%d", &selec);
        getchar();
        system("cls");

        switch(selec){
            case 0:
                salir = 1;
                break;
    
            case 1:
                pt = (persona *) realloc(pt, (cantd + 1) * sizeof(persona));
                if(pt == NULL){
                    printf("\nMemoria insuficiente\n\n");
                    exit(1);
                }else{
                    printf("\nIngrese el nombre de la persona:  ");
                    gets(pt[cantd].nombre);
                    printf("\nIngrese la edad:  ");
                    scanf("%d", &pt[cantd].edad);
                    printf("\nIndique el sexo (F o M):  ");
                    scanf(" %c", &pt[cantd].sexo);
                    cantd++;
                }
                break;

            case 2:
                if(cantd > 0){
                    printf("\nLista de personas\n");
                    for(int x = 0; x < cantd; x++){
                        printf("Nombre: %s  ---  Edad: %d  ---  Sexo: %c\n", pt[x].nombre, pt[x].edad, pt[x].sexo);
                    }
                    printf("\n");
                    system("pause");
                }else{
                    printf("\nNinguna persona registrada\n\n");
                    system("pause");
                }
                break;

            default:
                printf("\nOpcion invalida!\n\n");
                system("pause");
                break;
        }
    }

    free(pt);

    printf("\nFin del programa\n\n\n");
    return 0;
}