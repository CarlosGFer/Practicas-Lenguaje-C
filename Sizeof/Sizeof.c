#include <stdio.h>
#include <stdlib.h>



int main(){
    int a;
    float b;
    double c;
    char texto[10] = "Lenguaje C";

    printf("Variable int = %d\n\n", sizeof(a));
    printf("Variable float = %d\n\n", sizeof(b));
    printf("Variable double = %d\n\n", sizeof(c));
    printf("Variable string = %d\n\n", sizeof(texto));

    system("pause");
    return 0;
}