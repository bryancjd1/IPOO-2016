#include <stdio.h>
#include <limits.h>

#define MAXLINE 1000

void itoa(int n, char s[], int w);
void reverse(char s[]);

int main(void)
{
    char s[MAXLINE];
    int width;

    itoa(-100,s,10);
    printf("%s",s);

    return 0;
}

void itoa(int n, char s[], int w)
{
    int i, a, b=0;
    if((a=n)<0)
        n=-n;
    i=0;
    do{
        s[i++]=n%10+'0';
    } while((n/=10));
    if(a<0)
        s[i++] = '-';
    b=i;
    for(b;b<w;b++)
        s[i++] = ' ';
    s[i]='\0';
    reverse(s);
}

void reverse(char s[])
{
    int c, i, j;
    int tmp;

    for (i = 0, j= strlen(s)-1; i<j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
