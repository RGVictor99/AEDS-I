#include <stdio.h>

int main(void)
{
    int notas[50], maior = 0, i, n;
    float media, soma;

    scanf("%d", &n);
    soma = 0.0;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &notas[i]);
        soma = soma + notas[i];
    }

    media = soma / n;

    for (i = 0; i < n; i++)
    {
        if (notas[i] > media)
        {
            maior++;
        }
    }
    printf("Média = %.2f\n", media);
    printf("N. alunos acima da média = %d", maior);
}