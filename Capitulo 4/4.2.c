#include <stdio.h>
#include <ctype.h>

#define MAXLINE 1000

int get_line(char s[], int lim);
double atof(char s[]);

int main()
{
    char s[MAXLINE];
    get_line(s, MAXLINE);
    printf("%.6f\n", atof(s));
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


double atof(char s[])
{
    double val, power, b, c=1;
    int i, sign, a;

    for (i = 0; isspace(s[i]); i++)
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (val = 0.0; isdigit(s[i]); i++)
        val = 10.0 * val + (s[i] - '0');
    if (s[i] == '.')
        i++;
    for (power = 1.0; isdigit(s[i]); i++) {
        val = 10.0 * val + (s[i] - '0');
        power *= 10;
    }
    if(s[i]=='e')
    {
        if(s[i+1]=='+')
            b=10.0;
        else
            b=0.1;
        for(a=0;isdigit(s[i+2]);i++)
            a=10*a+(s[i+2]-'0');
        while(a>0)
        {
            c*=b;
            a--;
        }
    }
    return sign*val/power*c;
}
