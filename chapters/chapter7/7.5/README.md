# 7.5 File Access

## FILE * and fopen(name, mode) from <stdio.h>

```c
#include <stdio.h>

FILE *fp; // pointer to a `FILE`
FILE *fopen(char *name, char *mode); // returns a `FILE *`
fp = fopen(name, mode);
// allowable modes: "w", "a", and "r"
```

## FILE MODES

- if a file does not exist and is opened in `r` or `w`, then it is created, if possible.
- opening an existing file in `w` causes the old contents to be discared, while opening in `a` will append.
- trying to read `r` a file that DNE, will cause an error

## getc(FILE *) and putc(c, FILE *)

- `int getc(FILE *fp)` - returns the next character from the stream referred to by `fp`; it returns `EOF` for the end of file or error.
- `int putc(int c, FILe *fp)` - is an output function. writes character `c` to the file `fp` and returns the character written, or `EOF` if an error occurs


## What getchar() and putchar(c) really are

- When a C program starts, the operating system environmetnt is response for opening three files:
- `stdin`, `stdout`, and `stderr`.
- `stdin` and `stdout` are objects of type `FILE *`.
- Synonymous:
```c
#define getchar() getc(stdin)
#define putchar(c) putc(c, stdout)
```

## fscanf and fprintf

- file scan format (scanning a file formatted)
- file print format (printing a file formatted)

- `int fscanf(FILE *fp, char *format, ...)`
- `int fprintf(FILE *fp, char *format, ...)`

- identical to `scanf` and `printf` except instead of referring to stdin and stdout, they go to `FILE *`'s.

## fclose

- `int fclose(FILE *fp)` is the inverse of `fopen`; it breaks the connection between the file pointe rand hte external name that was established by `fopen`, freeing the file pointe rfor anothe rfile.
