#include <stdio.h>

#define PI 3.1416

int main(){
    const double PI = 3.1416;

    double x = PI + 5;

    PI = 5;

    return 0;
}
