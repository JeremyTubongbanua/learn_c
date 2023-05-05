

#include <stdio.h>

int main() {

    printf("%6d\n", 5/9); // 0
    printf("%f\n", 5/9); // 0.000000 (gives a warning because we did integer division and trying to output a float)
    printf("%6f\n", 5.0/9); // 0.555556 (float division)
    return 0;
}