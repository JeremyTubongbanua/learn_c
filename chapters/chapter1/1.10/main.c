
#include <stdio.h>

int x; /* a global variable */

int main() {

    extern int x;
    x = 3;

    printf("%d\n", x);

    return 0;
}