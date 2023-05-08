# 6.3 Arrays of Structures

- Unary operator called `sizeof`
- `sizeof object` or `sizeof(object)` are unanimous.
- `sizeof` yields an integer equal to the size of the specified objects or type in bytes. produces an `unsigned int` value whose type, `size_t` is dfined in the header `<stddef.h>`
- `sizeof x` <- can only use operator with a variable
- `sizeof(x)` or `sizeof(int)` <- can pass in a type or a variable into `sizeof()`.
- `sizeof(int)` returns 4 (because 4 bytes = 32 bits)
```c
struct num {
    int x;
};

sizeof(num); // returns 4 because `num` is a struct with one `int`.
```