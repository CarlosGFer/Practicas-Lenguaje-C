#include <stdio.h>
#include <stdlib.h>

int main(){
    int vect[5] = {7, 13, 22, 48, 83};

    int *p = vect;  // Puntero de array

    printf("\nDireccion donde se encuentra vect = %d\n", &vect);
    printf("Direccion donde apunta p = %d\n\n", p);

    printf("Valor del indice 0 de vect desde p = %d\n\n", *p);
    printf("Valor del indice 3 de vect desde p = %d\n\n", *(p + 3));
    printf("Valor del indice 3 de vect desde p = %d\n\n", p[3]);

    int a = 178;
    int *pvect[2];

    pvect[0] = &a;
    pvect[1] = vect;

    printf("\nDireccion donde se encuentra a = %d\n\n", &a);
    printf("Direccion donde apunta pvect[0] = %d\n\n", pvect[0]);
    printf("Direccion donde apunta pvect[1] = %d\n\n", pvect[1]);

    printf("Valor de a desde pvect[0] = %d\n\n", *pvect[0]);
    printf("Valor de vector[0] desde pvect[1] = %d\n\n", *pvect[1]);
    printf("Valor de vector[4] desde pvect[1] = %d\n\n", pvect[1][4]);
    
    

    system("pause");
    return 0;
}