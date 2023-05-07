#include <stdio.h>

void swap_1(int x, int y);
void swap_2(int *px, int *py);

int main()
{
    int x, y;

    // swap_1 (doesn't work)
    x = 2;
    y = 4;
    printf("x:%d y:%d\n", x, y);
    swap_1(x, y);
    printf("swap_1(int x, int y)\n");
    printf("x:%d y:%d\n", x, y);

    // swap_2
    x = 2;
    y = 4;
    printf("x:%d y:%d\n", x, y);
    swap_2(&x, &y);
    printf("swap_2(int &x, int &y)\n");
    printf("x:%d y:%d\n", x, y);

    return 0;
}

void swap_1(int x, int y)
{
    int temp = x;
    x = y;
    y = x;
}

void swap_2(int *px, int *py)
{
    int temp = *px;
    *px = *py;
    *py = temp;
}
