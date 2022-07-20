#include <stdio.h>
int main()
{
    int i, vetor[5];
    for (i = 0; i < 5; i++)
    {
        vetor[i] = (i + 1) * 10;
        printf("% d", vetor[i]);
    }
    printf("\n");
    return 0;
}