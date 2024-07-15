#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a = 20;
    double b = 3.1416;
    char c = 'F';

    void *ptr;         // Declara puntero genérico
    
    printf("\nDireccion de memoria de c = %d\n", &c);
    printf("Bytes ocupados por c = %d\n", sizeof(c));
    ptr = &c;
    printf("El puntero fue asociado a la variable c\n");
    printf("Direccion de memoria a la que apunta ptr = %d\n", ptr);
    printf("Bytes ocupados por ptr = %d\n\n", sizeof(ptr));


    printf("Direccion de memoria de b = %d\n", &b);
    printf("Bytes ocupados por b = %d\n", sizeof(b));
    ptr = &b;
    printf("El puntero fue asociado a la variable b\n");
    printf("Direccion de memoria a la que apunta ptr = %d\n", ptr);
    printf("Bytes ocupados por ptr = %d\n\n", sizeof(ptr));


    printf("Direccion de memoria de a = %d\n", &a);
    printf("Bytes ocupados por a = %d\n", sizeof(a));
    ptr = &a;
    printf("El puntero fue asociado a la variable a\n");
    printf("Direccion de memoria a la que apunta ptr = %d\n", ptr);
    printf("Bytes ocupados por ptr = %d\n\n", sizeof(ptr));

    ptr = &b;
    printf("Valor de la direccion de memoria que apunta ptr = %.4f\n\n", *(double*)ptr);

    *(double*)ptr = 5.78;
    printf("Valor de b = %.2f\n\n", b);

    printf("Direccion de memoria a la que apunta ptr = %d\n", ptr);
    ptr++;
    printf("Direccion de memoria a la que apunta ptr = %d\n", ptr);

    system("pause");
    return 0;
}