#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 10, b = 10, c;

    //a++;   // a = a + 1
    //++a;
    //b--;   // b = b - 1
    //--b;

    //c = ++a; // Pre Incremento
    //c = a++; // Post Incremento
    //printf("Valor A = %d - Valor C = %d", a, c);

    //c = b++; // Pre Decremento
    c = b--;   // Post decremento
    printf("Valor B = %d - Valor C = %d", b, c);

    return 0;
}
