#include <stdio.h>
#include <math.h>

#define OUT 0
#define IN 1

int htoi(char hex_value[]);

int main()
{
    char hex_value[] = "0x8F\0";
    int num = htoi(hex_value);
    printf("sum: %d\n", num);
    return 0;
}

int htoi(char hex_value[])
{
    int c, i = 0, j = 0, status = IN, sum, to_add;

    while ((c = hex_value[++i]) != '\0')
        ;

    while (--i >= 0)
    {
        c = hex_value[i];
        printf("c: %c %d %c %c, i: %d, j: %d\n", c, c, c - '0', c - 'A' + 10, i, j);
        if (status)
        {
            if (c >= '0' && c <= '9')
            {
                to_add = (c - '0') * (pow(16, j++));
                printf("adding: %d\n", to_add);
                sum += to_add;
            }
            else if (c >= 'A' && c <= 'F')
            {
                to_add = (c - 'A' + 10) * (pow(16, j++));
                printf("adding: %d\n", to_add);
                sum += to_add;
            }
        }
        else if (c == 'x' || c == 'X')
        {
            status = OUT;
        }
    }
    return sum;
}
