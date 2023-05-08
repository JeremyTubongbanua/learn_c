# 6.2 Structures and Functions

- only legal operations on a structure are copying it or assigning to it as a unit, taking its address with &, and accessing its members.
- Copy and assignments include passing arguments to functions and returning values from functions.
- Structures may not be compared.
- Structures may be initialized by an assignment
- You can have pointers to structs `struct point *pp`.
- To access `x`, you have to do `(*pp).x` because `.` has a higher precedence than `*`.
- Similarly, you can do `pp->x`, given that `pp` is a pointer to a structure.