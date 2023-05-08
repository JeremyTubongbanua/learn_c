#include <stdio.h>

int main()
{
    int x = 5;
    struct pt {int x; int z;} y;
    struct pt lemon;
    printf("%lu\n", sizeof y);
    return 0;
}
