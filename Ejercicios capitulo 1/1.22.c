#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int maxline);
void fold(char s[], int len);
int main()
{
    int len,i,b=0,cont=0;
    char line[MAXLINE];
    while ((len = get_line(line, MAXLINE)) > 0)
    {
        fold(line,len);
        printf("%s\n", line);
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
void fold(char s[], int len)
{
    int i;
    int cont = 0;
    for(i=0;i<len;i++)
        {
            cont++;
            if(cont==10)
            {
                 s[i]='\n';
                 cont=0;
            }
        }
}
