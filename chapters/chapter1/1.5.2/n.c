

#include <stdio.h>

int main()
{
    char nc;

    for (nc = '0'; nc != EOF; ++nc)
        ;
    printf("EOF is %d\n", nc);
    return 0;
}