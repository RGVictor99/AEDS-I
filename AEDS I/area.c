/*
    O programa deve ler um número indeterminado de linhas, cada linha contendo um par dos parâmetros (A,B). 
    Para cada par lido, deverá escrever os parâmetros A e B e a área do triângulo.
    A execução do programa deverá parar quando a entrada for um par de zeros.
*/

#include <stdio.h>

int main(void) {
  float a, b, area = 0;

  printf("Digite as coordenadas (A,B): ");

  do{
    scanf("%f, %f", &a, &b);
    if (a == 0 || b == 0){
      printf("As coordenadas foram (%.f,%.f), portanto não existe triângulo.\n0", a,b);
    }
    else{
    area = (-b / a * b) / 2;
    area = area * -1;
    printf("As coordernadas foram (%.f,%.f) e a area é: %.2f\n", a, b, area);
    }
  }while(a != 0 && b != 0);
}