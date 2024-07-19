#include <stdio.h>
#include <stdlib.h>

int main(){
    int cantd = 0;  // Cantidad de registros en el sistema
    int selec;      // Opción seleccionada del menú
    int salir = 0;  // Colocada a 1 sale del programa
    int *pt = NULL; // Puntero que apunta a la primer dirección de memoria reservada

    while(salir == 0){
        system("cls");
        printf("\n    Menu de opciones\n\n");
        printf("1 - Adicionar nuevo valor\n");
        printf("2 - Presentar lista de valores\n");
        printf("0 - Salir del programa\n\n");
        printf("Seleccione una opcion:  ");
        scanf("%d", &selec);
        system("cls");

        switch(selec){
            case 0:
                salir = 1;
                break;

            case 1:
                pt = (int *) realloc(pt, (cantd + 1) * sizeof(int));
                if(pt == NULL){
                    printf("\nMemoria Insuficiente\n\n");
                    exit(1);
                }else{
                    printf("\nIngrese el nuevo valor a registrar:  ");
                    scanf("%d", &pt[cantd]);
                    cantd++;
                }
                break;

            case 2:
                if(cantd == 0){
                    printf("\nNingun valor registrado\n\n");
                    system("pause");
                }else{
                    printf("\nLista de valores\n");
                    for(int x = 0; x < cantd; x++){
                        printf("%d\n", pt[x]);
                    }
                    printf("\n");
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