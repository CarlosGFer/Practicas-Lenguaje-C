#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    //printf("Idioma = %s\n", setlocale(LC_ALL, ""));
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("La acentuaci�n en Espa�ol est� correcta ?\n");
    system("pause");
    return 0;
}