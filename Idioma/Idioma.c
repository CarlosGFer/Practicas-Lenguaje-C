#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    //printf("Idioma = %s\n", setlocale(LC_ALL, ""));
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("La acentuación en Español está correcta ?\n");
    system("pause");
    return 0;
}