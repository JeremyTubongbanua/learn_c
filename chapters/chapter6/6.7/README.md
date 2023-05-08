# 6.7 Typedef

- C provides a facility called `typedef` for creating a new data type names. For example: `typedef int Length;`
- Makes `Length` s ynonym for int.
- `typedef char *String` - `String` is a synonym for `char *`.
- `typedef` is like storage classes `extern` and `static`.
- `typedef` is kinda like `#define` but is interpreted by the compiler instead of the preprocessor.

```c
Treeptr talloc(void)
{
    return (Treeptr) malloc(sizeof(Treenode));
}
```

- `typedef struct point {int x; int y;} Point;` 
- `struct point {int x; int y;}` is the type
- `typedef <type> Point` makes renames the type to `Point`.

```c
typedef struct point {int x; int y;} Point;

void print_point(Point p)
{
    printf("x:%d\ty:%d\n", p.x, p.y);
}

int main()
{
    Point p1;
    p1.x = 3;
    p1.y = 4;
    print_point(p1);

    struct point p2;
    p2.x = 5;
    p2.y = 6;
    print_point(p2);
    
    // `Point` <=> `struct point`

    return 0;
}

```

- `typedef int (*PFI)(char *, char*);` defines a type `PFI` that is a pointer to a function that returns an int and takes 2 char* parameters.