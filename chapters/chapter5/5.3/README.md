# 5.3 Pointers and Arrays

- Pointer version of arrays are in general, faster.

```c
int a[10];
int *p = &a[0]; // pointer p points to the address of the first element of the array, a
*p = 3; // a[0] now holds the value 3.
*(p+1) = 4 // a[1] now holds the value 4.
// in general, *(p+i) will access the i-th element, given that p points to the address of the first element of the array.
```

- Since the array itself is synonymously the first element of the array, the second line can synonymously be written as:

```c
int *p = a;
```

- This is called pointer-offset and array-index
- Since p is a variable, expressions like `p++` and `p=a` are legal.
- Array names (e.g. `a`) are not variables. Expressions like `a++` and `a=p` are illegal.

- You can pass arrays into function parameters that are pointers

```c
f(char *s)
{
    for(int i = 0; *s != '\0'; s++) // s++ moves the address over. s = s + 1
    {
        printf("%c", *s);
    }
}

char msg[] = "hello world\n";
f(msg);
```