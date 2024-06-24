/*
Continue es similar al comando break,
se utiliza dentro de los comandos de
repetición for, while y do-while.
Interrumpe la secuencia en la que se
encuentra dentro del comando y pasa
para la próxima secuencia del mismo
comando ignorando todos los comandos
que lo suceden.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Ingrese un numero\n");
    scanf("%d", &num);

    for(int x = 0; x <= 10; x++){
        if(x == num)
            continue;
        printf("Ciclo X = %d\n", x);
    }

    printf("Fin del programa\n");
    system("pause");
    return 0;
}