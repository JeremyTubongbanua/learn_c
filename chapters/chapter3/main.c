
#include <stdio.h>

int main()
{
    int j = 0;
    int n = 0;
    switch (j)
    {
        case 0: 
            ++n;
        case 1: case 2:
            ++n;
        case 4: case 5:
            ++n;
            break;
    }
    printf("n: %d\n", n); // n is 3 in this case
    return 0;
}
