#include <stdio.h>
#include <stdlib.h>

int main(){
    // variable = variable operador expresión
    // variable operador = expresión
    int a = 9, b = 2;
    // Suma
    //a += b;  // a  = a + b
    // Resta
    //a -= b;  // a = a - b
    // Multiplicación
    //a *= b;  // a = a * b
    // División
    //a /= b;  // a = a / b
    // Resto
    a %= b;   // a = a % b

    printf("Resultado de A = %d\n", a);

    system("pause");
    return 0;
}
