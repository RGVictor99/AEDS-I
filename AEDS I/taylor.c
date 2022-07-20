/*  A função seno pode ser calculada através de aproximações da seguinte série (série de taylor).
    Apresen a saida em Latec.
*/

#include <stdio.h>

int main(void) {
  int n, x = 1, num = 1;

  scanf("%d", &n);
  printf("sen(x) = ");
  do{
    if (num == 1)
      printf("x ");
    else{
      printf("%c \\frac{x^%d}{%d!} ", ( x % 2)?'+':'-', num, num);
    }
    x = x +1;
    num = num + 2;
  }while (x <=n);
  printf("\n");
}