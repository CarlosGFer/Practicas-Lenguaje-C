#include <stdio.h>
#include <stdlib.h>

// Declaración función con parámetro vector
void imprVect(int *v, int t, int i);   // Correcto
//void imprVect(int v[], int t);  // Correcto
//void imprVect(int v[5], int t); // Correcto


// Declaración función con parámetro matriz
void imprMat(int m[][4], int t);



int main(){
// Índice elemento    0  1  2  3  4  5  6  7  8  9
    int vector[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Vector de 10 elementos tipo int
    //imprVect(vector, 3, 5);

//   Índice líneas       0  0  0  0    1  1  1  1    2   2   2   2
//   Índice columna      0  1  2  3    0  1  2  3    0   1   2   3
    int matriz[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    imprMat(matriz, 2);


    system("pause");
    return 0;
}

void imprVect(int *v, int t, int i){
    for(int n = i; n < t + i; n++){
        printf("%d\n", v[n]);
    }
}

void imprMat(int m[][4], int t){
    for(int l = 0; l < t; l++){
        for(int c = 0; c < 4; c++){
            printf("%d\n", m[l][c]);
        }
    }
}