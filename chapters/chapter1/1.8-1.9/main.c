#include <stdio.h>

int get_line(char s[], int lim);
void copy(char to[], char from[]);

int main() {
    char s[100];
    get_line(s, 100);
    for(int i = 0; i < 10; ++i) {
        printf("%d ", s[i]);
    }
    return 0;
}

/* read a line into s and return length */
int get_line(char s[], int lim) {
    char c;
    int l;
    for(int i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
        ++l;
    }
    return l;
}

/* copy contents from `from` and put it into `to`, assume `to` has enough space */
void copy(char to[], char from[]) {
    int i = 0;

    while((to[i] = from[i]) != '\0')
        ++i;
}