#include <stdio.h>

int main(){
    // Suma
    int n1 = 10, n2 = 5;
    char c1 = '1', c2 = 'A';
    float f1 = 5.55, f2 = -2.32;
    n1 = n1 + n2; // n1 = 15
    int n3 = n1 + n2 + 7; // n3 = 22
    c1 = c1 + c2;
    f1 = f1 + f2; // f1 = 7.87

    // Resta
    int n4 = n1 - n2; // n4 = 5
    f1 = -f2; // f1 = 2.32

    // Multiplicación
    n4 = n1 * n2; // n4 = 50
    n4 = 5 * n2; // n4 = 25
    n4 = n1 * f1; // n4 = 55

    // División
    n1 = 9;
    n2 = 2;
    n3 = n1 / n2; // n3 = 4
    f1 = n1 / n2; // f1 = 4
    f1 =  n1 / 2.0; // f1 = 4.5

    // Precedencia
    n3 = n1 + n2 * 5; // n3 = 19
    n3 = (n1 + n2) * 5; // n3 = 55

    // Resto
    n3 = n1 % n2; // n3 = 1
    n1 = 10;
    n3 = n1 % n2; // n3 = 0
    return 0;
}