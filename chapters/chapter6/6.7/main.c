
#include <stdio.h>

typedef struct point {int x; int y;} Point;

typedef int (*PFI)(char *, char*);

void print_point(Point p)
{
    printf("x:%d\ty:%d\n", p.x, p.y);
}

int main()
{
    Point p1;
    p1.x = 3;
    p1.y = 4;
    print_point(p1);

    struct point p2;
    p2.x = 5;
    p2.y = 6;
    print_point(p2);
    
    // `Point` <=> `struct point`

    return 0;
}
