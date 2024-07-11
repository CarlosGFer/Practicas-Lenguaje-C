#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a, b = 20;
    int *p = NULL;
    int *pp = &b;

    a = 178;
    p = &a;

    double c = 3.1416;
    //int ptr = &c; // ERRADO
    

    printf("\nValor de a = %d\n\n", a);
    printf("Valor de p = %d\n\n", p);
    printf("Valor de pp = %d\n\n", pp);
    //printf("Direccion de memoria de a = %d\n\n", &a);
    //printf("Direccion de memoria de p = %d\n\n", &p);
    //printf("Contenido de la direccion de memoria que apunta p = %d\n\n", *p);
    //*p = 25;
    //printf("\nValor de a = %d\n\n", a);
    //p++;
    //printf("Valor de p = %d\n\n", p);
    printf("Tamano de int %d\n\n", sizeof(int));
    printf("Tamano de double %d\n\n", sizeof(double));
    //p = pp;
    //printf("Nuevo valor de p = %d\n\n", p);
    //if(p == pp){
   //     printf("Los punteros son iguales\n\n");
   // }else{
   //     printf("Los punteros son diferentes\n\n");
   // }
    

    system("pause");
    return 0;
}