# 4.11 The C Preprocessor

- C provides certain language facilities by means of a preprocessor (the first step in compilation).
- Two must frequently used are `#include` and `#define`. 
- `#include` - include contents of a file during compilation
- `#define` - replace a token by an arbitrary sequence of characters

## 4.11.1 File Inclusion

- `#include "filename"` or `#include <filename>` replaces contents of the file `filename`.
- `"filename"` looks from the source file. If it is not found there, it changes it to `<>`
- `<filename>` follows an implementation-defined rule to find the file.
- An included file may have its own set of `#include` lines.

## 4.11.2 Macro Substitution

- A definition has the form

```c
# define name replacement-text
```

- macro substitutions can have arguments

```c
#define max(A, B) (A > B ? A : B)
```

```c
#define forever for(;;) // defines forever to be an infinite loop.
```

- WRONG

```c
max(i++, j++) // the i++ and j++ are symbols and will increment the larger value twice.
```

- You can undefine names

```c
#undef getchar
```

- Use `#` in the replacement text to surround the symbol with double quotes.

```c
#define dprint(expr) printf(#expr " = %.2f\n", expr)

int main()
{
    float x = 3;
    float y = 4;
    dprint(x/y); // prints out "x/y = 0.75"
    return 0;
}
```

- Concatenate actual arguments

```c
#define paste (front, back) front ## back

// doing
paste(name, 1) // creates token name1
```

## 4.11.3 Conditional Inclusion

It is possible to control the pre processer itself using `#if`. 
- `#if` evaluates a constant expression.
- `#endif`, `#elif`, and `#else` are used in conjunction with `#if`.
- `#ifdef` and `#ifndef` can check if something is defined