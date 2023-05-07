# 5.4 Address Arithmetic

- `alloc(n)` returns a pointer p to n consecutive character positions, which can be used by the caller of alloc for storing characters.
- `afree(p)` releases storage thus acquired so it can be re-used later.
- These 2 functions are "rudimentary" because `afree` must be made in the opposite order to the calls made on `alloc`. That is, the storage managed by `alloc` and `afree` is a stack (LIFO).
- The standard library provides functions called `malloc` and `free` that have no restrictions.
- `size_t` is `unsigned int` which is the return of `strlen`.
- `p++` would remain consistent in its increment in that the type (whether it be `float`, `char`, etc,..) will increment enough memory to move to the next index.
- `void *` can be assigned a differnet type of pointer without a cast.