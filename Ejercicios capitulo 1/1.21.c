#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int maxline);

int main()
{
    int len,i,y,b=0,contsp=0,cont;
    char line[MAXLINE];
    while ((len = get_line(line, MAXLINE)) > 0)
    {
        for(i=0;i<len;i++){
            if (line[i] == ' ')
                b=i;
            else if(line[i] !=' ' && contsp>0)
            {
                for(y=0;y<len;y=y+8)
                {
                    if(i==y)
                    {
                        line[b]='\t';
                    }
                }
            }
        }
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


