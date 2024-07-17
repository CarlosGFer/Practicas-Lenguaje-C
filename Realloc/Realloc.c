#include <stdio.h>
#include <stdlib.h> // Esta biblioteca debe estar incluida para utilizar las funciones realloc y free

// Función realloc <---> re = Repetir --- alloc = Asignar
// Función free  <-----> Libre
int main(){
    int *pt = (int *) calloc(5, sizeof(int));
    if(pt == NULL){
        printf("\nMemoria insuficiente\n\n");
        exit(1);
    }else{
        printf("\n");
        for(int n = 0; n < 5; n++){
            printf("Valor de pt[%d] = %d\n", n, pt[n]);
        }
        printf("\n");
    }
    
    int *re = (int *) realloc(pt, 10 * sizeof(int));
    if(re == NULL){
        printf("\nMemoria insuficiente\n\n");
        exit(1);
    }else{
        pt = re;
        for(int n = 5; n < 10; n++){
            pt[n] = n * n;
        }
        printf("\n");
        for(int n = 0; n < 10; n++){
            printf("Valor de pt[%d] = %d\n", n, pt[n]);
        }
        printf("\n");
    }

    free(pt);
    printf("\n");
    for(int n = 0; n < 10; n++){
        printf("Valor de pt[%d] = %d\n", n, pt[n]);
    }
    printf("\n");

    system("pause");
    return 0;
}