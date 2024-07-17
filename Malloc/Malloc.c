#include <stdio.h>
#include <stdlib.h> // Esta biblioteca debe estar incluida para utilizar la función malloc

// Función malloc <---> m = Memoria --- alloc = Asignar
int main(){
    int *pt = (int *) malloc(5 * sizeof(int));

    printf("\n");
    for(int n = 0; n < 5; n++){
        printf("Valor de pt[%d] = %d\n", n, pt[n]);
    }

    printf("\n");
    for(int n = 0; n < 5; n++){
        printf("Ingrese el valor de pt[%d]  ", n);
        scanf("%d", &pt[n]);
    }

    printf("\n");
    for(int n = 0; n < 5; n++){
        printf("Valor de pt[%d] = %d\n", n, pt[n]);
    }

    pt[2] = 153;
    
    printf("\n");
    for(int n = 0; n < 5; n++){
        printf("Valor de pt[%d] = %d\n", n, pt[n]);
    }

    system("pause");
    return 0;
}