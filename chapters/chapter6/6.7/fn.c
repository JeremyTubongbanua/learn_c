#include <stdio.h>

void print_number(int x)
{
    printf("%d\n", x);
}

void print_two_numbers(int a, int b)
{
    void (*printing_function)(int x) = print_number; // `printing_function` is a pointer to a function returning `void` taking parameter `int x`.
    (*printing_function)(a);
    (*printing_function)(b);
}

int main(int argc, char *argv[])
{
    int a = 3;
    int b = 5;
    print_two_numbers(a, b);

    typedef void (*Thing)(int a, int b);
    return 0;
}