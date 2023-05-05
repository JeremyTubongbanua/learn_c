# Chapter 3 - Control Flow

## 3.1 Statements and Blocks
- `;` statement terminator
- `{` `}` are used to group **declarations** and **statements** together.

## 3.2 If-else

- `expression` is evaluated within the `if()` parantheses.

## 3.3 else-if

```c
if (expression)
    statement
else if (expression)
    statement
```

## 3.4 Switch

- cases must be `constant expressions`
- `default` is optional

```c
switch(expression)
{
    case const-expr: statements
    case const-expr: statements
    default: statements 
}
```

- `break;` exits the switch asap
- `break;` can also be used in loops to exit early

```c
switch(expression)
{
    case 0: case 1: case 2: case 3:
        ++n;
        // not putting break here will cause it to enter the 2nd case regardless if the expression meets any of the const-expr's
    case 4: case 5: case 6: case 7:
        ++n;
        break;
    default: // logically unnecessary
        break;
}
```

- all `const-expr`'s should be distinct

## 3.5 Loops - While and For

```c
while(expression) // expression is true if non-zero
```

```c
// equivalent

for(expr1; expr2; expr3)
{
    statement
}

expr1;
while(expr2)
{
    statement
    expr3;
}
```

- the 3 parts of a for loop are just expressions.
- expr1 and expr3 are assignments or function calls and expr2 is a relational expression. if expr2 is non-existent, it is permanently true
```c
// the following is valid C
// expr1 and expr3 are blank, therefore, no assignments
// expr2 is constantly true
for(;;)
{

}
```

- `,` - c operator 
```c
for(int i = j = 0; i <= j; i++, j--)
{
    
}
```

## 3.6 Do-while

```c
do
    statement
while(expr)
```

- statement is run at least once.

## 3.7 Break and Continue

- `break` causes the innermost enclosing loop or switch to be exited immediately
- `continue` is related to `break` but less often used. it causes the next iteration to begin.

## 3.8 Goto and Labels

- `goto` statements should be used rarely, if at all.
- maybe a variable is more sufficient?

```c
for (...)
{
    for (...)
    {
        if (disaster)
            goto error;
    }
}

error:
    /* statement */
```