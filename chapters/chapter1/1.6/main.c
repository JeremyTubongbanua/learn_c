

#include <stdio.h>

void print_digits(int ndigit[10]) {
    for(int i = 0; i < 10; ++i) {
        printf("%d\n", ndigit[i]);
    }
}

int main() {
    int ndigit[10]; // allocate memory for 10 integers
    int c, i;

    for(int i = 0; i < 10; ++i)
        ndigit[i] = 0;

    while ((c = getchar()) != EOF) {
        if(c >= '0' && c <= '9') {
            ++ndigit[c-'0'];
        }
    }

    print_digits(ndigit);
    return 0;
}