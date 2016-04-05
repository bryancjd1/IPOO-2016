#include<stdio.h>
#include<limits.h>
int main()
{
    int i, c;
    int lim=100;
    char s[lim];
    for(i=0;i<lim-1; i++)
    {
         if((c=getchar())!='\n')
         {
              if (c!=EOF)
                  s[i]=c;
              else
                  break;
         }
         else
             break;
    }
    return 0;
}    
