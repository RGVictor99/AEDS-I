#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void) {
int numero, palpite;
srand((unsigned)time(NULL));
numero = rand() % 10;
puts("\n Adivinhe o numero magico [ 0 . . 9 ]");
scanf ("%d", &palpite);
if (palpite == numero)
    puts ("\nACERTOU !");
else
    printf ("\nErrou. O numero era %d!!\n" ,numero);
}