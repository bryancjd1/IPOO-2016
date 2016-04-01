#include <stdio.h>
int main(){
    int c;
    while ((c=getchar())!=EOF){
        if (c=='\t')
            putchar(92), putchar('t');
        else if (c=='\b')
            putchar(92), putchar('b');
        else if (c==92)
            putchar(92), putchar(92);
        else
            putchar(c);

    }
    return 0;
}
