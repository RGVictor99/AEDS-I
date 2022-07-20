#include<stdio.h>

int porref(int *par){
    printf("par = %d\n", *par);
    *par = 20;
}

int main (){
    int arg = 10;
    porref(&arg);
    printf("arg = %d\n", arg);
}