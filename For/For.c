#include <stdio.h>
#include <stdlib.h>

int main(){
    
    for(int a = 1, b = 10; a <= 10; a++, b--){
        printf("A = %d  -  B = %d\n", a, b);
    }
    
    printf("Fin del FOR\n");
    system("pause");
    return 0;
}