# 7.8 Miscellaneous Functions

## 7.8.1 String Operations

- `#include <string.h>`
- `strcat(s, t)` - concatenate t to end of s
- `strncat(s, t, n)` - concatenate n characters of t to end of s
- `strcmp(s, t)` - returns negative, zero, or positive for s < 5, s == t, or s > t
- `strncmp(s, t, n)` - same as `strcmp` but only in first `n` characters
- `strcpy(s, t)` - copies t to s
- `strncpy(s, t, n)` - copies at most n characters of t to s
- `strlen(s)` - returns length of s
- `strchr(s, c)` return pointer to first `c` in `s` or NULL if not present
- `strrchr(s, c)` - return pointer to last `c` in `s` or NULL if not present

## 7.8.2 Character Class Testing and Conversion

- `#include <ctype.h>`
- `isalpha(c)` non-zero if `c` is alphabetic, 0 if not
- `isupper(c)` non-zero if `c` is upper case, 0 if not
- `islower(c)` non-zero if `c` is lowercase, 0 if not
- `isdigit(c)` non-zero if `c` is a digit, 0 if not
- `isalnum(c)` non-zero if `c` is isalpha(c) or isdigit(c), 0 if not
- `isspace(c)` non-zero if `c` is blank, tab, newline, return, formfeed, vertical
- `toupper(c)` return `c` converted to uppercase
- `tolower(c)` return `c` converted to lowercase

## 7.8.3 Ungetc

- Standard library
- `int ungetc` - pushes character `c` back onto file `fp` and returns either `c` or `EOF` for an error

## 7.8.4 Command Execution

- `system(char *s)` executes the command contained in the character `s` then resumes execution of the current program
- For example:
```c
char *s = "date";
system(s); // runs `date` in terminal and prints it in stdout
```

## 7.8.5 Storage Management (malloc and calloc)

- They obtain blocks of memory dynamically
- `void *malloc(size_t n)` - returns a pointer to `n` bytes of uninitialized storage, or NULL if the request cannot be satisfied
- `void *calloc(size_t n, size_t size)` - returns a pointe rto enough space for an array of `n` objects of the specified size
- `free(p)` frees the space pointed to by `p` where `p` was originally obtained by a call to `malloc` or `calloc`.
- it is an error to try to use something that was freed.

## 7.8.6 Mathematical Functions

- `#include <math.h>`
- `sin(x)` - sine of x, x in rad
- `cos(x)`
- `atan2(y, x)` - arctangent of y/x, in rad
- `exp(x)` - exponential function
- `log(x)` - x > 0
- `log10(x)` - log base 10 of x, x > 0
- `pow(x, y)`
- `sqrt(x)` - square root of x
- `fabs(x)` - absolute value of x

## 7.8.7 Random Number Generation

- `rand()` computes a sequence of pseud-random integers in the range zero to `RAND_MAX` which is defined in `stdlib.h`
- `srand(unsigned` sets the seed for `rand`