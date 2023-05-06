

# 4.4 Scope Rules

- functions and external variables do not need to be compiled at the same time.
- `definition` states its type and also allocates storage
- `declaration` states its type

```c
// definition (states type and allocates storage)
int x;
```

```c
// declaration (states type)
extern int x; 
```