#include <stdio.h>

int main()
{
    int c,a[123],b;
    for(b=0;b<123;b++)
    {
        a[b]=0;
    }
    while((c=getchar())!=EOF)
        a[c]=1+a[c];

    for(b=0;b<123;b++)
    {
        if(a[b]>0)
        {
            printf("%1d : %1d\n",b,a[b]);
        }
    }
}
