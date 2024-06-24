#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;

    printf("Digite un numero entre 1 y 100\n");
    scanf("%d", &num);

    if(num % 2 != 0){
        printf("El numero ingresado es impar\n");
        printf("Se cumplio la condicion\n");
    }

    printf("Fin del programa\n");

    system("pause");
    return 0;
}