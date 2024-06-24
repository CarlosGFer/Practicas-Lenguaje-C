/*
Break permite interrumpir la repetición
de los comandos for, while y do-while.
Se ejecuta por medio de una determinada
condición y el comando de repetición
será interrumpido independientemente
del punto en que se encuentre.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Digite un numero.\n");
    scanf("%d", &num);
    for(int z = 1; z < 5; z++){

        for(int x = 0; x <= 65000; x++){
            printf("X = %d\n", x);
            if(x == num){
                printf("El numero buscado es %d\n", num);
                break;
            }
        }
        printf("Valor Z = %d\n", z);
    }
    printf("Fin del programa\n");
    system("pause");
    return 0;
}