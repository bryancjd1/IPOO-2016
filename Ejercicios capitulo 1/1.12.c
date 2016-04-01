#include<stdio.h>

main(){
    int c, a=0;
    while((c=getchar()) !=EOF)
    {
        if(c==' ' || c=='\n' || c=='\t')
        {
            a++;
            if(a==1)
            {
            putchar('\n');
            }
        }
        else
        {
            putchar(c);
            a=0;
        }
    }
}
