#include <stdio.h>
#include <stdlib.h>

int main(){
    // Y (And) Todas las expresiones son verdaderas el resultado es verdadero
    //         Si una expresión es falsa el resultado es falso
    // O (Or) Todas las expresiones son falsas el resultado es falso
    //        Si una expresión es verdadera el resultado es verdadero
    // Negación (Not) Invierte el resulçtado de la expresión
    int a = 10, b = 5;
    //                          Verdadero   Verdadero     Verdadero
    //printf("Resultado = %d\n\n", (a > b) && (a > 7) && (a % b == 0)); // Verdadero
    //                          Verdadero      Falso
    //printf("Resultado = %d\n\n", (a > b) && (a % b == 1)); // Falso
    //                              Falso       Falso
    //printf("Resultado 1 = %d\n\n", (a == b) || (b > 6)); // Falso
    //                            Verdadero     Falso
    //printf("Resultado 2 = %d\n\n", (a > b) || (b >= 6)); // Verdero
    //                            Verdadero     Falso        Verdadero
    //printf("Resultado 3 = %d\n\n", ((a > b) || (b >= 6)) && (a == 10)); // Verdero
    //                          Verdadera
    printf("Resultado = %d\n", !(a >= 10)); // Falso
    return 0;
}
