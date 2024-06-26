/*      ***  Práctica con matriz  ***

Realizaremos un programa que permita controlar la
venta de las butacas de una sala cinematográfica.
El programa debe presentar en pantalla una matriz
de 8 filas de 12 butacas cada una, indicando cual
de esas butacas está ocupada y cual está libre.
El operador debe indicar el número de fila y el
número de butaca que desea vender, y el programa
debe verificar que la fila y butaca indicadas no
sean números fuera del rango y si la butaca está
ocupada o libre.
También debemos ofrecerle, al operador, la opción
de reiniciar la selección de butaca en el caso de
un error, y la opción de salir del programa para
que comience una nueva venta de otra sesión. En
esta última opción, debe limpiar toda la matriz
colocando las butacas como libres.    
Para el control de las butacas ocupadas o libres,
se utiliza una matriz de 8 líneas por 12 columnas
del tipo char, para indicar en pantalla con una X
la butaca ocupada y con un - la butaca libre.  */


#include <stdio.h>
#include <stdlib.h>

int main(){
    char cine[8][12];
    int fil, but;

// Inicialización de la matriz con todas las butacas en estado libre
    for(int l = 0; l < 8; l++){
        for(int c = 0; c < 12; c++){
            cine[l][c] = '-';
        }
    }

    // While infinito, sale de este bucle cuando se ejecute el comando Break
    while(1){
        // Imprime el estado de las butacas presentando posición de la pantalla,
        // número de butaca y número de fila
        printf("               >>>  PANTALLA  <<<\n\n");
        printf("Butaca   1  2  3  4  5  6  7  8  9 10 11 12\n\n");
        for(int f = 0; f < 8; f++){
            printf("Fila %d ", f + 1);
            for(int b = 0; b < 12; b++){
                printf("  %c", cine[f][b]);
            }
            printf("\n");
        }
        // Solicita ingresar el número de fila
        printf("\nIngrese el numero de fila o 0 para salir del programa\n");
        scanf("%d", &fil);
        printf("\n");
        // Verifica el valor ingresado
        if(fil == 0){  // Solicitó salir del programa
            break;
        }else{         // Verifica el número de fila
            if((fil < 1) || (fil > 8)){  // Número de fila incorrecto
                printf("El numero de fila es incorrecto\n\n");
            }else{  // Número de fila correcto, solicita ingresar el número de butaca
                printf("Digite el numero de butaca o 99 para reiniciar la seleccion\n");
                scanf("%d", &but);
                printf("\n");
                // Verifica el número de butaca
                if(but != 99){  // No solicitó reiniciar la selección
                    if((but < 1) || (but > 12)){  // Numero de butaca incorrecto
                        printf("El numero de butaca es incorrecto\n\n\n\n");
                    }else{  // Número de butaca correcto, verifica si la butaca está ocupada
                        if(cine[fil - 1][but - 1] == 'X'){ // Butaca ocupada
                            printf("La butaca selecionada esta ocupada\n\n\n\n");
                        }else{  // Butaca libre, altera el estado en la matriz
                            cine[fil - 1][but - 1] = 'X';
                        }
                    }
                }
            }
        }
    }

    printf("\nFin del programa\n\n");
    system("pause");
    return 0;
}