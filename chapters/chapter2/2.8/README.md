# 2.8 Increment and Decrement Operators

- str cat

```c
#include <stdio.h>

/* add `t` to the end of `s`, assume `s` is large enough */
void str_cat(char s[], char t[]);

int main()
{
    char s[] = "hello";
    char t[] = "world\n";
    str_cat(s, t);
    printf("%s\n", s);

    return 0;
}

void str_cat(char s[], char t[])
{
    int i, j;
    i = j = 0;

    while(s[i] != '\0')
        i++;

    // i is currently the index at the `\0`
    while((s[i++] = t[j++]) != '\0')
        ;
}

```
