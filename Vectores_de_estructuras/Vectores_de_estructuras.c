#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definición de la estructura
struct registro{
    char nombre[20]; // Campo tipo string de 20 caracteres
    int edad;        // Campo tipo número entero
    char sexo;       // Campo tipo caracter
    float estatura;  // Campo tipo número con decimal
};

// Declaración de la estructura
//struct registro p1, p2, p3, p4;  // Declara 4 variables del tipo estructura registro

struct registro per[4]; // Declara 1 vector de 4 elementos del tipo estructura registro

int main(){
    //per[0].edad = 45;
    for(int v = 0; v < 4; v++){
        printf("\nRegistro numero %d\n", v + 1);
        printf("Digite el nombre ");
        scanf("%s", per[v].nombre);

        printf("Ingrese la edad ");
        scanf("%d", &per[v].edad);

        printf("Ingrese el sexo ");
        scanf(" %c", &per[v].sexo);

        printf("Ingrese la estatura ");
        scanf("%f", &per[v].estatura);
    }
    printf("\nEl registro esta completo !\n");

    int x;

    while(1){
        printf("\nDigite el numero de registro o ingrese 0 para salir ");
        scanf("%d", &x);

        if(x == 0){
            break;
        }else{
            if((x > 0) && (x < 5)){
                printf("\nRegistro numero %d\n", x);
                printf("Nombre = %s\n", per[x - 1].nombre);
                printf("Edad = %d\n", per[x - 1].edad);
                printf("Sexo = %c\n", per[x - 1].sexo);
                printf("Estatura = %.2f\n", per[x - 1].estatura);
            }else{
                printf("\nNumero incorrecto\n");
            }
        }
    }


    printf("\nFin del programa\n\n");
    system("pause");
    return 0;
}