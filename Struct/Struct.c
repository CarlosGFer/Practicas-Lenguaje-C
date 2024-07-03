#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definición de struct
struct registro{
    char nombre[20]; // Campo tipo string de 20 caracteres
    int edad;        // Campo tipo número entero
    char sexo;       // Campo tipo caracter
    float estatura;  // Campo tipo número con decimal
//  float peso;
//  char calle[20];
//  int numero;
//  int telefono;
};  // IMPORTANTE !   La definición de un struct se debe terminar con punto y coma

struct registro2{       // No se puede repetir el nombre de un struct
    char nombre[20]; // Se pueden repetir los nombres de los campos de otro struct
    int edad;
    char sexo;
    float estatura;
};

// Declaración del struct
struct registro p1;   // Declara una variable llamada p1 del tipo struc

// Declaración e inicialización del struct
//struct registro p1 = {"Juan", 37, 'M', 1.78};

// Declaración de un struct con múltiples variables
struct registro p2, p3, p4;

int main(){
// Atribución de valores del struct
    p1.edad = 37;
    p1.estatura = 1.75;
    p1.sexo = 'M';
    //p1.nombre = "Julio"; // ERRADO
    strcpy(p1.nombre, "Julio");
    scanf("%s", &p1.nombre);
    p2 = p1;

    struct registro2 p5;

    //p5 = p1; // ERRADO

    system("pause");
    return 0;
}