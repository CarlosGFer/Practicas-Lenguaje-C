#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 1;

    do{
        printf("Valor de A = %d\n", a);
        a = a + 2;
    }while(a < 11);
    
    printf("Fin del programa\n");
    system("pause");
    return 0;
}