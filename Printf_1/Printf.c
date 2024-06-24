#include <stdio.h>

int main(){
    char letra = 'A';
    int num1 = 65;
    int num2;
    double num3 = 17.84;

    num2 = num3;

    printf("Valor de Letra = %c - Valor de Num1 = %d \n", letra, num1);
    printf("Valor Num2 = %d - Valor Num3 = %f \n", num2, num3);
    printf("Valor Num1  = %c \n", num1);

    return 0;
}
