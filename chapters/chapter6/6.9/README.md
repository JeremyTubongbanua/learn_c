# 6.9 Bit-fields

- When storage is at a premium, it may be necessary to pack several objects into a single machine word; one common use is a set of single-bit flags in applications like compiler symbol tables.

```c
// must be powers of 2 cause of bit shifting
#define KEYWORD 01
#define EXTERNAL 02
#define STATIC 04

flags |= EXTERNAL | STATIC; // turns on the `EXTERNAL` and `STATIC` bits in flags
flags &= EXTERNAL | STATIC; //turns off

if((flags & (EXTERNAL | STATIC)) == 0) // is true if both bits are off
```

- Bit-field and field are synonymous:

```c
struct {
    unsigned int is_keyword : 1;
    unsigned int is_extern : 1;
    unsigned int is_static : 1;
} flags;
``` 

- defines a variable called `flags` that contains three 1-bit fields. 
- the number following the colon describes the field width in bits. The fields are declared unsigned int to ensure that they are unisgned quantities.