

#include <stdio.h>

char *month_name(int n);

int main()
{
    char *month = month_name(3); // March
    printf("month: %s\n", month);
    return 0;
}

char *month_name(int n)
{
    static char *months[] = {
        "Illegal month",
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"};

    return (n >= 1 && n <= 12) ? months[n] : months[0];
}
