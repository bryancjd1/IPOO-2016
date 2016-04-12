#include <stdio.h>

#define swap(t,x,y) {t a; a=x;x=y;y=a;}

int main()
{
    int b = 1, c = 2;
    swap(int, b, c)
    printf("%d, %d",b, c);

    return 0;
}

