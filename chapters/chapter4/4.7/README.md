# 4.7 Register Variables

- `register` declaration advises the compiler that the variable in question will be heavily used.
- compilers are free to ignore the advice
- can only be applied to automatic variables and the formal parameters of a function.

Examples of using `register`:

```c
register int x;
```

```c
f(register unsigned m, register long n)
{
    register int i;
    // ...
}
```