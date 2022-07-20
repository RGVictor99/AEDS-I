#include <stdio.h>

int main()
{
    float altura, media, i, maior, menor;

    i = 0;
    media = 0;
    maior = 0;

    printf("Digite uma altura: ");
    scanf("%f", &altura);
    menor = altura;

    while (altura > 0 )
    {
        media = media + altura;
        i++;
        printf("Digite a próxima altura: ");
        scanf("%f", &altura);
        if (altura > maior)
        {
            maior = altura;
        }
        if (altura < menor && altura != 0)
        {
            menor = altura;
        }
    }
    if (i > 0)
    {
        media = media / i;
        printf("A média é: %.2f metros\n", media);
        printf("A maior altura é: %.2f metros\n", maior);
        printf("A menor altura é: %.2f metros\n", menor);
    }
}