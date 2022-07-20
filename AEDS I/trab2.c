#include <stdio.h>

int main(void)
{
    int vendas[40][20], somaLinha[40], somaCol[20], soma, vprod, a, b, p, v, x = 1, y = 1, i, j, z = 1, w = 1, t = 1;
    char k = 'v';

    scanf("%d %d", &a, &b);
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= b; j++)
        { // Leitura da matriz e zerando ela
            vendas[i][j] = 0;
        }
    }

    scanf("%d %d %d", &v, &p, &vprod);
    vendas[p][v] = vprod;
    while (p != 0 && v != 0 && vprod != 0) // leitura dos dados de entrada
    {
        scanf("%d %d %d", &v, &p, &vprod);
        vendas[p][v] = vprod;
    }
    for (i = 1; i <= a; i++)
    {
        soma = 0;
        for (j = 1; j <= b; j++)
        {
            soma += vendas[i][j]; // Somando linha
        }
        somaLinha[i] = soma;
    }

    for (j = 1; j <= b; j++)
    {
        soma = 0;
        for (i = 1; i <= a; i++)
        {
            soma += vendas[i][j]; // Somando coluna
        }
        somaCol[j] = soma;
    }

    printf("Tabela de Vendas (p = produto, v = vendedor)\n");
    printf("    ");
    while (x <= b)
    {
        if (x > 9)
        {
            printf("%8c%d", k, x); // Logica para tabular v
            x++;
        }
        else
        {
            printf("%9c%d", k, x);
            x++;
        }
    }
    printf("\n");
    printf("    +");
    while (z <= b)
    {
        printf("----------"); // Logica para para tabular "-"
        z++;
    }
    printf("+");
    printf("\n");
    for (i = 1; i <= a; i++)
    {
        if (y > 9)
        {
            printf("p%d |", y); // Logica para tabular p
            y++;
        }
        else
        {
            printf(" p%d |", y);
            y++;
        }
        for (j = 1; j <= b; j++)
        {
            printf("%7d.00", vendas[i][j]); // escrita da matriz
        }
        printf("|");
        printf("%7d.00", somaLinha[i]); // escrita da soma das linhas
        printf("\n");
    }
    printf("    +");
    while (w <= b)
    {
        printf("----------"); // logica para tabular "-"
        w++;
    }
    printf("+");
    printf("\n");
    printf("     ");
    for (j = 1; j <= b; j++)
        printf("%7d.00", somaCol[j]); // Escrita da soma das colunas
    printf("\n");
}