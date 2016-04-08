#include<stdio.h>
#define MAXLINE 1000
int get_line(char s[],int lim);
int expand(char s[], char s2[]);
int main(){
    int i;
    char s[MAXLINE];
    char s2[MAXLINE];
    while(get_line(s, MAXLINE) ==0);
    expand(s,s2);
    printf("%s",s2);
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

int expand(char s[], char s2[])
{
    int i,y=0,a=0,z;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i+1]=='-'&& s[i+2]!='\0')
        {
            if('a'<=s[i]&&s[i]<='z')
            {
                if(s[i]<=s[i+2]&&s[i+2]<='z')
                {
                    z=0;
                    a=s[i+2]-s[i];
                    while(a>=z)
                    {
                        s2[y++]=s[i]+ z;
                        z++;
                    }
                    i=i+2;
                }
            }
            else if('A'<=s[i]&&s[i]<='Z')
            {
                if(s[i]<=s[i+2]&&s[i+2]<='Z')
                {
                    z=0;
                    a=s[i+2]-s[i];
                    while(a>=z)
                    {
                        s2[y++]=s[i]+ z;
                        z++;
                    }
                    i=i+2;
                }
            }
            else if('0'<=s[i]&&s[i]<='9')
            {
                if(s[i]<=s[i+2]&&s[i+2]<='9')
                {
                    z=0;
                    a=s[i+2]-s[i];
                    while(a>=z)
                    {
                        s2[y++]=s[i]+ z;
                        z++;
                    }
                    i=i+2;
                }
            }
        }
        else
            s2[y++]=s[i];
    }
    s2[y]='\0';
}

