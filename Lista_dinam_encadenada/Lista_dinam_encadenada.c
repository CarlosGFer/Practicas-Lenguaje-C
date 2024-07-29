#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct persona{                    // Estructura con tipos de datos que se alamacenan en la lista
    char nombre[30];
    int edad;
};

typedef struct elemento{           // Estructura de los elementos
    struct persona datos;          // Campo datos del tipo estructura persona
    struct elemento *prox;         // Puntero que apunta al próximo elemento de la lista
} *inicio, elem;                   // Puntero del tipo struct elemento y variable del tipo struct elemento

inicio* crea_lista();              // Prototipo función crear lista
int info_lista(inicio *i);         // Prototipo función informa el tamaño de la lista
int inse_lista(inicio *i, struct persona p); // Prototipo función inserir elemento en la lista
int excl_elem(inicio *i);          // Prototipo función excluir elemento de la lista
int excl_nomb(char *n, inicio *i); // Prototipo función excluir elemento por nombre de la persona
int cons_pos(int c, inicio *i, struct persona *p);    // Prototipo función buscar por posición
int cons_nomb(char *n, inicio *i, struct persona *p); // Prototipo función buscar por nombre de la persona
void pres_lista(inicio *i);        // Prototipo función presentar lista completa
int elim_lista(inicio *i);         // Prototipo función eliminar lista



// Función principal
int main(){
    inicio *lista;                 // Puntero que apunta para el puntero struct inicio (Puntero para puntero)

    lista = crea_lista();          // LLama a la función crear lista

    if(lista == NULL){
        printf("\nMemoria insuficiente\n\n");
        exit(1);
    }else{
        printf("\nLa lista fue creada\n\n");
    };
    system("pause");               // Espera que se presione una tecla para continuar

    int salir = 0;                 // Colocada a 1 sale del programa
    int selec;                     // Opción seleccionada del menú
    int retor;                     // Variable donde se coloca el valor retornado por las funciones
    int posic;                     // Posición del elemento en la lista al cual se quiere excluir o buscar
    char nombr[30];                // String donde coloca el nombre de la persona a excluir o buscar
    struct persona datPer;         // Variable tipo struct persona para datos de la persona

    while(salir == 0){             // Mientras salir es igual a cero permanece en el while
        system("cls");             // Limpia el terminal y presenta el menú
        printf("\n **********************************************\n");
        printf(" **                                          **\n");
        printf(" **             Menu de opciones             **\n");
        printf(" **                                          **\n");
        printf(" **  1 - Tamano de la lista                  **\n");
        printf(" **  2 - Inserir persona en la lista         **\n");
        printf(" **  3 - Excluir elemento de la lista        **\n");
        printf(" **  4 - Excluir por nombre de la persona    **\n");
        printf(" **  5 - Buscar por posicion del elemento    **\n");
        printf(" **  6 - Buscar por nombre de la persona     **\n");
        printf(" **  7 - Presentar lista completa            **\n");
        printf(" **  8 - Eliminar lista (Liberar memoria)    **\n");
        printf(" **  0 - Salir del programa                  **\n");
        printf(" **                                          **\n");
        printf(" **********************************************\n\n");
        printf(" Seleccione una opcion:  ");
        scanf("%d", &selec);               // Coloca en selec la opción seleccionada
        system("cls");                     // Limpia el terminal

        switch(selec){

            // Salir del programa
            case 0:
                salir = 1;                 // Indica salir del programa y limpia el terminal
                system("cls");
                break;


            // Consultar tamaño de la lista
            case 1:
                retor = info_lista(lista); // LLama a la función tamaño de la lista
                if(retor == -1){
                    printf("\nSe produjo un error\n\n");
                    exit(1);

                }else{
                    printf("\nLa lista tiene %d elementos\n\n", retor);
                }
                system("pause");           // Espera que se presione una tecla para continuar
                break;
    

            // Inserir elemento en final de lista, inicio de lista o en forma ordenada
            case 2:
                printf("\nIngrese el nombre:  "); // Ingresa nombre y edad
                scanf("%s", datPer.nombre);
                printf("\nIngrese la edad:  ");
                scanf("%d", &datPer.edad);

                retor =  inse_lista(lista, datPer); // LLama a la función inserir datos en la lista
                if(retor == -1){
                    printf("\nSe produjo un error\n\n");
                    exit(1);

                }else{
                    if(retor == 0){
                        printf("\nMemoria insuficiente\n\n");

                    }else{
                        printf("\nLa nueva persona fue registrada en la lista\n\n");
                    }
                }
                system("pause");           // Espera que se presione una tecla para continuar
                break;


            // Excluir un elemento del inicio o del final de la lista
            case 3:
                retor = excl_elem(lista);  // LLama a la función excluir elemento de la lista
                if(retor == -1){
                    printf("\nSe produjo un error\n\n");
                    exit(1);

                }else{
                    if(retor == 0){
                        printf("\nLa lista esta vacia!\n\n");

                    }else{
                        printf("\nSe excluyo un elemento de la lista\n\n");
                    }
                }
                system("pause");           // Espera que se presione una tecla para continuar
                break;


            // Excluir elemento por nombre de la persona
            case 4:
                retor = info_lista(lista); // LLama a la función tamaño de la lista
                if(retor == -1){
                    printf("\nSe produjo un error\n\n");
                    exit(1);

                }else{
                    if(retor == 0){
                        printf("\nLa lista esta vacia!\n\n");

                    }else{
                        printf("\nDigite el nombre de la persona a excluir de la lista:  ");
                        scanf("%s", nombr);
                        retor = excl_nomb(nombr, lista); // LLama a la función excluir por nombre
                        if(retor == -1){
                            printf("\nSe produjo un error\n\n");
                            exit(1);

                        }else{
                            if(retor == 0){
                                printf("\nEl nombre %s no se encuentra en la lista\n\n", nombr);

                            }else{
                                printf("\n%s se excluyo de la lista\n\n", nombr);
                            }
                        }
                    }
                }
                system("pause");           // Espera que se presione una tecla para continuar
                break;


            // Buscar un elemento por posición
            case 5:
                retor = info_lista(lista); // LLama a la función tamaño de la lista
                if(retor == -1){
                    printf("\nSe produjo un error\n\n");
                    exit(1);

                }else{
                    if(retor == 0){
                        printf("\nLa lista esta vacia!\n\n");

                    }else{
                        printf("\nIngrese el numero de posicion a consultar:  ");
                        scanf("%d", &posic);
                        retor = cons_pos(posic, lista, &datPer); // LLama a la función búsqueda por posición
                        if(retor == -1){
                            printf("\nSe produjo un error\n\n");
                            exit(1);

                        }else{
                            if(retor == 0){
                                printf("\nLa posicion %d no es valida\n\n", posic);

                            }else{
                                printf("\nPosicion %d =  Nombre: %s  ---  Edad: %d\n\n", posic, datPer.nombre, datPer.edad);
                            }
                        }
                    }
                }
                system("pause");           // Espera que se presione una tecla para continuar
                break;


            // Buscar un elemento por el nombre de la persona
            case 6:
                retor = info_lista(lista); // LLama a la función tamaño de la lista
                if(retor == -1){
                    printf("\nSe produjo un error\n\n");
                    exit(1);

                }else{
                    if(retor == 0){
                        printf("\nLa lista esta vacia!\n\n");

                    }else{
                        printf("\nIngrese el nombre a buscar:  ");
                        scanf("%s", nombr);
                        retor = cons_nomb(nombr, lista, &datPer); // LLama a la función búsqueda por nombre
                        if(retor == -1){
                            printf("\nSe produjo un error\n\n");
                            exit(1);

                        }else{
                            if(retor == 0){
                                printf("\nEl nombre %s no se encuentra en la lista\n\n", nombr);

                            }else{
                                printf("\nNombre: %s  ---  Edad: %d\n\n", datPer.nombre, datPer.edad);
                            }
                        }
                    }
                }
                system("pause");           // Espera que se presione una tecla para continuar
                break;


            // Presentar lista completa
            case 7:
                retor = info_lista(lista); // LLama a la función tamaño de la lista
                if(retor == -1){
                    printf("\nSe produjo un error\n\n");
                    exit(1);

                }else{
                    if(retor == 0){
                        printf("\nLa lista esta vacia\n\n");

                    }else{
                        printf("\n");
                        pres_lista(lista); // LLama a la función presentar lista completa
                    }   
                }
                system("pause");           // Espera que se presione una tecla para continuar
                break;


            // Eliminar lista (Liberar memoria asignada)
            case 8:
                retor = elim_lista(lista); // LLama a la función eliminar lista
                if(retor == 0){
                    printf("\nSe produjo un error\n\n");
                    exit(1);

                }else{
                    printf("\nLista eliminada\n\n");
                }
                salir = 1;                 // Indica salir del programa
                break;


            // Seleccionó una opción no válida
            default:
                printf("\nOpcion no valida\n\n");
                system("pause");           // Espera que se presione una tecla para continuar
                break;
        }
    }


    printf("\nFin del programa\n\n\n");
    return 0;
}



// Función crear la lista
// Parámetros:
//    Ninguno
// Retorna:
//    NULL = Cantidad de memoria insuficiente
//       x = La dirección de memoria donde está el
//           inicio de la lista conteniendo valor NULL
inicio* crea_lista(){
    inicio *x;                             // Declara un puntero local
    x = (inicio *) malloc(sizeof(inicio)); // Asigna una dirección de memoria para el inicio de la lista
    if(x != NULL){                         // Hay suficiente memoria
        *x = NULL;                         // Carga el valor NULL en la dirección de inicio de la lista
    }
    return x;                              // Retorna NULL o la dirección de memoria de inicio de la lista
}



// Función del tipo int que retorna el tamaño de la lista
// Parámetros:
//    *i = Puntero con la dirección de memoria donde está el primer elemento
// Retorna:
//    -1 = Error de lista no válida
//  cant = Cantidad de elementos en la lista
int info_lista(inicio *i){
    if(i == NULL){
        return -1;        // Retorna error de lista no válida

    }else{
        int cant = 0;     // Inicializa una variable que cuenta la cantidad de elementos
        elem *e;          // Declara un puntero auxiliar del tipo struct elemento
        e = *i;           // Inicializa el puntero con la dirección de inicio del primer elemento
        while(e != NULL){ // Mientras e sea diferente de NULL se mantiene en el comando de repetición
            cant++;       // Incrementa el contador de cantidad
            e = e->prox;  // Coloca en el puntero e el valor del puntero que apunta al próximo elemento
        }
        return cant;      // Retorna la cantidad de elementos de la lista
    }
}



// Función del tipo int que realiza la inserción de nuevos elementos en la lista
// Parámetros:
//    *i = Puntero con la dirección de memoria donde está el primer elemento
//     p = Variable del tipo estructura persona que contiene los datos de la persona a inserir
// Retorna:
//    -1 = Se produjo error por lista no válida
//     0 = Memoria insuficiente
//     1 = La inserción se realizó correctamente
int inse_lista(inicio *i, struct persona p){
    if(i == NULL){
        return -1;                         // Retorna indicando error lista no válida

    }else{
        elem *e;                           // Declara un puntero del tipo struct elemento
        e = (elem *) malloc(sizeof(elem)); // Asigna memoria dinámicamente para el nuevo elemento
        if(e == NULL){                     // Memoria insuficiente
            return 0;                      // Retorna el código de memoria insuficiente

        }else{
/*
// Inserir en el inicio de la lista
            e->datos = p;                    // Insiere los datos en el espacio de memoria asignado
            e->prox = *i;                    // Atribuye al puntero prox la dirección a la que apunta inicio
            *i = e;                          // El puntero inicio apunta para la dirección del nuevo elemento

// Inserir en el final de la lista
            e->datos = p;                    // Insiere los datos en el espacio de memoria asignado
            e->prox = NULL;                  // El puntero prox apunta a una dirección de memoria nula
            if(*i == NULL){                  // Es una lista vacía
                *i = e;                      // El puntero inicio apunta para la dirección del nuevo elemento 

            }else{                           // No es una lista vacía
                elem *aux;                   // Declara un puntero auxiliar del tipo struct elemento
                aux = *i;                    // Atribuye la dirección de inicio al puntero auxiliar
                while(aux->prox != NULL){    // Permanece en el while mientras que prox sea diferente de NULL
                    aux = aux->prox;         // Carga en auz el inicio del próximo elemento
                }
                aux->prox = e;               // Coloca en prox del último elemento el inicio del nuevo elemento
            }
*/
// Inserir de manera ordenada por edad
            e->datos = p;                   // Insiere los datos en el espacio de memoria asignado
            int t = info_lista(i);          // LLama a la función que retorna el tamaño de la lista
            if(t == -1){
                    printf("\nSe produjo un error\n\n");
                    exit(1);

                }else{
                    if(t == 0){              // La lista está vacía
                        e->prox = NULL;      // Atribuye al puntero prox una dirección nula
                        *i = e;              // El puntero inicio apunta para la dirección del nuevo elemento

                    }else{                   // No es una lista vacía
                        elem *ant;           // Declara un puntero para apuntar al elemento anterior
                        elem *act = *i;      // Declara un puntero que apunta al elemento actual

                        // Permanece en el while mientras que el puntero actual sea diferente
                        // de una dirección nula y además mientras que la edad del elemento
                        // actual sea menor que la edad del nuevo elemento
                        while(act != NULL && act->datos.edad < p.edad){
                            ant = act;       // Al puntero anterior se le atribuye la dirección del actual
                            act = act->prox; // A actual se le atribuye la dirección del próximo elemento
                        }

                        if(act == *i){       // Verifica si actual es igual al inicio de la lista
                            e->prox = *i;    // Atribuye al puntero prox la dirección a la que apunta inicio
                            *i = e;          // El puntero inicio apunta para la dirección del nuevo elemento

                        }else{
                            e->prox = ant->prox; // El nuevo elemento apunta para el sucesor (Puede ser NULL)
                            ant->prox = e;   // El puntero anterior apunta para el nuevo elemento
                        }
                    }
                }

            return 1;                        // Retorna indicando inserción realizada correctamente
        }
    }
}



// Función del tipo int que realiza la exclusión de un elemento de la lista
// Parámetros:
//    *i = Puntero con la dirección de memoria donde inicia la lista
// Retorna:
//    -1 = Se produjo error por lista no válida
//     0 = Lista vacía
//     1 = La exclusión se realizó correctamente
int excl_elem(inicio *i){
    if(i == NULL){
        return -1;                   // Retorna indicando error lista no válida

    }else{
        int t = info_lista(i);       // LLama a la función que informa el tamaño de la lista
        if(t == 0){
            return 0;                // Retorna indicando lista vacía

        }else{
            elem *e;                 // Declara un puntero del tipo struct elemento
            e = *i;                  // Le atribuye la dirección de inicio de la lista

// Excluir elemento del inicio de la lista
//            *i = e->prox;            // Coloca como dirección de inicio al segundo elemento de la lista

// Excluir elemento del final de la lista
            elem *ant;               // Declara un puntero para apuntar al elemento anterior
            while(e->prox != NULL){  // Sale del while cuando prox apunta para una dirección de memoria nula
                ant = e;             // Coloca en elemento anterior la dirección del elemento actual
                e = e->prox;         // El puntero apunta al próximo elemento
            }
            if(e == *i){             // Verifica si corresponde al primer elemento
                *i = e->prox;        // Apunta al segundo elemento como dirección de inicio

            }else{                   // Es un elemento intermedio o el último
                ant->prox = e->prox; // En el elemento antecesor coloca la dirección del sucesor
            }

            free(e);                 // Libera la memoria que estaba asignada al elemento excluido
            return 1;                // Retorna indicando elemento excluido
        }
    }
}



// Función del tipo int que realiza la exclusión de un elemento de la lista por el nombre de la persona
// Parámetros:
//    *n = Nombre de la persona a excluir de la lista
//    *i = Puntero con la dirección de memoria donde inicia la lista
// Retorna:
//    -1 = Se produjo error por lista no válida
//     0 = Nombre no encontrado en la lista
//     1 = La exclusión se realizó correctamente
int excl_nomb(char *n, inicio *i){
    if(i == NULL){
        return -1;                   // Retorna indicando error lista no válida

    }else{
        elem *e;                     // Declara un puntero del tipo struct elemento
        e = *i;                      // Le atribuye la dirección de inicio de la lista
        elem *ant;                   // Declara un puntero para apuntar al elemento anterior

        // Se mantiene en el while hasta llegar al final de
        // la lista o hasta encontrar el nombre solicitado
        while(e != NULL && strcmp(n, e->datos.nombre) != 0){
            ant = e;                 // Coloca en elemento anterior la dirección del elemento actual
            e = e->prox;             // El puntero apunta al próximo elemento
        }
        if(e == NULL){               // El puntero apunta a una dirección de memoria nula
            return 0;                // Retorna indicando nombre no encontrado

        }else{
            if(e == *i){             // Verifica si corresponde al primer elemento
                *i = e->prox;        // Apunta al segundo elemento como dirección de inicio

            }else{                   // Es un elemento intermedio o el último
                ant->prox = e->prox; // En el elemento antecesor coloca la dirección del sucesor
            }

            free(e);                 // Libera la memoria que estaba asignada al elemento excluido
            return 1;                // Retorna indicando elemento excluido
        }
    }
}



// Función del tipo int que realiza la consulta por posición dentro de la lista
// Parámetros:
//     c = Número de posición a consultar
//    *x = Puntero con la dirección de memoria donde inicia la lista
//    *p = Puntero del tipo estructura persona
// Retorna:
//    -1 = Se produjo error por lista no válida
//     0 = Se produjo error por posición no válida
//     1 = Se encontró el dato buscado
int cons_pos(int c, inicio *i, struct persona *p){
    if(i == NULL){
        return -1;                     // Retorna indicando error lista no válida

    }else{
        if(c < 1){                     // Verifica que el número de posición no sea inferior a 1
            return 0;                  // Retorna indicando posición no válida

        }else{
            elem *e;                   // Declara un puntero auxiliar del tipo struct elemento
            e = *i;                    // Inicializa el puntero con la dirección de inicio del primer elemento
            int n = 1;                 // Declara un contador de posisciones

            // Se mantiene en el while hasta llegar al final de
            // la lista o hasta llegar a la posición solicitada
            while(e != NULL && n < c){
                e = e->prox;           // El puntero apunta al próximo elemento
                n++;                   // Incrementa el contador de possición
            }
            if(e == NULL){             // El puntero apunta a una dirección de memoria nula
                return 0;              // Retorna indicando posición no válida

            }else{
                *p = e->datos;         // Coloca en la estructura persona los datos del elemento encontrado
                return 1;              // Retorna indicando posición encontrada
            }
        }
    }
}



// Función del tipo int que realiza la consulta por nombre de la persona
// Parámetros:
//    *n = Nombre a buscar
//    *x = Puntero con la dirección de memoria donde inicia la lista
//    *p = Puntero del tipo estructura persona
// Retorna:
//    -1 = Se produjo error por lista no válida
//     0 = El nombre no se encuentra en la lista
//     1 = Se encontró el nombre consultado
int cons_nomb(char *n, inicio *i, struct persona *p){
    if(i == NULL){
        return -1;                 // Retorna indicando error lista no válida

    }else{
        elem *e;                   // Declara un puntero auxiliar del tipo struct elemento
        e = *i;                    // Inicializa el puntero con la dirección de inicio del primer elemento

        // Se mantiene en el while hasta llegar al final de
        // la lista o hasta encontrar el nombre solicitado
        while(e != NULL && strcmp(n, e->datos.nombre) != 0){
            e = e->prox;           // El puntero apunta al próximo elemento
        }
        if(e == NULL){             // El puntero apunta a una dirección de memoria nula
            return 0;              // Retorna indicando nombre no encontrado

        }else{
            *p = e->datos;         // Coloca en la estructura persona los datos del elemento encontrado
            return 1;              // Retorna indicando nombre encontrada
        }
    }
}



// Función del tipo void que presenta todos los elementos de la lista
// Parámetros:
//    *i = Puntero con la dirección de memoria donde inicia el primer elemento
// Retorna:
//    Nada
void pres_lista(inicio *i){
    elem *e = *i;          // Declara un puntero del tipo struct elemento y le atribuye la dirección de inicio
    int p = 1;             // Indicador de posición del elemento en la lista
    while(e != NULL){      // Mientras el puntero no apunte a una dirección nula se mantiene en el while
        printf("Posicion %d =  Nombre: %s  ---  Edad: %d\n", p, e->datos.nombre, e->datos.edad);
        p++;               // Incrementa el contador de posición
        e = e->prox;       // El puntero apunta para el próximo elemento
    }
    printf("\n\n");
}



// Función del tipo int que elimina la lista (Libera la memoria asignada)
// Parámetros:
//    *i = Puntero con la dirección de memoria donde inicia la lista
// Retorna:
//     0 = Error con la lista
//     1 = Lista eliminada
int elim_lista(inicio *i){
    if(i == NULL){           // Verifica si es una lista válida
        return 0;            // Retorna indicando error

    }else{
        elem *e;             // Declara un puntero auxiliar del tipo struct elemento

        // Se mantiene en el while mientras la dirección
        // de inicio no sea una dirección de memoria nula
        while((*i) != NULL){
            e = *i;          // Apunta el puntero a dirección de inicio primer elemento
            *i = (*i)->prox; // Apunta el inicio para la dirección del elemento siguiente
            free(e);         // Elimina primer elemento (Ahora el primero es el siguiente)
        }

        free(i);             // Elimina la cabeza de la lista
        return 1;            // Retorna indicando lista eliminada
    }
}