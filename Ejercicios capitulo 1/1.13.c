#include<stdio.h>

main(){
    int c, a[100];
    int y,i=0,cont=0,b;
    for(b=0;b<100;b++)
    {
        a[b]=0;
    }
    while((c=getchar()) !=EOF)
    {
        cont++;
        if(c==' ' || c=='\n' || c=='\t')
        {
            a[i]=cont;
            i++;
            cont=0;
        }
    }
    for(y=0; y<=i;y++)
    {
        while(a[y]>1)
        {
            printf("+");
            a[y]--;
        }
        printf("\n");
    }
}
