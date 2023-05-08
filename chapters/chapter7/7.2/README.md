# 7.2 Formatted Output - Printf

- Output function `printf` translates intenral values to characters.
- `int printf(char *format, arg1, arg2, ...)`
- converts format and prints its arguments on the standard output under the control of the `format`. 
- it returns the number of characters outputted.
- Between the `%` and the conversion character there many be, in order:
- A minus sign, which specifies left adjustment of the converted argument
- A number that specifies the minimum field width. The covnerted argument will be printed in a field at least this wide. if necessary, it will be padded on the left (or right), if left adjustment is called for to amke up the field width.
- A period, which separates the field width from the precision.
- A number, the precision, that specifies the maximum number of characters to be printed from a string, or the number of digits after the decimal point of a floating-point valu, or the minimum number of digits of an integer.
- An `h` if the integer is to be printed as a `short` or `l` (letter ell) if as a `long`.

## Table 7-1 Basic Printf Conversions

| Character | Argument Type; Printed As  |
|-----------|----------------------------|
| d, i | int; decimal number |
| o | int; unsigned octal number (without leading zero) |
| x, X | int; unsigned hexadecimal number (without a leading 0x or 0X), using abcdef or ABCDEF for 10,..15 |
| u | int; unsigned decimal number |
| c | int; single character |
| s | char *; prints characters from the string until a '\0' or the number of characters given by the precision |
| f | double; [-]m.ddddd, where the number of d's is given by the precision (default 6) |
| e, E | double; [-]m.dddddde+-xx or [-]m.ddddddE+-xx, where the number of d's is given by the preicision (default 6) |
| g, G | double; use %e or %E if the exponent is less than -4 or greater than or equal to the preicsion, otherwise use %f. Trailing zeroes and a trailing decimal point are not printed.
| p | void *; pointer (implementation-dependent representation) |
| % | no argumetnt is converted, print a % |

- `printf("%.*f", 3, num);` // `3` replaces the `*`. Same as "%.3f"

```c 
printf("%.*f\n", 9, 6.023); // output: 6.023000000 
```

- `":%.10s:"` - `:hello, wor:`

```c
printf(s); /* FAILS if s contains % */
printf("%s\n", s); /* SAFE */
```

- `sprintf` formats the arguments arg1, arg2, according to format as before but replaces the result in string instead of on the standard output. `string` must be big enough to recevie the result.
- `int sprintf(char *string, char *format, arg1, arg2,...)`
