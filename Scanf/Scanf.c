#include <stdio.h>
#include <stdlib.h>

#define PI 3.1416

int main(){
    // scanf(Tipo de dato a ingresar, Variable)
    // Circunferencia = 2.PI.radio
    int rad;

    printf("Digite el radio del circulo.\n");
    scanf("%d", &rad);

    float circ = 2 * PI * rad;

    printf("El radio del circulo es %d\n\n", rad);
    printf("La circunferencia es %.4f\n", circ);

    system("pause");

    return 0;
}
