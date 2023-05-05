# 1.1 Getting Started

- `cc hello.c` to compile the program
- or `clang hello.c` to compile the program
- to remove `a.out`, `rm a.out`
- to run the program, `./a.out`

```c
// tells the compiler to include information about the standard input/output library;
// stdio == standard input/output
#include <stdio.h>
```

- "hello, world\n" is a string constant
- printf() takes quptes
- no multiline strings in C.

identical output

```c
printf("hello world\n");
```

```c
printf("hello");
printf("world");
printf("\n");
```