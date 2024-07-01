#include <stdio.h>
#include <stdlib.h>
#include <string.h>   // Inclusión de la biblioteca

int main(){
//    /*
// Función de copia (strcpy)
    char fuente[20] = "Curso lenguaje C"; // Texto de 16 caracteres
    char destino[18] = "Vacio";

//  destino = fuente;  // ERRADO

    printf("\nDestino = %s\n", destino);
    printf("Fuente = %s\n\n", fuente);
    strcpy(destino, fuente);
    printf("Destino despues de la copia = %s\n\n", destino);
//    */

    /*
// Función de copia con cantidad (strncpy)
    char fuente[15] = "Programacion C";
    char destino[15] = "Hola";
    printf("\nDestino = %s\n", destino);
    printf("Fuente = %s\n\n", fuente);
    strncpy(destino, fuente, 7);
    printf("Destino despues de la copia con cantidad = %s\n\n", destino);
    */

    /*
// Función concatenar (strcat)
    char destino[20] = "Curso ";
    char fuente[15] = "Lenguaje C";
    printf("\nDestino = %s\n", destino);
    printf("Fuente = %s\n\n", fuente);
    strcat(destino, fuente);
    printf("Destino despues de concatenar con fuente = %s\n\n", destino);
    */

    /*
// Función concatenar con cantidad (strncat)
    char destino[20] = "Curso ";
    char fuente[15] = "Lenguaje C";
    printf("\nDestino = %s\n", destino);
    printf("Fuente = %s\n\n", fuente);
    strncat(destino, fuente, 6);
    printf("Destino despues de concatenar con fuente = %s\n\n", destino);
    */

    /*
// Función comparación (strcmp)
    char strA[20] = "Biblioteca string";
    char strB[20] = "Biblioteca string";
    printf("\nString A = %s\n", strA);
    printf("String B = %s\n\n", strB);
    int resultado = strcmp(strA, strB);
    printf("Resultado = %d\n\n", resultado);
    */

    /*
// Función comparación con cantidad (strcmp)
    char strA[20] = "Biblioteca String";  // Texto de 17 caracteres
    char strB[20] = "Biblioteca string";
//           Caracter número 13  ^
    printf("\nString A = %s\n", strA);
    printf("String B = %s\n\n", strB);
    int resultado = strncmp(strA, strB, 13);
    printf("Resultado = %d\n\n", resultado);
    */

    /*
// Función cantidad de caracteres iguales en el inicio de un string (strspn)
    char fuente[20] = "Biblioteca string";
    char compara[10] = "igbt?xB7n";
    printf("\nFuente = %s\n", fuente);
    printf("Comparacion = %s\n\n", compara);
    int cantidad = strspn(fuente, compara);
    printf("Caracteres iguales desde el inicio = %d\n\n", cantidad);
    */

    /*
// Función cantidad de caracteres comparados antes de encontrar una iguladad (strcspn)
    char fuente[20] = "Biblioteca string";
    char compara[10] = "umo=xHz9y";
    printf("\nFuente = %s\n", fuente);
    printf("Comparacion = %s\n\n", compara);
    int cantidad = strcspn(fuente, compara);
    printf("Caracteres comparados antes de una igualdad = %d\n\n", cantidad);
    */

    /*
// Función conteo de los caracteres (strlen)
    char fuente[20] = "Curso lenguaje C";
    printf("\nFuente = %s\n\n", fuente);
    printf("Cantidad de caracteres de Fuente = %d\n\n", strlen(fuente));
    */

    system("pause");
    return 0;
}