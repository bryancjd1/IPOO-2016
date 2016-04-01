#include<stdio.h>

main(){
    int c, a=0;
    while((c=getchar()) !=EOF)
    {
        if(c== ' ')
        {
            a++;
            if(a==1)
                putchar(c);
        }
        else{
            a=0;
            putchar(c);
        }
    }

}
