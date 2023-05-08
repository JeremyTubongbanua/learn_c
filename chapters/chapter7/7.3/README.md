# 7.3 Variable-length Argument Lists

- argument lists but longer
- `#include <stdarg.h>`
- contains a set of macro definitions that define how to step through an argument list
- The type `va_list` is used to declare a variable that will refer to each argumen
- `va_start(ap, fmt)`
- `void test(char *s, ...)` - arguments are stored in *s
