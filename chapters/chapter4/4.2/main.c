#include <stdio.h>
#include <ctype.h>

double atof(char s[]);

int main()
{
    char msg[] = "3";
    double ans = atof(msg);
    printf("ans: %5.2f\n", ans);
    return 0;
}

double atof(char s[])
{
    double val, power;
    int i, sign;

    for(i = 0; isspace(s[i]); i++) // skip white space
        ;

    sign = (s[i] == '-') ? -1 : 1;

    if(s[i] == '+' || s[i] == '-')
    {
        i++;
    }

    for(val = 0.0; isdigit(s[i]); i++)
    {
        val = 10.0 * val + (s[i] - '0');
    }

    if(s[i] == '.')
    {
        i++;
    }

    for(power = 1.0; isdigit(s[i]); i++)
    {
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }

    return sign * val / power;
}