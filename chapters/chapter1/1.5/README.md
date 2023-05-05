# 1.5 Character Input and Output

- Text stream is a sequence of characters divided into lines. Each line consists of zero or more characters followed by a newline character
- `getchar` contains the next character of input (normally frmo the keyboard)
- `putchar` prints a character each time it is called

Does the same thing:

```c
printf("%c", c); 
putchar(c);
```