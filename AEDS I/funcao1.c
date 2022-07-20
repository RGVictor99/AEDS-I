#include <stdio.h>

void porvalor (int par){
    printf("par = %d\n", par);
    par = 20;
}

int main (){
    int arg = 10;
    porvalor(arg);
    printf("arg = %d\n", arg);
}