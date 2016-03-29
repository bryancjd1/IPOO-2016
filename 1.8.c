#include<stdio.h>

main(){
    int c, nl, sp,tab;
    nl=-1;
    sp=0;
    tab=0;
    while((c=getchar()) !=EOF)
    {
        if(c== '\n')
            ++nl;
        if(c== ' ')
            ++sp;
        if(c== '\t')
            ++tab;
    }
    printf("Saltos de linea: %d\n",nl);
    printf("Numero de Espacios: %d\n",sp);
    printf("Numero de tabulaciones: %d\n",tab);
}
