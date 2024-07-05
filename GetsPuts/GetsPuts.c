#include <stdio.h>
#include <stdlib.h>

/*
En la biblioteca stdio.h están localizadas las funciones responsables
por realizar tareas de lectura y escritura, tanto de la entrada y salida
disponibilizadas por la máquina (teclado y terminal), como también de la
lectura y escritura en achivos.
Scanf y printf, ya vistos en un video anterior, también son funciones de
la biblioteca stdio.h.
Esta biblioteca ofrece varias funciones, algunas de ellas realizan una
tarea similiar a las funciones scanf y printf.

gets(string) -- Coloca en un string el texto ingresado por teclado (Lee espacios)
puts(string) -- Presenta en el terminal el string indicado en su parámetro (Agrega \n)
getchar() ----- Lee un único caracter ingresado por teclado
putchar(char) - Presenta en el terminal el caracter indicado en su parámetro
*/

int main(){

    char texto[50];
    char letra;

    printf("\nDigite un texto\n");
    gets(texto);
    puts(texto);
    puts("Se produjo el salto ?");

    puts("Ingrese un caracter");
    letra = getchar();
    putchar(letra);
    puts("");
    
    
    system("pause");
    return 0;
}