#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Tipo de función:
La función no retorna un valor (void)
Retorna un valor (char, int, float, double)
Retorna una estructura (struct)
Retorna un puntero (Dirección de memoria de una variable)
No puede retornar un vector o matriz (Solo cuando están dentro de un struct)
*/

void vacia();
int retorno();
void suma(int x, int z);
int resta(int op, int sus);
int multiRet(int x);
void sumaValor(int v);
void sumaRefer(int *v);

int a = 10, b = 7;


int main(){
    /*
    vacia();
    printf("Volvio de la funcion vacia\n\n");

    int c = retorno();
    printf("\nResultado = %d\n", c);

    suma(a, b);

    printf("\nResultado resta = %d\n", resta(a, b));
    
    int r = multiRet(8);
    printf("\nResultado retorno = %d\n\n", r);
*/
    int d = 13;
    printf("\nValor d antes de funcion por valor = %d\n", d);
    sumaValor(d);
    printf("\nValor d despues de funcion por valor = %d\n", d);
    sumaRefer(&d);
    printf("\nValor d despues de funcion por referencia = %d\n", d);


    system("pause");
    return 0;
}


// Función no retorna valor (Procedimiento)
void vacia(){
    printf("\nEsta es la funcion vacia\n");
    return;
}


// Función retorna un valor
int retorno(){
    //int R = a + b;
    return a + b;
}

// Función no retorna valor y parámetro de entrada por valor
void suma(int x, int z){
    printf("\nResultado suma = %d\n", x + z);
    return;
}

// Función retorna valor y parámetro de entrada por valor
int resta(int op, int sus){
    int x = op - sus;
    return x;
}

// Función con mas de un retorno
int multiRet(int x){
    if(x < 10){
        return 0;
    }else{
        return x / 2;
    }
    printf("\nContinuacion...\n");
}

// Función parámetro de entrada por referencia
/*
   Los parámetros por referencia no indican el
   valor de una variable, indican la posisción
   de memoria donde se encuentran los datos de
   de esa variable.
   Para pasar un parámetro por referencia se
   coloca un & adelante de la variable, cuando
   se recibe un parámetro por referencia se
   coloca un * adelante de la variable.
*/
void sumaValor(int v){
    v = v + 1;
    printf("\nValor v dentro de suma por valor= %d\n", v);
    return;
}

void sumaRefer(int *v){
    *v = *v + 1;
    return;
}