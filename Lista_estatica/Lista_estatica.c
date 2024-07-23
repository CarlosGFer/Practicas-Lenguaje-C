#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 6                                 // Constante que define el tamaño máximo de la lista

struct persona{                               // Estructura con tipos de datos que se alamacenan en la lista
    char nombre[30];
    int edad;
};

typedef struct Lista{                         // Estructura de la lista
    int cant;                                 // Campo que indica cantidad de elementos y posición vacía
    struct persona datos[MAX];                // Vector de tamaño MAX de la estructura persona
} lista;                                      // La estructura de la lista es definida como tipo lista

lista* crea_lista();                          // Prototipo función crear lista
void elim_lista(lista *x);                    // Prototipo función eliminar lista
int info_lista(lista *t);                     // Prototipo función informar el tamaño de la lista
void pres_lista(lista *L);                    // Prototipo función presentar lista


// Función principal
int main(){
    lista *lis;                               // Puntero del tipo lista

    lis = crea_lista();                       // LLama a la función crear lista
    if(lis == NULL){
        printf("\n\nMemoria insuficiente\n\n");
        exit(1);
    }else{
        printf("\n\nLa lista fue creada\n\n");
    }
    system("pause");                          // Espera que se presione una tecla para continuar

    int taman;                                // Almacena el tamaño de la lista que retorna la función
    taman = info_lista(lis);                  // LLama a la función tamaño de la lista
    if(taman == -1){
        printf("\nSe produjo un error\n\n");
        exit(1);
    }else{
        printf("\nLa lista tiene %d elementos\n\n", taman);
    }
    system("pause");                          // Espera que se presione una tecla para continuar

    pres_lista(lis);                          // LLama a la función presentar lista completa
    system("pause");                          // Espera que se presione una tecla para continuar

    elim_lista(lis);                          // LLama a la función eliminar lista
    printf("\nLista eliminada\n\n");

    printf("\nFin del programa\n\n\n");
    return 0;
}


// Función del tipo lista que crea la lista
// Parámetros:
//    Ninguno
// Retorna:
//    NULL = Cantidad de memoria insuficiente
//       x = La dirección de memoria donde comienza la lista
lista* crea_lista(){
    lista *x;                              // Declara un puntero local del tipo lista
    x = (lista *) malloc(sizeof(lista));   // Reserva la memoria conforme tamaño de lista
    if(x == NULL){                         // Memoria insuficiente
        return NULL;

    }else{                                 // Memoria sufuciente
        x->cant = 0;                       // Inicializa el campo cantidad indicando ningún elemento
        return x;                          // Retorna la dirección de memoria de inicio de la lista
    }
}


// Función del tipo void que elimina la lista (Libera la memoria asignada)
// Parámetros:
//    Dirección de memoria donde inicia la lista
// Retorna:
//    Nada
void elim_lista(lista *x){
    free(x);
}


// Función del tipo int que retorna el tamaño de la lista
// Parámetros:
//    Dirección de memoria donde inicia la lista
// Retorna:
//      -1 = Error de lista no válida
//    cant = Cantidad de elementos en la lista
int info_lista(lista *t){
    if(t == NULL){
        return -1;                         // Retorna error de lista no válida

    }else{
        return t->cant;                    // Retorna el tamaño actual de la lista
    }
}


// Función del tipo void que presenta todos los elementos de la lista
// Parámetros:
//    Dirección de memoria donde inicia la lista
// Retorna:
//    Nada
void pres_lista(lista *L){
    if(L == NULL){
        printf("Se produjo un error\n\n");
        exit(1);

    }else{
        int t = info_lista(L);                 // LLama a la función que informa el tamaño de la lista
        if(t == 0){                            // Verifica si la lista está vacía
            printf("\nLa lista esta vacia!\n\n");

        }else{
            printf("\n");
            for(int n = 0; n < L->cant; n++){  // Presenta la lista
                printf("Elemento %d =  Nombre: %s  ---  Edad: %d\n", n + 1, L->datos[n].nombre, L->datos[n].edad);
            }
            printf("\n");
        }
    }
}