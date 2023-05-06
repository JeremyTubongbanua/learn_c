#include <stdio.h>

#define max(A, B) (A > B ? A : B)

int main()
{
    int a = 3;
    int b = 4;
    printf("%d\n", max(a, b));
    return 0;
}
