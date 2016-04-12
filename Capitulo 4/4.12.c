#include <stdio.h>

#define MAXLINE 1000

void itoa(int n, char s[]);

int main()
{
    char s[MAXLINE];

    itoa(-431221,s);
    printf("%s",s);

    return 0;
}

void itoa(int n, char s[])
{
    static int i;
    if(n<0)
        n=-n;
    if(n/10)
        itoa(n/10,s);
    if(n/10==0)
    {
        i=0;
        s[i++]='-';
    }
    s[i++]=n%10+'0';
    s[i]='\0';
}
