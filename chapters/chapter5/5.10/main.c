
#include <stdio.h>

// int main(int argc, char *argv[])
// {
//     int i = 1;
//     while(i < argc)
//     {
//         printf("%s ", argv[i++]);
//     }
//     printf("\n");
//     return 0;
// }

int main(int argc, char *argv[])
{
    while(--argc > 0)
    {
        printf("%s ", *++argv);
    }
    printf("\n");
    return 0;
}