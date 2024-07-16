#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 178;
    int *p = &a;      // Puntero (1 nivel)
    int **pp = &p;    // Puntero de puntero (2 niveles)
    int ***ppp = &pp; // Puntero de puntero de puntero (3 niveles)
    
    printf("\nValor de a = %d\n\n", a);
    printf("Direccion de memoria donde se encuentra a = %d\n", &a);
    printf("Direccion que apunta p = %d\n\n", p);
    printf("Direccion de memoria donde se encuentra p = %d\n", &p);
    printf("Direccion que apunta pp = %d\n\n", pp);
    printf("Direccion de memoria donde se encuentra pp = %d\n", &pp);
    printf("Direccion que apunta ppp = %d\n\n", ppp);
    printf("Direccion de memoria donde se encuentra ppp = %d\n\n", &ppp);

    printf("valor de a desde p = %d\n", *p);
    printf("valor de a desde pp = %d\n", **pp);
    printf("valor de a desde ppp = %d\n", ***ppp);


    system("pause");
    return 0;
}