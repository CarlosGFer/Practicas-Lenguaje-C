#include <stdio.h>
#include <stdlib.h>

// Definición de la estructura enum color
enum color{
    Blanco = 1,
    Rojo,
    Verde,
    Azul = 10,
    Amarillo,
    Naranja
};
/* 
*****************************************************************
*  Blanco  *  Rojo  *  Verde  *  Azul  *  Amarillo  *  Naranja  *   Identificador
*****************************************************************
*     1    *    2    *   3    *   10   *     11     *    12     *   Valor
*****************************************************************
*/

// Declaración de la variable que contiene la estructura enum color
enum color c1, c2, c3;




int main(){
    c1 = Rojo;
    printf("\nValor c1 = %d\n\n", c1);

    c2 = Azul;
    c3 = c1 + c2;
    printf("\nValor c3 = %d\n", c3);

    system("pause");
    return 0;
}