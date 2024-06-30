#include <stdio.h>
#include <stdlib.h>

int main(){
    // Declaración matriz multi-dimensional
    char mult3[4][3][5];

    int mult4[2][4][3][6];

    float mult5[3][2][5][3][8];
    
    // Inicialización de matriz multi-dimensional
    int multA[2][3][2] = {{{2, 4}, {5, 8}, {0, 1}}, {{7, 9}, {3, 5}, {6, 2}}};
    //         Dimensión    0  0    0  0    0  0      1  1    1  1    1  1
    //         Línea        0  0    1  1    2  2      0  0    1  1    2  2
    //         Columna      0  1    0  1    0  1      0  1    0  1    0  1

    int multB[2][3][2] = {2, 4, 5, 8, 0, 1, 7, 9, 3, 5, 6, 2};
    //         Dimensión  0  0  0  0  0  0  1  1  1  1  1  1
    //         Línea      0  0  1  1  2  2  0  0  1  1  2  2
    //         Columna    0  1  0  1  0  1  0  1  0  1  0  1

    char mult[2][6][10];
    // Asignar valores a la matriz
    for(int d = 0; d < 2; d++){
        for(int l = 0; l < 6; l++){
            for(int c = 0; c < 10; c++){
                mult[d][l][c] = '*';
            }
        }
    }
    // Prsentar valores
    for(int d = 0; d < 2; d++){
        printf("\n                Dimension %d\n", d);
        printf("Columna   0  1  2  3  4  5  6  7  8  9\n\n");
        for(int l = 0; l < 6; l++){
            printf("Linea %d ", l);
            for(int c = 0; c < 10; c++){
                printf("  %c", mult[d][l][c]);
            }
            printf("\n");
        }
    }



    
    printf("\nFin del programa\n");
    system("pause");
    return 0;
}