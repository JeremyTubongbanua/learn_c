

#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int c, state, nl, nw;
    nl = nw = 0;
    state = OUT;
    while((c = getchar()) != EOF) {
        if(c == '\n') {
            ++nl;
        }
        if(c == ' ' || c == '\n' || c == '\t') {
            state = IN;
            ++nw;
        } else {
            state = OUT;
        }
    }
    printf("nw: %d\n", nw);
    printf("nl: %d\n", nl);
    return 0;
}