#include <stdio.h>
int main ( ) {
    printf ( "\n----+----+" );
    printf ( "\n %-9.2f|" ,123.234);
    printf ("\n %9.2f|",3.234);
    printf ("\n%9s", "hello");
    printf("\n%-9s","hello");
    printf ("\n%5.7s.\n\n","1234567890");
    return 0;
}