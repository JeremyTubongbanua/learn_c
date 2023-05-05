# 1.5.1 File Copying

- `EOF` - end of line indicator

1st edition

```c
int c;

c = getchar();
while(c != EOF) {
    putchar(c);
    c = getchar();
}
```

2nd edition
```c
int c;

while((c = getchar()) != EOF) {
    putchar(c);
}
```

