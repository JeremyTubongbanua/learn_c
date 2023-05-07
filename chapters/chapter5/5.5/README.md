
# 5.5 Character Pointers and Functions

- String constants are automatically given the null terminator `'\0'`.
- Thus, the length in storage is includnig the null terminator. It is always the number of characters plus the null terminator.
- `strcmp(s, t)` compares two char pointers. returns negative, zero, or positive if s is lexicographically less than, equal to, or greater than t.

Standard idioms for pushing and popping:
```
*p++ = val;
val = *--p;
```
