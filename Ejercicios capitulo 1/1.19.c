#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int maxline);
void reverse(char s[]);


int main()
{
    int len;
    char line[MAXLINE];

    while ((get_line(line, MAXLINE)) > 0)
    {
        reverse(line);
        printf("%s",line);
    }

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

void reverse(char s[])
{
    int a,b,y;
    b=0;
    while(s[b]!='\0')
    {
        b++;
    }
    --b;
    for(y=0;y<b;++y)
    {
        a=s[y];
        s[y]=s[b];
        s[b]=a;
        --b;
    }
}
