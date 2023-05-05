# 2.5 Arithmetic Operations

- operators `+` `-` `*` `/` `%`
- integer division truncates any decimals
- unary arithmetic (`+` `-`) (have lower precedence over other operators)
- cannot do `%` with floats or doubles.

# 2.6 Relational and Logical Operators

- highest precedence `>`, `>=`, `<` and `<=`
- below them, are `!=` and `==`
- logical operators: `&&` and `||`
- expressions evaluated left to right, overall expression is stopped when the falsehood or the truthhood of the boolean is known.

# 2.7 Type Conversions

- when doing `f + i` (float + integer), the integer is upsized or "widened" to conduct the arithmetic
- char's are just small integers, so arithmetic is possible
- `c >= '0 && c <= '9'` can be replaced with `isdigit(c)` from `<ctype.h>`
- `false == 0` and `true == non-zero`
- `-1L < 1U` is true because `1U` which is an unsigned int is promoted to a signed long 
- `-1L > 1UL` is also true because `-1L` is promoted to an unsigned long which appears greater than `1UL`.
- casting is a unary operator!
- `double sqrt(double)` `sqrt(2)` automatically casts `2` into a double `2.0`.