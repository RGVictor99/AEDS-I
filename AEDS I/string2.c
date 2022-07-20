#include <stdio.h>

int main() {
    char texto [20];
    fgets (texto,20,stdin);
    for (int i = 0; texto[i] !='\0'; i++){
        printf("Texto[%d] = %c (%d) \n", i, texto[i], texto[i]);
    }
}