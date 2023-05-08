# 7.7 Line Input and Output

- `fgets` is similar to the `getline` function.

```c
char *fgets(char *line, int maxline, FILE *fp)
```

- `fgets` reads the next input line (including the newline) from the file `fp` into the character array `line` at most `maxline-1` characters to be read. The resulting line is terminated with `'\0'`.
- Normally `fgets` returns line
- `fgets` returns NULL or error when it reaches `EOF`.