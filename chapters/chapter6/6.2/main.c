
#include <stdio.h>

struct point
{
    int x;
    int y;
};

struct rectangle
{
    struct point pt1;
    struct point pt2;
};

/* a function called `makepoint` that returns type `struct point` and has two parameters `int x` and `int y` */
struct point makepoint(int x, int y)
{
    struct point temp;
    temp.x = x;
    temp.y = y;
    return temp;
}

int main()
{
    struct point p1 = {1, 1};
    struct point p2 = {4, 3};
    return 0;
}
