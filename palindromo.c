#include<stdio.h>

void strcpy(char *s, char *t);
int strcmp(char *s,char *t);
int main()
{
    char s[] ="asdsa";
    char t[5];
    strcpy(t,s);
    printf("%d",strcmp(s,t));
}
int strcmp(char *s,char *t)
{
    while(*t++!='\0')
        ;
    for(;*s==*t;s++,t--)
        if(*s=='\0')
        return 1;
    return 0;
}


void strcpy(char *s, char *t)
{
    while(*s++=*t++)
        ;
}

