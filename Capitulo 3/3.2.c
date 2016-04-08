#include <stdio.h>

#define MAXLINE 1000

int getchars(char line[], int maxline);
void escape(char s[], char t[]);
void escape2(char s[], char t[]);

int main(void)
{
    char t[MAXLINE];
    char s[MAXLINE];

    while(get_line(s, MAXLINE) ==0);


    escape(s, t);
    printf("%s\n\n", t);
    escape2(s,t);
    printf("%s\n", s);

    return 0;
}

int get_line(char s[], int lim)
{
    int c, i;

    for (i = 0; i<lim-1 && (c = getchar()) != EOF ; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    return i;
}

void escape(char s[], char t[])
{
    int i, y=0;
    for(i=0;s[i]!='\0';i++)
    {
        switch(s[i])
        {
        case '\n':
            t[y++]= '\\';
            t[y++]= 'n';
            break;
        case '\t':
            t[y++]= '\\';
            t[y++]= 't';
            break;
        default:
            t[y++]=s[i];
            break;
         }
    }
    t[y]='\0';
}

void escape2(char s[], char t[])
{
    int i, y=0;
    for(i=0;t[i]!='\0';i++)
    {
        if(t[i]=='\\')
        {
            switch(t[++i])
            {
                case 'n':
                    s[y++]='\n';
                    break;
                case 't':
                    s[y++]='\t';
                    break;
            }
        }
        else
            s[y++]=t[i];

    }
    s[y]='\0';
}
