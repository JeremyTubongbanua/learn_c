# 4.9 Initialization

- `external` and `static` variables are initialized to 0 by default
- `automatic` and `register` variables have garbage

initializing arrays:
```c
int days[] = {3, 3, 3, 1, 2, 2, 3};
```

```c
char pattern[] = "hello";
// is the same as
char pattern[] = {'h', 'e', 'l', 'l', 'o', '\0'};
```