# 5.10 Commad-line Arguments

When calling main, two arguments are passed.
1. `argc` - argument count
2. `argv` - argument vector, an array of vectors.

Running `echo hello world` will cause:
- `argv[0] == "echo"`
- `argv[1] == "hello"`
- `argv[2] == "world"`
- `argc == 3`.
- `argv[3] == argv[argc] == NULL /* null pointer */`

- `#include <string.h>`
- contains `strstr(s, t)` - returns a pointer ot the first occurence of the string `t` in the string `s`, or NULL if there is none.