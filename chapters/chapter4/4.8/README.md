# 4.8 Block Structure

- C is not block-structured (because you can't have functions inside of functions).
- However, variables can be defined in a block-structured format.

```c
int x;
int y;

f(double x)
{
    double y;
    // x refers to the parameter
    // y refers to the automatic variable nearest above this comment
}
```
