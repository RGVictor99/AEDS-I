/*  Fazer um programa em C que calcule e escreva o valor da série abaixo com precisão mebnor que um décimo de milionésimo (0,00000001).
    S = 63 + 61/1! + 59/2! + 57/3! + ...
    O programa deve escrever o valor calculado para S com a precisão indicada e o número de termos utilizados.
*/

#include <stdio.h>

int main (void){
    int ntermos = 1;
    double soma = 63, num = 61, den = 1, somaAnt = 0;

    while (soma - somaAnt> 0.00000001)
    {
        somaAnt = soma;
        soma = soma + num / den;
        num = num - 2;
        ntermos++;
        den = den * ntermos;
    }

    printf("soma = %f e numero de termos = %d\n", soma, ntermos);
    

}