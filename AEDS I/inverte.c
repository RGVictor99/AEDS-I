#include <stdio.h>

int main () {
    int a, b, aux;
    printf("=== Digite dois valores ===\n");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    aux = a;
    a = b;
    b = aux;
    printf("Os valores invertidos são a = %d e b = %d\n",a,b);
    return 0;
}