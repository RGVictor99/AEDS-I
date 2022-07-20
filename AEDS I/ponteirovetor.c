#include<stdio.h>

int main (){

    char vetor[15] = "victor";
    char *p;
    p = vetor;
    printf("%c %c\n", vetor[2], *(p+2));
}