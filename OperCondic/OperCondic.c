#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 10, b = 5;  // Variables de la condición
    //                                  Falso                Falso
//                              Falso        Verdadero       Falso
    printf("Resultado = %d\n", ((a == b) && (a % b == 0)) || (b < 5) ? 1 : 0);
    
    system("pause");
    return 0;
}