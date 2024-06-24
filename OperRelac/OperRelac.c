#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 7, b = 4;

    printf("Resultado = %d\n", a == b);       // Falso
    printf("Resultado = %d\n", a != b + 2);       // Verdadero
    return 0;
}
