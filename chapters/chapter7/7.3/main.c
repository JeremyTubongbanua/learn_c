#include <stdio.h>
#include <stdarg.h>

/* minimal printf with variable argument list */
void minprintf(char *fmt, ...)
{
    va_list ap; /* points to each unnamed arg in turn */
    char *p, *sval;
    int ival;
    double dval;

    va_start(ap, fmt); /* make `ap` point to 1st unnamed arg */
    for (p = fmt; *p; p++)
    {
        if (*p != '%')
        {
            putchar(*p);
            continue;
        }
        switch (*++p)
        {
        case 'd':
        {

            ival = va_arg(ap, int);
            printf("%d", ival);
            break;
        }
        case 'f':
        {
            dval = va_arg(ap, double);
            printf("%f", dval);
            break;
        }
        case 's':
        {
            for (sval = va_arg(ap, char *); *sval; sval++)
            {
                putchar(*sval);
            }
            break;
        }
        default:
            putchar(*p);
            break;
        }
        va_end(ap); /* clean up when done */
    }
}

void test(char *s, ...)
{
    int c = 0;
    for(char *p = s; ; p++)
    {
        printf("%c", *p);
        if(*p == '\0')
        {
            c++;
        }
    }
}

int main()
{
    // minprintf("%d %d\n", 3, 4);
    test("Lemonade", "poop");
    return 0;
}
