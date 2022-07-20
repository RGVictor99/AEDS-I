#include <stdio.h>

int main () {
    int valor, i = 0;

    printf("Digite um número: ");
    scanf("%d", &valor);

    while (i <= 10)
    {
        printf("%d x %d = %d\n", valor, i, valor * i);
        i++;
    }
    
}