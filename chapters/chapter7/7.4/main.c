
#include <stdio.h>

int main()
{

    // char *msg = "25 Dec 1998";
    // int day, year;
    // char monthname[20];

    // sscanf(msg, "%d %s %d", &day, monthname, &year); /* first arg is the string to scan, second is the format, third+ are the addresses to store the values */
    // printf("day: %d\nmonthname: %s\nyear: %d\n", day, monthname, year);

    // char *atkey = "@wildgreen:test.namespace@jeremy";

    char sharedwith[20], sharedby[20], key[20], namespace[20];
    scanf("@%s:%s.%s@%s", sharedwith, key, namespace, sharedby);

    printf("sharedwith: %s\nkey: %s\nnamespace: %s\nsharedby: %s\n", sharedwith, key, namespace, sharedby);

    // char sharedwith[20];
    // scanf("%s", sharedwith);
    // printf("%s\n", sharedwith);
    return 0;    
}
