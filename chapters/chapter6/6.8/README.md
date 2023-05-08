# 6.8 Unions

- Unions are variables that hold different objects of different types and sizes, while the compiler keeps track of size and alignment requirements.

```c
union u_tag {
    int ival;
    float fval;
    char *sval;
} u;
```

- It is up to the programmer to keep track of which value is currently being stored by that union.
- E.g. a variable namde `utype` that keeps track of which value is currently being held by the union.

```c
if(utype == INT)
{
    pritnf("%d\n", u.ival);
}
else if(utype == FLOAT)
{
    printf("%f\n", u.fval);
}
else if(utype == STRING)
{
    printf("%s\n", u.sval);
}
else
{
    printf("bad type %d in utype\n", utype);
}
```

- Cool fact: typedef structs can have multiple typedefs!

```c
typedef struct u_tag_container
{
    int utype;
    union u_tag u;
} UContainer, XContainer;
```

- Can access union members like such:
- `union-name.member`
- `union-pointer->member`

```c
union <name (optional)> {
    <contents>
} <variables (optional)> ;
```

```c
// This portion is ultimately the "type"
union <name (optional)> {<contents>}
```