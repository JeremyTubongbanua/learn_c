# 5.1 Pointers and Addresses

- Unary operator `&` gives the address of an object.

```c
p = &c // means the address of c will be stored in p.
```

- Unary operator `*` is called the "indirection" or "dereferencing" operator.

```c
int *ip = &x // ip points to the address of variable x while *ip is the value of x.
*ip = 3; // we are saying that the address (x) should now point to the value 3. Now x is 3.
ip = &y; // now ip is pointing to a differnet address (the address of y). *ip is now the value of y. 
```

```c
(*ip)++ // parantheses are required
*ip++ // will increment the pointer, as opposed to the value that the pointer address points to.
```