# 7.1 Standard Input and Output

- simplest input mechanism is `int getchar(void)`. returns `EOF` when it reaches the end of a file
- in many environments, a file may be substituted for the keyboard by using the `<` conention for input redirection: if a program `prog` uses `getchar`, then `prog <infile` causes `prog` to read characters from infile instead.
- Input switching is also invisible if the input comes from anothe rprogram via a pipe mechanism `otherprog | prog`
- `int putchar(int)` is used for output: `putchar(c)` puts the character `c` on the standard output which is by default the screen. `putchar` returns the character written, or `EOF` if an error occurs.
- Output can be directed to a file with `>filename:` if `prog` uses putchar.
- `printf` goes to standard output
- `printf` and `putchar` can be interleaved.
- `tolower` is defined in `<ctype.h>`
