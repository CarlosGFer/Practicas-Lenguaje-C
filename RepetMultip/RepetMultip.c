/*  Comandos de repetición for, while
    o do-while uno dentro de otro

        Repetición (condición) {
            Conjunto de comandos;

            Repetición (condición) {
                Conjunto de comandos;

                Repetición (condición) {
                    Conjunto de comandos;

                    .........
                }
            }
        }

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 1, y;

    while(x <= 5){

        for(y = 1; y <= 5; y++){
            if(x == y)
                printf("X ");
            else
                printf("- ");
        }
        printf("\n");
        x++;
    }

    system("pause");
    return 0;
}