# 6.1 Basics of Structures

- Point has an x and y coordinate
- keyword `struct` is for declaring a struct
- `point` is the optional struct name
- the variables named in the struct are called "members."

```c
struct point {
    int x;
    int y;
};
```

- the `struct` declaration defines a type.
- `struct {int x; int y;}` is the type
- `pt` is the variable name
```c
struct {int x; int y;} pt; // "struct {int x; int y;}" is the type just like "int", while "pt" is the variable name/
```

- can tag the struct. in this case, the tag is `point`.
```c
struct point {int x; int y;} pt; // same as above, but our struct has a tag "point"
```

- can reuse the tags using `struct point` or `struct tag`.
```c
// since our struct is now tagged, we can use it as such:
struct point pt2;
```

- can initialize structs with constant expressions using `{}`.
```c
struct point pt2 = {1, 2}; // initialize with constant expressions
```

- can access members using the `.` operator.
```c
printf("x: %d y:%d\n", pt.x, pt.y);
```

- structs can hold other structs (nested structs)
```c
struct rect {
    struct point pt1;
    struct point pt2;
};
```
