#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 7, x = 0;

    vuelve:
    x++;
    if(x < n){
        printf("Valor X = %d\n", x);
        goto vuelve;
    }

    printf("Fin del programa\n");
    system("pause");
    return 0;
}