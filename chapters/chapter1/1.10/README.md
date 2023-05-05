# 1.10 External Variables and Scope

- local variables <=> automatic variables
- automatic variables must explicity be set upon entry (e.g. int i = 0; vs. int i;) or else it will contain garbage.
- An external variable must be defined, exactly once, outside of any function; this sets aside storage for it.
- Variable must be declared in each functiont hat wants to access it; this states the type of the variable. 
- The declaration may be an explicit extern statement.

Example of using `extern`

```c

int x; /* a global variable */

int main() {
    extern int x; // in this case, it is redundant since `int x;` is declared within the same source.
    x = 5;
    printf("%d\n", x);
}

```

- Use `extern` to make your function aware of a global variable from another source, though.
- "Definition" - where it is assigned storage
- "Declaration" - where it exists but is not assigned storage
