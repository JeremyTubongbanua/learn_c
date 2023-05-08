# 7.6 Error Handling - Stderr and Exit

- Multiple ways to handle error
- `fprintf(stderr)` so that it finds its way to the scren instead of disappearing down a pipeline or into an output file
- `exit(2)` terminates the program when it is called. the argument of `exit` is available to whatever process called this one. The success of this program can be tested by othe rprograms. Conventionally `0` singlas all is well, non-zero signals abnormal situations.
- `exit` already calls `fclose` for each open output file, to flush out any buffered output.
- within `main`, `return expr` is equivalent to `exit(expr)`. `exit` has the advantage that it can be called from other functions and that calls to it can be found with a pattern-searching program.
- The function `ferror` returns non-zero if an error occurred on the stream `fp`.
- `int ferror(FILE *fp)`
- `int feof(FILE *fp)` is analogus to `ferror`.