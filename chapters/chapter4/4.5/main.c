#include <stdio.h>

int foo();

int main()
{
    printf("%d %d\n", foo(3), foo(5));
    return 0;
}

int foo(int x)
{
    return x;
}