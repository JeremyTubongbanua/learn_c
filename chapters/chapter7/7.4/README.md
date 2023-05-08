# 7.4 Formatted Input - Scanf

- `scanf` the input analog of `printf` providing many of the same conversion facilities in the opposite direction.
- `int scanf (char* format, ...)`
- `scanf` reads characters from the SI and interprets them according to the spceicication in `format` and stores the results through the remaining arguments.
- `scanf` stops when it exhausts its format string, or when some input fails to match the control specification
- `sscanf` that reads from a string instead of the standard input: `int scanf(char *string, char *format, arg1, arg2,...)` arguments must be pointers
