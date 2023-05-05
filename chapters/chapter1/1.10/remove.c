/* Removes all comments `//` */

/*
    Example:
    ```c
    // my name is Jeremy
    // this is some code
    int main() {
        // this is some code
        printf("Hello, World!\n");
    }
    // this is some code
    ```
*/

#include <stdio.h>

#define MAX 1000
#define IN 1        // currently in a comment
#define OUT 0       // not in a comment currently

int main()
{
    int c, i = 0, status = OUT;
    char code[MAX];
    while ((c = getchar()) != EOF)
    {
        if(c == '/') {
            status = IN;
        } else if(status == IN && c == '\n') {
            status = OUT;
        } else if(status != IN) {
            code[i++] = c;
        }
    }
    printf("\n\nCode without comments:\n----------\n");
    int j = 0;
    while(code[j] != EOF) {
        printf("%c", code[j++]);
    }
}