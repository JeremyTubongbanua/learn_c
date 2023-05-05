
#include <stdio.h>

int main()
{
    printf("%d\n", 0001 << 2); // this number (originally 1 in decimal is 0001) becomes 4 in decimal because it's shifted 2 so (0100)
    int x = 1;
    int y = 1;
    printf("%d\n", x & y); // 1 (checks if 01 and 01 each bit are the same)

    printf("%d\n", ~x); // ~ is the 1's complement unary operator (turns 01 into 10)

    int c = 16;
    printf("%d\n", ~c);
    return 0;
}
