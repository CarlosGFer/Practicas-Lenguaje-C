#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;

    printf("Digite un numero entre 1 y 100\n");
    scanf("%d", &num);

    if(num < 50){
        printf("El numero ingresado es menor que 50\n");
    }else{
        printf("El numero ingresado es 100\n");
    }

    system("pause");
    return 0;
}