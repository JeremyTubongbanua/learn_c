
# 2.12 Precedence and Order of Evaluation

| Operators | Associativity |
|-----------|---------------|
| () [] -> . | left to right |
| ! ~ ++ -- + - * & (type) sizeof | right to left |
| * / % | left to right |
| + - | left to right |
| >> << | left to right |
| < <= > >= | left to right |
| == != | left to right |
| & | left to right |
| ^ | left to right |
| | | left to right |
| && | left to right |
| || | left to right |
| ?: | right to left |
| = += -= *= /= %= &= ^= |= <<= >>= | right to left |
| , | left to right |

Order in which functions are evaluated may differ across compilers

Example (may be different as arguments may be evaluated diff):
```c
power(++n, power(2, n));

++n;
power(n, power(2, n));
```

Unhappy:
```c
a[i] = i++; // is i++ evaluated first before assigning memory at [i]?
```