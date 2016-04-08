#include<stdio.h>
int htoi(char s[], int len);
int main(){
    int c, i;
    char s[1000];
    for (i = 0; i<1000 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
    }
    printf("%d",htoi(s,i));
    return 0;

}
int htoi(char s[], int len)
{
    int b=0;
    int a=0,y;
    for(y=0; y<len;y++)
    {
        a=s[y];
        b=b*16 ;
        if(a>='0' && a<='9')
            b=b + a - '0';
        else if(a>='a' && a<='f')
            b=b + 10 + a - 'a';
        else if(a>='A' && a<='F')
            b=b + 10 + a - 'A';
    }
    return b;
}


