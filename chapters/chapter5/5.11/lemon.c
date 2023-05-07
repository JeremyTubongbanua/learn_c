#include <stdio.h>

int lemonade(void)
{
    printf("Lemonade\n");
}

int main()
{
    int (*fn)(void) = lemonade;
    (*fn)();
    return 0;
}