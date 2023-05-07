# 5.11 Pointers to Functions

- Functions are not variables. but it is possible to define pointers to functions.
- Any pointer can be cast to `void *` and be cast back without loss of information.
- `int (*comp)(void *, void *)` says that `comp` is a pointer to a function that has two `void *` arguments and returns an int. 
- calling the function: `(*comp)(1, 3)`
- assigning a function: `int (*fn)(void) = lemonade;` stating that our pointer `fn` is a function pointer that takes no arguments and returns an int. That function is `lemonade`.
 