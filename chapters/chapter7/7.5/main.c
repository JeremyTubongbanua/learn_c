#include <stdio.h>

int main()
{   
    // char c;
    // while((c = getc(stdin)) != EOF)
    // {
    //     printf("%c", c);
    // }
    // printf("\n");

    FILE *fp;
    fp = fopen("lemon.txt", "w");
    fprintf(fp, "%s", "Lemonade eats poop\n");
    fclose(fp);
    return 0;
}
