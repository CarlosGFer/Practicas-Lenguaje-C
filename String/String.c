#include <stdio.h>
#include <stdlib.h>

int main(){
    // Declaración de un string
    char str[10] = {'H', 'o', 'l', 'a', '\0'}; // Correcto (Barra cero al final)
    char str1[20] = "Lenguaje C";  // Correcto (No necesita barra cero)
    char str2[20];                 // Correcto (Sin inicialización del string)
//  char str[4.5]; <<<< ERRADO solo número entero o constante para el tamaño
//  char str[2] = {'S', 'o', 'l', '\0'};  <<<< ERRADO (Cantidad elementos superior)


// Atribución de valores de un string
//  str2 = str1; <<< ERRADO No se puede atribuir un string completo

    int ind;
    for(ind = 0; str1[ind] != '\0'; ind++){
        str2[ind] = str1[ind];
    }
    str2[ind] = '\0';
    


// Imprimir un caracter de un string
    for(int x = 0; str2[x] != '\0'; x++){
        printf("%c", str2[x]);
    }
    printf("\n\n");


// Imprimir un string entero
    printf("str2 = %s\n", str2);

    //str1[3] = '\0';
    //printf("str1 = %s\n", str1);

    printf("Digite un texto\n");
    scanf("%s", str2);
    printf("str2 = %s\n", str2);


    system("pause");
    return 0;
}
