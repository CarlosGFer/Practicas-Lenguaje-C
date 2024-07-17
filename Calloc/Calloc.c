#include <stdio.h>
#include <stdlib.h> // Esta biblioteca debe estar incluida para utilizar la función calloc

// Función calloc <---> c = (Clean) Limpiar --- alloc = Asignar
int main(){
    int *pt = (int *) calloc(5, sizeof(int));
    printf("\n");
    for(int n = 0; n < 5; n++){
        printf("Valor de pt[%d] = %d\n", n, pt[n]);
    }
    printf("\n");

    for(int n = 0; n < 5; n++){
        pt[n] = n * n;
    }
    
    for(int n = 0; n < 5; n++){
        printf("Valor de pt[%d] = %d\n", n, pt[n]);
    }

    system("pause");
    return 0;
}