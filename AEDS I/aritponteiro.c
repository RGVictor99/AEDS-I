#include <stdio.h>

int main(void){
    int *pi = 0x1000;
    char *pc = 0x1000;
    pi = pi + 1;
    pc = pc + 1;

    printf("%p\n", pi);
    printf("%p\n", pc);
}