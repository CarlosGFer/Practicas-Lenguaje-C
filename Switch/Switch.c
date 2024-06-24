#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Digite un numero entre 1 y 5\n");
    scanf("%d", &num);

    switch(num){
        case 1:
            printf("Se Digito el numero 1\n");
            break;
        case 2:
            printf("Se Digito el numero 2\n");
            break;
        case 3:
            printf("Se Digito el numero 3\n");
            break;
        case 4:
            printf("Se Digito el numero 4\n");
            break;
        case 5:
            printf("Se Digito el numero 5\n");
            break;
        default:
            printf("El caracter digitado no corresponde a lo solocitado\n");
            break;
    }
    
    system("pause");
    return 0;
}