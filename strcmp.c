#include<stdio.h>

void strcpy(char *s, char *t);
int main()
{
    char s[] ="abcde";
    char t[] ="abcda";
    printf("%d",strcmp(s,t));
}

int strcmp(char *s,char *t)
{
    for(;*s==*t;s++,t++)
        if(*s=='\0')
        return 0;
    return *s-*t;
}
