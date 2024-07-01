#include <stdio.h>

int num;                  // Variables globales, pueden utilizarse
int cant = 5;             // en cualquier punto del programa

int main(){
    char letra = 'S';     // Variables locales, letra y suma pueden utilizarse
    int suma = 10;        // solamente dentro de la función main

    num = 2;              // La variable num se puede alterar
    suma = suma + num;    // y utilizar porque es global

    for(int x = 0; x < cant; x++){ // La variable X solo puede ser utilizada
        printf("%d", x * num);     // dentro del comando for
    }

    return 0;
}

void funcionX(int param){ // Parámetro formal, puede utilizarse solo en esta función
    float valor = 7.53;   // Variable local, puede utilizarse solo en esta función
    valor = valor + cant; // La variable cant se puede utilizar porque es global
    return;
}