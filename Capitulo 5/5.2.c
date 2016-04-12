#include <stdio.h>
#define SIZE 10
#define BUFSIZE 100
char buf[BUFSIZE];
int bufp = 0;
int getfloat(double *);

int main()
{
    int n;
    double array[SIZE], b;

    for (n = 0; n < SIZE && (b = getfloat(&array[n])) != EOF; n++) {
        if (b)
            printf("%g\n", array[n]);
    }
    return 0;
}

int getfloat(double *pn)
{
    double a;
    int c, sign;

    while (isspace(c = getch()))
        ;
    if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
        ungetch(c);
        return 0;
    }
    sign = (c == '-') ? -1 : 1;
    if (c == '+' || c == '-')
        c = getch();
    if (!isdigit(c)) {
        ungetch(c);
        return 0;
    }
    for (*pn = 0.0; isdigit(c); c = getch())
        *pn = 10.0 * *pn + (c - '0');
    if (c == '.')
        c = getch();
    for (a = 1.0; isdigit(c); c = getch()) {
        *pn = 10.0 * *pn + (c - '0');
        a *= 10.0;
    }
    *pn *= sign / a;
    if (c != EOF)
        ungetch(c);
    return c;
}
int getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
    if (bufp >= BUFSIZE)
        printf("muchos caracteres");
    else
        buf[bufp++] = c;
}
