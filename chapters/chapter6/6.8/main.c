#include <stdio.h>

union u_tag {
    int ival;
    float fval;
    char *sval;
} u;

typedef struct u_tag_container
{
    int utype;
    union u_tag u;
} UContainer, XContainer;

union message {
    char c;
    char *s;
};

int main()
{
    XContainer x;
    UContainer u;
    return 0;
}
