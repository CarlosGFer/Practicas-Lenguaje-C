#include <stdio.h>
#include <stdbool.h>

int main(){
    char L1 = '1', L2 = 'A';
    int n1 = 10, n2 = 2, n3;
    float f1 = 3.71, f2 = 4.21;
    double d1 = 3.71, d2 = 48.65;
    bool B = false;

    //printf("Letra 1 = %c - Letra 2 = %c - Num 1 = %d \n", L1, L2, n1);
    //printf("F1 = %.3f - D1 = %.2f \n", f1, d2);
    //printf("%d\n", B);
    //printf("Resultado = %c\n", n1 + L2);
    //printf("Resultado = %d\n", n1 + n2 + 25);
    //printf("Resultado = %.2f\n", d1 + f2);
    //n3 = -n1;
    //printf("Resultado n3 = %d\n", n3);
    //printf("Resultado = %f \n", n1 * d1);
    //d1 = n1 / 2.0;
    //printf("Resultado = %f\n", d1);
    //printf("Resto 10 / 2 = %d \n", n1 % n2);
    n3 = 5;
    printf("Resultado = %d \n", (n1 + n2) * n3);
    return 0;
}
