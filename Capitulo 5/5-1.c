#include <stdio.h>

#define SIZE 10
#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;
int getint(int *);

int main()
{
    int n, array[SIZE], b;

    for (n = 0; n < SIZE && (b = getint(&array[n])) != EOF; n++) {
        if (b)
            printf("%d\n", array[n]);
    }

    return 0;
}
int getint(int *pn)
{
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
    for (*pn = 0; isdigit(c); c = getch())
        *pn = 10 * *pn + (c - '0');
    *pn *= sign;
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
