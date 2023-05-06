# 4.5 Header Files

- calc.h

```h
#define NUMBER '0'
void push(double);
double pop(void);
int getop(char[]);
int getch(void);
void ungetch(int);
```

- getop.c
```c
#include <stdio.h>
#include <ctype.h>
#include "calc.h"
getop()
{
    // ...
}
```

- why it is important to use void parameters

```c
int foo();

int main()
{
    printf("%d %d\n", foo(3), foo(5));
    return 0;
}

int foo(int x)
{
    return x;
}
```