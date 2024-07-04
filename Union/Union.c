#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct {
    float volumen;  // En litros (4 bytes de memoria)
    int peso;       // En gramos (2 bytes de memoria)
    int largo;      // En centímetros (2 bytes de memoria)
    int unidad;     // En unidades (2 bytes de memoria)
} med;



/* Memoria con STRUCT

    Total 10 bytes de memoria ocupados
 |  4 bytes  |  2 bytes  |  2 bytes  |  2 bytes  |
    volumen  -   peso    -   largo   -   unidad
*/



//*********************************************************************



union medida{
    float volumen;  // Solamente 4 bytes de memoria
    int peso;
    int largo;
    int unidad;
};


/* Memoria con UNION

 |     Total 4 bytes       |
  volumen/peso/largo/unidad
*/

int main(){
    


    system("pause");
    return 0;
}