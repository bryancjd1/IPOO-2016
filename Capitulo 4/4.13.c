#include <stdio.h>

#define MAXLINE 1000

int get_line(char s[], int lim);
void reverse(char s[],int a, int b);

int main()
{
    char s[MAXLINE];
    get_line(s, MAXLINE);
    reverse(s,0,strlen(s)-1);
    printf("%s",s);
    return 0;
}

int get_line(char s[], int lim)
{
    int c, i;

    for (i = 0; i<lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    return i;
}

void reverse(char s[], int i, int j)
{
    int tmp;

    tmp = s[i];
    s[i] = s[j];
    s[j] = tmp;

    if (i < j)
        reverse(s, ++i, --j);
}
