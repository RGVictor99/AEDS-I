#include<stdio.h>

double potencia (double base, int expo)
{
    double result = 1;
    for (int i = 0; i < expo; i++)
        result = result * base;
    return result;
}

int main (){
    printf("%.2lf^%d = %.2lf\n", 4.0, 3, potencia(4,3));
    printf("%.2lf^%d = %.2lf\n", 5.0, 3, potencia(5,3));
}