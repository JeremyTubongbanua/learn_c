

#include <stdio.h>

int main() {
    char c = '0';
    while(c != EOF) {
        printf("%c\n", c);
        c += 1;
    }
    printf("EOF is %c (%d)\n", c, c);
    return 0;
}