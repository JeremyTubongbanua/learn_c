#include <stdio.h>

#define max(A, B) (A > B ? A : B)
#define forever for(;;)
#define dprint(expr) printf(#expr " = %.2f\n", expr)
#define paste(x, y) x ## y

int main()
{

    float x = 3;
    int y = 4;

    // forever
    //     dprint(x/y);

    printf("%d\n", paste(3, 4)); // %d is int a = 34;
    return 0;
}
