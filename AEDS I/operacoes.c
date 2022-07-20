#include <stdio.h>
#include <stdbool.h>
int main() {
    int a = 0xA3 , b = 0x3A;
    printf("%d\n",a);
    printf("%d\n",b);
    printf ("%X & %X = %X\n" , a , b , a&b);
    printf ("%X | %X = %X = %d\n" , a , b , a|b, a|b);
    printf ( "%X ^ %X = %X\n", a , b , a ^ b);
    printf ("%X >> 2 = %X\n" , a , a >> 2 );
    printf ("%X << 2 = %X\n" , a , a << 2 );
    printf ("%X = %X = %d\n", a , ~a, ~a);
    return 0;
}