#include <stdio.h>
#include <stdlib.h>
#define alum 5              // Pre-definición de un valor constante

int main(){
    /*
    int a = 7;              // Declaración de variable tipo int
    const int b = 12;       // Declaración de variable constante tipo int

    // Declaración de vector
    char letra[5];          // Correcto
    float nota[alum];       // Correcto porque alum es un valor constante pre-definido
    int x[alum + 1], y[6];  // Correcto
    double f[b];            // Correcto ? porque la variable b es una constante
    int z[6.5];             // ERRADO No puede ser un número con decimales
    int c[a];               // ERRADO No puede utilizar variables

    // Atribución de valores
    nota[0] = 6.85;         // Correcto es el primer elemento del vector notas
    nota[4] = 7.50;         // Correcto es el último elemento del vector notas
    nota[1] = nota[0] + nota[4]; // Correcto atribución de una expresión aritmética
    nota[7] = 4.60;         // ERRADO Índice fuera de rango
    nota[2] = 'H';          // ERRADO El vector nota es del float
    x = y;                  // ERRADO No se puede atribuir un vector completo
    x[0] = y[4];            // Correcto

    letra[0] = 'A';
    letra[1] = 'J';
    letra[2] = 'C';
    letra[3] = 'F';
    letra[4] = 'M';

    nota[0] = 6.70;
    nota[1] = 8.15;
    nota[2] = 5.40;
    nota[3] = 7.50;
    nota[4] = 6.85;


    char letra[] = {'A', 'J', 'C', 'F', 'M'};
//         Elemento   0    1    2    3    4

    float nota[alum];
    
    for(int a = 0; a < alum; a++){
        printf("Ingrese la nota del alumno %c\n", letra[a]);
        scanf("%f", &nota[a]);
    }

    float prom = 0;
    for(int p = 0; p < alum; p++)
        //prom = prom + nota[p];
        prom += nota[p];

    //prom = prom / alum;
    prom /= alum;
    for(int x = 0; x < alum; x++){
        if(nota[x] > prom)
            printf("Alumno %c con nota %.2f es superior al promedio de %f\n", letra[x], nota[x], prom);
    }
    */

    printf("\n");

    char texto[10] = {'L', 'e', 'n', 'g', 'u', 'a', 'j', 'e', ' ','C'};

    for(int n = 0; n < 10; ++n){
        printf("%c", texto[n]);
    }
    printf("\n\n");

    system("pause");
    return 0;
}