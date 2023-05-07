# 5.9 Pointers vs. Multi-dimensional Arrays

```c
int a[10][20]; // 10 rows, 20 columns of ints
int *b[10]; // 10 columns each holding an int pointer


// a and b are the same thing, assuming each element of b holds a twenty-element vector.
// b's elements could also be variably sized.
```