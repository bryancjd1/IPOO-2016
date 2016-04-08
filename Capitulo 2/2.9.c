#include <stdio.h>

int bitcount(unsigned x);

int main()
{
    printf("%d\n", bitcount(010101));
    return 0;
}

int bitcount(unsigned x)
{
    int a;

    for(a=0; x!=0; x &= (x-1))
    {
        a++;
    }
    return a;
}

