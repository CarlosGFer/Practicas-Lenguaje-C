#include <stdio.h>
#include <stdlib.h>

/* Función recursiva
void cuenta_libros(int libros){
    if(libros > 0){
        cuenta_libros(libros - 1);
    }
}
// Primer llamada = 3 libros
// Segunda llamada = 2 libros
// Tercer llamada = 1 libro
// Cuarta llamada = 0 libros - Caso base
*/

int factorial(int x);

int main(){
    //cuenta_libros(3); // LLamada a la función recursiva
    int resultado = factorial(5);
    printf("\nResultado = %d\n\n", resultado);


    printf("\nFin del programa\n\n");
    system("pause");
    return 0;
}


/*
  Factorial de un número
  Es el producto resultante de multiplicar, un número entero positivo,
  por todos los números enteros inferiores a él hasta llegar a 1.
  El factorial de 0 es igual a 1.

  5! = 5 x 4 x 3 x 2 x 1   Factorial de 5 = 120
  0! = 1
*/

int factorial(int x){
    if(x == 0){
        return 1; // Criterio de parada
    }else{
        return x * factorial(x - 1); // Parámetro de llamada recursiva
    }
}