
#include <stdio.h>

void f(char *s)
{
    for(int i = 0; *s != '\0'; s++)
    {
        printf("%c ", *s);
    }
    printf("\n");
}

int main()
{
    char msg[] = "hello, world!\n";
    f(msg);
    return 0;
}