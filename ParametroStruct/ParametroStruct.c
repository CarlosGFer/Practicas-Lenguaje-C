#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct persona{
    char nombre[20];
    int edad;
    char sexo
} per;

void campo_valor(int ed, char sx);
void campo_refer(int *ed, char *sx);
void campo_combinado(char *nm, int ed, char *sx);

void struct_valor(struct persona p);
void struct_refer(struct persona *p);


int main(){
    //per.nombre = "Jose Garcia"; <<< ERRADO
    strcpy(per.nombre, "Jose Garcia"); // Utiliza la biblioteca string.h
    per.edad = 43;
    per.sexo = 'M';

    //campo_valor(per.edad, per.sexo);

    //campo_refer(&per.edad, &per.sexo);

    //campo_combinado(per.nombre, per.edad, &per.sexo);

    struct_valor(per);

    struct_refer(&per);


    system("pause");
    return 0;
}

void campo_valor(int ed, char sx){
    printf("Por valor: Edad = %d   -   Sexo = %c\n\n", ed, sx);
    return;
}

void campo_refer(int *ed, char *sx){
    printf("Por referencia: Edad = %d   -   Sexo = %c\n\n", *ed, *sx);
    return;
}

void campo_combinado(char *nm, int ed, char *sx){
    printf("Combinado: Nombre = %s   -   Edad = %d   -   Sexo = %c\n\n", nm, ed, *sx);
    return;
}

void struct_valor(struct persona p){
    printf("Estructura valor: Nombre = %s   -   Edad = %d   -   Sexo = %c\n\n", p.nombre, p.edad, p.sexo);
    return;

}

void struct_refer(struct persona *p){
    // *p.nombre <<< Errado
    // *(p.nombre) <<< Errado
    // (*p).nombre <<< Correcto
    printf("Estructura referencia: Nombre = %s   -   Edad = %d   -   Sexo = %c\n\n", p->nombre, p->edad, p->sexo);
    return;
}