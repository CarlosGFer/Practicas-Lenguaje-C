#include <stdio.h>
#include <stdlib.h>
#define lin 2               // Pre-definición de un valor constante
#define col 5               // Pre-definición de un valor constante

int main(){
    int a = 7;              // Declaración de variable tipo int

    // Declaración de matriz
    float fl[5][3];         // Correcto
    char mat[lin][col];     // Correcto porque alum es un valor constante pre-definido
    int x[lin + 1][col -1]; // Correcto
    int y[lin + 1][4];      // Correcto
    int b[5][4.2];          // ERRADO No puede ser un número con decimales
    int c[a][12];           // ERRADO No puede utilizar variables

    // Atribución de valores
    mat[0][0] = 'X';                   // Correcto es el primer elemento de la matriz mat
    mat[1][4] = 'A';                   // Correcto es el último elemento de la matriz mat
    mat[0][2] = mat[0][3] + mat[1][1]; // Correcto atribución de una expresión aritmética
    mat[4][2] = 'N';                   // ERRADO Índice fuera de rango
    mat[1][2] = 23.67;                 // ERRADO La matriz mat es del tipo char
    x = y;                             // ERRADO No se puede atribuir una matriz completa
    x[0][3] = y[1][2];                 // Correcto


    mat[0][0] = 'A';
    mat[0][1] = 'J';
    mat[0][2] = 'C';
    mat[0][3] = 'F';
    mat[0][4] = 'M';
    mat[1][0] = 'Z';
    mat[1][1] = 'H';
    mat[1][2] = 'E';
    mat[1][3] = 'O';
    mat[1][4] = 'V';


    char mat[2][5] = {{'A', 'J', 'C', 'F', 'M'},{'Z', 'H', 'E', 'O', 'V'}};
//    Elemento línea    0    0    0    0    0  -  1    1    1    1    1
//    Elemento columna  0    1    2    3    4  -  0    1    2    3    4



    char mat[2][5] = {'A', 'J', 'C', 'F', 'M', 'Z', 'H', 'E', 'O', 'V'};
//   Elemento línea    0    0    0    0    0 -- 1    1    1    1    1
//   Elemento columna  0    1    2    3    4 -- 0    1    2    3    4

//                ---------------------
//       Línea 0  | A | J | C | F | M |
//                ---------------------
//       Línea 1  | Z | H | E | O | V |
//                ---------------------
//       Columna    0   1   2   3   4


    system("pause");
    return 0;
}