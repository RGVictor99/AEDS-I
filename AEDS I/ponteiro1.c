#include<stdio.h>

int main(){

    // uma variavel inteira
    int x = 10;
    //dois ponteiros de inteiros
    int *p1, *p2;

    //p1 recebe o endereço de x
    p1 = &x;
    //p2 recebe o endereço apontado por p1
    p2 = p1;

    //escreve o endereço e o valor de x
    printf("%p\n%d\n", p2, *p2);

}