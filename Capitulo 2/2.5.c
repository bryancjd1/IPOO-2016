#include<stdio.h>
#define max 1000
int any(char s[], char t[]);
int main(){
    int len;
    char s[max];
    char t[max];
    len= get_line(s,max);
    len= get_line(t,max);
    printf("%d",any(s,t));
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

int any(char s[], char t[])
{
    int i,y;
    for(i=0;t[i]!='\0';i++)
    {
        for(y=0;s[y]!='\0';y++)
        {
            if(t[i]==s[y])
                return y;
        }
    }
    return -1;
}
