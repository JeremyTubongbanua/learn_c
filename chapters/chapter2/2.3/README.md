# 2.3 Constants

- integer constant `1234`
- long constant `1234L`
- unsigned constant denoted with suffix U
- unsigned long denoted with suffix UL
- `123.4` is a double unless denoted with `123.4f` which is a float.
- `1234l` or `1234L` - long double
- `l` or `L` can also be used for hexadecimals
- `0x1F` or `0x1f` is 15 but can also be written as an unsigned long like `0x1UL`
- character constant 'x', '0', 'a', 'B' can participate in numeric operations 
- `\ooo` octal number (e.g. `\013` is vertical tab)
- `\xhh` hexadecimal number (e.g. `\xb` is vertical tab)
- `\0` null terminator
- Constant expressions (may be evaluated at compilation):
- `MAX_LINE+1` or `23+23+24+LEAP` 
- String literal: `"Lemoande"`
- Concatenation at compile time: `"Lemo" "nade` or `"Lemo""nade"`
- 'x' is an integer used to form the character x, but "x" is a string literal, or an array of characters that contain 'x' and '\0'

## Enumeration Constants

- Enumeration names should be distinct
- Values need not be distinct
- A value is not required for all enums, but will simply follow the last enumerated value
- Tis an alternative 

```c
enum {A = 1, B, C, D};

int main() {
    printf("A: %d\nB: %d\nC: %d\nD: %d\n", A, B, C, D); // 1, 2, 3, 4
    return 0;
}
```