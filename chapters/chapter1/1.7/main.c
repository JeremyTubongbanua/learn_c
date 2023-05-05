
#include <stdio.h>

// int power(int, int); // function prototype
int power(int base, int n) {
    int i, p;
    p = 1;
    for(int i = 1; i <= n; ++i) {
        p = p * base;
    }
    return p;
}

int main()
{
    printf("%d\n", power(2, 5));
}