#include <stdio.h>

int main()
{
    char c;

    printf("Digite um dígito entre 1 e 3: ");
    c = getchar();

    switch (c)
    {
    case '1':
        puts("um");
        break;
    case '2':
        puts("dois");
        break;
    case '3':
        puts("tres");
        break;
    default: puts("digito incorreto!");
    }
}