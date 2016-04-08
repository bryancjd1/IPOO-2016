#include <stdio.h>


int lower(int x);

int main()
{
    char s[] = "ABC";
    int i;
    for(i=0;s[i]!='\0';i++)
        printf("%c", lower(s[i]));

    return 0;
}
int lower(int x)
{
    x = (x>='A' && x<='a') ? x + 'a' - 'A' : x;
}

