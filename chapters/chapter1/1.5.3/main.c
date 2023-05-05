
#include <stdio.h>

int main() {
    int nl, c;

    nl = 0;
    while((c = getchar()) != 'Q') {
        putchar(c);
    }
    // printf("%d\n", nl);
    return 0;
}