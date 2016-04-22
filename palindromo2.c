#include<stdio.h>

void strcpy(char *s, char *t);
int palindromo(char *s,char *t);
int main()
{
    char s[] ={"abcdcba"};
    char t[8];
    strcpy(t,s);
    printf("%d",palindromo(s,t));
}
int palindromo(char *s,char *t)
{
    int i=0;
    while(*t++!='\0')
        i++;
    i--;
    for(;*s==*(t+i);s++,i--)
    {
        if(*s=='\0')
            return 1;
    }
    return 0;
}


void strcpy(char *s, char *t)
{
    while(*s++=*t++)
        ;
}
