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
struct persona ingDat();                      // Prototipo función ingresar datos de nueva persona
int inse_lista(lista *x, struct persona p);   // Prototipo función inserir elemento en la lista
int excl_lista(lista *x);                     // Prototipo función excluir elemento de la lista
int excl_elemen(int e, lista *x);             // Prototipo función excluir por número de elemento
int cons_elem(int e, lista *x, struct persona *p);   // Prototipo función buscar por número de elemento
int cons_nomb(char *n, lista *x, struct persona *p); // Prototipo función buscar por nombre


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

    int salir = 0;                            // Colocada a 1 sale del programa
    int selec;                                // Opción seleccionada del menú
    int taman;                                // Tamaño de la lista
    int retor;                                // Valor que indica resultado retornado por una función
    int eleme;                                // Número de elemento a excluir o buscar en la lista

    while(salir == 0){                        // Mientras salir es igual a cero permanece en el while
        system("cls");                        // Limpia el terminal y presenta el menú
        printf("\n ********************************************\n");
        printf(" **                                        **\n");
        printf(" **            Menu de opciones            **\n");
        printf(" **                                        **\n");
        printf(" **  1 - Tamano de la lista                **\n");
        printf(" **  2 - Inserir persona en la lista       **\n");
        printf(" **  3 - Excluir persona de la lista       **\n");
        printf(" **  4 - Excluir por numero de elemento    **\n");
        printf(" **  5 - Buscar por numero de elemento     **\n");
        printf(" **  6 - Buscar por nombre de persona      **\n");
        printf(" **  7 - Presentar lista completa          **\n");
        printf(" **  8 - Eliminar lista (Liberar memoria)  **\n");
        printf(" **  0 - Salir del programa                **\n");
        printf(" **                                        **\n");
        printf(" ********************************************\n\n");
        printf(" Seleccione una opcion:  ");
        scanf("%d", &selec);                  // Coloca en selec la opción seleccionada
        system("cls");                        // Limpia el terminal

        switch(selec){

            // Salir del programa
            case 0:
                salir = 1;                    // Indica salir del programa y limpia el terminal
                system("cls");
                break;


            // Consultar tamaño de la lista
            case 1:
                taman = info_lista(lis);      // LLama a la función tamaño de la lista
                if(taman == -1){
                    printf("\nSe produjo un error\n\n");
                    exit(1);
                }else{
                    printf("\nLa lista tiene %d elementos\n\n", taman);
                }
                system("pause");              // Espera que se presione una tecla para continuar
                break;
    

            // Inserir persona en el final de la lista, inicio de la lista o en forma ordenada
            case 2:
                taman = info_lista(lis);      // LLama a la función tamaño de la lista
                if(taman == -1){
                    printf("\nSe produjo un error\n\n");
                    exit(1);

                }else{
                    if(taman == MAX){
                        printf("\nLa lista esta completa\n\n");

                    }else{
                        struct persona nueva; // Variable tipo estructura persona para datos de nueva persona
                        nueva = ingDat();     // LLama a la función de ingreso de datos nueva persona
                        retor =  inse_lista(lis, nueva); // LLama a la función inserir datos en la lista
                        if(retor == -1){
                            printf("\nSe produjo un error\n\n");
                            exit(1);

                        }else{
                            if(retor == 1){
                                printf("\nLa nueva persona fue registrada en la lista\n\n");
                            }
                        }
                    }
                }
                system("pause");              // Espera que se presione una tecla para continuar
                break;


            // Excluir persona del final o del inicio de la lista
            case 3:
                retor = excl_lista(lis);      // LLama a la función excluir de la lista
                if(retor == -1){
                    printf("\nSe produjo un error\n\n");
                    exit(1);

                }else{
                    if(retor == 0){
                        printf("\nLa lista esta vacia!\n\n");

                    }else{
                        printf("\nSe excluyo una persona de la lista\n\n");
                    }
                }
                system("pause");              // Espera que se presione una tecla para continuar
                break;


            // Excluir persona por número de elemento
            case 4:
                taman = info_lista(lis);      // LLama a la función tamaño de la lista
                if(taman == -1){
                    printf("\nSe produjo un error\n\n");
                    exit(1);

                }else{
                    if(taman == 0){
                        printf("\nLa lista esta vacia!\n\n");

                    }else{
                        printf("\nDigite el numero de elemento a excluir de la lista:  ");
                        scanf("%d", &eleme);
                        retor = excl_elemen(eleme, lis); // LLama a la función excluir por número de elemento
                        if(retor == -1){
                            printf("\nSe produjo un error\n\n");
                            exit(1);

                        }else{
                            if(retor == 0){
                                printf("\nEl elemento %d no es valido\n\n", eleme);

                            }else{
                                printf("\nSe excluyo el elemento %d de la lista\n\n", eleme);
                            }
                        }
                    }
                }
                system("pause");              // Espera que se presione una tecla para continuar
                break;


            // Buscar un registro por número de elemento
            case 5:
                taman = info_lista(lis);      // LLama a la función tamaño de la lista
                if(taman == -1){
                    printf("\nSe produjo un error\n\n");
                    exit(1);

                }else{
                    if(taman == 0){
                        printf("\nLa lista esta vacia!\n\n");

                    }else{
                        struct persona busNum; // Variable del tipo estructura persona
                        printf("Ingrese el numero de elemento a buscar:  ");
                        scanf("%d", &eleme);
                        retor = cons_elem(eleme, lis, &busNum); // LLama a la función búsqueda por elemento
                        if(retor == -1){
                            printf("Se produjo un error\n\n");
                            exit(1);
                        }else{
                            if(retor == 0){
                                printf("El elemento %d no es valido\n\n", eleme);
                            }else{
                                printf("Elemento %d =  Nombre: %s  ---  Edad: %d\n\n", eleme, busNum.nombre, busNum.edad);
                            }
                        }
                    }
                }
                system("pause");
                break;


            // Buscar un registro por nombre de la persona
            case 6:
                taman = info_lista(lis);      // LLama a la función tamaño de la lista
                if(taman == -1){
                    printf("\nSe produjo un error\n\n");
                    exit(1);

                }else{
                    if(taman == 0){
                        printf("\nLa lista esta vacia!\n\n");

                    }else{
                        struct persona busNom; // Variable del tipo estructura persona
                        char nombr[30];        // String donde coloca el nombre a buscar
                        printf("Ingrese el nombre a buscar:  ");
                        scanf("%s", nombr);
                        retor = cons_nomb(nombr, lis, &busNom); // LLama a la función búsqueda por nombre
                        if(retor == -1){
                            printf("Se produjo un error\n\n");
                            exit(1);

                        }else{
                            if(retor == 0){
                                printf("El nombre %s no se encuentra en la lista\n\n", nombr);

                            }else{
                                printf("Nombre: %s  ---  Edad: %d\n\n", busNom.nombre, busNom.edad);
                            }
                        }
                    }
                }
                system("pause");
                break;


            // Prsentar lista completa
            case 7:
                pres_lista(lis);              // LLama a la función presentar lista completa
                system("pause");              // Espera que se presione una tecla para continuar
                break;


            // Eliminar lista (Liberar memoria asignada)
            case 8:
                elim_lista(lis);              // LLama a la función eliminar lista
                printf("\nLista eliminada\n\n");
                salir = 1;                    // Indica salir del programa
                break;
        }
    }

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
//    *x = Puntero con la dirección de memoria donde inicia la lista
// Retorna:
//    Nada
void elim_lista(lista *x){
    free(x);
}


// Función del tipo int que retorna el tamaño de la lista
// Parámetros:
//    *t = Puntero con la dirección de memoria donde inicia la lista
// Retorna:
//    -1 = Error de lista no válida
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
//    *L = Puntero con la dirección de memoria donde inicia la lista
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


// Función del tipo persona que retorna una estructura con
// el nombre y la edad de la nueva persona a inserir en la lista
// Parámetros:
//    Ninguno
// Retorna:
//    Un struct del tipo persona con el nombre y la edad de la nueva persona a inserir en la lista
struct persona ingDat(){
    struct persona ret;                        // Declara una variable local del tipo estructura persona
    printf("\nIngrese el nombre:  ");          // Ingresa nombre y edad
    scanf("%s", ret.nombre);
    printf("\nIngrese la edad:  ");
    scanf("%d", &ret.edad);
    return ret;                                // Retorna una estructura del tipo persona
}


// Función del tipo int que realiza la inserción de nuevos datos en la lista
// Parámetros:
//    *x = Puntero con la dirección de memoria donde inicia la lista
//     p = Variable del tipo estructura persona que contiene los datos de la persona a inserir
// Retorna:
//    -1 = Se produjo error por lista no válida
//     0 = La lista está completa (Alcanzó el tamaño máximo)
//     1 = La inserción se realizó correctamente
int inse_lista(lista *x, struct persona p){
    if(x == NULL){
        return -1;                             // Retorna indicando error lista no válida

    }else{
// Inserir en el final de la lista
//        x->datos[x->cant] = p;             // Isiere los datos en el final de la lista
/*
// Inserir en el inicio de la lista
        for(int m = x->cant - 1; m >= 0; m--){
            x->datos[m + 1] = x->datos[m]; // Desplaza los datos un elemento hacia adelante
        }
        x->datos[0] = p;                   // Isiere los datos en el inicio de la lista
*/
// Inserir de forma ordenada por edad
        int i = 0;                         // Declara una variable para recorrer todos los elementos
        while(i < x->cant && x->datos[i].edad < p.edad){
            i++;
        }
        for(int m = x->cant - 1; m >= i; m--){
            x->datos[m + 1] = x->datos[m]; // Desplaza los datos un elemento hacia el final
        }
        x->datos[i] = p;                   // Isiere los datos de forma ordenada

        x->cant++;                         // Incrementa el campo cantidad de elementos
        return 1;                          // Retorna indicando registro concluído con éxito
    }
}


// Función del tipo int que realiza la exclusión de un elemento de la lista
// Parámetros:
//    *x = Puntero con la dirección de memoria donde inicia la lista
// Retorna:
//    -1 = Se produjo error por lista no válida
//     0 = Lista vacía
//     1 = La exclusión se realizó correctamente
int excl_lista(lista *x){
    if(x == NULL){
        return -1;                             // Retorna indicando error lista no válida

    }else{
        int t = info_lista(x);                 // LLama a la función que informa el tamaño de la lista
        if(t == 0){
            return 0;                          // Retorna indicando lista vacía

        }else{
// Excluir en el final de la lista
//            x->cant--;                         // Decrementa el campo cantidad de elementos

// Excluir en el inicio de la lista
            for(int m = 0; m < x->cant - 1; m++){
                x->datos[m] = x->datos[m + 1]; // Desplaza los datos un elemento hacia el inicio
            }
            x->cant--;                         // Decrementa el campo cantidad de elementos

            return 1;                          // Retorna indicando exclusión concluída con éxito
        }
    }
}


// Función del tipo int que realiza la exclusión de un elemento de la lista
// Parámetros:
//     e = Número de elemento a excluir (Comenzando del número 1)
//    *x = Puntero con la dirección de memoria donde inicia la lista
// Retorna:
//    -1 = Se produjo error por lista no válida
//     0 = Número de elemento no es válido
//     1 = La exclusión se realizó correctamente
int excl_elemen(int e, lista *x){
    if(x == NULL){
        return -1;                                 // Retorna indicando error lista no válida

    }else{
        if(e < 1 || e > x->cant){
            return 0;                              // Retorna indicando número de elemento no válida

        }else{
            if(e < x->cant){                       // Verifica que no sea el último elemento
                for(int m = e - 1; m < x->cant - 1; m++){
                    x->datos[m] = x->datos[m + 1]; // Desplaza los datos un elemento hacia el inicio
                }
            }
            x->cant--;                             // Decrementa el campo cantidad de elementos
            return 1;                              // Retorna indicando exclusión concluída con éxito
        }
    }
}


// Función del tipo int que realiza la consulta por número de elemento de la lista
// Parámetros:
//     e = Número de elemento a buscar
//    *x = Puntero con la dirección de memoria donde inicia la lista
//    *p = Puntero del tipo estructura persona
// Retorna:
//    -1 = Se produjo error por lista no válida
//     0 = Se produjo error por elemento no válido
//     1 = Se encontró el dato buscado
int cons_elem(int e, lista *x, struct persona *p){
    if(x == NULL){
        return -1;                         // Retorna indicando error lista no válida
    }else{
        if(e < 1 || e > x->cant){          // El elemento es menor que 1 o mayor que la cantidad de elementos ?
            return 0;                      // Retorna indicando error elemento inválido
        }else{
            *p = x->datos[e - 1];          // Coloca en el puntero los datos del elemento consultado
            return 1;                      // Retorna indicando consulta exitosa
        }
    }
}


// Función del tipo int que realiza la consulta por nombre en la lista
// Parámetros:
//     e = Nombre a buscar
//    *x = Puntero con la dirección de memoria donde inicia la lista
//    *p = Puntero del tipo estructura persona
// Retorna:
//    -1 = Se produjo error por lista no válida
//     0 = El nombre no se encuentra en la lista
//     1 = Se encontró el nombre consultado
int cons_nomb(char *n, lista *x, struct persona *p){
    int enco = 0;                          // Colocada a 1 indica que se encontró el nombre
    if(x == NULL){
        return -1;                         // Retorna indicando error lista no válida
    }else{
        for(int i = 0; i < x->cant; i++){
            if(strcmp(n, x->datos[i].nombre) == 0){
                enco = 1;                  // Indica en la variable que se encontró el nombre consultado
                *p = x->datos[i];          // Coloca en el puntero los datos del nombre consultado
                break;                     // Aborta el comando de repetición
            }
        }
        return enco;                       // Retorna el resultado de la consulta
    }
}